/*
 * Program: n42.bin
 * Function: FUN_001b1820
 * Entry: 001b1820
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001b1820(int param_1,int param_2)

{
  uint uVar1;
  char cVar3;
  undefined4 uVar2;
  int iVar4;
  
  cVar3 = (*(code *)&SUB_00069008)(param_1);
  if (cVar3 == '\0') {
    uVar2 = 0;
  }
  else {
    iVar4 = param_1 * 0xc;
    if (*(char *)(_DAT_003fc7f4 + iVar4 + 9) != '\0') {
      uVar1 = (uint)*(byte *)(_DAT_003fc7f4 + iVar4 + 8) * 2;
      *(uint *)(*(int *)(_DAT_003fc7f4 + iVar4) + 0x14) =
           *(uint *)(*(int *)(_DAT_003fc7f4 + iVar4) + 0x14) & ~(1 << (uVar1 & 0x3f)) |
           (uint)(param_2 != 0) << (uVar1 & 0x3f);
      *(int *)(*(int *)(_DAT_003fc7f4 + iVar4) + 0x18) =
           2 << ((uint)*(byte *)(_DAT_003fc7f4 + iVar4 + 8) * 2 & 0x3f);
    }
    *(undefined4 *)(&UNK_003fc7f8 + param_1 * 4) = 1;
    uVar2 = 1;
  }
  return uVar2;
}

