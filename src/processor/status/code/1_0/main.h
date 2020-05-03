// HTTP old generation (v0.9, v1.0, v1.1) C library.
// Copyright (c) 2019 AUTHORS, MIT License.

// This file was generated, do not edit manually.

// It may not be possible to run generator while cross compiling.
// So generated file should be distributed with its template.

#if !defined(HOG_PROCESSOR_STATUS_CODE_1_0_H)
#define HOG_PROCESSOR_STATUS_CODE_1_0_H

#include <stdbool.h>

#include "../../../../common.h"
#include "../../../../log.h"

extern const hog_processor_state_fast_t HOG_PROCESSOR_STATUS_CODE_1_0_INITIAL_STATE;

extern const hog_processor_state_fast_t HOG_PROCESSOR_STATUS_CODE_1_0_CONSTANTS_LENGTH;

extern const uint_fast16_t HOG_PROCESSOR_STATUS_CODE_1_0_ALPHABET_LENGTH;
extern const uint_fast16_t HOG_PROCESSOR_STATUS_CODE_1_0_ALPHABET_MAX_LENGTH;

extern const hog_symbol_fast_t HOG_PROCESSOR_STATUS_CODE_1_0_UNDEFINED_SYMBOL;
extern const hog_symbol_t      HOG_PROCESSOR_STATUS_CODE_1_0_SYMBOL_BY_BYTES[];

typedef uint8_t hog_processor_status_code_1_0_state_t;

extern const hog_processor_status_code_1_0_state_t HOG_PROCESSOR_STATUS_CODE_1_0_NEXT_STATE_BY_LAST_SYMBOLS[];

inline hog_processor_state_fast_t hog_processor_status_code_1_0_get_next_state(
  hog_processor_state_fast_t state, hog_symbol_fast_t byte)
{
  hog_symbol_fast_t symbol = HOG_PROCESSOR_STATUS_CODE_1_0_SYMBOL_BY_BYTES[byte];

  // We need to verify symbol if alphabet is not full.
  if (HOG_PROCESSOR_STATUS_CODE_1_0_ALPHABET_LENGTH != HOG_PROCESSOR_STATUS_CODE_1_0_ALPHABET_MAX_LENGTH && symbol == HOG_PROCESSOR_STATUS_CODE_1_0_UNDEFINED_SYMBOL) {
    HOG_LOG_ERROR("status_code_1_0 processor received invalid byte: %u", byte);
    return HOG_PROCESSOR_STATUS_CODE_1_0_INITIAL_STATE;
  }

  return HOG_PROCESSOR_STATUS_CODE_1_0_NEXT_STATE_BY_LAST_SYMBOLS[state * HOG_PROCESSOR_STATUS_CODE_1_0_ALPHABET_LENGTH + symbol];
}

inline bool hog_processor_status_code_1_0_is_valid(hog_processor_state_fast_t state)
{
  // State of each constant equals to its index.
  return state < HOG_PROCESSOR_STATUS_CODE_1_0_CONSTANTS_LENGTH;
}

#endif // HOG_PROCESSOR_STATUS_CODE_1_0_H
