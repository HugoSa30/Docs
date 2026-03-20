/*
 * Program: n42.bin
 * Function: FUN_000d0178
 * Entry: 000d0178
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d0178(void)

{
  if ((B_pwgnotfr == '\0') && (_WPKDMN <= wped_w)) {
    if ((uint)UPWGKDU << 2 < (uint)upwgej_w) {
      if ((uint)UPWGKDO << 2 <= (uint)upwgej_w) {
        B_kd = 1;
      }
    }
    else {
      B_kd = 0;
    }
  }
  else {
    B_kd = 0;
  }
  return;
}

