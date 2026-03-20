/*
 * Program: n42.bin
 * Function: FUN_000910d8
 * Entry: 000910d8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000910d8(void)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  
  uVar2 = 0;
  piVar1 = &DAT_005b63c8;
  do {
    *piVar1 = (int)(&UNK_003f6348 + *piVar1);
    piVar1 = piVar1 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  uVar2 = 0;
  piVar1 = &DAT_005b6378;
  do {
    *piVar1 = (int)(&UNK_003f6348 + *piVar1);
    piVar1 = piVar1 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  uVar2 = 0;
  puVar3 = &UNK_005b6388;
  do {
    *(undefined **)(puVar3 + 4) = &UNK_003f6348 + *(int *)(puVar3 + 4);
    *(undefined **)(puVar3 + 8) = &UNK_003f6348 + *(int *)(puVar3 + 8);
    puVar3 = puVar3 + 0xc;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  uVar4 = 0;
  piVar1 = (int *)(&UNK_003f6350 + _LAB_001c0028);
  uVar2 = (uint)LAB_001c002c_3;
  do {
    *piVar1 = (int)(&UNK_003f6348 + *piVar1);
    piVar1 = piVar1 + 5;
    uVar4 = uVar4 + 1;
  } while (uVar4 < uVar2);
  DAT_005b6370 = &UNK_003f6348 + (int)DAT_005b6370;
  return;
}

