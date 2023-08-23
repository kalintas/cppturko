/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf --compare-strncmp --includes --readonly-tables --seven-bit --multiple-iterations=2 --struct-type --language=C++ --omit-struct-type --class-name=HashmapG --constants-prefix=HASHMAP_G_ ./gperf/input/g.gperf  */
/* Computed positions: -k'1-4,$' */

#if !( \
    (' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) && (')' == 41) \
    && ('*' == 42) && ('+' == 43) && (',' == 44) && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) && ('1' == 49) && ('2' == 50) \
    && ('3' == 51) && ('4' == 52) && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) && ('9' == 57) && (':' == 58) && (';' == 59) \
    && ('<' == 60) && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
    && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) && ('N' == 78) \
    && ('O' == 79) && ('P' == 80) && ('Q' == 81) && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) && ('V' == 86) && ('W' == 87) \
    && ('X' == 88) && ('Y' == 89) && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) && ('^' == 94) && ('_' == 95) \
    && ('a' == 97) && ('b' == 98) && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) && ('g' == 103) && ('h' == 104) \
    && ('i' == 105) && ('j' == 106) && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) && ('o' == 111) && ('p' == 112) \
    && ('q' == 113) && ('r' == 114) && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) && ('w' == 119) && ('x' == 120) \
    && ('y' == 121) && ('z' == 122) && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
    /* The character set is not based on ISO-646.  */
    #error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#include <string.h>

#define HASHMAP_G_TOTAL_KEYWORDS 752
#define HASHMAP_G_MIN_WORD_LENGTH 1
#define HASHMAP_G_MAX_WORD_LENGTH 13
#define HASHMAP_G_MIN_HASH_VALUE 36
#define HASHMAP_G_MAX_HASH_VALUE 2766
/* maximum key range = 2731, duplicates = 0 */

class HashmapG {
  private:
    static inline unsigned int hash(const char* str, size_t len);

  public:
    static const struct Pattern* in_word_set(const char* str, size_t len);
};

inline unsigned int HashmapG::hash(const char* str, size_t len) {
    static const unsigned short asso_values[] = {
        2767, 2767, 2767, 2767, 2767, 2767, 2767, 2767, 2767, 2767, 2767, 2767, 2767, 2767, 2767, 2767, 2767, 2767, 2767, 2767,
        2767, 2767, 2767, 2767, 2767, 2767, 2767, 2767, 2767, 2767, 2767, 2767, 556,  2767, 23,   468,  2767, 2767, 2767, 2767,
        741,  754,  2767, 2767, 2767, 2767, 2767, 2767, 2767, 2767, 10,   2767, 2767, 1,    2767, 3,    2767, 1,    2767, 2767,
        2767, 2767, 2767, 2767, 2,    2767, 2767, 2767, 2767, 80,   2767, 2767, 2767, 1,    2767, 702,  3,    2767, 2767, 13,
        2767, 1070, 82,   2767, 2767, 13,   2767, 242,  26,   2767, 191,  28,   5,    63,   1,    2767, 67,   9,    8,    522,
        75,   396,  706,  371,  429,  8,    12,   170,  92,   194,  2,    159,  578,  11,   1,    474,  4,    3,    450,  86,
        275,  179,  764,  256,  352,  670,  504,  2,    2,    97,   430,  1,    2767, 2767, 2767, 2767, 2767};
    unsigned int hval = len;

    switch (hval) {
        default:
            hval += asso_values[static_cast<unsigned char>(str[3] + 3)];
        /*FALLTHROUGH*/
        case 3:
            hval += asso_values[static_cast<unsigned char>(str[2] + 9)];
        /*FALLTHROUGH*/
        case 2:
            hval += asso_values[static_cast<unsigned char>(str[1] + 8)];
        /*FALLTHROUGH*/
        case 1:
            hval += asso_values[static_cast<unsigned char>(str[0] + 2)];
            break;
    }
    return hval + asso_values[static_cast<unsigned char>(str[len - 1])];
}

const struct Pattern* HashmapG::in_word_set(const char* str, size_t len) {
    static const struct Pattern wordlist[] = {
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 127 "./gperf/input/g.gperf"
        {"laXn", -125},
        {""},
        {""},
#line 558 "./gperf/input/g.gperf"
        {"liXn", 556},
#line 546 "./gperf/input/g.gperf"
        {"siXn", -544},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 524 "./gperf/input/g.gperf"
        {"rlX", 522},
        {""},
        {""},
        {""},
        {""},
#line 690 "./gperf/input/g.gperf"
        {" iXr", 690},
#line 247 "./gperf/input/g.gperf"
        {"GGX", 245},
        {""},
#line 283 "./gperf/input/g.gperf"
        {"gaX", -281},
        {""},
        {""},
        {""},
#line 733 "./gperf/input/g.gperf"
        {"haX", -733},
        {""},
        {""},
#line 489 "./gperf/input/g.gperf"
        {"hiX", -487},
#line 415 "./gperf/input/g.gperf"
        {"oGX", 413},
        {""},
        {""},
#line 380 "./gperf/input/g.gperf"
        {"smiX", -378},
#line 226 "./gperf/input/g.gperf"
        {"sliX", 224},
#line 706 "./gperf/input/g.gperf"
        {"sleX", 706},
#line 213 "./gperf/input/g.gperf"
        {"rleX", 211},
#line 199 "./gperf/input/g.gperf"
        {"laiX", 197},
#line 361 "./gperf/input/g.gperf"
        {" leXi", -359},
        {""},
#line 433 "./gperf/input/g.gperf"
        {" leXeni", 431},
        {""},
#line 170 "./gperf/input/g.gperf"
        {"lilX", 168},
        {""},
#line 470 "./gperf/input/g.gperf"
        {"rilX", 468},
        {""},
#line 569 "./gperf/input/g.gperf"
        {" beXi", -568},
#line 565 "./gperf/input/g.gperf"
        {" maXi", -564},
        {""},
#line 445 "./gperf/input/g.gperf"
        {" laXa", -443},
        {""},
#line 184 "./gperf/input/g.gperf"
        {"ofaX", -182},
#line 205 "./gperf/input/g.gperf"
        {"lbaX", 203},
        {""},
#line 738 "./gperf/input/g.gperf"
        {" liX", -738},
        {""},
        {""},
#line 711 "./gperf/input/g.gperf"
        {" baXa", -711},
#line 620 "./gperf/input/g.gperf"
        {"oXi", -619},
        {""},
        {""},
        {""},
#line 605 "./gperf/input/g.gperf"
        {" biX", -604},
#line 387 "./gperf/input/g.gperf"
        {" faX", -385},
#line 430 "./gperf/input/g.gperf"
        {"pX", -428},
#line 749 "./gperf/input/g.gperf"
        {"lX", -751},
#line 294 "./gperf/input/g.gperf"
        {"sX", -292},
#line 296 "./gperf/input/g.gperf"
        {"rX", -294},
#line 224 "./gperf/input/g.gperf"
        {"baXr", 222},
#line 365 "./gperf/input/g.gperf"
        {"saXar", -363},
#line 588 "./gperf/input/g.gperf"
        {"oXart", -587},
#line 693 "./gperf/input/g.gperf"
        {"gX", -693},
#line 47 "./gperf/input/g.gperf"
        {"saXat", 45},
#line 291 "./gperf/input/g.gperf"
        {"0X", 289},
#line 750 "./gperf/input/g.gperf"
        {"oX", 752},
#line 479 "./gperf/input/g.gperf"
        {"roXr", -477},
#line 659 "./gperf/input/g.gperf"
        {"SX", -658},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 530 "./gperf/input/g.gperf"
        {"poXrafi", -528},
#line 340 "./gperf/input/g.gperf"
        {" Xini", 338},
        {""},
        {""},
#line 493 "./gperf/input/g.gperf"
        {" X", -491},
        {""},
        {""},
#line 96 "./gperf/input/g.gperf"
        {" aXar", 94},
        {""},
        {""},
        {""},
        {""},
#line 737 "./gperf/input/g.gperf"
        {"loX", -737},
#line 289 "./gperf/input/g.gperf"
        {"soX", 287},
#line 548 "./gperf/input/g.gperf"
        {"rUlX", 546},
#line 712 "./gperf/input/g.gperf"
        {"CiX", 712},
        {""},
        {""},
#line 654 "./gperf/input/g.gperf"
        {"goX", -653},
        {""},
#line 244 "./gperf/input/g.gperf"
        {"rdX", 242},
        {""},
#line 98 "./gperf/input/g.gperf"
        {" liXd", -96},
#line 133 "./gperf/input/g.gperf"
        {"SUlX", 131},
        {""},
        {""},
        {""},
#line 272 "./gperf/input/g.gperf"
        {"odX", -270},
        {""},
        {""},
#line 82 "./gperf/input/g.gperf"
        {" blaX", -80},
        {""},
        {""},
#line 571 "./gperf/input/g.gperf"
        {" iXi", -570},
        {""},
        {""},
        {""},
        {""},
#line 141 "./gperf/input/g.gperf"
        {"CilX", 139},
#line 407 "./gperf/input/g.gperf"
        {"ldiX", 405},
        {""},
        {""},
        {""},
#line 651 "./gperf/input/g.gperf"
        {" diXi", -650},
        {""},
        {""},
#line 214 "./gperf/input/g.gperf"
        {"lXla", 212},
#line 342 "./gperf/input/g.gperf"
        {" bliX", -340},
#line 97 "./gperf/input/g.gperf"
        {"oXlar", -95},
#line 579 "./gperf/input/g.gperf"
        {"oXlan", 578},
        {""},
#line 642 "./gperf/input/g.gperf"
        {"uXi", -641},
#line 466 "./gperf/input/g.gperf"
        {" mIX", -464},
        {""},
#line 245 "./gperf/input/g.gperf"
        {"sXl", 243},
#line 637 "./gperf/input/g.gperf"
        {"oXn", -636},
#line 491 "./gperf/input/g.gperf"
        {"bX", -489},
        {""},
        {""},
#line 585 "./gperf/input/g.gperf"
        {"uXar", -584},
#line 125 "./gperf/input/g.gperf"
        {" iIX", -123},
#line 655 "./gperf/input/g.gperf"
        {"CX", -654},
        {""},
        {""},
        {""},
#line 627 "./gperf/input/g.gperf"
        {" yiX", 626},
        {""},
#line 751 "./gperf/input/g.gperf"
        {"uX", 753},
#line 648 "./gperf/input/g.gperf"
        {"uXan", -647},
        {""},
        {""},
#line 540 "./gperf/input/g.gperf"
        {"oXli", -538},
        {""},
#line 382 "./gperf/input/g.gperf"
        {"roXa", -380},
#line 616 "./gperf/input/g.gperf"
        {"bliXd", 615},
        {""},
        {""},
        {""},
        {""},
#line 645 "./gperf/input/g.gperf"
        {"maXn", -644},
        {""},
#line 185 "./gperf/input/g.gperf"
        {"hoXa", -183},
#line 408 "./gperf/input/g.gperf"
        {"baXi", 406},
        {""},
#line 356 "./gperf/input/g.gperf"
        {"solaX", -354},
        {""},
#line 456 "./gperf/input/g.gperf"
        {" oXan", -454},
#line 271 "./gperf/input/g.gperf"
        {"rgX", 269},
        {""},
        {""},
#line 428 "./gperf/input/g.gperf"
        {"CoX", 426},
#line 660 "./gperf/input/g.gperf"
        {"bliXl", 659},
#line 526 "./gperf/input/g.gperf"
        {"Xmi", 524},
        {""},
#line 351 "./gperf/input/g.gperf"
        {"laXil", -349},
#line 449 "./gperf/input/g.gperf"
        {"baliX", 447},
#line 152 "./gperf/input/g.gperf"
        {" cXr", 150},
#line 612 "./gperf/input/g.gperf"
        {"Xai", -611},
#line 753 "./gperf/input/g.gperf"
        {"Xi", 756},
#line 401 "./gperf/input/g.gperf"
        {"Xlin", -399},
        {""},
        {""},
#line 594 "./gperf/input/g.gperf"
        {"Xment", -593},
        {""},
#line 754 "./gperf/input/g.gperf"
        {"X", -757},
#line 248 "./gperf/input/g.gperf"
        {"ocX", 246},
#line 417 "./gperf/input/g.gperf"
        {" gX", 415},
#line 255 "./gperf/input/g.gperf"
        {"iGX", 253},
#line 233 "./gperf/input/g.gperf"
        {"mliX", 231},
#line 204 "./gperf/input/g.gperf"
        {"mleX", 202},
#line 30 "./gperf/input/g.gperf"
        {"Xaini", 28},
#line 563 "./gperf/input/g.gperf"
        {"waX", -561},
        {""},
#line 277 "./gperf/input/g.gperf"
        {"Xba", 275},
#line 487 "./gperf/input/g.gperf"
        {"wiX", -485},
#line 357 "./gperf/input/g.gperf"
        {" aXil", 355},
        {""},
#line 259 "./gperf/input/g.gperf"
        {" cX", -257},
#line 115 "./gperf/input/g.gperf"
        {"ifeX", -113},
#line 392 "./gperf/input/g.gperf"
        {"sceX", -390},
#line 698 "./gperf/input/g.gperf"
        {" eXr", 698},
#line 26 "./gperf/input/g.gperf"
        {"padoX", -24},
#line 241 "./gperf/input/g.gperf"
        {"klX", 239},
#line 116 "./gperf/input/g.gperf"
        {"maaX", -114},
        {""},
        {""},
        {""},
#line 463 "./gperf/input/g.gperf"
        {" giX", -461},
        {""},
        {""},
#line 276 "./gperf/input/g.gperf"
        {"heX", -274},
        {""},
        {""},
        {""},
#line 144 "./gperf/input/g.gperf"
        {"gcaX", -142},
        {""},
        {""},
        {""},
#line 79 "./gperf/input/g.gperf"
        {"boXan", 77},
        {""},
#line 601 "./gperf/input/g.gperf"
        {"mX", -600},
#line 142 "./gperf/input/g.gperf"
        {" dIX", -140},
#line 701 "./gperf/input/g.gperf"
        {"iXen", -701},
#line 197 "./gperf/input/g.gperf"
        {"seeX", -195},
#line 324 "./gperf/input/g.gperf"
        {" yaXil", -322},
#line 416 "./gperf/input/g.gperf"
        {"oXb", -414},
#line 635 "./gperf/input/g.gperf"
        {"mUX", -634},
#line 426 "./gperf/input/g.gperf"
        {"iXa", -424},
#line 664 "./gperf/input/g.gperf"
        {"moXr", -663},
        {""},
#line 69 "./gperf/input/g.gperf"
        {"baXal", 67},
#line 556 "./gperf/input/g.gperf"
        {"oXano", 554},
#line 468 "./gperf/input/g.gperf"
        {"kilX", 466},
#line 149 "./gperf/input/g.gperf"
        {"oldX", -147},
        {""},
        {""},
#line 140 "./gperf/input/g.gperf"
        {"imXa", 138},
        {""},
        {""},
#line 402 "./gperf/input/g.gperf"
        {"ioXr", -400},
#line 292 "./gperf/input/g.gperf"
        {"wX", -290},
#line 400 "./gperf/input/g.gperf"
        {"saXl", 398},
#line 447 "./gperf/input/g.gperf"
        {"malaX", -445},
        {""},
        {""},
        {""},
        {""},
#line 158 "./gperf/input/g.gperf"
        {"yaXr", -156},
#line 480 "./gperf/input/g.gperf"
        {"lOX", -478},
        {""},
#line 622 "./gperf/input/g.gperf"
        {"Xlia", -621},
        {""},
        {""},
#line 19 "./gperf/input/g.gperf"
        {"saXik", -17},
#line 282 "./gperf/input/g.gperf"
        {"gOX", 280},
#line 492 "./gperf/input/g.gperf"
        {"kX", -490},
#line 481 "./gperf/input/g.gperf"
        {"Xaw", -479},
#line 280 "./gperf/input/g.gperf"
        {"Xfl", -278},
#line 270 "./gperf/input/g.gperf"
        {"Xml", -268},
        {""},
#line 260 "./gperf/input/g.gperf"
        {"ucX", 258},
#line 646 "./gperf/input/g.gperf"
        {"Xdi", 645},
        {""},
#line 632 "./gperf/input/g.gperf"
        {"koXr", -631},
        {""},
#line 28 "./gperf/input/g.gperf"
        {"idiXu", 26},
#line 583 "./gperf/input/g.gperf"
        {"paXu", -582},
        {""},
#line 186 "./gperf/input/g.gperf"
        {"Xann", -184},
#line 403 "./gperf/input/g.gperf"
        {"raXu", -401},
        {""},
#line 617 "./gperf/input/g.gperf"
        {"Xmati", -616},
        {""},
#line 498 "./gperf/input/g.gperf"
        {" aXik", -496},
        {""},
#line 347 "./gperf/input/g.gperf"
        {"kaXir", -345},
        {""},
#line 190 "./gperf/input/g.gperf"
        {"Xlai", -188},
#line 332 "./gperf/input/g.gperf"
        {"pfluX", -330},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 207 "./gperf/input/g.gperf"
        {"kiXi", 205},
#line 126 "./gperf/input/g.gperf"
        {"ylUX", -124},
#line 580 "./gperf/input/g.gperf"
        {" eXt", 579},
#line 268 "./gperf/input/g.gperf"
        {"UXi", -266},
        {""},
#line 439 "./gperf/input/g.gperf"
        {"kanIlX", 437},
        {""},
        {""},
#line 372 "./gperf/input/g.gperf"
        {"osiX", -370},
        {""},
#line 349 "./gperf/input/g.gperf"
        {"sadiX", -347},
        {""},
        {""},
#line 446 "./gperf/input/g.gperf"
        {"maXad", -444},
        {""},
#line 278 "./gperf/input/g.gperf"
        {"UXa", -276},
        {""},
#line 161 "./gperf/input/g.gperf"
        {"badX", -159},
        {""},
#line 747 "./gperf/input/g.gperf"
        {"UX", 747},
        {""},
#line 377 "./gperf/input/g.gperf"
        {"beaX", -375},
        {""},
        {""},
#line 589 "./gperf/input/g.gperf"
        {"moXa", -588},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 73 "./gperf/input/g.gperf"
        {"maXal", -71},
        {""},
        {""},
#line 742 "./gperf/input/g.gperf"
        {"yX", -742},
        {""},
#line 177 "./gperf/input/g.gperf"
        {"ioXa", -175},
        {""},
        {""},
#line 574 "./gperf/input/g.gperf"
        {"opaX", -573},
        {""},
        {""},
        {""},
#line 399 "./gperf/input/g.gperf"
        {"oXda", -397},
        {""},
#line 652 "./gperf/input/g.gperf"
        {"Xgi", -651},
#line 727 "./gperf/input/g.gperf"
        {"oXlu", 727},
#line 38 "./gperf/input/g.gperf"
        {"imilX", 36},
        {""},
        {""},
#line 418 "./gperf/input/g.gperf"
        {"mcX", -416},
#line 597 "./gperf/input/g.gperf"
        {" paX", -596},
        {""},
#line 740 "./gperf/input/g.gperf"
        {"vX", -740},
        {""},
#line 578 "./gperf/input/g.gperf"
        {"Xinat", -577},
        {""},
#line 421 "./gperf/input/g.gperf"
        {"Xga", -419},
        {""},
#line 265 "./gperf/input/g.gperf"
        {"Xak", -263},
        {""},
        {""},
        {""},
#line 171 "./gperf/input/g.gperf"
        {"vaXa", -169},
        {""},
#line 461 "./gperf/input/g.gperf"
        {" pOX", -459},
#line 293 "./gperf/input/g.gperf"
        {"Xq", -291},
        {""},
        {""},
#line 65 "./gperf/input/g.gperf"
        {"zaXra", 63},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 249 "./gperf/input/g.gperf"
        {"zlX", 247},
#line 55 "./gperf/input/g.gperf"
        {"beliX", 53},
#line 320 "./gperf/input/g.gperf"
        {"Xdatia", -318},
#line 266 "./gperf/input/g.gperf"
        {"Xei", -264},
#line 508 "./gperf/input/g.gperf"
        {"soluX", 506},
#line 665 "./gperf/input/g.gperf"
        {"voX", -664},
#line 721 "./gperf/input/g.gperf"
        {" oXun", -721},
#line 460 "./gperf/input/g.gperf"
        {"bsaX", -458},
#line 636 "./gperf/input/g.gperf"
        {"ieX", -635},
        {""},
        {""},
        {""},
#line 148 "./gperf/input/g.gperf"
        {" dXu", 146},
#line 7 "./gperf/input/g.gperf"
        {"zilXi", 5},
        {""},
#line 261 "./gperf/input/g.gperf"
        {"Xea", -259},
#line 229 "./gperf/input/g.gperf"
        {"icaX", -227},
#line 267 "./gperf/input/g.gperf"
        {"weX", -265},
        {""},
#line 284 "./gperf/input/g.gperf"
        {" tX", -282},
#line 621 "./gperf/input/g.gperf"
        {" briX", -620},
#line 227 "./gperf/input/g.gperf"
        {"zliX", 225},
        {""},
#line 200 "./gperf/input/g.gperf"
        {"Xlaj", -198},
        {""},
#line 217 "./gperf/input/g.gperf"
        {"zaiX", 215},
#line 576 "./gperf/input/g.gperf"
        {"eiX", -575},
#line 130 "./gperf/input/g.gperf"
        {"caXr", 128},
        {""},
        {""},
#line 136 "./gperf/input/g.gperf"
        {"ltaX", -134},
        {""},
#line 453 "./gperf/input/g.gperf"
        {"moXal", 451},
        {""},
        {""},
#line 596 "./gperf/input/g.gperf"
        {"bUXu", -595},
#line 29 "./gperf/input/g.gperf"
        {"raXbi", -27},
#line 128 "./gperf/input/g.gperf"
        {"siXb", 126},
#line 625 "./gperf/input/g.gperf"
        {"efiX", 624},
#line 467 "./gperf/input/g.gperf"
        {"otaX", 465},
#line 688 "./gperf/input/g.gperf"
        {" tUX", -688},
        {""},
        {""},
        {""},
#line 736 "./gperf/input/g.gperf"
        {"Xo", -736},
#line 560 "./gperf/input/g.gperf"
        {"yoXa", -558},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 549 "./gperf/input/g.gperf"
        {"elaX", -547},
        {""},
#line 739 "./gperf/input/g.gperf"
        {"zX", -739},
#line 745 "./gperf/input/g.gperf"
        {"eXer", 745},
#line 708 "./gperf/input/g.gperf"
        {"Xano", -708},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 95 "./gperf/input/g.gperf"
        {"eXen5", 93},
#line 333 "./gperf/input/g.gperf"
        {"Xdela", -331},
        {""},
#line 166 "./gperf/input/g.gperf"
        {"leXl", -164},
        {""},
#line 490 "./gperf/input/g.gperf"
        {"eXa", -488},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 385 "./gperf/input/g.gperf"
        {"cilX", 383},
#line 379 "./gperf/input/g.gperf"
        {"udXu", 377},
#line 386 "./gperf/input/g.gperf"
        {"claX", -384},
#line 4 "./gperf/input/g.gperf"
        {" oraX", -2},
        {""},
        {""},
#line 696 "./gperf/input/g.gperf"
        {"eoXr", -696},
        {""},
#line 694 "./gperf/input/g.gperf"
        {"eaXa", -694},
        {""},
#line 80 "./gperf/input/g.gperf"
        {"olleX", -78},
#line 709 "./gperf/input/g.gperf"
        {"oXe", -709},
        {""},
        {""},
        {""},
#line 691 "./gperf/input/g.gperf"
        {" saXo", 691},
#line 543 "./gperf/input/g.gperf"
        {"taXn", -541},
        {""},
#line 111 "./gperf/input/g.gperf"
        {"Xelir", -109},
        {""},
#line 501 "./gperf/input/g.gperf"
        {" oriX", -499},
#line 76 "./gperf/input/g.gperf"
        {" asaX", -74},
        {""},
        {""},
#line 507 "./gperf/input/g.gperf"
        {"eoloX", -505},
#line 671 "./gperf/input/g.gperf"
        {" moXo", 671},
#line 670 "./gperf/input/g.gperf"
        {"iXel", -670},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 162 "./gperf/input/g.gperf"
        {"flaX", -160},
        {""},
#line 106 "./gperf/input/g.gperf"
        {" eroX", 104},
        {""},
#line 355 "./gperf/input/g.gperf"
        {"iXlik", 353},
#line 599 "./gperf/input/g.gperf"
        {"gzaX", -598},
        {""},
        {""},
#line 381 "./gperf/input/g.gperf"
        {"yelX", 379},
#line 521 "./gperf/input/g.gperf"
        {" ziX", -519},
        {""},
        {""},
        {""},
        {""},
#line 598 "./gperf/input/g.gperf"
        {"taiX", -597},
        {""},
#line 338 "./gperf/input/g.gperf"
        {" naXr", 336},
        {""},
#line 156 "./gperf/input/g.gperf"
        {"oneX", -154},
        {""},
#line 640 "./gperf/input/g.gperf"
        {" zaX", -639},
        {""},
        {""},
#line 638 "./gperf/input/g.gperf"
        {" naXi", -637},
#line 615 "./gperf/input/g.gperf"
        {" naXa", -614},
        {""},
#line 397 "./gperf/input/g.gperf"
        {"eXla", -395},
#line 239 "./gperf/input/g.gperf"
        {"fUX", -237},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 735 "./gperf/input/g.gperf"
        {"eXl", 735},
        {""},
#line 687 "./gperf/input/g.gperf"
        {"rkeX", 687},
#line 45 "./gperf/input/g.gperf"
        {"eXeti", 43},
        {""},
#line 584 "./gperf/input/g.gperf"
        {"coiX", -583},
        {""},
        {""},
        {""},
        {""},
#line 435 "./gperf/input/g.gperf"
        {" maXas", -433},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 705 "./gperf/input/g.gperf"
        {"uXe", -705},
        {""},
#line 35 "./gperf/input/g.gperf"
        {"rbuXu", -33},
#line 219 "./gperf/input/g.gperf"
        {"Xado", -217},
        {""},
        {""},
        {""},
#line 505 "./gperf/input/g.gperf"
        {"maXda", -503},
#line 586 "./gperf/input/g.gperf"
        {"afX", -585},
        {""},
        {""},
        {""},
#line 66 "./gperf/input/g.gperf"
        {"eolaX", -64},
#line 477 "./gperf/input/g.gperf"
        {"Xanu", 475},
#line 570 "./gperf/input/g.gperf"
        {" oXd", -569},
        {""},
#line 222 "./gperf/input/g.gperf"
        {"rluX", 220},
#line 476 "./gperf/input/g.gperf"
        {"taXi", 474},
#line 557 "./gperf/input/g.gperf"
        {" muXa", -555},
#line 264 "./gperf/input/g.gperf"
        {"aGX", -262},
        {""},
#line 746 "./gperf/input/g.gperf"
        {" buXun", -746},
#line 64 "./gperf/input/g.gperf"
        {"tanoX", 62},
        {""},
#line 195 "./gperf/input/g.gperf"
        {"utIX", -193},
        {""},
        {""},
#line 160 "./gperf/input/g.gperf"
        {"bOXl", -158},
#line 150 "./gperf/input/g.gperf"
        {"ysaX", 148},
        {""},
#line 275 "./gperf/input/g.gperf"
        {"zeX", -273},
#line 151 "./gperf/input/g.gperf"
        {"ovaX", -149},
#line 198 "./gperf/input/g.gperf"
        {"aleX", -196},
#line 231 "./gperf/input/g.gperf"
        {" veX", -229},
#line 725 "./gperf/input/g.gperf"
        {"oXu", 725},
        {""},
#line 497 "./gperf/input/g.gperf"
        {"unaXa", -495},
        {""},
#line 221 "./gperf/input/g.gperf"
        {"zcaX", 219},
        {""},
        {""},
        {""},
#line 159 "./gperf/input/g.gperf"
        {"CamX", 157},
#line 519 "./gperf/input/g.gperf"
        {" vaX", -517},
#line 146 "./gperf/input/g.gperf"
        {"taIX", -144},
        {""},
#line 692 "./gperf/input/g.gperf"
        {"iyoX", -692},
#line 724 "./gperf/input/g.gperf"
        {"eceX", 724},
        {""},
#line 388 "./gperf/input/g.gperf"
        {"naXr", -386},
        {""},
#line 522 "./gperf/input/g.gperf"
        {"ktiX", 520},
        {""},
#line 18 "./gperf/input/g.gperf"
        {"moraX", -16},
#line 743 "./gperf/input/g.gperf"
        {"oXram", -743},
#line 112 "./gperf/input/g.gperf"
        {"Xlene", 110},
#line 459 "./gperf/input/g.gperf"
        {"oXman", -457},
        {""},
        {""},
#line 117 "./gperf/input/g.gperf"
        {" SuX", -115},
        {""},
        {""},
#line 373 "./gperf/input/g.gperf"
        {"ktaX", -371},
#line 752 "./gperf/input/g.gperf"
        {"aX", 754},
#line 630 "./gperf/input/g.gperf"
        {"oXmala", -629},
        {""},
#line 591 "./gperf/input/g.gperf"
        {"nlX", 590},
        {""},
        {""},
#line 536 "./gperf/input/g.gperf"
        {"iXida", -534},
        {""},
        {""},
        {""},
#line 510 "./gperf/input/g.gperf"
        {"Xarli", -508},
#line 577 "./gperf/input/g.gperf"
        {" maXa ", -576},
#line 89 "./gperf/input/g.gperf"
        {"iSeXe", -87},
#line 252 "./gperf/input/g.gperf"
        {"Xfo", -250},
#line 628 "./gperf/input/g.gperf"
        {"Xmo", -627},
#line 551 "./gperf/input/g.gperf"
        {"Xlo", -549},
#line 667 "./gperf/input/g.gperf"
        {"toXa", -666},
        {""},
#line 360 "./gperf/input/g.gperf"
        {"oXlas", -358},
        {""},
        {""},
#line 744 "./gperf/input/g.gperf"
        {"iXe", 744},
#line 723 "./gperf/input/g.gperf"
        {"Xio", -723},
#line 555 "./gperf/input/g.gperf"
        {"leXer", -553},
#line 230 "./gperf/input/g.gperf"
        {"nliX", 228},
#line 658 "./gperf/input/g.gperf"
        {"Xah", -657},
        {""},
        {""},
#line 411 "./gperf/input/g.gperf"
        {"Xast", -409},
#line 541 "./gperf/input/g.gperf"
        {"iXib", -539},
#line 211 "./gperf/input/g.gperf"
        {"rtXu", 209},
#line 62 "./gperf/input/g.gperf"
        {"viraX", -60},
        {""},
#line 398 "./gperf/input/g.gperf"
        {"Xzan", -396},
        {""},
        {""},
        {""},
#line 287 "./gperf/input/g.gperf"
        {"Xav", -285},
        {""},
#line 413 "./gperf/input/g.gperf"
        {"lduX", 411},
#line 420 "./gperf/input/g.gperf"
        {"Xiv", -418},
        {""},
#line 517 "./gperf/input/g.gperf"
        {"niaX", -515},
#line 722 "./gperf/input/g.gperf"
        {" praX", -722},
#line 488 "./gperf/input/g.gperf"
        {"feX", 486},
#line 84 "./gperf/input/g.gperf"
        {" eXen", 82},
#line 56 "./gperf/input/g.gperf"
        {"coXal", -54},
#line 573 "./gperf/input/g.gperf"
        {"Xiad", -572},
        {""},
#line 235 "./gperf/input/g.gperf"
        {"alIX", 233},
        {""},
#line 328 "./gperf/input/g.gperf"
        {"restiX", -326},
#line 710 "./gperf/input/g.gperf"
        {"bliX ", 710},
#line 728 "./gperf/input/g.gperf"
        {"Xanda", -728},
        {""},
        {""},
#line 295 "./gperf/input/g.gperf"
        {"nX", -293},
#line 366 "./gperf/input/g.gperf"
        {"inaXa", -364},
#line 471 "./gperf/input/g.gperf"
        {"Xing", -469},
        {""},
#line 336 "./gperf/input/g.gperf"
        {"naXan", -334},
#line 182 "./gperf/input/g.gperf"
        {"aXia", -180},
#line 422 "./gperf/input/g.gperf"
        {"nUX", -420},
#line 298 "./gperf/input/g.gperf"
        {"mla diyaloX", -296},
#line 689 "./gperf/input/g.gperf"
        {"noXr", -689},
        {""},
#line 434 "./gperf/input/g.gperf"
        {"iliXis", -432},
#line 68 "./gperf/input/g.gperf"
        {" toXr", 66},
        {""},
#line 554 "./gperf/input/g.gperf"
        {"rdiX ", 552},
        {""},
        {""},
#line 335 "./gperf/input/g.gperf"
        {"capaX", -333},
#line 427 "./gperf/input/g.gperf"
        {"oXy", -425},
        {""},
        {""},
#line 544 "./gperf/input/g.gperf"
        {"Xdeb", -542},
#line 681 "./gperf/input/g.gperf"
        {" aXit ", -681},
        {""},
#line 61 "./gperf/input/g.gperf"
        {"niXir", -59},
#line 123 "./gperf/input/g.gperf"
        {"esaX", -121},
        {""},
        {""},
#line 730 "./gperf/input/g.gperf"
        {"uXay", -730},
        {""},
        {""},
        {""},
        {""},
#line 504 "./gperf/input/g.gperf"
        {" diX ", 502},
        {""},
        {""},
#line 406 "./gperf/input/g.gperf"
        {" toX", -404},
#line 242 "./gperf/input/g.gperf"
        {"fOX", -240},
        {""},
#line 40 "./gperf/input/g.gperf"
        {"Xayan", -38},
        {""},
        {""},
#line 6 "./gperf/input/g.gperf"
        {"itelX", 4},
#line 457 "./gperf/input/g.gperf"
        {"litoX", -455},
#line 611 "./gperf/input/g.gperf"
        {"guX", -610},
#line 444 "./gperf/input/g.gperf"
        {"straX", -442},
        {""},
#line 695 "./gperf/input/g.gperf"
        {"ouX", -695},
        {""},
#line 135 "./gperf/input/g.gperf"
        {"vedX", -133},
#line 165 "./gperf/input/g.gperf"
        {"taXl", -163},
#line 16 "./gperf/input/g.gperf"
        {"boruX", -14},
#line 51 "./gperf/input/g.gperf"
        {"ndaXa", -49},
        {""},
#line 309 "./gperf/input/g.gperf"
        {"toXrafik", -307},
#line 581 "./gperf/input/g.gperf"
        {"Xask", -580},
#line 538 "./gperf/input/g.gperf"
        {"baXa ", 536},
#line 496 "./gperf/input/g.gperf"
        {"baXan ", 494},
        {""},
#line 624 "./gperf/input/g.gperf"
        {"luiX", -623},
#line 440 "./gperf/input/g.gperf"
        {"leXenl", 438},
#line 163 "./gperf/input/g.gperf"
        {"lulX", 161},
#line 331 "./gperf/input/g.gperf"
        {"beSeX", -329},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 72 "./gperf/input/g.gperf"
        {"reneX", 70},
#line 192 "./gperf/input/g.gperf"
        {"uyuX", -190},
        {""},
        {""},
        {""},
#line 202 "./gperf/input/g.gperf"
        {"taXu", -200},
#line 5 "./gperf/input/g.gperf"
        {"loXi ", 3},
#line 256 "./gperf/input/g.gperf"
        {"IiX", 254},
        {""},
#line 327 "./gperf/input/g.gperf"
        {"gorduX", -325},
#line 81 "./gperf/input/g.gperf"
        {" triX", -79},
        {""},
        {""},
#line 494 "./gperf/input/g.gperf"
        {"Xalass", -492},
        {""},
        {""},
#line 145 "./gperf/input/g.gperf"
        {"Xcag", -143},
#line 393 "./gperf/input/g.gperf"
        {"noXa", -391},
#line 254 "./gperf/input/g.gperf"
        {"Xce", 252},
        {""},
        {""},
#line 258 "./gperf/input/g.gperf"
        {"uXy", -256},
#line 495 "./gperf/input/g.gperf"
        {"ileXe ", 493},
#line 37 "./gperf/input/g.gperf"
        {"reXle", -35},
        {""},
        {""},
#line 107 "./gperf/input/g.gperf"
        {"ikliX", 105},
#line 33 "./gperf/input/g.gperf"
        {"remiX", -31},
        {""},
        {""},
#line 180 "./gperf/input/g.gperf"
        {"hCeX", -178},
        {""},
        {""},
#line 44 "./gperf/input/g.gperf"
        {"seXis", -42},
        {""},
#line 661 "./gperf/input/g.gperf"
        {" CaXa", 660},
#line 607 "./gperf/input/g.gperf"
        {"Xland ", -606},
        {""},
#line 405 "./gperf/input/g.gperf"
        {"eXra", -403},
        {""},
        {""},
        {""},
#line 474 "./gperf/input/g.gperf"
        {" zoX", -472},
#line 631 "./gperf/input/g.gperf"
        {"gulaX", -630},
#line 138 "./gperf/input/g.gperf"
        {"dbaX", -136},
        {""},
#line 212 "./gperf/input/g.gperf"
        {" uXa", -210},
        {""},
#line 27 "./gperf/input/g.gperf"
        {"r aXn", -25},
        {""},
        {""},
#line 562 "./gperf/input/g.gperf"
        {" CaX", 560},
        {""},
#line 741 "./gperf/input/g.gperf"
        {"IX", 741},
#line 465 "./gperf/input/g.gperf"
        {"liXm", 463},
        {""},
#line 419 "./gperf/input/g.gperf"
        {"juX", -417},
#line 223 "./gperf/input/g.gperf"
        {"eyoX", 221},
#line 36 "./gperf/input/g.gperf"
        {"ihaXa", 34},
#line 257 "./gperf/input/g.gperf"
        {"prX", 255},
#line 499 "./gperf/input/g.gperf"
        {"beXel", -497},
#line 533 "./gperf/input/g.gperf"
        {" tiXe", -531},
        {""},
#line 352 "./gperf/input/g.gperf"
        {"Xasio", -350},
#line 191 "./gperf/input/g.gperf"
        {"vkiX", -189},
#line 669 "./gperf/input/g.gperf"
        {"doXr", 669},
        {""},
        {""},
        {""},
#line 216 "./gperf/input/g.gperf"
        {"Xamo", -214},
        {""},
#line 534 "./gperf/input/g.gperf"
        {" iXde", 532},
        {""},
        {""},
#line 384 "./gperf/input/g.gperf"
        {"doXn", 382},
#line 699 "./gperf/input/g.gperf"
        {"Xic", -699},
#line 454 "./gperf/input/g.gperf"
        {"taraX", 452},
        {""},
        {""},
#line 412 "./gperf/input/g.gperf"
        {"IaXi", -410},
#line 450 "./gperf/input/g.gperf"
        {"eXida", -448},
#line 316 "./gperf/input/g.gperf"
        {"tiracaX", -314},
#line 286 "./gperf/input/g.gperf"
        {"IoX", 284},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 346 "./gperf/input/g.gperf"
        {"etlaX", -344},
#line 209 "./gperf/input/g.gperf"
        {"uXuk", -207},
        {""},
        {""},
        {""},
#line 164 "./gperf/input/g.gperf"
        {"sraX", -162},
#line 269 "./gperf/input/g.gperf"
        {"mXy", 267},
        {""},
#line 88 "./gperf/input/g.gperf"
        {" raXi", -86},
#line 500 "./gperf/input/g.gperf"
        {" raXa", -498},
#line 375 "./gperf/input/g.gperf"
        {"graX", -373},
#line 57 "./gperf/input/g.gperf"
        {"aldiX", -55},
        {""},
        {""},
#line 210 "./gperf/input/g.gperf"
        {" riX", -208},
#line 639 "./gperf/input/g.gperf"
        {" reX", -638},
        {""},
        {""},
#line 120 "./gperf/input/g.gperf"
        {"naXl", -118},
        {""},
        {""},
        {""},
#line 484 "./gperf/input/g.gperf"
        {"iXc", 482},
#line 502 "./gperf/input/g.gperf"
        {"aXrot", 500},
#line 644 "./gperf/input/g.gperf"
        {"Xanis", -643},
#line 60 "./gperf/input/g.gperf"
        {"aXall", -58},
#line 437 "./gperf/input/g.gperf"
        {"oyacIX", -435},
        {""},
        {""},
#line 409 "./gperf/input/g.gperf"
        {"ttiX", 407},
        {""},
        {""},
#line 129 "./gperf/input/g.gperf"
        {"IXit", -127},
        {""},
        {""},
        {""},
#line 367 "./gperf/input/g.gperf"
        {"7 liX", 365},
#line 537 "./gperf/input/g.gperf"
        {"matoX", -535},
#line 354 "./gperf/input/g.gperf"
        {"5 liX", 352},
#line 368 "./gperf/input/g.gperf"
        {"sa aX", 366},
#line 154 "./gperf/input/g.gperf"
        {" iXe", -152},
#line 613 "./gperf/input/g.gperf"
        {"Xui", -612},
        {""},
#line 527 "./gperf/input/g.gperf"
        {"eXo", -525},
#line 668 "./gperf/input/g.gperf"
        {"Xat", -668},
        {""},
        {""},
#line 109 "./gperf/input/g.gperf"
        {"Gi OX", 107},
#line 153 "./gperf/input/g.gperf"
        {"C iX", 151},
        {""},
#line 649 "./gperf/input/g.gperf"
        {" saXan ", -648},
        {""},
        {""},
#line 674 "./gperf/input/g.gperf"
        {"Xua", -674},
#line 535 "./gperf/input/g.gperf"
        {"mireX", 533},
        {""},
        {""},
        {""},
#line 86 "./gperf/input/g.gperf"
        {"hi OX", 84},
#line 539 "./gperf/input/g.gperf"
        {" a aX", 537},
        {""},
#line 77 "./gperf/input/g.gperf"
        {"ediXe", -75},
#line 391 "./gperf/input/g.gperf"
        {"Xach", -389},
#line 246 "./gperf/input/g.gperf"
        {"Xdy", -244},
        {""},
#line 326 "./gperf/input/g.gperf"
        {"r OXel", -324},
        {""},
#line 532 "./gperf/input/g.gperf"
        {"meneX", -530},
        {""},
#line 94 "./gperf/input/g.gperf"
        {" i OX", 92},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 208 "./gperf/input/g.gperf"
        {"braX", -206},
#line 513 "./gperf/input/g.gperf"
        {"oXle", -511},
        {""},
#line 485 "./gperf/input/g.gperf"
        {"atX", -483},
#line 71 "./gperf/input/g.gperf"
        {"yeleX", 69},
        {""},
#line 34 "./gperf/input/g.gperf"
        {" tuXu", -32},
        {""},
        {""},
#line 103 "./gperf/input/g.gperf"
        {"gereX", 101},
        {""},
        {""},
#line 243 "./gperf/input/g.gperf"
        {"uXz", -241},
        {""},
#line 452 "./gperf/input/g.gperf"
        {"apliX", -450},
#line 193 "./gperf/input/g.gperf"
        {"biXe", -191},
        {""},
        {""},
#line 179 "./gperf/input/g.gperf"
        {" rIX", -177},
        {""},
        {""},
#line 318 "./gperf/input/g.gperf"
        {"ngeliX", -316},
        {""},
#line 319 "./gperf/input/g.gperf"
        {"lo aXa", -317},
#line 707 "./gperf/input/g.gperf"
        {"aXra", -707},
#line 545 "./gperf/input/g.gperf"
        {" hoX", -543},
#line 52 "./gperf/input/g.gperf"
        {"gOrXe", 50},
#line 451 "./gperf/input/g.gperf"
        {"baXaz", 449},
#line 404 "./gperf/input/g.gperf"
        {"eluX", -402},
#line 703 "./gperf/input/g.gperf"
        {"deX", 703},
        {""},
#line 303 "./gperf/input/g.gperf"
        {"s elekdaX", -301},
        {""},
        {""},
        {""},
        {""},
#line 176 "./gperf/input/g.gperf"
        {"ebuX", -174},
#line 238 "./gperf/input/g.gperf"
        {"oXf", -236},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 383 "./gperf/input/g.gperf"
        {"maXm", -381},
#line 122 "./gperf/input/g.gperf"
        {" dXe", 120},
        {""},
        {""},
        {""},
#line 390 "./gperf/input/g.gperf"
        {" uXl", -388},
#line 672 "./gperf/input/g.gperf"
        {"iXil ", -672},
#line 281 "./gperf/input/g.gperf"
        {"Xap", -279},
        {""},
#line 378 "./gperf/input/g.gperf"
        {"ndXu", 376},
#line 274 "./gperf/input/g.gperf"
        {"Xgy", -272},
        {""},
        {""},
        {""},
        {""},
#line 308 "./gperf/input/g.gperf"
        {"g civaoX", -306},
#line 525 "./gperf/input/g.gperf"
        {"ntX", -523},
#line 329 "./gperf/input/g.gperf"
        {"IXaray", -327},
#line 323 "./gperf/input/g.gperf"
        {" 8 liX", 321},
        {""},
        {""},
#line 121 "./gperf/input/g.gperf"
        {"huXu", -119},
        {""},
        {""},
#line 516 "./gperf/input/g.gperf"
        {"bUXe", -514},
#line 99 "./gperf/input/g.gperf"
        {"0 doX", 97},
        {""},
        {""},
#line 429 "./gperf/input/g.gperf"
        {"Xto", -427},
        {""},
        {""},
        {""},
        {""},
#line 572 "./gperf/input/g.gperf"
        {"uXle", -571},
        {""},
#line 67 "./gperf/input/g.gperf"
        {"guluX", -65},
        {""},
        {""},
#line 726 "./gperf/input/g.gperf"
        {"aXe", -726},
#line 48 "./gperf/input/g.gperf"
        {"tlukX", 46},
#line 436 "./gperf/input/g.gperf"
        {" uXula", -434},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 175 "./gperf/input/g.gperf"
        {"Xanf", -173},
        {""},
        {""},
#line 376 "./gperf/input/g.gperf"
        {"niXb", 374},
#line 553 "./gperf/input/g.gperf"
        {"boXus ", -551},
        {""},
        {""},
#line 102 "./gperf/input/g.gperf"
        {" etiX", 100},
        {""},
        {""},
        {""},
        {""},
#line 675 "./gperf/input/g.gperf"
        {"iXem", -675},
        {""},
#line 183 "./gperf/input/g.gperf"
        {"kriX", -181},
#line 157 "./gperf/input/g.gperf"
        {"kreX", -155},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 306 "./gperf/input/g.gperf"
        {"una aXit", 304},
#line 374 "./gperf/input/g.gperf"
        {"Xnig", 372},
        {""},
        {""},
        {""},
#line 24 "./gperf/input/g.gperf"
        {"aediX", -22},
        {""},
#line 647 "./gperf/input/g.gperf"
        {"seXe", 646},
        {""},
#line 353 "./gperf/input/g.gperf"
        {"meXip", -351},
#line 313 "./gperf/input/g.gperf"
        {"aik liX", 311},
        {""},
#line 119 "./gperf/input/g.gperf"
        {"cagX", 117},
        {""},
#line 731 "./gperf/input/g.gperf"
        {"Xne", 731},
        {""},
        {""},
        {""},
#line 595 "./gperf/input/g.gperf"
        {" buXs", -594},
#line 448 "./gperf/input/g.gperf"
        {"Xlise", -446},
#line 719 "./gperf/input/g.gperf"
        {"niXd", 719},
        {""},
        {""},
        {""},
        {""},
#line 503 "./gperf/input/g.gperf"
        {"ediX ", 501},
#line 8 "./gperf/input/g.gperf"
        {"r oXr", -6},
#line 54 "./gperf/input/g.gperf"
        {"Ge aX", 52},
#line 300 "./gperf/input/g.gperf"
        {"0 da fotoX", -298},
        {""},
        {""},
#line 273 "./gperf/input/g.gperf"
        {"Xsy", -271},
#line 113 "./gperf/input/g.gperf"
        {"irliX", 111},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 582 "./gperf/input/g.gperf"
        {"luXg", -581},
        {""},
#line 590 "./gperf/input/g.gperf"
        {"ruXg", -589},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 70 "./gperf/input/g.gperf"
        {" e aX", 68},
#line 424 "./gperf/input/g.gperf"
        {"Xno", -422},
#line 288 "./gperf/input/g.gperf"
        {"euX", -286},
        {""},
        {""},
        {""},
#line 236 "./gperf/input/g.gperf"
        {"doXu", 234},
#line 147 "./gperf/input/g.gperf"
        {"rOXe", -145},
#line 720 "./gperf/input/g.gperf"
        {"eXm", 720},
        {""},
        {""},
        {""},
#line 717 "./gperf/input/g.gperf"
        {" vuX", -717},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 263 "./gperf/input/g.gperf"
        {"Xve", 261},
        {""},
#line 550 "./gperf/input/g.gperf"
        {"proX", -548},
        {""},
        {""},
        {""},
        {""},
#line 143 "./gperf/input/g.gperf"
        {"teXd", -141},
        {""},
#line 663 "./gperf/input/g.gperf"
        {"iXf", 662},
        {""},
#line 734 "./gperf/input/g.gperf"
        {"beXe", 734},
        {""},
        {""},
#line 608 "./gperf/input/g.gperf"
        {"aXun", -607},
#line 425 "./gperf/input/g.gperf"
        {"sIX", 423},
#line 702 "./gperf/input/g.gperf"
        {"CeXe", 702},
        {""},
        {""},
#line 12 "./gperf/input/g.gperf"
        {"zdIX ", -10},
#line 414 "./gperf/input/g.gperf"
        {"gIX", -412},
        {""},
#line 685 "./gperf/input/g.gperf"
        {"oXa ", 685},
#line 618 "./gperf/input/g.gperf"
        {" IXn", -617},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 330 "./gperf/input/g.gperf"
        {" buXu ", -328},
#line 220 "./gperf/input/g.gperf"
        {"apoX", 218},
        {""},
#line 251 "./gperf/input/g.gperf"
        {"Xrk", 249},
#line 118 "./gperf/input/g.gperf"
        {"OliX", -116},
#line 520 "./gperf/input/g.gperf"
        {"sIlX", 518},
        {""},
        {""},
#line 108 "./gperf/input/g.gperf"
        {"aXisl", 106},
        {""},
        {""},
#line 438 "./gperf/input/g.gperf"
        {"Xrafyo", 436},
#line 443 "./gperf/input/g.gperf"
        {"Xmayp", -441},
        {""},
        {""},
#line 168 "./gperf/input/g.gperf"
        {"SIlX", 166},
        {""},
        {""},
        {""},
        {""},
#line 564 "./gperf/input/g.gperf"
        {"subuX", -563},
#line 442 "./gperf/input/g.gperf"
        {"Xrafk", -440},
        {""},
#line 178 "./gperf/input/g.gperf"
        {"nbuX", -176},
        {""},
        {""},
#line 462 "./gperf/input/g.gperf"
        {"bOXe", -460},
#line 3 "./gperf/input/g.gperf"
        {" s iX", 1},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 666 "./gperf/input/g.gperf"
        {"oXre", -665},
#line 410 "./gperf/input/g.gperf"
        {"Xelm", -408},
#line 748 "./gperf/input/g.gperf"
        {"OX", 750},
        {""},
#line 518 "./gperf/input/g.gperf"
        {"iXes", -516},
        {""},
        {""},
#line 482 "./gperf/input/g.gperf"
        {"IXe", -480},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 529 "./gperf/input/g.gperf"
        {"aXandan ", 527},
#line 317 "./gperf/input/g.gperf"
        {"ikoloXl", -315},
#line 17 "./gperf/input/g.gperf"
        {"dayIX", -15},
#line 592 "./gperf/input/g.gperf"
        {"Xgs", -591},
        {""},
        {""},
        {""},
#line 253 "./gperf/input/g.gperf"
        {"bIX", -251},
#line 132 "./gperf/input/g.gperf"
        {"Xasv", -130},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 203 "./gperf/input/g.gperf"
        {" IXa", -201},
#line 512 "./gperf/input/g.gperf"
        {"deXu", -510},
        {""},
        {""},
#line 250 "./gperf/input/g.gperf"
        {"uIX", -248},
        {""},
#line 614 "./gperf/input/g.gperf"
        {"leXen ", 613},
#line 677 "./gperf/input/g.gperf"
        {"reXe ", 677},
        {""},
        {""},
#line 732 "./gperf/input/g.gperf"
        {"Xh", -732},
        {""},
        {""},
        {""},
#line 619 "./gperf/input/g.gperf"
        {"maX ", -618},
#line 14 "./gperf/input/g.gperf"
        {"p leX", 12},
#line 568 "./gperf/input/g.gperf"
        {"SeXe ", 567},
        {""},
#line 20 "./gperf/input/g.gperf"
        {"h OXe", -18},
        {""},
#line 587 "./gperf/input/g.gperf"
        {"irbaX", -586},
        {""},
#line 315 "./gperf/input/g.gperf"
        {" eleXe ", 313},
        {""},
        {""},
        {""},
#line 567 "./gperf/input/g.gperf"
        {"neXer", -566},
#line 46 "./gperf/input/g.gperf"
        {" IcoX", -44},
        {""},
#line 63 "./gperf/input/g.gperf"
        {"istiX", 61},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 679 "./gperf/input/g.gperf"
        {"Xide", -679},
#line 139 "./gperf/input/g.gperf"
        {"nouX", 137},
#line 74 "./gperf/input/g.gperf"
        {"Xarde", -72},
        {""},
        {""},
#line 684 "./gperf/input/g.gperf"
        {"auX", -684},
        {""},
#line 656 "./gperf/input/g.gperf"
        {"Xie ", -655},
#line 623 "./gperf/input/g.gperf"
        {"OXet", -622},
        {""},
#line 105 "./gperf/input/g.gperf"
        {"k daX", 103},
        {""},
#line 83 "./gperf/input/g.gperf"
        {"t aXr", 81},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 75 "./gperf/input/g.gperf"
        {"erlaX", -73},
        {""},
        {""},
        {""},
        {""},
#line 85 "./gperf/input/g.gperf"
        {"aireX", -83},
        {""},
        {""},
        {""},
        {""},
#line 559 "./gperf/input/g.gperf"
        {" eX ", 557},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 641 "./gperf/input/g.gperf"
        {"Xue", -640},
#line 523 "./gperf/input/g.gperf"
        {"fraX", -521},
#line 104 "./gperf/input/g.gperf"
        {"ca aX", 102},
#line 629 "./gperf/input/g.gperf"
        {" OXer ", -628},
        {""},
        {""},
        {""},
        {""},
#line 602 "./gperf/input/g.gperf"
        {"lIXil", -601},
#line 15 "./gperf/input/g.gperf"
        {"b OXe", -13},
        {""},
        {""},
        {""},
        {""},
#line 172 "./gperf/input/g.gperf"
        {"IbuX", -170},
#line 325 "./gperf/input/g.gperf"
        {" y doX", -323},
        {""},
#line 714 "./gperf/input/g.gperf"
        {"IXu", -714},
#line 188 "./gperf/input/g.gperf"
        {"Xges", -186},
        {""},
#line 167 "./gperf/input/g.gperf"
        {"moX ", 165},
#line 25 "./gperf/input/g.gperf"
        {"C veX", 23},
#line 713 "./gperf/input/g.gperf"
        {"aXazi", -713},
        {""},
        {""},
#line 240 "./gperf/input/g.gperf"
        {"wIX", -238},
#line 716 "./gperf/input/g.gperf"
        {"yeXe", 716},
        {""},
#line 206 "./gperf/input/g.gperf"
        {"kXi ", 204},
        {""},
        {""},
#line 441 "./gperf/input/g.gperf"
        {"ye aXi", 439},
        {""},
        {""},
        {""},
#line 31 "./gperf/input/g.gperf"
        {"diXis", 29},
        {""},
        {""},
#line 475 "./gperf/input/g.gperf"
        {"OceX", 473},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 23 "./gperf/input/g.gperf"
        {"h maX", 21},
#line 650 "./gperf/input/g.gperf"
        {"aXil ", -649},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 187 "./gperf/input/g.gperf"
        {"aXaf", -185},
        {""},
#line 155 "./gperf/input/g.gperf"
        {"i sX", 153},
        {""},
#line 542 "./gperf/input/g.gperf"
        {"viX ", 540},
        {""},
#line 341 "./gperf/input/g.gperf"
        {"C S X", 339},
        {""},
        {""},
        {""},
        {""},
#line 432 "./gperf/input/g.gperf"
        {"li OXes", -430},
#line 299 "./gperf/input/g.gperf"
        {"  fotoXrafe", -297},
#line 41 "./gperf/input/g.gperf"
        {"atsaX", -39},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 93 "./gperf/input/g.gperf"
        {"s aX ", -91},
        {""},
        {""},
#line 697 "./gperf/input/g.gperf"
        {"aXul", -697},
#line 547 "./gperf/input/g.gperf"
        {" ruX", -545},
        {""},
        {""},
#line 718 "./gperf/input/g.gperf"
        {"meXe ", 718},
        {""},
        {""},
#line 531 "./gperf/input/g.gperf"
        {"im beX", 529},
#line 729 "./gperf/input/g.gperf"
        {"araX", -729},
#line 603 "./gperf/input/g.gperf"
        {" IXl", -602},
        {""},
#line 234 "./gperf/input/g.gperf"
        {"Xerf", -232},
        {""},
        {""},
        {""},
        {""},
#line 279 "./gperf/input/g.gperf"
        {"yIX", 277},
        {""},
#line 364 "./gperf/input/g.gperf"
        {"praX ", -362},
        {""},
        {""},
        {""},
        {""},
#line 396 "./gperf/input/g.gperf"
        {"aiXe", -394},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 101 "./gperf/input/g.gperf"
        {"Xusal", -99},
        {""},
#line 59 "./gperf/input/g.gperf"
        {"Xard ", -57},
        {""},
        {""},
#line 423 "./gperf/input/g.gperf"
        {"eXg", -421},
#line 678 "./gperf/input/g.gperf"
        {"oX ", -678},
#line 606 "./gperf/input/g.gperf"
        {"Xro", -605},
        {""},
        {""},
        {""},
        {""},
#line 290 "./gperf/input/g.gperf"
        {"OXr", 288},
        {""},
        {""},
        {""},
#line 189 "./gperf/input/g.gperf"
        {"bruX", -187},
        {""},
        {""},
        {""},
#line 626 "./gperf/input/g.gperf"
        {"OpeX", 625},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 363 "./gperf/input/g.gperf"
        {"arliX", -361},
        {""},
        {""},
        {""},
#line 225 "./gperf/input/g.gperf"
        {"Xel ", -223},
        {""},
#line 92 "./gperf/input/g.gperf"
        {"Xulas", -90},
        {""},
        {""},
#line 610 "./gperf/input/g.gperf"
        {"aXle", -609},
        {""},
        {""},
        {""},
        {""},
#line 506 "./gperf/input/g.gperf"
        {"kuruX", -504},
        {""},
        {""},
        {""},
#line 100 "./gperf/input/g.gperf"
        {"n SaX", -98},
        {""},
        {""},
        {""},
        {""},
#line 345 "./gperf/input/g.gperf"
        {"luXus", -343},
        {""},
        {""},
        {""},
#line 218 "./gperf/input/g.gperf"
        {"Xlac", 216},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 395 "./gperf/input/g.gperf"
        {"aXgu", 393},
        {""},
        {""},
#line 42 "./gperf/input/g.gperf"
        {"y OXe", -40},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 194 "./gperf/input/g.gperf"
        {"Xnie", -192},
#line 39 "./gperf/input/g.gperf"
        {"akbuX", -37},
#line 196 "./gperf/input/g.gperf"
        {"duXa", -194},
        {""},
        {""},
        {""},
#line 389 "./gperf/input/g.gperf"
        {"Xse ", 387},
#line 228 "./gperf/input/g.gperf"
        {"Xame", -226},
#line 633 "./gperf/input/g.gperf"
        {"Xass", -632},
        {""},
#line 181 "./gperf/input/g.gperf"
        {"zuXd", -179},
#line 715 "./gperf/input/g.gperf"
        {"teXe", 715},
#line 339 "./gperf/input/g.gperf"
        {"iXre ", 337},
        {""},
        {""},
        {""},
#line 469 "./gperf/input/g.gperf"
        {"yeX ", 467},
        {""},
#line 215 "./gperf/input/g.gperf"
        {"duXi", 213},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 653 "./gperf/input/g.gperf"
        {"taX ", -652},
        {""},
#line 49 "./gperf/input/g.gperf"
        {"z edX", 47},
        {""},
        {""},
        {""},
#line 643 "./gperf/input/g.gperf"
        {"m aX ", -642},
        {""},
        {""},
#line 683 "./gperf/input/g.gperf"
        {"aXne", -683},
        {""},
#line 483 "./gperf/input/g.gperf"
        {"Xf ", -481},
        {""},
#line 358 "./gperf/input/g.gperf"
        {"t oXa", 356},
        {""},
#line 566 "./gperf/input/g.gperf"
        {"cIlXi", 565},
        {""},
#line 680 "./gperf/input/g.gperf"
        {"yun eX", 680},
        {""},
        {""},
        {""},
#line 575 "./gperf/input/g.gperf"
        {"Xb ", -574},
        {""},
        {""},
        {""},
#line 472 "./gperf/input/g.gperf"
        {"kruX", -470},
        {""},
        {""},
#line 137 "./gperf/input/g.gperf"
        {"naXs", -135},
        {""},
        {""},
        {""},
        {""},
#line 21 "./gperf/input/g.gperf"
        {"o taX", -19},
#line 478 "./gperf/input/g.gperf"
        {"driX", -476},
        {""},
#line 302 "./gperf/input/g.gperf"
        {"i OXeleri ", -300},
#line 91 "./gperf/input/g.gperf"
        {"lu aX", 89},
        {""},
#line 511 "./gperf/input/g.gperf"
        {"anuX", -509},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 600 "./gperf/input/g.gperf"
        {"draX", -599},
#line 686 "./gperf/input/g.gperf"
        {"aXg", -686},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 174 "./gperf/input/g.gperf"
        {"eXn ", -172},
        {""},
#line 32 "./gperf/input/g.gperf"
        {"dedeX", -30},
        {""},
        {""},
        {""},
        {""},
#line 131 "./gperf/input/g.gperf"
        {"OzUX", -129},
        {""},
#line 10 "./gperf/input/g.gperf"
        {"teXes", -8},
        {""},
#line 371 "./gperf/input/g.gperf"
        {"a daX", 369},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 134 "./gperf/input/g.gperf"
        {"toX ", 132},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 634 "./gperf/input/g.gperf"
        {"Xas ", -633},
        {""},
        {""},
#line 50 "./gperf/input/g.gperf"
        {"azbeX", -48},
        {""},
        {""},
#line 305 "./gperf/input/g.gperf"
        {"ve yaXin", -303},
        {""},
        {""},
        {""},
        {""},
#line 350 "./gperf/input/g.gperf"
        {"aptiX", -348},
        {""},
        {""},
        {""},
        {""},
#line 304 "./gperf/input/g.gperf"
        {"k liXini ", 302},
#line 486 "./gperf/input/g.gperf"
        {"Xd ", -484},
#line 9 "./gperf/input/g.gperf"
        {"aroXu", -7},
        {""},
        {""},
        {""},
#line 528 "./gperf/input/g.gperf"
        {"Xy ", -526},
        {""},
        {""},
        {""},
#line 458 "./gperf/input/g.gperf"
        {"bu aX", 456},
        {""},
        {""},
        {""},
        {""},
#line 43 "./gperf/input/g.gperf"
        {"nuraX", -41},
        {""},
        {""},
#line 593 "./gperf/input/g.gperf"
        {"aXasi ", 592},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 232 "./gperf/input/g.gperf"
        {"aXe ", -230},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 673 "./gperf/input/g.gperf"
        {"aXip ", -673},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 237 "./gperf/input/g.gperf"
        {"tIXi", 235},
        {""},
#line 394 "./gperf/input/g.gperf"
        {"Xuti", -392},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 344 "./gperf/input/g.gperf"
        {"t OXe", -342},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 87 "./gperf/input/g.gperf"
        {"Xers ", -85},
        {""},
        {""},
        {""},
        {""},
#line 676 "./gperf/input/g.gperf"
        {"Xay ", -676},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 58 "./gperf/input/g.gperf"
        {"attiX", -56},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 704 "./gperf/input/g.gperf"
        {"aXre", -704},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 369 "./gperf/input/g.gperf"
        {"en OX", 367},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 312 "./gperf/input/g.gperf"
        {"d baXir", -310},
#line 337 "./gperf/input/g.gperf"
        {"Xunus", 335},
        {""},
#line 22 "./gperf/input/g.gperf"
        {"e eX ", -20},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 11 "./gperf/input/g.gperf"
        {"Ig aX", -9},
        {""},
        {""},
        {""},
        {""},
#line 53 "./gperf/input/g.gperf"
        {"ereX ", 51},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 169 "./gperf/input/g.gperf"
        {"Xva ", 167},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 114 "./gperf/input/g.gperf"
        {"Xerce", -112},
        {""},
        {""},
        {""},
        {""},
#line 310 "./gperf/input/g.gperf"
        {"r buXu ", 308},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 657 "./gperf/input/g.gperf"
        {"Xs ", -656},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 700 "./gperf/input/g.gperf"
        {"neXe ", 700},
        {""},
        {""},
        {""},
        {""},
#line 515 "./gperf/input/g.gperf"
        {"truX", -513},
        {""},
        {""},
#line 262 "./gperf/input/g.gperf"
        {"Xp ", -260},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 509 "./gperf/input/g.gperf"
        {"ir aX", 507},
        {""},
        {""},
#line 322 "./gperf/input/g.gperf"
        {"a OXes", -320},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 124 "./gperf/input/g.gperf"
        {"neX ", 122},
        {""},
        {""},
#line 90 "./gperf/input/g.gperf"
        {"az aX", 88},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 334 "./gperf/input/g.gperf"
        {"aXaz ", -332},
#line 662 "./gperf/input/g.gperf"
        {"aXac", 661},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 285 "./gperf/input/g.gperf"
        {"Xt ", -283},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 343 "./gperf/input/g.gperf"
        {"dIXan", -341},
#line 359 "./gperf/input/g.gperf"
        {"nz aX", -357},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 173 "./gperf/input/g.gperf"
        {"Xnac", -171},
        {""},
        {""},
#line 455 "./gperf/input/g.gperf"
        {"e taX", -453},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 514 "./gperf/input/g.gperf"
        {"eXm ", -512},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 78 "./gperf/input/g.gperf"
        {"dIXil", -76},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 682 "./gperf/input/g.gperf"
        {"dar tuXla ", -682},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 561 "./gperf/input/g.gperf"
        {"Xrap", -559},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 473 "./gperf/input/g.gperf"
        {"druX", -471},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 13 "./gperf/input/g.gperf"
        {"i teX", 11},
        {""},
        {""},
        {""},
        {""},
#line 301 "./gperf/input/g.gperf"
        {"ik OXeler ", -299},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 201 "./gperf/input/g.gperf"
        {"Xgoz", 199},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 314 "./gperf/input/g.gperf"
        {"aXusta ", -312},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 307 "./gperf/input/g.gperf"
        {"a bu OXe", -305},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 464 "./gperf/input/g.gperf"
        {" IX ", -462},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 348 "./gperf/input/g.gperf"
        {"OndeX", -346},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 604 "./gperf/input/g.gperf"
        {"IXaz", -603},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 311 "./gperf/input/g.gperf"
        {"ir doXm", -309},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 609 "./gperf/input/g.gperf"
        {"aXuc", -608},
#line 362 "./gperf/input/g.gperf"
        {"Ir aX", 360},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 552 "./gperf/input/g.gperf"
        {"er OXe", -550},
#line 431 "./gperf/input/g.gperf"
        {"an OXeler ", -429},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 370 "./gperf/input/g.gperf"
        {"OrneX", 368},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 110 "./gperf/input/g.gperf"
        {"Xute ", -108},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 321 "./gperf/input/g.gperf"
        {"ar moX", -319},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
#line 297 "./gperf/input/g.gperf"
        {"lI diyaloXun ", -295}};

    if (len <= HASHMAP_G_MAX_WORD_LENGTH && len >= HASHMAP_G_MIN_WORD_LENGTH) {
        unsigned int key = hash(str, len);

        if (key <= HASHMAP_G_MAX_HASH_VALUE) {
            const char* s = wordlist[key].name;

            if (*str == *s && !strncmp(str + 1, s + 1, len - 1) && s[len] == '\0')
                return &wordlist[key];
        }
    }
    return 0;
}
