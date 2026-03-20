/*
 * Program: n42.bin
 * Function: FUN_000e401c
 * Entry: 000e401c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e401c(void)

{
  int in_TBLr;
  
  _DAT_003fb608 = _DAT_003fb608 + (_DAT_003fb604 + (in_TBLr - common_rt) & 0xffff);
  common_rt = in_TBLr + _DAT_003fb604;
  return;
}

