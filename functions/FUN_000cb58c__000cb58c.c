/*
 * Program: n42.bin
 * Function: FUN_000cb58c
 * Entry: 000cb58c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cb58c(void)

{
  int in_TBLr;
  
  _DAT_003fb644 = _DAT_003fb644 + (_DAT_003fb640 + (in_TBLr - common_rt) & 0xffff);
  common_rt = in_TBLr + _DAT_003fb640;
  return;
}

