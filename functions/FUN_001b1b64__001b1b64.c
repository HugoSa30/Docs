/*
 * Program: n42.bin
 * Function: FUN_001b1b64
 * Entry: 001b1b64
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001b1b64(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = 0;
  do {
    iVar4 = uVar3 * 0xc;
    iVar6 = *(int *)(param_1 + iVar4);
    if (iVar6 != 0) {
      *(undefined4 *)(&UNK_003fc888 + uVar3 * 0x10) = 1;
      iVar5 = param_1 + iVar4;
      (*(code *)&SUB_00faf170)(iVar6,*(undefined *)(iVar5 + 8),0);
      bVar1 = *(byte *)(iVar5 + 8);
      iVar6 = *(int *)(param_1 + iVar4);
      *(ushort *)(iVar6 + 0x20) = ~(ushort)(1 << (bVar1 & 0x3f));
      uVar2 = (uint)bVar1 * 2;
      *(uint *)(iVar6 + 0x14) =
           *(uint *)(iVar6 + 0x14) & ~(3 << (uVar2 & 0x3f)) | 0 << (uVar2 & 0x3f);
      bVar1 = *(byte *)(iVar5 + 8);
      iVar6 = *(int *)(param_1 + iVar4);
      *(int *)(iVar6 + 0x18) = 2 << ((uint)bVar1 * 2 & 0x3f);
      (*(code *)&SUB_00faf2d0)(iVar6,(uint)bVar1,*(undefined *)(iVar5 + 10));
      (*(code *)&SUB_00faf214)(*(undefined4 *)(param_1 + iVar4),*(undefined *)(iVar5 + 8),1);
    }
    *(undefined4 *)(&UNK_003fc888 + uVar3 * 0x10) = 0;
    uVar3 = uVar3 + 1 & 0xffff;
  } while (uVar3 < 4);
  (*(code *)&SUB_00faf9a8)(8);
  return;
}

