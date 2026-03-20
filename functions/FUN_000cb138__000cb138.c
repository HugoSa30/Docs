/*
 * Program: n42.bin
 * Function: FUN_000cb138
 * Entry: 000cb138
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cb138(void)

{
  int in_TBLr;
  
  _DAT_003fb620 = _DAT_003fb620 + (_DAT_003fb61c + (in_TBLr - common_rt) & 0xffff);
  common_rt = in_TBLr + _DAT_003fb61c;
  return;
}

