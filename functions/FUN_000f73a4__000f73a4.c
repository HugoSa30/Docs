/*
 * Program: n42.bin
 * Function: FUN_000f73a4
 * Entry: 000f73a4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f73a4(int param_1)

{
  uint uVar1;
  char cVar3;
  undefined4 uVar2;
  int iVar4;
  
  cVar3 = (*(code *)&SUB_00fabc28)(param_1);
  if (cVar3 == '\0') {
    uVar2 = 0;
  }
  else {
    iVar4 = param_1 * 0x70;
    if ((&UNK_003fc454)[iVar4] == '\x01') {
      (&UNK_003fc452)[iVar4] = 3;
    }
    else {
      (&UNK_003fc452)[iVar4] = 0;
      if (((&UNK_003fc450)[iVar4] & 1) != 0) {
        (&UNK_003fc452)[iVar4] = (&UNK_003fc452)[iVar4] | 1;
      }
      if (((&UNK_003fc450)[iVar4] & 2) != 0) {
        (&UNK_003fc452)[iVar4] = (&UNK_003fc452)[iVar4] | 2;
      }
      if (((&UNK_003fc451)[iVar4] & 1) != 0) {
        (&UNK_003fc452)[iVar4] = (&UNK_003fc452)[iVar4] | 1;
      }
      if (((&UNK_003fc451)[iVar4] & 2) != 0) {
        (&UNK_003fc452)[iVar4] = (&UNK_003fc452)[iVar4] | 2;
      }
    }
    if (2 < *(int *)(&UNK_003fc44c + iVar4)) {
      param_1 = param_1 * 0xc;
      uVar1 = (uint)*(byte *)(_DAT_003fc5a8 + param_1 + 8) * 2;
      *(uint *)(*(int *)(_DAT_003fc5a8 + param_1) + 0x14) =
           *(uint *)(*(int *)(_DAT_003fc5a8 + param_1) + 0x14) & ~(3 << (uVar1 & 0x3f)) |
           ((byte)(&UNK_003fc452)[iVar4] & 3) << (uVar1 & 0x3f);
      *(int *)(*(int *)(_DAT_003fc5a8 + param_1) + 0x18) =
           2 << ((uint)*(byte *)(_DAT_003fc5a8 + param_1 + 8) * 2 & 0x3f);
    }
    uVar2 = 1;
  }
  return uVar2;
}

