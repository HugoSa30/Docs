/*
 * Program: n42.bin
 * Function: FUN_001b151c
 * Entry: 001b151c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001b151c(int param_1)

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
    if (*(int *)(param_1 + iVar4) != 0) {
      iVar6 = param_1 + iVar4;
      (*(code *)&SUB_00faf170)(*(int *)(param_1 + iVar4),*(undefined *)(iVar6 + 8),0);
      bVar1 = *(byte *)(iVar6 + 8);
      iVar5 = *(int *)(param_1 + iVar4);
      *(ushort *)(iVar5 + 0x20) = ~(ushort)(1 << (bVar1 & 0x3f));
      (*(code *)&SUB_00faf2d0)(iVar5,(uint)bVar1,0xf);
      if (*(char *)(iVar6 + 9) == '\0') {
        *(int *)(*(int *)(param_1 + iVar4) + 0x18) = 1 << ((uint)*(byte *)(iVar6 + 8) * 2 & 0x3f);
      }
      else {
        uVar2 = (uint)*(byte *)(iVar6 + 8) * 2;
        *(uint *)(*(int *)(param_1 + iVar4) + 0x14) =
             *(uint *)(*(int *)(param_1 + iVar4) + 0x14) & ~(1 << (uVar2 & 0x3f)) |
             (uint)(*(char *)(iVar6 + 10) != '\0') << (uVar2 & 0x3f);
        *(int *)(*(int *)(param_1 + iVar4) + 0x18) = 2 << ((uint)*(byte *)(iVar6 + 8) * 2 & 0x3f);
      }
      (*(code *)&SUB_00faf214)(*(undefined4 *)(param_1 + iVar4),*(undefined *)(iVar6 + 8),1);
    }
    *(undefined4 *)(&UNK_003fc7f8 + uVar3 * 4) = 0;
    uVar3 = uVar3 + 1 & 0xffff;
  } while (uVar3 < 0x20);
  return;
}

