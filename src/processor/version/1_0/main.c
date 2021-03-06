// Old generation HTTP (v0.9, v1.0, v1.1) C library.
// Copyright (c) 2019 AUTHORS, MIT License.

// This file was generated, do not edit manually.

// It may not be possible to run generator while cross compiling.
// So generated file should be distributed with its template.

#include "main.h"

const ogh_processor_state_fast_t OGH_PROCESSOR_VERSION_1_0_INITIAL_STATE = 0;

const ogh_byte_t OGH_PROCESSOR_VERSION_1_0_CONSTANT_SYMBOLS[] = {0x31, 0x2e, 0x30};

const ogh_processor_state_fast_t OGH_PROCESSOR_VERSION_1_0_CONSTANT_LENGTH = 3;

extern inline ogh_processor_state_fast_t ogh_processor_version_1_0_get_next_state(
  ogh_processor_state_fast_t state,
  ogh_byte_fast_t            byte);

extern inline bool ogh_processor_version_1_0_is_valid(ogh_processor_state_fast_t state);
