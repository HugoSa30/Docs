/*
 * Program: n42.bin
 * Function: FUN_001b0314
 * Entry: 001b0314
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001b0314(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = 0;
  do {
    iVar5 = uVar3 * 0xc;
    if (*(int *)(param_1 + iVar5) == 0) {
      *(undefined4 *)(&UNK_003fc67c + iVar5) = 0;
    }
    else {
      iVar4 = param_1 + iVar5;
      (*(code *)&SUB_00faf170)(*(int *)(param_1 + iVar5),*(undefined *)(iVar4 + 8),0);
      bVar1 = *(byte *)(iVar4 + 8);
      iVar6 = *(int *)(param_1 + iVar5);
      *(ushort *)(iVar6 + 0x20) = ~(ushort)(1 << (bVar1 & 0x3f));
      uVar2 = (uint)bVar1 * 2;
      *(uint *)(iVar6 + 0x14) =
           *(uint *)(iVar6 + 0x14) & ~(3 << (uVar2 & 0x3f)) | 1 << (uVar2 & 0x3f);
      bVar1 = *(byte *)(iVar4 + 8);
      iVar6 = *(int *)(param_1 + iVar5);
      *(int *)(iVar6 + 0x18) = 2 << ((uint)bVar1 * 2 & 0x3f);
      (*(code *)&SUB_00faf2d0)(iVar6,(uint)bVar1,9);
      (*(code *)&SUB_00faf214)(*(undefined4 *)(param_1 + iVar5),*(undefined *)(iVar4 + 8),1);
      *(undefined4 *)(&UNK_003fc67c + iVar5) = 1;
    }
    uVar3 = uVar3 + 1 & 0xffff;
  } while (uVar3 < 8);
  (*(code *)&SUB_00faf9a8)(5);
  return;
}

