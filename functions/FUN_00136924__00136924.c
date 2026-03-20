/*
 * Program: n42.bin
 * Function: FUN_00136924
 * Entry: 00136924
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00136924(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (DAT_003fa67a == '\0') {
    uVar4 = (uint)fcmEnd;
    if (uVar4 == 0) {
      uVar4 = 0;
      if (DAT_003fe8b2 != '\0') {
        do {
          (&DAT_003fe8b3)[uVar4 * 0xc] = (&DAT_003fe8b3)[uVar4 * 0xc] | 1;
          uVar4 = uVar4 + 1 & 0xff;
          if (9 < uVar4) {
            DAT_003fa67a = '\x01';
            return;
          }
        } while ((&DAT_003fe8b2)[uVar4 * 0xc] != '\0');
      }
    }
    else {
      if (uVar4 < 0xb) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar4 + 0xf6 & 0xff;
      }
      DAT_003fa67a = '\0';
      for (; uVar6 < uVar4; uVar6 = uVar6 + 1 & 0xff) {
        uVar1 = 0;
        iVar5 = uVar6 * 0x28;
        do {
          iVar3 = uVar1 * 0xc;
          if ((&UNK_003fcf4c)[iVar5] == (&DAT_003fe8b2)[iVar3]) {
            if (((&DAT_003fe8b3)[iVar3] & 1) == 0) {
              uVar2 = FUN_00136794(uVar6);
              (&DAT_003fe8b3)[iVar3] = 0;
              *(ushort *)(&UNK_003fe8b4 + iVar3) = uVar2 & 0xff;
              (&UNK_003fe8b6)[iVar3] = (&UNK_003fcf72)[iVar5];
              (&UNK_003fe8b7)[iVar3] = (&UNK_003fcf60)[iVar5];
              (&UNK_003fe8b8)[iVar3] = (&UNK_003fcf61)[iVar5];
              (&UNK_003fe8b9)[iVar3] = (&UNK_003fcf66)[iVar5];
              (&UNK_003fe8ba)[iVar3] = (&UNK_003fcf67)[iVar5];
              (&UNK_003fe8bb)[iVar3] = (&UNK_003fcf6c)[iVar5];
              (&UNK_003fe8bc)[iVar3] = (&UNK_003fcf6d)[iVar5];
              goto LAB_00136acc;
            }
          }
          else if ((&DAT_003fe8b2)[iVar3] == '\0') break;
          uVar1 = uVar1 + 1 & 0xff;
        } while (uVar1 < 10);
        if (((DAT_003fe92a != 0) || (DAT_003fe8b2 != '\0')) &&
           (DAT_003fe92a = DAT_003fe92a + 1, 9 < DAT_003fe92a)) {
          DAT_003fe92a = 0;
        }
        uVar2 = FUN_00136794(uVar6);
        iVar3 = (uint)DAT_003fe92a * 0xc;
        (&DAT_003fe8b2)[iVar3] = (&UNK_003fcf4c)[iVar5];
        (&DAT_003fe8b3)[iVar3] = 0;
        *(ushort *)(&UNK_003fe8b4 + iVar3) = uVar2 & 0xff;
        (&UNK_003fe8b6)[iVar3] = (&UNK_003fcf72)[iVar5];
        (&UNK_003fe8b7)[iVar3] = (&UNK_003fcf60)[iVar5];
        (&UNK_003fe8b8)[iVar3] = (&UNK_003fcf61)[iVar5];
        (&UNK_003fe8b9)[iVar3] = (&UNK_003fcf66)[iVar5];
        (&UNK_003fe8ba)[iVar3] = (&UNK_003fcf67)[iVar5];
        (&UNK_003fe8bb)[iVar3] = (&UNK_003fcf6c)[iVar5];
        (&UNK_003fe8bc)[iVar3] = (&UNK_003fcf6d)[iVar5];
LAB_00136acc:
      }
      uVar6 = 0;
      do {
        iVar5 = uVar6 * 0xc;
        if ((&DAT_003fe8b2)[iVar5] == '\0') {
          DAT_003fa67a = '\x01';
          return;
        }
        if (((&DAT_003fe8b3)[iVar5] & 1) == 0) {
          uVar1 = 0;
          if (uVar4 != 0) {
            do {
              if ((&UNK_003fcf4c)[uVar1 * 0x28] == (&DAT_003fe8b2)[iVar5]) goto LAB_00136b50;
              uVar1 = uVar1 + 1 & 0xff;
            } while (uVar1 < uVar4);
          }
          (&DAT_003fe8b3)[iVar5] = (&DAT_003fe8b3)[iVar5] | 1;
        }
LAB_00136b50:
        uVar6 = uVar6 + 1 & 0xff;
      } while (uVar6 < 10);
    }
  }
  DAT_003fa67a = '\x01';
  return;
}

