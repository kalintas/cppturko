
#ifndef CPPTURKO_LIB_HPP
#define CPPTURKO_LIB_HPP

#include <algorithm>
#include <cmath>
#include <codecvt>
#include <cstring>
#include <iostream>
#include <limits>
#include <locale>
#include <thread>
#include <vector>

#include "context.hpp"
#include "hashmaps.hpp"

namespace cppturko {

    template<std::size_t CONTEXT_SIZE>
    [[nodiscard]] inline bool needs_correction(const Context<CONTEXT_SIZE> context, const char current) {
        auto [pattern_func, rank] = get_hashmap(current);

        const auto pattern = context.get_pattern();

        // Try all possible combinations with the string.
        for (std::size_t end = CONTEXT_SIZE; end < pattern.length(); ++end) {
            for (std::size_t start = 0; start <= CONTEXT_SIZE; ++start) {
                const std::string_view view {pattern.data() + start, end - start + 1};

                const auto item = pattern_func(view.data(), view.length());

                if (item && std::abs(item->rank) < std::abs(rank)) {
                    rank = item->rank;
                }
            }
        }

        return rank > 0;
    }

    template<std::size_t CONTEXT_SIZE>
    inline void correct_string(wchar_t* turkish, const std::size_t length) {
        const std::wstring_view view {turkish, length};

        for (std::size_t i = 0; i < length; ++i) {
            const auto c = turkish[i];

            if (!is_index(c)) {
                continue;
            }

            auto context = Context<CONTEXT_SIZE>::get_context(view, i);

            if (needs_correction(std::move(context), static_cast<char>(asciify(c)))) {
                turkish[i] = toggle_accent(c);
            }
        }
    }

    template<std::size_t CONTEXT_SIZE = 4>
    [[nodiscard]] inline std::wstring correct(std::wstring turkish) {
        correct_string<CONTEXT_SIZE>(turkish.data(), turkish.length());

        return turkish;
    }

    template<std::size_t CONTEXT_SIZE = 4>
    [[nodiscard]] inline std::wstring correct_multithreaded(std::wstring turkish, const std::size_t thread_count) {
        std::vector<std::thread> thread_pool;
        thread_pool.reserve(thread_count);

        const auto chunk_size = turkish.length() / thread_count;
        const auto pointer = turkish.data();

        for (std::size_t i = 0; i < thread_count; ++i) {
            thread_pool.emplace_back([=]() { correct_string<CONTEXT_SIZE>(pointer + chunk_size * i, chunk_size); });
        }

        for (std::size_t i = 0; i < thread_count; ++i) {
            thread_pool[i].join();
        }

        return turkish;
    }

}  // namespace cppturko

#endif