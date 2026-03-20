/*
 * Program: n42.bin
 * Function: FUN_000a2e58
 * Entry: 000a2e58
 * Exported by: ExportAllDecompiledFunctions.java
 */


byte FUN_000a2e58(undefined4 param_1,int param_2,undefined2 *param_3)

{
  byte bVar1;
  byte bVar2;
  
  param_2 = param_2 * 2;
  bVar2 = DAT_003fa1d8 | (&UNK_003fa51d)[param_2];
  bVar1 = (&UNK_003fa51c)[param_2];
  *param_3 = 0xffff;
  (&UNK_003fa51d)[param_2] = 0;
  return bVar2 | bVar1;
}

