/*
 * Program: n42.bin
 * Function: FUN_0010dc28
 * Entry: 0010dc28
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010dc28(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_003fffa3 = *(undefined *)(_DAT_003fbb8c + (uint)DAT_003fbb90 * 0x14);
  iVar1 = _DAT_003fbb8c + (uint)DAT_003fbb90 * 0x14;
  DAT_003fffa4 = *(undefined *)(iVar1 + 1);
  _DAT_003fbaa4 = *(undefined4 **)(iVar1 + 0x10);
  _8(*(undefined *)(iVar1 + 8));
  puVar2 = (undefined4 *)_DAT_003fbaa4[3];
  _DAT_003fff88 = *puVar2;
  _DAT_003fff8c = puVar2[1];
  _DAT_003fff90 = puVar2[2];
  _DAT_003fff94 = puVar2[3];
  _DAT_003fff98 = puVar2[4];
  _DAT_003fffcc = 0;
  (**(code **)(_DAT_003fbb8c + (uint)DAT_003fbb90 * 0x14 + 0xc))();
  FUN_0010b178(*_DAT_003fbaa4,_DAT_003fbaa4[1],*(undefined *)(_DAT_003fbaa4 + 2));
  return;
}

