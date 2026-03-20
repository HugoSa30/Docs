/*
 * Program: n42.bin
 * Function: FUN_0015646c
 * Entry: 0015646c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0015646c(uint param_1,ushort *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  
  bVar5 = fcmEnd;
  puVar1 = &DAT_003fa674;
  if (DAT_003fa674 != '\0') {
    DAT_003fa674 = '\0';
    iVar2 = (uint)(byte)(&CLAAAA)[param_1] * 0xd;
    uVar8 = 0;
    uVar6 = (uint)fcmEnd;
    if (uVar6 != 0) {
      while (iVar3 = uVar8 * 0x28, (byte)(&UNK_003fcf4c)[iVar3] != param_1) {
        uVar8 = uVar8 + 1 & 0xff;
        if ((uVar6 <= uVar8) || (10 < uVar8)) goto LAB_00156710;
      }
      if (((&UNK_003fcf4f)[iVar3] & 1) == 1) {
        if (((byte)(&UNK_003fcf51)[iVar3] >> 1 & 1) == 0) {
          (&UNK_003fcf54)[iVar3] = (&DAT_001d44b9)[iVar2];
          (&UNK_003fcf51)[iVar3] = (&UNK_003fcf51)[iVar3] & 0xfb;
        }
        else {
          (&UNK_003fcf54)[iVar3] = (&DAT_001d44ba)[iVar2];
        }
        if ((byte)(&DAT_001d44b1)[iVar2] == 1) {
          (&UNK_003fcf52)[iVar3] = (&DAT_001d44b2)[iVar2];
        }
        else if (((**(char **)((uint)(byte)(&DAT_001d44b1)[iVar2] * 4 + 0x1bc2c) == '\x01') &&
                 ((*(byte *)((int)param_2 + 1) >> 1 & 1) == 1)) &&
                ((byte)(&UNK_003fcf52)[iVar3] < (byte)(&DAT_001d44b2)[iVar2])) {
          (&UNK_003fcf52)[iVar3] = (&UNK_003fcf52)[iVar3] + 1;
        }
        if (((**(char **)((uint)(byte)(&DAT_001d44b3)[iVar2] * 4 + 0x1bc2c) == '\x01') &&
            ((*(byte *)((int)param_2 + 1) >> 1 & 1) == 1)) && ((&UNK_003fcf53)[iVar3] != '\0')) {
          (&UNK_003fcf53)[iVar3] = (&UNK_003fcf53)[iVar3] + -1;
        }
        *(ushort *)(&UNK_003fcf4e + iVar3) =
             *param_2 & 0xff | *(ushort *)(&UNK_003fcf4e + iVar3) & 0xff00;
        (&UNK_003fcf51)[iVar3] = (&UNK_003fcf51)[iVar3] & 0xef;
        if ((&UNK_003fcf53)[iVar3] == '\0') {
          (&UNK_003fcf51)[iVar3] = (&UNK_003fcf51)[iVar3] & 0xfe;
          (&UNK_003fcf51)[iVar3] = (&UNK_003fcf51)[iVar3] & 0xf7;
          if ((&UNK_003fcf54)[iVar3] == '\0') {
            (&UNK_003fcf4c)[uVar8 * 0x28] = 0;
            if (uVar6 - 1 == uVar8) {
              bVar4 = 0;
              puVar7 = &UNK_003fcf4b + uVar8 * 0x28;
              do {
                puVar7 = puVar7 + 1;
                *puVar7 = 0;
                bVar4 = bVar4 + 1;
              } while (bVar4 < 0x28);
              fcmEnd = bVar5 - 1;
            }
            else {
              while ((uVar8 = uVar8 + 1 & 0xff, uVar8 < uVar6 && (uVar8 < 0xb))) {
                FUN_00155d4c(uVar8);
              }
              fcmEnd = (byte)(uVar6 + 0xff);
              bVar5 = 0;
              puVar7 = &UNK_003fcf4b + (uVar6 + 0xff & 0xff) * 0x28;
              do {
                puVar7 = puVar7 + 1;
                *puVar7 = 0;
                bVar5 = bVar5 + 1;
              } while (bVar5 < 0x28);
            }
          }
        }
      }
    }
LAB_00156710:
    *puVar1 = 1;
  }
  if ((param_1 & 0xff) == (uint)DAT_003fd7fc) {
    DAT_003fd7fc = 0;
  }
  return 1;
}

