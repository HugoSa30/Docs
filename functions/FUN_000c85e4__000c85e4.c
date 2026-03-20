/*
 * Program: n42.bin
 * Function: FUN_000c85e4
 * Entry: 000c85e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c85e4(void)

{
  int in_TBLr;
  
  _DAT_003fb5fc = _DAT_003fb5fc + (_DAT_003fb5f8 + (in_TBLr - common_rt) & 0xffff);
  common_rt = in_TBLr + _DAT_003fb5f8;
  return;
}

