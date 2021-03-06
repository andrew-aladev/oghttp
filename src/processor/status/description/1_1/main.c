// Old generation HTTP (v0.9, v1.0, v1.1) C library.
// Copyright (c) 2019 AUTHORS, MIT License.

// This file was generated, do not edit manually.

// It may not be possible to run generator while cross compiling.
// So generated file should be distributed with its template.

#include "main.h"

const ogh_processor_state_fast_t OGH_PROCESSOR_STATUS_DESCRIPTION_1_1_CONSTANTS_LENGTH = 69;

const ogh_processor_state_fast_t OGH_PROCESSOR_STATUS_DESCRIPTION_1_1_INITIAL_STATE =
  OGH_PROCESSOR_STATUS_DESCRIPTION_1_1_CONSTANTS_LENGTH;

const uint_fast16_t OGH_PROCESSOR_STATUS_DESCRIPTION_1_1_ALPHABET_LENGTH     = 50;
const uint_fast16_t OGH_PROCESSOR_STATUS_DESCRIPTION_1_1_ALPHABET_MAX_LENGTH = OGH_MAX_SYMBOL + 1;

const ogh_byte_fast_t OGH_PROCESSOR_STATUS_DESCRIPTION_1_1_UNDEFINED_SYMBOL = OGH_MAX_SYMBOL;

#define SYMBOL_BY_BYTES_LENGTH OGH_PROCESSOR_STATUS_DESCRIPTION_1_1_ALPHABET_MAX_LENGTH

// clang-format off

const ogh_byte_t OGH_PROCESSOR_STATUS_DESCRIPTION_1_1_SYMBOL_BY_BYTES[SYMBOL_BY_BYTES_LENGTH] = {
  [0 ... SYMBOL_BY_BYTES_LENGTH - 1] = OGH_PROCESSOR_STATUS_DESCRIPTION_1_1_UNDEFINED_SYMBOL,
  [67] = 0,
  [111] = 1,
  [110] = 2,
  [116] = 3,
  [105] = 4,
  [117] = 5,
  [101] = 6,
  [83] = 7,
  [119] = 8,
  [99] = 9,
  [104] = 10,
  [103] = 11,
  [32] = 12,
  [80] = 13,
  [114] = 14,
  [108] = 15,
  [115] = 16,
  [69] = 17,
  [97] = 18,
  [121] = 19,
  [72] = 20,
  [79] = 21,
  [75] = 22,
  [100] = 23,
  [65] = 24,
  [112] = 25,
  [78] = 26,
  [45] = 27,
  [118] = 28,
  [73] = 29,
  [102] = 30,
  [109] = 31,
  [82] = 32,
  [77] = 33,
  [85] = 34,
  [70] = 35,
  [120] = 36,
  [40] = 37,
  [41] = 38,
  [84] = 39,
  [66] = 40,
  [113] = 41,
  [122] = 42,
  [98] = 43,
  [71] = 44,
  [76] = 45,
  [107] = 46,
  [68] = 47,
  [86] = 48,
  [87] = 49};

// clang-format on

#define NEXT_STATE_BY_LAST_SYMBOLS_LENGTH (965 + 1) * OGH_PROCESSOR_STATUS_DESCRIPTION_1_1_ALPHABET_LENGTH

// clang-format off

const ogh_processor_status_description_1_1_state_t OGH_PROCESSOR_STATUS_DESCRIPTION_1_1_NEXT_STATE_BY_LAST_SYMBOLS[NEXT_STATE_BY_LAST_SYMBOLS_LENGTH] = {
  [0 ... NEXT_STATE_BY_LAST_SYMBOLS_LENGTH - 1] = OGH_PROCESSOR_STATUS_DESCRIPTION_1_1_INITIAL_STATE,
  [3450] = 70,
  [3457] = 77,
  [3463] = 95,
  [3467] = 104,
  [3470] = 734,
  [3471] = 114,
  [3474] = 120,
  [3476] = 127,
  [3479] = 212,
  [3482] = 162,
  [3483] = 187,
  [3484] = 263,
  [3485] = 243,
  [3487] = 271,
  [3489] = 278,
  [3490] = 311,
  [3494] = 420,
  [3495] = 423,
  [3497] = 873,
  [3498] = 759,
  [3501] = 71,
  [3514] = 115,
  [3552] = 72,
  [3603] = 73,
  [3630] = 416,
  [3654] = 74,
  [3702] = 75,
  [3755] = 76,
  [3806] = 0,
  [3856] = 247,
  [3858] = 78,
  [3904] = 79,
  [3953] = 80,
  [4009] = 81,
  [4060] = 82,
  [4104] = 83,
  [4152] = 84,
  [4211] = 85,
  [4262] = 86,
  [4313] = 87,
  [4364] = 88,
  [4401] = 89,
  [4453] = 90,
  [4501] = 91,
  [4559] = 92,
  [4601] = 93,
  [4665] = 94,
  [4716] = 1,
  [4756] = 295,
  [4764] = 96,
  [4768] = 174,
  [4801] = 97,
  [4806] = 437,
  [4859] = 98,
  [4886] = 379,
  [4906] = 99,
  [4966] = 100,
  [5016] = 101,
  [5054] = 102,
  [5102] = 103,
  [5161] = 2,
  [5218] = 105,
  [5236] = 514,
  [5264] = 106,
  [5315] = 107,
  [5369] = 108,
  [5412] = 109,
  [5470] = 110,
  [5504] = 111,
  [5552] = 112,
  [5603] = 113,
  [5666] = 3,
  [5722] = 4,
  [5756] = 116,
  [5818] = 117,
  [5853] = 118,
  [5906] = 119,
  [5973] = 5,
  [6009] = 121,
  [6015] = 198,
  [6059] = 122,
  [6106] = 123,
  [6175] = 124,
  [6203] = 125,
  [6256] = 126,
  [6323] = 6,
  [6351] = 128,
  [6356] = 815,
  [6402] = 129,
  [6403] = 254,
  [6412] = 155,
  [6477] = 130,
  [6524] = 131,
  [6555] = 132,
  [6603] = 133,
  [6660] = 134,
  [6701] = 135,
  [6764] = 136,
  [6804] = 137,
  [6853] = 138,
  [6918] = 139,
  [6953] = 140,
  [7004] = 141,
  [7078] = 142,
  [7106] = 143,
  [7162] = 144,
  [7229] = 145,
  [7252] = 146,
  [7330] = 147,
  [7351] = 148,
  [7414] = 149,
  [7481] = 150,
  [7518] = 151,
  [7553] = 152,
  [7604] = 153,
  [7651] = 154,
  [7702] = 7,
  [7750] = 156,
  [7801] = 157,
  [7852] = 158,
  [7903] = 159,
  [7956] = 160,
  [8002] = 161,
  [8053] = 8,
  [8106] = 163,
  [8118] = 495,
  [8166] = 164,
  [8178] = 857,
  [8191] = 404,
  [8206] = 165,
  [8225] = 844,
  [8253] = 166,
  [8312] = 167,
  [8350] = 168,
  [8401] = 169,
  [8452] = 170,
  [8503] = 171,
  [8556] = 172,
  [8602] = 173,
  [8653] = 9,
  [8714] = 175,
  [8719] = 331,
  [8753] = 176,
  [8804] = 177,
  [8868] = 178,
  [8915] = 179,
  [8962] = 180,
  [9000] = 181,
  [9051] = 182,
  [9102] = 183,
  [9153] = 184,
  [9206] = 185,
  [9252] = 186,
  [9303] = 10,
  [9351] = 228,
  [9354] = 530,
  [9355] = 188,
  [9356] = 354,
  [9415] = 189,
  [9453] = 190,
  [9504] = 191,
  [9575] = 218,
  [9577] = 192,
  [9607] = 193,
  [9653] = 194,
  [9718] = 195,
  [9753] = 196,
  [9805] = 197,
  [9866] = 11,
  [9914] = 199,
  [9956] = 200,
  [10018] = 201,
  [10073] = 202,
  [10119] = 203,
  [10162] = 204,
  [10232] = 205,
  [10256] = 206,
  [10325] = 207,
  [10351] = 208,
  [10414] = 209,
  [10453] = 210,
  [10506] = 211,
  [10573] = 12,
  [10602] = 670,
  [10633] = 213,
  [10662] = 214,
  [10734] = 215,
  [10766] = 216,
  [10806] = 217,
  [10873] = 13,
  [10915] = 219,
  [10956] = 220,
  [11012] = 221,
  [11050] = 222,
  [11110] = 223,
  [11151] = 224,
  [11204] = 225,
  [11259] = 226,
  [11306] = 227,
  [11366] = 14,
  [11428] = 229,
  [11456] = 230,
  [11523] = 231,
  [11562] = 232,
  [11613] = 233,
  [11656] = 234,
  [11714] = 235,
  [11781] = 236,
  [11818] = 237,
  [11852] = 238,
  [11906] = 239,
  [11952] = 240,
  [12003] = 241,
  [12065] = 242,
  [12119] = 15,
  [12151] = 244,
  [12168] = 568,
  [12205] = 245,
  [12214] = 344,
  [12252] = 246,
  [12323] = 16,
  [12356] = 248,
  [12364] = 705,
  [12412] = 249,
  [12471] = 250,
  [12503] = 251,
  [12560] = 252,
  [12606] = 253,
  [12664] = 17,
  [12712] = 255,
  [12767] = 808,
  [12774] = 370,
  [12779] = 689,
  [12783] = 256,
  [12785] = 350,
  [12801] = 257,
  [12873] = 258,
  [12904] = 259,
  [12980] = 260,
  [13004] = 261,
  [13056] = 262,
  [13123] = 18,
  [13152] = 321,
  [13166] = 264,
  [13175] = 590,
  [13182] = 466,
  [13206] = 265,
  [13262] = 266,
  [13313] = 267,
  [13364] = 268,
  [13401] = 269,
  [13486] = 270,
  [13519] = 19,
  [13584] = 272,
  [13602] = 273,
  [13655] = 274,
  [13716] = 275,
  [13756] = 276,
  [13823] = 277,
  [13888] = 20,
  [13901] = 583,
  [13906] = 279,
  [13914] = 929,
  [13981] = 280,
  [14025] = 281,
  [14051] = 282,
  [14114] = 283,
  [14168] = 284,
  [14214] = 285,
  [14269] = 286,
  [14312] = 287,
  [14382] = 288,
  [14406] = 289,
  [14473] = 290,
  [14504] = 291,
  [14564] = 292,
  [14606] = 293,
  [14659] = 294,
  [14703] = 21,
  [14764] = 296,
  [14831] = 297,
  [14868] = 298,
  [14902] = 299,
  [14956] = 300,
  [15002] = 301,
  [15053] = 302,
  [15112] = 303,
  [15182] = 304,
  [15206] = 305,
  [15273] = 306,
  [15304] = 307,
  [15364] = 308,
  [15406] = 309,
  [15459] = 310,
  [15503] = 22,
  [15568] = 312,
  [15623] = 313,
  [15662] = 314,
  [15732] = 315,
  [15744] = 699,
  [15756] = 316,
  [15841] = 317,
  [15855] = 318,
  [15906] = 319,
  [15966] = 320,
  [16003] = 23,
  [16066] = 476,
  [16068] = 322,
  [16075] = 547,
  [16105] = 323,
  [16128] = 645,
  [16153] = 324,
  [16210] = 325,
  [16251] = 326,
  [16314] = 327,
  [16354] = 328,
  [16442] = 329,
  [16456] = 330,
  [16523] = 24,
  [16565] = 453,
  [16581] = 332,
  [16606] = 333,
  [16652] = 334,
  [16703] = 335,
  [16762] = 336,
  [16832] = 337,
  [16856] = 338,
  [16941] = 339,
  [16955] = 340,
  [17004] = 341,
  [17064] = 342,
  [17106] = 343,
  [17173] = 25,
  [17243] = 345,
  [17254] = 346,
  [17323] = 347,
  [17373] = 348,
  [17406] = 349,
  [17452] = 26,
  [17501] = 351,
  [17555] = 352,
  [17602] = 353,
  [17673] = 27,
  [17703] = 355,
  [17760] = 356,
  [17801] = 357,
  [17873] = 358,
  [17912] = 359,
  [17976] = 360,
  [18001] = 361,
  [18053] = 362,
  [18112] = 363,
  [18174] = 364,
  [18215] = 365,
  [18265] = 366,
  [18301] = 367,
  [18358] = 368,
  [18406] = 369,
  [18473] = 28,
  [18509] = 371,
  [18559] = 372,
  [18606] = 373,
  [18675] = 374,
  [18703] = 375,
  [18768] = 376,
  [18843] = 377,
  [18865] = 378,
  [18906] = 29,
  [18969] = 380,
  [19012] = 381,
  [19074] = 382,
  [19105] = 383,
  [19153] = 384,
  [19210] = 385,
  [19256] = 386,
  [19302] = 387,
  [19353] = 388,
  [19404] = 389,
  [19459] = 390,
  [19518] = 391,
  [19553] = 392,
  [19604] = 393,
  [19651] = 394,
  [19702] = 395,
  [19762] = 396,
  [19832] = 397,
  [19856] = 398,
  [19941] = 399,
  [19955] = 400,
  [20004] = 401,
  [20064] = 402,
  [20106] = 403,
  [20173] = 30,
  [20205] = 405,
  [20256] = 406,
  [20316] = 407,
  [20353] = 408,
  [20412] = 409,
  [20470] = 623,
  [20489] = 410,
  [20504] = 411,
  [20581] = 412,
  [20606] = 413,
  [20651] = 414,
  [20705] = 415,
  [20753] = 31,
  [20815] = 417,
  [20854] = 418,
  [20909] = 419,
  [20953] = 32,
  [21001] = 421,
  [21018] = 721,
  [21052] = 422,
  [21106] = 33,
  [21151] = 564,
  [21156] = 424,
  [21202] = 425,
  [21261] = 426,
  [21303] = 427,
  [21360] = 428,
  [21412] = 429,
  [21482] = 430,
  [21506] = 431,
  [21591] = 432,
  [21605] = 433,
  [21654] = 434,
  [21714] = 435,
  [21756] = 436,
  [21823] = 34,
  [21859] = 438,
  [21901] = 439,
  [21952] = 440,
  [22023] = 441,
  [22054] = 442,
  [22103] = 443,
  [22154] = 444,
  [22201] = 445,
  [22252] = 446,
  [22312] = 447,
  [22382] = 604,
  [22385] = 448,
  [22418] = 449,
  [22454] = 450,
  [22515] = 451,
  [22556] = 452,
  [22623] = 35,
  [22651] = 454,
  [22718] = 455,
  [22773] = 456,
  [22812] = 457,
  [22889] = 458,
  [22901] = 459,
  [22951] = 460,
  [23012] = 461,
  [23095] = 462,
  [23118] = 463,
  [23164] = 464,
  [23211] = 465,
  [23256] = 36,
  [23329] = 467,
  [23362] = 468,
  [23439] = 469,
  [23451] = 470,
  [23501] = 471,
  [23562] = 472,
  [23645] = 473,
  [23651] = 474,
  [23702] = 475,
  [23761] = 37,
  [23805] = 477,
  [23875] = 478,
  [23925] = 479,
  [23951] = 480,
  [24014] = 481,
  [24053] = 482,
  [24106] = 483,
  [24173] = 484,
  [24212] = 485,
  [24283] = 486,
  [24306] = 487,
  [24373] = 488,
  [24404] = 489,
  [24468] = 490,
  [24512] = 491,
  [24589] = 492,
  [24619] = 493,
  [24675] = 494,
  [24706] = 38,
  [24752] = 496,
  [24811] = 497,
  [24856] = 498,
  [24912] = 499,
  [24976] = 500,
  [25001] = 501,
  [25053] = 502,
  [25112] = 503,
  [25157] = 504,
  [25218] = 505,
  [25253] = 506,
  [25304] = 507,
  [25366] = 508,
  [25430] = 509,
  [25454] = 510,
  [25518] = 511,
  [25593] = 512,
  [25615] = 513,
  [25656] = 39,
  [25725] = 515,
  [25756] = 516,
  [25809] = 517,
  [25853] = 518,
  [25918] = 519,
  [25953] = 520,
  [26004] = 521,
  [26051] = 522,
  [26102] = 523,
  [26162] = 524,
  [26235] = 525,
  [26268] = 526,
  [26304] = 527,
  [26365] = 528,
  [26406] = 529,
  [26473] = 40,
  [26516] = 531,
  [26559] = 912,
  [26573] = 532,
  [26604] = 533,
  [26664] = 534,
  [26706] = 535,
  [26759] = 536,
  [26803] = 537,
  [26856] = 538,
  [26923] = 539,
  [26962] = 540,
  [27032] = 541,
  [27056] = 542,
  [27141] = 543,
  [27155] = 544,
  [27206] = 545,
  [27266] = 546,
  [27303] = 41,
  [27364] = 548,
  [27401] = 549,
  [27459] = 550,
  [27506] = 551,
  [27566] = 552,
  [27616] = 553,
  [27668] = 554,
  [27743] = 555,
  [27765] = 556,
  [27806] = 557,
  [27862] = 558,
  [27917] = 559,
  [27952] = 560,
  [28003] = 561,
  [28054] = 562,
  [28103] = 563,
  [28169] = 42,
  [28201] = 798,
  [28209] = 565,
  [28296] = 566,
  [28306] = 567,
  [28373] = 43,
  [28404] = 569,
  [28465] = 570,
  [28506] = 571,
  [28573] = 572,
  [28612] = 573,
  [28697] = 574,
  [28706] = 575,
  [28775] = 576,
  [28806] = 577,
  [28852] = 578,
  [28923] = 579,
  [28956] = 580,
  [29002] = 581,
  [29059] = 582,
  [29119] = 44,
  [29151] = 584,
  [29212] = 585,
  [29267] = 586,
  [29283] = 611,
  [29318] = 587,
  [29364] = 588,
  [29415] = 589,
  [29469] = 45,
  [29511] = 591,
  [29564] = 592,
  [29618] = 593,
  [29673] = 594,
  [29706] = 595,
  [29762] = 596,
  [29832] = 597,
  [29856] = 598,
  [29941] = 599,
  [29955] = 600,
  [30004] = 601,
  [30064] = 602,
  [30106] = 603,
  [30173] = 46,
  [30206] = 605,
  [30291] = 606,
  [30305] = 607,
  [30354] = 608,
  [30414] = 609,
  [30456] = 610,
  [30523] = 47,
  [30568] = 612,
  [30602] = 613,
  [30669] = 614,
  [30712] = 615,
  [30782] = 616,
  [30806] = 617,
  [30891] = 618,
  [30905] = 619,
  [30956] = 620,
  [31016] = 621,
  [31053] = 622,
  [31116] = 48,
  [31156] = 624,
  [31218] = 625,
  [31273] = 626,
  [31306] = 627,
  [31364] = 628,
  [31412] = 629,
  [31485] = 630,
  [31504] = 631,
  [31556] = 632,
  [31615] = 633,
  [31673] = 634,
  [31716] = 635,
  [31762] = 636,
  [31839] = 637,
  [31851] = 638,
  [31901] = 639,
  [31962] = 640,
  [32045] = 641,
  [32068] = 642,
  [32114] = 643,
  [32161] = 644,
  [32206] = 49,
  [32268] = 646,
  [32304] = 647,
  [32365] = 648,
  [32418] = 649,
  [32493] = 650,
  [32515] = 651,
  [32556] = 652,
  [32612] = 653,
  [32685] = 654,
  [32701] = 655,
  [32764] = 656,
  [32812] = 657,
  [32895] = 658,
  [32906] = 659,
  [32961] = 660,
  [33018] = 661,
  [33065] = 662,
  [33112] = 663,
  [33182] = 664,
  [33206] = 665,
  [33268] = 666,
  [33316] = 667,
  [33351] = 668,
  [33402] = 669,
  [33466] = 50,
  [33503] = 671,
  [33516] = 781,
  [33556] = 672,
  [33614] = 673,
  [33652] = 674,
  [33718] = 675,
  [33765] = 676,
  [33812] = 677,
  [33857] = 678,
  [33906] = 679,
  [33964] = 680,
  [34028] = 681,
  [34056] = 682,
  [34114] = 683,
  [34162] = 684,
  [34217] = 685,
  [34264] = 686,
  [34314] = 687,
  [34351] = 688,
  [34414] = 51,
  [34481] = 690,
  [34525] = 691,
  [34565] = 692,
  [34606] = 693,
  [34681] = 694,
  [34706] = 695,
  [34752] = 696,
  [34803] = 697,
  [34856] = 698,
  [34923] = 52,
  [34968] = 700,
  [35003] = 701,
  [35056] = 702,
  [35108] = 703,
  [35168] = 704,
  [35219] = 53,
  [35278] = 706,
  [35304] = 707,
  [35359] = 708,
  [35406] = 709,
  [35462] = 710,
  [35534] = 711,
  [35552] = 712,
  [35618] = 713,
  [35678] = 714,
  [35718] = 715,
  [35754] = 716,
  [35815] = 717,
  [35868] = 718,
  [35943] = 719,
  [35965] = 720,
  [36006] = 54,
  [36053] = 722,
  [36106] = 723,
  [36158] = 724,
  [36218] = 725,
  [36269] = 726,
  [36312] = 727,
  [36389] = 728,
  [36404] = 729,
  [36481] = 730,
  [36506] = 731,
  [36551] = 732,
  [36605] = 733,
  [36653] = 55,
  [36706] = 894,
  [36739] = 735,
  [36789] = 736,
  [36813] = 737,
  [36862] = 738,
  [36948] = 739,
  [36956] = 740,
  [37014] = 741,
  [37066] = 742,
  [37104] = 743,
  [37151] = 744,
  [37202] = 745,
  [37262] = 746,
  [37326] = 747,
  [37351] = 748,
  [37403] = 749,
  [37462] = 750,
  [37507] = 751,
  [37555] = 752,
  [37625] = 753,
  [37675] = 754,
  [37701] = 755,
  [37764] = 756,
  [37803] = 757,
  [37856] = 758,
  [37923] = 56,
  [37968] = 760,
  [38014] = 761,
  [38054] = 762,
  [38118] = 763,
  [38152] = 764,
  [38203] = 765,
  [38262] = 766,
  [38324] = 767,
  [38365] = 768,
  [38416] = 769,
  [38451] = 770,
  [38512] = 771,
  [38576] = 772,
  [38606] = 773,
  [38661] = 774,
  [38701] = 775,
  [38753] = 776,
  [38804] = 777,
  [38868] = 778,
  [38903] = 779,
  [38956] = 780,
  [39016] = 57,
  [39055] = 782,
  [39130] = 783,
  [39180] = 784,
  [39204] = 785,
  [39259] = 786,
  [39304] = 787,
  [39356] = 788,
  [39402] = 789,
  [39453] = 790,
  [39512] = 791,
  [39557] = 792,
  [39603] = 793,
  [39651] = 794,
  [39714] = 795,
  [39768] = 796,
  [39811] = 797,
  [39856] = 58,
  [39925] = 799,
  [39962] = 800,
  [40047] = 801,
  [40056] = 802,
  [40103] = 803,
  [40156] = 804,
  [40209] = 805,
  [40253] = 806,
  [40306] = 807,
  [40373] = 59,
  [40436] = 809,
  [40453] = 810,
  [40506] = 811,
  [40552] = 812,
  [40623] = 813,
  [40656] = 814,
  [40723] = 60,
  [40753] = 816,
  [40808] = 817,
  [40851] = 818,
  [40914] = 819,
  [40996] = 820,
  [41012] = 821,
  [41074] = 822,
  [41105] = 823,
  [41153] = 824,
  [41210] = 825,
  [41256] = 826,
  [41302] = 827,
  [41353] = 828,
  [41404] = 829,
  [41459] = 830,
  [41518] = 831,
  [41553] = 832,
  [41604] = 833,
  [41651] = 834,
  [41702] = 835,
  [41762] = 836,
  [41832] = 837,
  [41856] = 838,
  [41941] = 839,
  [41955] = 840,
  [42004] = 841,
  [42064] = 842,
  [42106] = 843,
  [42173] = 61,
  [42201] = 845,
  [42252] = 846,
  [42316] = 847,
  [42356] = 848,
  [42412] = 849,
  [42454] = 850,
  [42516] = 851,
  [42562] = 852,
  [42607] = 853,
  [42653] = 854,
  [42718] = 855,
  [42765] = 856,
  [42806] = 62,
  [42868] = 858,
  [42915] = 859,
  [42954] = 860,
  [43023] = 861,
  [43068] = 862,
  [43103] = 863,
  [43154] = 864,
  [43201] = 865,
  [43252] = 866,
  [43312] = 867,
  [43385] = 868,
  [43418] = 869,
  [43454] = 870,
  [43515] = 871,
  [43556] = 872,
  [43623] = 63,
  [43654] = 874,
  [43716] = 875,
  [43759] = 876,
  [43801] = 877,
  [43852] = 878,
  [43902] = 879,
  [43956] = 880,
  [44009] = 881,
  [44053] = 882,
  [44106] = 883,
  [44173] = 884,
  [44212] = 885,
  [44271] = 886,
  [44325] = 887,
  [44356] = 888,
  [44414] = 889,
  [44468] = 890,
  [44503] = 891,
  [44554] = 892,
  [44601] = 893,
  [44652] = 64,
  [44705] = 895,
  [44764] = 896,
  [44804] = 897,
  [44866] = 898,
  [44903] = 899,
  [44954] = 900,
  [45009] = 901,
  [45062] = 902,
  [45117] = 903,
  [45186] = 904,
  [45225] = 905,
  [45254] = 906,
  [45314] = 907,
  [45368] = 908,
  [45403] = 909,
  [45454] = 910,
  [45501] = 911,
  [45552] = 65,
  [45606] = 913,
  [45665] = 914,
  [45715] = 915,
  [45768] = 916,
  [45802] = 917,
  [45856] = 918,
  [45901] = 919,
  [45955] = 920,
  [46016] = 921,
  [46062] = 922,
  [46113] = 949,
  [46149] = 923,
  [46168] = 924,
  [46214] = 925,
  [46252] = 926,
  [46304] = 927,
  [46352] = 928,
  [46411] = 66,
  [46468] = 930,
  [46502] = 931,
  [46566] = 932,
  [46630] = 933,
  [46651] = 934,
  [46714] = 935,
  [46781] = 936,
  [46818] = 937,
  [46853] = 938,
  [46904] = 939,
  [46951] = 940,
  [47002] = 941,
  [47062] = 942,
  [47124] = 943,
  [47175] = 944,
  [47225] = 945,
  [47265] = 946,
  [47304] = 947,
  [47356] = 948,
  [47423] = 67,
  [47456] = 950,
  [47514] = 951,
  [47566] = 952,
  [47604] = 953,
  [47666] = 954,
  [47703] = 955,
  [47756] = 956,
  [47802] = 957,
  [47853] = 958,
  [47912] = 959,
  [47999] = 960,
  [48018] = 961,
  [48064] = 962,
  [48102] = 963,
  [48154] = 964,
  [48202] = 965,
  [48261] = 68};

// clang-format on

extern inline ogh_processor_state_fast_t ogh_processor_status_description_1_1_get_next_state(
  ogh_processor_state_fast_t state,
  ogh_byte_fast_t            byte);

extern inline bool ogh_processor_status_description_1_1_is_valid(ogh_processor_state_fast_t state);
