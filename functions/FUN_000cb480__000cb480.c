/*
 * Program: n42.bin
 * Function: FUN_000cb480
 * Entry: 000cb480
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cb480(void)

{
  int in_TBLr;
  
  _DAT_003fb638 = _DAT_003fb638 + (_DAT_003fb634 + (in_TBLr - common_rt) & 0xffff);
  common_rt = in_TBLr + _DAT_003fb634;
  return;
}

