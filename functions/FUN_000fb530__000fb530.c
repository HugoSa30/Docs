/*
 * Program: n42.bin
 * Function: FUN_000fb530
 * Entry: 000fb530
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fb530(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = _DAT_003fbcbc;
  _DAT_002fc240 = _DAT_002fc240 & 0x83;
  _DAT_003fbcb4 = 0xffffffff;
  _DAT_003fbcc0 = 0x6c7b0;
  _DAT_003fbcc4 = 0;
  _DAT_003fbce0 = 0;
  _DAT_003fbcdc = 0;
  _DAT_003fbcec = 0;
  _DAT_003fbce4 = 0;
  _DAT_003fbce8 = 0;
  uVar2 = 0;
  if (*(int *)(_DAT_003fbcbc + 4) != 0) {
    puVar3 = (undefined4 *)(*(int *)(_DAT_003fbcbc + 0x60) + -0x10);
    do {
      puVar3[4] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      *(undefined *)(puVar3 + 7) = 0;
      *(undefined *)((int)puVar3 + 0x1d) = 0x80;
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 4;
    } while (uVar2 < *(uint *)(iVar1 + 4));
  }
  *(undefined **)(*(int *)(iVar1 + 0x60) + 8) = &DAT_003fbcc0;
  _DAT_003fbcd4 = &DAT_003fbcc0;
  return;
}

