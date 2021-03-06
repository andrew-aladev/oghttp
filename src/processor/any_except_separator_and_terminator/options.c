// Old generation HTTP (v0.9, v1.0, v1.1) C library.
// Copyright (c) 2019 AUTHORS, MIT License.

// This file is intended to be used by generator only.

#include "options.h"

#include <limits.h>

// RFC 1945 - B Tolerant Applications.
// RFC 7230 - 3.5 Message Parsing Robustness.

const ogh_alphabet_range_t OGH_ALPHABET_RANGES[]      = {{CHAR_MIN, CHAR_MAX}};
const size_t               OGH_ALPHABET_RANGES_LENGTH = sizeof(OGH_ALPHABET_RANGES) / sizeof(OGH_ALPHABET_RANGES[0]);

const char   OGH_ALPHABET[]      = {' ', '\t', '\v', '\f', '\r', '\n'};
const size_t OGH_ALPHABET_LENGTH = sizeof(OGH_ALPHABET) / sizeof(OGH_ALPHABET[0]);

const ogh_alphabet_mode_t OGH_ALPHABET_MODE = OGH_ALPHABET_EXCLUDING_BYTES_FROM_RANGES;

const size_t OGH_MIN_LENGTH = 1;
const size_t OGH_MAX_LENGTH = UINT16_MAX;
