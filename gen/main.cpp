#include <cassert>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string_view>

constexpr auto INDICES = {'c', 'g', 'i', 'o', 's', 'u'};

int main(int argc, const char* argv[]) {
    std::string gperf_options;

    for (int i = 1; i < argc; ++i) {
        gperf_options += std::string {argv[i]} + " ";
    }

    for (auto index : INDICES) {
        std::ofstream gperf_file {std::string("./gperf/input/") + index + ".gperf"};

        const char upper_index = static_cast<char>(std::toupper(index));

        gperf_file << "struct Pattern { const char* name; int rank; };\n%%\n";

        std::ifstream text_file {std::string("./table/") + index};
        gperf_file << text_file.rdbuf() << "%%";

        text_file.close();
        gperf_file.close();

        const auto command = "gperf " + gperf_options +
            "--compare-strncmp" // Do not remove! This makes the gperf not need the null terminator after strings. 
            " --includes --readonly-tables --seven-bit --multiple-iterations=2" 
            " --struct-type --language=C++ --omit-struct-type"
            " --class-name=Hashmap" + upper_index +
            " --constants-prefix=HASHMAP_" + upper_index + "_ "
            "./gperf/input/" + index +
            ".gperf > ./gperf/output/" + index + ".hpp";

        std::system(command.c_str());
    }
}
