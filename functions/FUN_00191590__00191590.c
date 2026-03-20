/*
 * Program: n42.bin
 * Function: FUN_00191590
 * Entry: 00191590
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00191590(void)

{
  int in_TBLr;
  
  DAT_005b8ae0 = DAT_005b8ae0 + (DAT_005b8adc + (in_TBLr - common_rt) & 0xffff);
  common_rt = in_TBLr + DAT_005b8adc;
  return;
}

