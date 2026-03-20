/*
 * Program: n42.bin
 * Function: FUN_001b046c
 * Entry: 001b046c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b046c(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  DAT_003fc6db = (undefined)param_1;
  uVar3 = 0;
  do {
    iVar4 = uVar3 * 0xc;
    if (*(int *)(_DAT_003fc674 + iVar4) != 0) {
      uVar2 = (*(code *)&SUB_00faf200)(*(int *)(_DAT_003fc674 + iVar4),uVar3);
      uVar2 = uVar2 & 2;
      if (param_1 == 0) {
        uVar2 = uVar2 | 1;
      }
      uVar1 = (uint)*(byte *)(_DAT_003fc674 + iVar4 + 8) * 2;
      *(uint *)(*(int *)(_DAT_003fc674 + iVar4) + 0x14) =
           *(uint *)(*(int *)(_DAT_003fc674 + iVar4) + 0x14) & ~(3 << (uVar1 & 0x3f)) |
           uVar2 << (uVar1 & 0x3f);
    }
    uVar3 = uVar3 + 1 & 0xffff;
  } while (uVar3 < 8);
  return;
}

