/*
 * Program: n42.bin
 * Function: FUN_001ab7b8
 * Entry: 001ab7b8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001ab7b8(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  do {
    iVar3 = uVar4 * 0x70;
    *(undefined4 *)(&UNK_003fc44c + iVar3) = 0;
    (&UNK_003fc454)[iVar3] = 0;
    iVar6 = uVar4 * 0xc;
    if (*(int *)(param_1 + iVar6) != 0) {
      iVar5 = param_1 + iVar6;
      (*(code *)&SUB_00faf170)(*(int *)(param_1 + iVar6),*(undefined *)(iVar5 + 8),0);
      (*(code *)&SUB_00faf214)(*(undefined4 *)(param_1 + iVar6),*(undefined *)(iVar5 + 8),0);
      uVar2 = (uint)*(byte *)(iVar5 + 8) * 2;
      *(uint *)(*(int *)(param_1 + iVar6) + 0x14) =
           *(uint *)(*(int *)(param_1 + iVar6) + 0x14) & ~(3 << (uVar2 & 0x3f)) |
           0 << (uVar2 & 0x3f);
      bVar1 = *(byte *)(iVar5 + 8);
      iVar6 = *(int *)(param_1 + iVar6);
      *(int *)(iVar6 + 0x18) = 0 << ((uint)bVar1 * 2 & 0x3f);
      *(ushort *)(iVar6 + 0x20) = ~(ushort)(1 << (bVar1 & 0x3f));
      *(undefined4 *)(&UNK_003fc44c + iVar3) = 1;
    }
    uVar4 = uVar4 + 1 & 0xffff;
  } while (uVar4 < 4);
  DAT_003fc5bd = 0;
  (*(code *)&SUB_00faf9a8)(4);
  return;
}

