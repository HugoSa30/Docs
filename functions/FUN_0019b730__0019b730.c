/*
 * Program: n42.bin
 * Function: FUN_0019b730
 * Entry: 0019b730
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019b730(void)

{
  int in_TBLr;
  
  _DAT_003fb614 = _DAT_003fb614 + (_DAT_003fb610 + (in_TBLr - common_rt) & 0xffff);
  common_rt = in_TBLr + _DAT_003fb610;
  return;
}

