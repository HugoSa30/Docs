/*
 * Program: n42.bin
 * Function: FUN_0015bd14
 * Entry: 0015bd14
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0015bd14(int param_1)

{
  uint uVar1;
  
  *(undefined *)(param_1 + 8) = 0;
  uVar1 = *(byte *)(param_1 + 0xd) + 1;
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *(char *)(param_1 + 0xd) = (char)uVar1;
  *(char *)(param_1 + 0xc) = (char)uVar1;
  *(word *)(param_1 + 10) = lastmodz_w;
  flgst_w = 0;
  return;
}

