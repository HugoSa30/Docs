/*
 * Program: n42.bin
 * Function: FUN_00155c84
 * Entry: 00155c84
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00155c84(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_00156cd8(param_1 + 0x14);
  FUN_00155bb0(param_1 + 0x16,param_2);
  uVar1 = 6;
  do {
    *(undefined *)(param_1 + uVar1 + 0x14) = 0xff;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 0x12);
  return;
}

