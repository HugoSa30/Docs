/*
 * Program: n42.bin
 * Function: FUN_00096cfc
 * Entry: 00096cfc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00096cfc(undefined2 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  *param_1 = 0xa0;
  param_1[0x14] = 0;
  puVar1 = param_1 + 0x78;
  iVar2 = 0x10;
  do {
    puVar1 = puVar1 + 8;
    *puVar1 = 0xc;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 6) = 0x22222222;
  *(undefined4 *)(param_1 + 8) = 0x22222222;
  *(undefined4 *)(param_1 + 0xe) = 0x15554;
  *(undefined4 *)(param_1 + 0xc) = 0x3fffc;
  *(undefined4 *)(param_1 + 0xc) = 0x2aaa8;
  return;
}

