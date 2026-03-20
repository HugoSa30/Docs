/*
 * Program: n42.bin
 * Function: FUN_00155f50
 * Entry: 00155f50
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00155f50(uint param_1,ushort *param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  
  if (DAT_003fa674 != '\0') {
    DAT_003fa674 = 0;
    bVar1 = (&CLAAAA)[param_1];
    if (bVar1 != 0) {
      uVar2 = 0;
LAB_00155fb8:
      iVar5 = uVar2 * 0x28;
      pbVar6 = &UNK_003fcf4c + iVar5;
      if (uVar2 == fcmEnd) {
        DAT_003fa676 = '\v';
        if (uVar2 == 10) {
          cVar3 = FUN_0015698c(bVar1,&DAT_003fa676);
        }
        else {
          cVar3 = '\x01';
        }
        if (cVar3 != '\0') {
          *pbVar6 = 0;
          fcmEnd = fcmEnd + 1;
          FUN_00156b58(pbVar6);
          FUN_00156cd8(&UNK_003fcf60 + iVar5);
          FUN_00155bb0(&UNK_003fcf62 + iVar5,param_1 & 0xff);
          uVar2 = 6;
          do {
            pbVar6[uVar2 + 0x14] = 0xff;
            uVar2 = uVar2 + 1 & 0xff;
          } while (uVar2 < 0x12);
          (&UNK_003fcf50)[iVar5] = bVar1;
          (&UNK_003fde62)[param_1 * 2] = (&UNK_003fde62)[param_1 * 2] & 0xef | 0x10;
          iVar4 = (uint)bVar1 * 0xd;
          if ((**(char **)((uint)(byte)(&DAT_001d44b1)[iVar4] * 4 + 0x1bc2c) == '\x01') &&
             ((*(byte *)((int)param_2 + 1) >> 1 & 1) == 1)) {
            if ((&DAT_001d44b2)[iVar4] == '\0') {
              (&UNK_003fcf52)[iVar5] = 0;
            }
            else {
              (&UNK_003fcf52)[iVar5] = (&DAT_001d44b2)[iVar4] + -1;
            }
          }
          else {
            (&UNK_003fcf52)[iVar5] = (&DAT_001d44b2)[iVar4];
          }
          (&UNK_003fcf53)[iVar5] = (&DAT_001d44b4)[iVar4];
          *(ushort *)(&UNK_003fcf4e + iVar5) = (*param_2 & 0xf00) << 4 | *param_2 & 0xfff;
          if ((&UNK_003fcf52)[iVar5] == '\0') {
            (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xfe | 1;
            (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xfd | 2;
            cVar3 = (&DAT_001d44b0)[iVar4];
            if (cVar3 == '\0') {
              (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xf7;
              (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xef;
            }
            else {
              (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xf7 | 8;
              if (cVar3 == '\x02') {
                (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xef | 0x10;
              }
              else {
                (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xef;
              }
            }
            (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xdf;
          }
          else {
            (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xfe;
            (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xfd;
            (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xdf;
            (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xf7;
            (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xef;
          }
          if (*(char *)(iVar4 + 0x1d44b5) == '\x01') {
            (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xfb | 4;
          }
          else {
            (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xfb;
          }
          if ((&DAT_001d44bc)[iVar4] == '\x01') {
            (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xbf | 0x40;
          }
          else {
            (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xbf;
          }
          if (((&UNK_003fcf51)[iVar5] & 1) == 1) {
            (&UNK_003fcf54)[iVar5] = (&DAT_001d44ba)[iVar4];
          }
          else {
            (&UNK_003fcf54)[iVar5] = *(undefined *)(iVar4 + 0x1d44b7);
          }
          (&UNK_003fcf72)[iVar5] = 1;
          (&UNK_003fcf4d)[iVar5] = 0;
          *pbVar6 = (byte)param_1;
        }
        if (DAT_003fa676 != '\v') {
          FUN_00156a64(DAT_003fa676);
        }
      }
      else {
        if (*pbVar6 != param_1) goto LAB_00156434;
        (&UNK_003fde62)[param_1 * 2] = (&UNK_003fde62)[param_1 * 2] & 0xef | 0x10;
        if (((&UNK_003fcf4f)[iVar5] & 1) == 0) {
          iVar4 = (uint)bVar1 * 0xd;
          if (*(char *)(iVar4 + 0x1d44b5) == '\x01') {
            (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xfb | 4;
          }
          else {
            (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xfb;
          }
          FUN_00155cec(pbVar6);
          if (((**(char **)((uint)(byte)(&DAT_001d44b1)[iVar4] * 4 + 0x1bc2c) == '\x01') &&
              ((*(byte *)((int)param_2 + 1) >> 1 & 1) == 1)) && ((&UNK_003fcf52)[iVar5] != '\0')) {
            (&UNK_003fcf52)[iVar5] = (&UNK_003fcf52)[iVar5] + -1;
          }
          (&UNK_003fcf53)[iVar5] = (&DAT_001d44b4)[iVar4];
          *(ushort *)(&UNK_003fcf4e + iVar5) =
               *param_2 & 0xfff | *(ushort *)(&UNK_003fcf4e + iVar5) & 0xf000;
          if ((&UNK_003fcf52)[iVar5] == '\0') {
            (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xfe | 1;
            (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xfd | 2;
            cVar3 = (&DAT_001d44b0)[iVar4];
            if ((cVar3 != '\0') &&
               ((&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xf7 | 8, cVar3 == '\x02')) {
              (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xef | 0x10;
            }
          }
          if (((&UNK_003fcf51)[iVar5] & 1) == 1) {
            (&UNK_003fcf54)[iVar5] = (&DAT_001d44ba)[iVar4];
          }
          else {
            (&UNK_003fcf54)[iVar5] = *(undefined *)(iVar4 + 0x1d44b7);
          }
          if ((&UNK_003fcf72)[iVar5] != -1) {
            (&UNK_003fcf72)[iVar5] = (&UNK_003fcf72)[iVar5] + '\x01';
          }
          (&UNK_003fcf51)[iVar5] = (&UNK_003fcf51)[iVar5] & 0xdf | 0x20;
        }
      }
    }
LAB_00156444:
    DAT_003fa674 = '\x01';
  }
  DAT_003fd7fc = (byte)param_1;
  return 1;
LAB_00156434:
  uVar2 = uVar2 + 1 & 0xff;
  if (10 < uVar2) goto LAB_00156444;
  goto LAB_00155fb8;
}

