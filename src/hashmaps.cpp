#include "hashmaps.hpp"

#include <cstdlib>  // std::abort

using cppturko::Pattern;  // Use this struct in gperf generated sources.

#include "../gperf/output/c.hpp"
#include "../gperf/output/g.hpp"
#include "../gperf/output/i.hpp"
#include "../gperf/output/o.hpp"
#include "../gperf/output/s.hpp"
#include "../gperf/output/u.hpp"

namespace cppturko {

    [[nodiscard]] std::pair<PatternFunc, int> get_hashmap(const char index) {
        switch (index) {
            case 'c':
                return {HashmapC::in_word_set, 2 * HASHMAP_C_TOTAL_KEYWORDS};
            case 'g':
                return {HashmapG::in_word_set, 2 * HASHMAP_G_TOTAL_KEYWORDS};
            case 'i':
                return {HashmapI::in_word_set, 2 * HASHMAP_I_TOTAL_KEYWORDS};
            case 'o':
                return {HashmapO::in_word_set, 2 * HASHMAP_O_TOTAL_KEYWORDS};
            case 's':
                return {HashmapS::in_word_set, 2 * HASHMAP_S_TOTAL_KEYWORDS};
            case 'u':
                return {HashmapU::in_word_set, 2 * HASHMAP_U_TOTAL_KEYWORDS};
            default:
                std::abort();  // Unreachable code.
        }
    }
}  // namespace cppturko