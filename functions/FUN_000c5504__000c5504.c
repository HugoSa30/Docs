/*
 * Program: n42.bin
 * Function: FUN_000c5504
 * Entry: 000c5504
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c5504(void)

{
  int in_TBLr;
  
  rt_taskEveryToothIntISR = (short)_DAT_003fb65c + ((short)in_TBLr - (short)common_rt);
  common_rt = in_TBLr + _DAT_003fb65c;
  return;
}

