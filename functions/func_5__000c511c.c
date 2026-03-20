/*
 * Program: n42.bin
 * Function: func_5
 * Entry: 000c511c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_5(void)

{
  int in_TBLr;
  
  _DAT_003fb5e4 = _DAT_003fb5e4 + (_DAT_003fb5e0 + (in_TBLr - common_rt) & 0xffff);
  common_rt = in_TBLr + _DAT_003fb5e0;
  return;
}

