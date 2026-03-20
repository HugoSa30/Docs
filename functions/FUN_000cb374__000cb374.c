/*
 * Program: n42.bin
 * Function: FUN_000cb374
 * Entry: 000cb374
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cb374(void)

{
  int in_TBLr;
  
  _DAT_003fb62c = _DAT_003fb62c + (_DAT_003fb628 + (in_TBLr - common_rt) & 0xffff);
  common_rt = in_TBLr + _DAT_003fb628;
  return;
}

