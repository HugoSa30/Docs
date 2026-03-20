/*
 * Program: n42.bin
 * Function: FUN_0009817c
 * Entry: 0009817c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009817c(int param_1)

{
  undefined uVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x14;
  uVar1 = 0;
  *(undefined *)(_DAT_003fae80 + iVar2 + 8) = 0;
  *(undefined *)(_DAT_003fae80 + iVar2 + 9) = *(undefined *)(_DAT_003faf10 + param_1 * 0x18 + 3);
  FUN_00098110();
  *(undefined *)(_DAT_003fae80 + iVar2 + 0xc) = uVar1;
  *(undefined *)(_DAT_003fae80 + iVar2 + 0x10) = uVar1;
  *(undefined *)(_DAT_003fae80 + iVar2 + 0x11) = uVar1;
  return;
}

