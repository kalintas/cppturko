
#ifndef CPPTURKO_HASHMAPS_HPP
#define CPPTURKO_HASHMAPS_HPP

#include <cstddef>
#include <utility>

namespace cppturko {

    struct Pattern {
        const char* name;
        const int rank;
    };

    using PatternFunc = const Pattern* (*)(const char* str, std::size_t length);

    [[nodiscard]] std::pair<PatternFunc, int> get_hashmap(const char index);

}  // namespace cppturko

#endif