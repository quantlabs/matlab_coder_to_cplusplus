/*
 * hello_world.cpp
 *
 * Code generation for function 'hello_world'
 *
 * C source code generated on: Mon Dec 12 15:32:35 2011
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "hello_world.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
void hello_world(char_T y[12])
{
  int32_T i0;
  static const char_T cv0[12] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r',
    'l', 'd', '!' };

  for (i0 = 0; i0 < 12; i0++) {
    y[i0] = cv0[i0];
  }
}

void hello_world_initialize(void)
{
  rt_InitInfAndNaN(8U);
}

void hello_world_terminate(void)
{
  /* (no terminate code required) */
}

/* End of code generation (hello_world.cpp) */
