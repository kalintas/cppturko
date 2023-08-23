#ifndef CPPTURKO_UTILITY_HPP
#define CPPTURKO_UTILITY_HPP

#include <cwctype>

namespace cppturko {

    [[nodiscard]] constexpr inline wchar_t asciify(const wchar_t c) {
        switch (c) {
            case L'ç':
                return L'c';
            case L'Ç':
                return L'C';
            case L'ğ':
                return L'g';
            case L'Ğ':
                return L'G';
            case L'ö':
                return L'o';
            case L'Ö':
                return L'O';
            case L'ü':
                return L'u';
            case L'Ü':
                return L'U';
            case L'ı':
                return L'i';
            case L'İ':
                return L'I';
            case L'ş':
                return L's';
            case L'Ş':
                return L'S';
            default:
                return c;
        }
    }

    [[nodiscard]] constexpr inline bool is_index(const wchar_t c) {
        switch (c) {
            case L'c':
            case L'C':
            case L'g':
            case L'G':
            case L'i':
            case L'I':
            case L'o':
            case L'O':
            case L's':
            case L'S':
            case L'u':
            case L'U':
                return true;
            default:
                return false;
        }
    }

    [[nodiscard]] constexpr inline bool is_turkish_char(const wchar_t c) {
        switch (c) {
            case L'ç':
            case L'Ç':
            case L'ğ':
            case L'Ğ':
            case L'ö':
            case L'Ö':
            case L'ü':
            case L'Ü':
            case L'ı':
            case L'İ':
            case L'ş':
            case L'Ş':
                return true;
            default:
                return false;
        }
    }

    [[nodiscard]] constexpr inline wchar_t toggle_accent(const wchar_t c) {
        switch (c) {
            case L'c':
                return L'ç';
            case L'C':
                return L'Ç';
            case L'g':
                return L'ğ';
            case L'G':
                return L'Ğ';
            case L'o':
                return L'ö';
            case L'O':
                return L'Ö';
            case L'u':
                return L'ü';
            case L'U':
                return L'Ü';
            case L'i':
                return L'ı';
            case L'I':
                return L'İ';
            case L's':
                return L'ş';
            case L'S':
                return L'Ş';
            case L'ç':
                return L'c';
            case L'Ç':
                return L'C';
            case L'ğ':
                return L'g';
            case L'Ğ':
                return L'G';
            case L'ö':
                return L'o';
            case L'Ö':
                return L'O';
            case L'ü':
                return L'u';
            case L'Ü':
                return L'U';
            case L'ı':
                return L'i';
            case L'İ':
                return L'I';
            case L'ş':
                return L's';
            case L'Ş':
                return L'S';
            default:
                return c;
        }
    }

    [[nodiscard]] constexpr wchar_t turkish_downcase_asciify(const wchar_t c) {
        switch (c) {
            case L'ç':
            case L'Ç':
                return L'c';
            case L'ğ':
            case L'Ğ':
                return L'g';
            case L'ö':
            case L'Ö':
                return L'o';
            case L'ı':
            case L'İ':
                return L'i';
            case L'ş':
            case L'Ş':
                return L's';
            case L'ü':
            case L'Ü':
                return L'u';
            default:
                if (std::iswalpha(c)) {
                    return std::towlower(c);
                } else {
                    return L'\0';
                }
        }
    }

    [[nodiscard]] constexpr wchar_t turkish_upcase_asciify(const wchar_t c) {
        switch (c) {
            case L'ç':
            case L'Ç':
                return L'C';
            case L'ğ':
            case L'Ğ':
                return L'G';
            case L'ö':
            case L'Ö':
                return L'O';
            case L'ş':
            case L'Ş':
                return L'S';
            case L'ü':
            case L'Ü':
                return L'U';
            case L'ı':
                return L'I';
            case L'İ':
                return L'i';
            default:
                if (std::iswalpha(c)) {
                    return std::towlower(c);
                } else {
                    return L'\0';
                }
        }
    }

}  // namespace cppturko

#endif