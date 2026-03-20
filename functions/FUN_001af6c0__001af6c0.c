/*
 * Program: n42.bin
 * Function: FUN_001af6c0
 * Entry: 001af6c0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001af6c0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  DAT_003fc3dc = 0;
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 8;
    *(undefined4 *)(&UNK_003fc3a8 + iVar1) = 0;
    *(undefined4 *)(&DAT_003fc370 + iVar1) = 0;
    *(undefined4 *)(&UNK_003fc3a4 + iVar1) = 0;
    *(undefined4 *)(&DAT_003fc36c + iVar1) = 0;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 7);
  _DAT_00300000 = 0x200;
  _DAT_00300004 = 0xffa0;
  (*(code *)&SUB_00faf5b0)();
  _DAT_003fc360 = *param_1;
  _DAT_003fc364 = param_1[1];
  _DAT_00304000 = 0x8000;
  _DAT_00304400 = 0x8000;
  _DAT_00304028 = 0;
  _DAT_00304428 = 0;
  (*(code *)&SUB_00facd30)(0,5);
  uVar2 = 0;
  do {
    *(undefined2 *)(&UNK_00304100 + uVar2 * 2) = 0;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x80);
  uVar2 = 0;
  do {
    *(undefined2 *)(&UNK_00304500 + uVar2 * 2) = 0;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x80);
  _DAT_00304028 = 0x4c;
  _DAT_00304428 = 0x4c;
  _DAT_00304008 = _DAT_00304008 & 0xf83f | 0x400;
  _DAT_00304408 = _DAT_00304408 & 0xf83f | 0x500;
  _DAT_00304000 = 0x4e0;
  _DAT_00304400 = 0x4e0;
  return;
}

