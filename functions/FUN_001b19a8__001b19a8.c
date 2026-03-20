/*
 * Program: n42.bin
 * Function: FUN_001b19a8
 * Entry: 001b19a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001b19a8(int param_1,int param_2)

{
  uint uVar1;
  char cVar3;
  undefined4 uVar2;
  int iVar4;
  int iVar5;
  
  cVar3 = (*(code *)&SUB_00069008)(param_1);
  if (cVar3 == '\0') {
    uVar2 = 0;
  }
  else {
    iVar5 = param_1 * 0xc;
    iVar4 = _DAT_003fc7f4 + iVar5;
    if (*(char *)(iVar4 + 9) == '\0') {
      *(int *)(*(int *)(_DAT_003fc7f4 + iVar5) + 0x18) =
           1 << ((uint)*(byte *)(iVar4 + 8) * 2 & 0x3f);
    }
    else {
      uVar1 = (uint)*(byte *)(iVar4 + 8) * 2;
      *(uint *)(*(int *)(_DAT_003fc7f4 + iVar5) + 0x14) =
           *(uint *)(*(int *)(_DAT_003fc7f4 + iVar5) + 0x14) & ~(1 << (uVar1 & 0x3f)) |
           (uint)(param_2 != 0) << (uVar1 & 0x3f);
      *(int *)(*(int *)(_DAT_003fc7f4 + iVar5) + 0x18) =
           2 << ((uint)*(byte *)(_DAT_003fc7f4 + iVar5 + 8) * 2 & 0x3f);
    }
    *(undefined4 *)(&UNK_003fc7f8 + param_1 * 4) = 2;
    uVar2 = 1;
  }
  return uVar2;
}

