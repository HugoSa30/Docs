/*
 * Program: n42.bin
 * Function: FUN_000a4498
 * Entry: 000a4498
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_000a4498(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  
  (&DAT_003051c0)[param_1] = 0;
  pbVar1 = &DAT_003051c0 + param_1;
  *pbVar1 = *pbVar1 & 0xf0;
  *pbVar1 = *pbVar1 | *(byte *)(param_2 + 0x17424) & 0xf;
  if (param_3 == 0) {
    *pbVar1 = *pbVar1 & 0xdf;
  }
  else {
    *pbVar1 = *pbVar1 | 0x20;
  }
  if (param_4 == 0) {
    *pbVar1 = *pbVar1 & 0xbf;
  }
  else {
    *pbVar1 = *pbVar1 | 0x40;
  }
  if (param_5 == 0) {
    *pbVar1 = *pbVar1 & 0x7f;
  }
  else {
    *pbVar1 = *pbVar1 | 0x80;
  }
  if (param_6 == 0) {
    *pbVar1 = *pbVar1 & 0xef;
  }
  else {
    *pbVar1 = *pbVar1 | 0x10;
  }
  return 1;
}

