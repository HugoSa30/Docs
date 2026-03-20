/*
 * Program: n42.bin
 * Function: FUN_0010ef68
 * Entry: 0010ef68
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0010ef68(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_005baa10 + 0x10) + param_1 * 0x18;
  *(byte *)(iVar1 + 0xc) = param_2 | *(byte *)(iVar1 + 0xc) & 0xf0;
  *(undefined *)(iVar1 + 0xd) = 0;
  return;
}

