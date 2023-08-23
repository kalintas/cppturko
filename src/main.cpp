#include <algorithm>
#include <chrono>
#include <codecvt>
#include <fstream>
#include <iostream>
#include <sstream>

#include "lib.hpp"

using std::chrono::steady_clock;

int main() {
    // Read the text file.
    std::wifstream text_file {"./text/large.txt", std::ios::binary};
    text_file.imbue(std::locale(std::locale {}, new std::codecvt_utf8<wchar_t>()));

    std::wstringstream stream;
    stream << text_file.rdbuf();

    text_file.close();

    // Create the string.
    const auto turkish = stream.str();

    std::wstring text;
    text.resize(turkish.length());

    // Asciify the text.
    std::transform(turkish.begin(), turkish.end(), text.begin(), cppturko::asciify);

    // Deasciify the text.
    steady_clock::time_point begin = steady_clock::now();

    const auto result = cppturko::correct_multithreaded(std::move(text), 12);  // Multithread
    // const auto result = cppturko::correct(std::move(text)); // Single thread

    steady_clock::time_point end = steady_clock::now();

    const auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);

    std::size_t original_turkish_char_count = 0;
    std::size_t true_corrected_count = 0;
    std::size_t false_corrected_count = 0;

    for (std::size_t i = 0; i < turkish.length(); ++i) {
        const auto original = turkish[i];
        const auto corrected = result[i];

        if (cppturko::is_turkish_char(original)) {
            original_turkish_char_count += 1;

            if (original == corrected) {
                true_corrected_count += 1;
            }
        } else {
            if (original != corrected) {
                false_corrected_count += 1;
            }
        }
    }

    // Print the result.
    const double accuracy = 100.0 * (static_cast<double>(true_corrected_count) / static_cast<double>(original_turkish_char_count));
    const double correcting_error =
        100.0 * (static_cast<double>(false_corrected_count) / static_cast<double>(true_corrected_count + false_corrected_count));

    std::wcout << "elapsed: " << (double)elapsed.count() * 0.000001 << " second\n";
    std::wcout << "original: " << original_turkish_char_count << ", true: " << true_corrected_count << ", false: " << false_corrected_count
               << '\n';
    std::wcout << "accuracy: " << accuracy << ", correcting error: " << correcting_error << '\n';
}
