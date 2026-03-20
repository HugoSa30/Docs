/*
 * Program: n42.bin
 * Function: FUN_001b06e8
 * Entry: 001b06e8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b06e8(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  
  _DAT_003fc670 = param_1;
  _DAT_003fc674 = param_2;
  (*(code *)&SUB_00fb0314)(param_2);
  _DAT_003fc6d8 = (*(code *)&SUB_00faf148)();
  _DAT_003fc6dc = 0;
  uVar6 = 0;
  do {
    (&UNK_003fc70c)[uVar6] = 0;
    uVar6 = uVar6 + 1 & 0xffff;
  } while (uVar6 < 0x10);
  uVar6 = 0;
  do {
    *(undefined4 *)(&UNK_003fc6e0 + uVar6 * 0xc) = 0;
    uVar6 = uVar6 + 1 & 0xffff;
  } while (uVar6 < 2);
  uVar6 = 0;
  do {
    iVar7 = uVar6 * 0xc;
    if (*(int *)(param_2 + iVar7) == 0) {
      *(undefined4 *)(&UNK_003fc67c + iVar7) = 0;
    }
    else {
      *(undefined4 *)(&UNK_003fc67c + iVar7) = 1;
      uVar9 = uVar6 & 0xff;
      (*(code *)&SUB_000680b0)(0,uVar9);
      (*(code *)&SUB_000681c8)(100,uVar9);
      (*(code *)&SUB_000682ac)(0,0,0,uVar9);
      iVar5 = _DAT_003fc674;
      iVar2 = _DAT_003fc674 + iVar7;
      puVar4 = (ushort *)(*(int *)(iVar2 + 4) + 8);
      *puVar4 = *puVar4 & 0xff | (ushort)*(byte *)(iVar2 + 9) << 0xc;
      (&UNK_003fc70c)[*(byte *)(iVar2 + 8)] = (char)uVar6;
      iVar2 = *(int *)(iVar5 + iVar7);
      iVar5 = iVar2 + (uint)*(byte *)(iVar5 + iVar7 + 9) * 0x10 + 0x100;
      uVar9 = 0;
      do {
        iVar3 = uVar9 * 0xc;
        if (*(int *)(&UNK_003fc6e0 + iVar3) == 0) {
          *(int *)(&UNK_003fc6e0 + iVar3) = iVar5;
          *(int *)(&UNK_003fc6e4 + iVar3) = iVar2;
          (&UNK_003fc6e8)[iVar3] = *(undefined *)(_DAT_003fc674 + iVar7 + 9);
          break;
        }
        if (*(int *)(&UNK_003fc6e0 + iVar3) == iVar5) break;
        if (uVar9 == 1) {
          (*(code *)&SUB_00fb0670)(0x36,uVar6 & 0xff);
        }
        uVar9 = uVar9 + 1 & 0xffff;
      } while (uVar9 < 2);
    }
    uVar6 = uVar6 + 1 & 0xffff;
    if (7 < uVar6) {
      (*(code *)&SUB_00fb0550)(1);
      (*(code *)&SUB_00fb046c)(0);
      uVar6 = 0;
      do {
        iVar7 = uVar6 * 0xc;
        if (*(int *)(&UNK_003fc6e4 + iVar7) != 0) {
          (*(code *)&SUB_00faf170)(*(int *)(&UNK_003fc6e4 + iVar7),(&UNK_003fc6e8)[iVar7],0);
          (*(code *)&SUB_00faf214)(*(undefined4 *)(&UNK_003fc6e4 + iVar7),(&UNK_003fc6e8)[iVar7],0);
          *(uint *)(*(int *)(&UNK_003fc6e4 + iVar7) + 0x14) =
               *(uint *)(*(int *)(&UNK_003fc6e4 + iVar7) + 0x14) &
               ~(3 << ((uint)(byte)(&UNK_003fc6e8)[iVar7] * 2 & 0x3f)) |
               0 << ((uint)(byte)(&UNK_003fc6e8)[iVar7] * 2 & 0x3f);
          bVar1 = (&UNK_003fc6e8)[iVar7];
          puVar8 = *(undefined **)(&UNK_003fc6e4 + iVar7);
          *(int *)(puVar8 + 0x18) = 0 << ((uint)bVar1 * 2 & 0x3f);
          *(ushort *)(puVar8 + 0x20) = ~(ushort)(1 << (bVar1 & 0x3f));
          if (((int)(uint)*(byte *)(_DAT_003fc670 + 0x18) >> (uVar6 & 0x3f) & 1U) != 0) {
            if (puVar8 == &DAT_00304000) {
              (*(code *)&SUB_00faf874)(0x687b0,2,&DAT_00304000,5);
            }
            if (*(undefined **)(&UNK_003fc6e4 + iVar7) == &DAT_00304400) {
              (*(code *)&SUB_00faf874)(0x68718,2,&DAT_00304400,5);
            }
            (*(code *)&SUB_00faf170)
                      (*(undefined4 *)(&UNK_003fc6e4 + iVar7),(&UNK_003fc6e8)[iVar7],1);
          }
        }
        uVar6 = uVar6 + 1 & 0xffff;
      } while (uVar6 < 2);
      return;
    }
  } while( true );
}

