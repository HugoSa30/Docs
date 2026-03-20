/*
 * Program: n42.bin
 * Function: calc_comonrt2
 * Entry: 000c8248
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void calc_comonrt2(void)

{
  int in_TBLr;
  
  _DAT_003fb5f0 = _DAT_003fb5f0 + (_DAT_003fb5ec + (in_TBLr - common_rt) & 0xffff);
  common_rt = in_TBLr + _DAT_003fb5ec;
  return;
}

