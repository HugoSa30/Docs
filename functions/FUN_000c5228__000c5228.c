/*
 * Program: n42.bin
 * Function: FUN_000c5228
 * Entry: 000c5228
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c5228(void)

{
  int in_TBLr;
  
  rt_taskCamshaft1 = (short)_DAT_003fb650 + ((short)in_TBLr - (short)common_rt);
  common_rt = in_TBLr + _DAT_003fb650;
  return;
}

