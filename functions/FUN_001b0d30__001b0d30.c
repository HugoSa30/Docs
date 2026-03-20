/*
 * Program: n42.bin
 * Function: FUN_001b0d30
 * Entry: 001b0d30
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001b0d30(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = 0;
  do {
    iVar6 = uVar3 * 0xc;
    if (*(int *)(param_1 + iVar6) != 0) {
      iVar5 = param_1 + iVar6;
      (*(code *)&SUB_00faf170)(*(int *)(param_1 + iVar6),*(undefined *)(iVar5 + 8),0);
      bVar1 = *(byte *)(iVar5 + 8);
      iVar4 = *(int *)(param_1 + iVar6);
      *(ushort *)(iVar4 + 0x20) = ~(ushort)(1 << (bVar1 & 0x3f));
      uVar2 = (uint)bVar1 * 2;
      *(uint *)(iVar4 + 0x14) =
           *(uint *)(iVar4 + 0x14) & ~(3 << (uVar2 & 0x3f)) | 0 << (uVar2 & 0x3f);
      (*(code *)&SUB_00faf2d0)(*(undefined4 *)(param_1 + iVar6),*(undefined *)(iVar5 + 8),0xd);
      bVar1 = *(byte *)(iVar5 + 8);
      iVar6 = *(int *)(param_1 + iVar6);
      *(int *)(iVar6 + 0x18) = 2 << ((uint)bVar1 * 2 & 0x3f);
      (*(code *)&SUB_00faf214)(iVar6,(uint)bVar1,2);
    }
    *(undefined4 *)(&UNK_003fc724 + uVar3 * 0x18) = 0;
    uVar3 = uVar3 + 1 & 0xffff;
  } while (uVar3 < 8);
  return;
}

