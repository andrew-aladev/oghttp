// HTTP old generation (v0.9, v1.0, v1.1) C library.
// Copyright (c) 2019 AUTHORS, MIT License.

#include "max_state.h"

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "common.h"

int check_max_state()
{
  size_t max_state = strlen(CONSTANT);
  if (max_state > UINT32_MAX) {
    PRINT_ERROR("max state is too big\n");
    return 1;
  }

  return 0;
}