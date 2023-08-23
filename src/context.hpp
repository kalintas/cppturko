#ifndef CPPTURKO_CONTEXT_HPP
#define CPPTURKO_CONTEXT_HPP

#include <iostream>
#include <string>
#include <string_view>

#include "utility.hpp"

namespace cppturko {

    // Increase CONTEXT_SIZE for more accuracy in exchange for performance.
    template<std::size_t CONTEXT_SIZE>
    class Context {
      public:
        static constexpr std::size_t PATTERN_LENGTH = CONTEXT_SIZE * 2 + 1;

        constexpr Context() : end(0), pattern("") {
            for (std::size_t i = 0; i < PATTERN_LENGTH; ++i) {
                this->pattern[i] = ' ';
            }

            this->pattern[CONTEXT_SIZE] = 'X';
            this->pattern[PATTERN_LENGTH] = '\0';
        }

        [[nodiscard]] static constexpr Context get_context(const std::wstring_view turkish, const std::size_t current) {
            Context context;
            std::size_t index = CONTEXT_SIZE + 1;

            // Construct right side of the X with the given string.
            for (std::size_t i = current + 1; i < turkish.length() && index < PATTERN_LENGTH; ++i) {
                // Get the downcase ascii because we are in right side of the X.
                const char c = static_cast<char>(turkish_downcase_asciify(turkish[i]));

                if (c == 0) {
                    // Stop creating the pattern in case of invalid character(spaces, numbers, non turkish unicode chars, ...).
                    index += 1;
                    break;
                } else {
                    context.pattern[index] = c;
                    index += 1;
                }
            }

            context.end = index - 1;
            index = CONTEXT_SIZE;

            bool is_space = false;

            for (std::size_t i = current; i > 0 && index > 0; --i) {
                // Get the upcase ascii because we are in right side of the X.
                const char c = static_cast<char>(turkish_upcase_asciify(turkish[i - 1]));

                if (c == 0) {
                    if (!is_space) {
                        index -= 1;
                        is_space = true;
                    }
                } else {
                    context.pattern[index - 1] = c;
                    index -= 1;
                    is_space = false;
                }
            }

            return context;
        }

        [[nodiscard]] std::string_view get_pattern() const {
            return {this->pattern, this->end + 1};
        }

      private:
        std::size_t end;

        char pattern[PATTERN_LENGTH + 1];
    };

}  // namespace cppturko

#endif