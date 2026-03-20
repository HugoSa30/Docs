/*
 * Program: n42.bin
 * Function: FUN_000981f0
 * Entry: 000981f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000981f0(uint param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x14;
  *(undefined *)(_DAT_003fae80 + iVar1 + 8) = 0;
  *(byte *)(_DAT_003fae80 + iVar1 + 0xb) = *(byte *)(_DAT_003fae80 + iVar1 + 0xb) & 0xf0;
  *(undefined *)(_DAT_003fae80 + iVar1 + 0xc) = 1;
  *(char *)(_DAT_003fae80 + iVar1 + 0x10) = *(char *)(_DAT_003fae80 + iVar1 + 0x10) + '\x01';
  *(byte *)(_DAT_003fae80 + iVar1 + 0xf) = *(byte *)(_DAT_003fae80 + iVar1 + 0xf) & 0xea;
  if ((_DAT_003faec4 >> (param_1 & 0x3f) & 1) == 0) {
    FUN_00098110();
  }
  else {
    *(undefined *)(_DAT_003fae80 + iVar1 + 10) = 3;
  }
  return;
}

