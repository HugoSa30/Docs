/*
 * Program: n42.bin
 * Function: FUN_001b1fcc
 * Entry: 001b1fcc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001b1fcc(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  int in_TBLr;
  
  uVar4 = param_1 & 0xff;
  if (uVar4 < 4) {
    if (1 < *(int *)(&UNK_003fc888 + uVar4 * 0x10)) {
      iVar6 = param_1 * 0xc;
      (*(code *)&SUB_00faf214)
                (*(undefined4 *)(_DAT_003fc884 + iVar6),*(undefined *)(_DAT_003fc884 + iVar6 + 8),0)
      ;
      iVar1 = _DAT_003fc884;
      iVar2 = _DAT_003fc884 + iVar6;
      iVar3 = *(int *)(iVar2 + 4);
      puVar5 = (ushort *)(iVar3 + 8);
      *puVar5 = *puVar5 & 0xfff1;
      puVar5 = (ushort *)(iVar3 + 10);
      *puVar5 = *puVar5 & 0xff00;
      uVar4 = (uint)*(byte *)(iVar2 + 8);
      iVar2 = *(int *)(iVar1 + iVar6);
      *(ushort *)(iVar2 + 0x20) = ~(ushort)(1 << (uVar4 & 0x3f));
      iVar1 = param_1 * 0x10;
      (*(code *)&SUB_00faf170)(iVar2,uVar4,(&UNK_003fc894)[iVar1]);
      *(uint *)(&UNK_003fc88c + iVar1) = (uint)(in_TBLr * 0x6666) >> 0x10;
      iVar2 = _DAT_003fc884;
      iVar3 = _DAT_003fc884 + iVar6;
      if (*(char *)(iVar3 + 9) == -1) {
        puVar5 = (ushort *)(*(int *)(iVar3 + 4) + 8);
        *puVar5 = *puVar5 & 0xff0f;
        *puVar5 = *puVar5 & 0xfffe;
      }
      else {
        puVar5 = (ushort *)(*(int *)(iVar3 + 4) + 8);
        *puVar5 = *puVar5 & 0xff0f | (ushort)((int)*(char *)(iVar3 + 9) << 4) & 0xf0;
        *puVar5 = *puVar5 & 0xfffe | 1;
      }
      (*(code *)&SUB_00faf2d0)
                (*(undefined4 *)(iVar2 + iVar6),*(undefined *)(iVar3 + 8),*(undefined *)(iVar3 + 10)
                );
      uVar4 = (uint)*(byte *)(_DAT_003fc884 + iVar6 + 8);
      iVar2 = *(int *)(_DAT_003fc884 + iVar6);
      *(int *)(iVar2 + 0x18) = 3 << (uVar4 * 2 & 0x3f);
      (*(code *)&SUB_00faf214)(iVar2,uVar4,1);
      *(undefined4 *)(&UNK_003fc888 + iVar1) = 3;
      return 1;
    }
    (*(code *)&SUB_00fb1cdc)(0x35,uVar4);
  }
  else {
    (*(code *)&SUB_00fb1cdc)(0x33,uVar4);
  }
  return 0;
}

