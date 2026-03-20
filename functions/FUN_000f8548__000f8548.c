/*
 * Program: n42.bin
 * Function: FUN_000f8548
 * Entry: 000f8548
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_000f8548(void)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ushort uStack_26;
  
  uVar2 = 0;
  cVar3 = '\0';
  uVar4 = 0;
  do {
    if (*(int *)(&UNK_003fc6e0 + uVar4 * 0xc) != 0) {
      uVar6 = *(uint *)(*(int *)(&UNK_003fc6e0 + uVar4 * 0xc) + 4);
      uStack_26 = (ushort)uVar6;
      if ((uVar6 & 1) == 0) {
        bVar1 = (&UNK_003fc70c)[uStack_26 >> 4 & 0xf];
        iVar5 = uVar2 * 10;
        (&UNK_003fc6fe)[iVar5] = bVar1;
        iVar7 = (uint)bVar1 * 0xc;
        (&UNK_003fc6ff)[iVar5] = *(undefined *)(_DAT_003fc674 + iVar7 + 10);
        (&UNK_003fc700)[iVar5] = (byte)(uStack_26 >> 1) & 7;
        *(undefined2 *)(&UNK_003fc6f8 + iVar5) = *(undefined2 *)(&UNK_003fc680 + iVar7);
        uVar8 = (uint)(uStack_26 >> 8);
        if (uVar8 == 0xff) {
          (&UNK_003fc700)[iVar5] = (&UNK_003fc700)[iVar5] & 0xdf | 0x20;
          uVar8 = 0;
        }
        uVar9 = (uint)_DAT_003fc6d8;
        *(short *)(&UNK_003fc6fa + iVar5) = (short)((uVar8 * uVar9 * 0x400) / 10000);
        *(short *)(&UNK_003fc6fc + iVar5) =
             (short)(((uVar6 >> 0x10 & 0x3ff) * uVar9 * 0x10) / 10000);
        uVar2 = uVar2 + 1 & 0xff;
        cVar3 = cVar3 + '\x01';
      }
    }
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 2);
  return cVar3;
}

