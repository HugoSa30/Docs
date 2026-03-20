/*
 * Program: n42.bin
 * Function: FUN_000c55f8
 * Entry: 000c55f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c55f8(void)

{
  int in_TBLr;
  
  rt_umtask = (short)_DAT_003fb660 + ((short)in_TBLr - (short)common_rt);
  common_rt = in_TBLr + _DAT_003fb660;
  return;
}

