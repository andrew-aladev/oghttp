// HTTP old generation (v0.9, v1.0, v1.1) C library.
// Copyright (c) 2019 AUTHORS, MIT License.

// This file was generated, do not edit manually.

// It may not be possible to run generator while cross compiling.
// So generated file should be shipped with its template.

#include ".h"

const size_t HOG_PROCESSOR_METHOD_1_1_CONSTANTS_LENGTH = 39;

const hog_processor_state_fast_t HOG_PROCESSOR_METHOD_1_1_INITIAL_STATE = HOG_PROCESSOR_METHOD_1_1_CONSTANTS_LENGTH;

const size_t HOG_PROCESSOR_METHOD_1_1_ALPHABET_LENGTH     = 23;
const size_t HOG_PROCESSOR_METHOD_1_1_ALPHABET_MAX_LENGTH = HOG_MAX_SYMBOL + 1;

const hog_symbol_fast_t HOG_PROCESSOR_METHOD_1_1_UNDEFINED_SYMBOL = HOG_MAX_SYMBOL;

#define SYMBOL_BY_BYTES_LENGTH HOG_MAX_SYMBOL + 1

// clang-format off

const hog_symbol_t HOG_PROCESSOR_METHOD_1_1_SYMBOL_BY_BYTES[SYMBOL_BY_BYTES_LENGTH] = {
  [0 ... SYMBOL_BY_BYTES_LENGTH - 1] = HOG_PROCESSOR_METHOD_1_1_UNDEFINED_SYMBOL,
  [71] = 0,
  [69] = 1,
  [84] = 2,
  [72] = 3,
  [65] = 4,
  [68] = 5,
  [80] = 6,
  [79] = 7,
  [83] = 8,
  [85] = 9,
  [76] = 10,
  [67] = 11,
  [78] = 12,
  [73] = 13,
  [82] = 14,
  [75] = 15,
  [70] = 16,
  [77] = 17,
  [89] = 18,
  [86] = 19,
  [66] = 20,
  [45] = 21,
  [87] = 22};

// clang-format on

#define NEXT_STATE_BY_LAST_SYMBOLS_LENGTH (223 + 1) * HOG_PROCESSOR_METHOD_1_1_ALPHABET_LENGTH

// clang-format off

const hog_processor_method_1_1_state_t HOG_PROCESSOR_METHOD_1_1_NEXT_STATE_BY_LAST_SYMBOLS[NEXT_STATE_BY_LAST_SYMBOLS_LENGTH] = {
  [0 ... NEXT_STATE_BY_LAST_SYMBOLS_LENGTH - 1] = HOG_PROCESSOR_METHOD_1_1_INITIAL_STATE,
  [681] = 200,
  [897] = 40,
  [899] = 66,
  [900] = 42,
  [901] = 113,
  [902] = 49,
  [903] = 45,
  [904] = 60,
  [905] = 118,
  [906] = 76,
  [907] = 73,
  [908] = 54,
  [911] = 108,
  [914] = 91,
  [916] = 123,
  [917] = 102,
  [921] = 41,
  [945] = 0,
  [967] = 43,
  [993] = 44,
  [1017] = 1,
  [1039] = 70,
  [1042] = 46,
  [1044] = 48,
  [1049] = 81,
  [1066] = 47,
  [1083] = 2,
  [1106] = 3,
  [1128] = 50,
  [1160] = 51,
  [1174] = 52,
  [1198] = 53,
  [1220] = 4,
  [1245] = 137,
  [1249] = 55,
  [1271] = 95,
  [1277] = 56,
  [1300] = 57,
  [1312] = 58,
  [1345] = 59,
  [1359] = 5,
  [1386] = 61,
  [1394] = 210,
  [1405] = 62,
  [1439] = 63,
  [1456] = 64,
  [1484] = 65,
  [1503] = 6,
  [1532] = 67,
  [1545] = 68,
  [1575] = 69,
  [1588] = 7,
  [1612] = 71,
  [1644] = 72,
  [1659] = 8,
  [1683] = 163,
  [1686] = 98,
  [1692] = 74,
  [1714] = 75,
  [1740] = 9,
  [1754] = 159,
  [1760] = 77,
  [1781] = 78,
  [1782] = 144,
  [1791] = 105,
  [1801] = 100,
  [1807] = 79,
  [1829] = 80,
  [1855] = 10,
  [1870] = 82,
  [1876] = 38,
  [1892] = 83,
  [1915] = 87,
  [1925] = 84,
  [1945] = 85,
  [1967] = 86,
  [1983] = 11,
  [2005] = 88,
  [2026] = 89,
  [2058] = 90,
  [2073] = 12,
  [2094] = 166,
  [2100] = 96,
  [2108] = 92,
  [2120] = 183,
  [2127] = 93,
  [2130] = 190,
  [2138] = 151,
  [2143] = 218,
  [2146] = 94,
  [2172] = 13,
  [2203] = 14,
  [2227] = 97,
  [2232] = 15,
  [2265] = 99,
  [2292] = 16,
  [2311] = 101,
  [2338] = 17,
  [2350] = 169,
  [2359] = 103,
  [2381] = 104,
  [2397] = 18,
  [2428] = 106,
  [2450] = 107,
  [2466] = 19,
  [2485] = 109,
  [2513] = 115,
  [2527] = 110,
  [2543] = 111,
  [2565] = 112,
  [2581] = 20,
  [2610] = 114,
  [2632] = 21,
  [2652] = 116,
  [2682] = 117,
  [2693] = 22,
  [2715] = 119,
  [2741] = 120,
  [2774] = 121,
  [2794] = 122,
  [2809] = 23,
  [2830] = 124,
  [2866] = 125,
  [2883] = 126,
  [2911] = 127,
  [2928] = 128,
  [2956] = 129,
  [2988] = 130,
  [3001] = 131,
  [3020] = 132,
  [3048] = 133,
  [3061] = 134,
  [3096] = 135,
  [3112] = 136,
  [3138] = 24,
  [3152] = 138,
  [3185] = 139,
  [3212] = 140,
  [3227] = 141,
  [3233] = 143,
  [3252] = 142,
  [3268] = 25,
  [3301] = 26,
  [3315] = 145,
  [3336] = 146,
  [3369] = 147,
  [3396] = 148,
  [3411] = 149,
  [3436] = 150,
  [3452] = 27,
  [3480] = 152,
  [3510] = 153,
  [3534] = 154,
  [3550] = 155,
  [3571] = 156,
  [3592] = 157,
  [3622] = 158,
  [3635] = 28,
  [3662] = 160,
  [3684] = 161,
  [3705] = 162,
  [3727] = 29,
  [3769] = 164,
  [3773] = 165,
  [3805] = 30,
  [3832] = 167,
  [3841] = 168,
  [3865] = 31,
  [3895] = 170,
  [3911] = 171,
  [3943] = 172,
  [3969] = 173,
  [3991] = 174,
  [4003] = 175,
  [4046] = 176,
  [4059] = 177,
  [4078] = 178,
  [4106] = 179,
  [4119] = 180,
  [4154] = 181,
  [4170] = 182,
  [4196] = 32,
  [4220] = 184,
  [4234] = 185,
  [4268] = 186,
  [4297] = 187,
  [4314] = 188,
  [4326] = 189,
  [4365] = 33,
  [4371] = 191,
  [4398] = 192,
  [4429] = 193,
  [4453] = 194,
  [4463] = 195,
  [4496] = 196,
  [4510] = 197,
  [4545] = 198,
  [4555] = 199,
  [4593] = 34,
  [4601] = 201,
  [4628] = 202,
  [4659] = 203,
  [4683] = 204,
  [4693] = 205,
  [4726] = 206,
  [4740] = 207,
  [4775] = 208,
  [4785] = 209,
  [4823] = 35,
  [4835] = 211,
  [4854] = 212,
  [4890] = 213,
  [4905] = 214,
  [4926] = 215,
  [4947] = 216,
  [4979] = 217,
  [4994] = 36,
  [5024] = 219,
  [5038] = 220,
  [5072] = 221,
  [5088] = 222,
  [5110] = 223,
  [5143] = 37};

// clang-format on

extern inline hog_processor_state_fast_t hog_processor_method_1_1_get_next_state(
  hog_processor_state_fast_t state, hog_symbol_fast_t byte);

extern inline bool hog_processor_method_1_1_is_finished(hog_processor_state_fast_t state);