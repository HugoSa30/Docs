/*
 * Program: n42.bin
 * Function: FUN_000de2d4
 * Entry: 000de2d4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000de2d4(void)

{
  ffzanz = calc_value_from_x_y_2(&KFFFANZ,tmot,nmot);
  if (((ffzanz == 0) || (CW_FFZ == '\0')) || (zwout < -0x1b)) {
    B_ff = 0;
    ffztof_w = 0;
    ffztld_w = 0;
  }
  else {
    ffztld_w = calc_value_from_y(&FFLDZ,ub_w);
    if (25000 < ffztld_w) {
      ffztld_w = 25000;
    }
    ffztof_w = _FFZOF;
    B_ff = 1;
  }
  return;
}

