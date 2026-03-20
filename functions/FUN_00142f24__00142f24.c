/*
 * Program: n42.bin
 * Function: FUN_00142f24
 * Entry: 00142f24
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00142f24(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = 0;
  if (fcmEnd != 0) {
    do {
      iVar5 = uVar4 * 0x28;
      if ((*(ushort *)(&UNK_003fcf4e + iVar5) & 1) == 1) {
        if ((((*(ushort *)(&UNK_003fcf50 + iVar5) & 1) != 1) &&
            (*(int *)((uint)(byte)(&DAT_001d44b1)
                                  [(uint)(*(ushort *)(&UNK_003fcf50 + iVar5) >> 8) * 0xd] * 4 +
                     0x1bc2c) == param_1)) && ((*(ushort *)(&UNK_003fcf4e + iVar5) >> 1 & 1) == 1))
        {
          if ((&UNK_003fcf52)[iVar5] != '\0') {
            (&UNK_003fcf52)[iVar5] = (&UNK_003fcf52)[iVar5] + -1;
          }
          if ((&UNK_003fcf52)[iVar5] == '\0') {
            *(ushort *)(&UNK_003fcf50 + iVar5) = *(ushort *)(&UNK_003fcf50 + iVar5) & 0xfffe | 1;
            *(ushort *)(&UNK_003fcf50 + iVar5) = *(ushort *)(&UNK_003fcf50 + iVar5) & 0xfffd | 2;
            if (((&DAT_001d44b0)[(uint)(*(ushort *)(&UNK_003fcf50 + iVar5) >> 8) * 0xd] != '\0') &&
               (*(ushort *)(&UNK_003fcf50 + iVar5) = *(ushort *)(&UNK_003fcf50 + iVar5) & 0xfff7 | 8
               , (&DAT_001d44b0)[(uint)(*(ushort *)(&UNK_003fcf50 + iVar5) >> 8) * 0xd] == '\x02'))
            {
              *(ushort *)(&UNK_003fcf50 + iVar5) =
                   *(ushort *)(&UNK_003fcf50 + iVar5) & 0xffef | 0x10;
            }
            (&UNK_003fcf54)[iVar5] =
                 (&DAT_001d44ba)[(uint)(*(ushort *)(&UNK_003fcf50 + iVar5) >> 8) * 0xd];
          }
        }
      }
      else if ((((*(ushort *)(&UNK_003fcf50 + iVar5) & 1) == 1) &&
               (*(int *)((uint)(byte)(&DAT_001d44b3)
                                     [(uint)(*(ushort *)(&UNK_003fcf50 + iVar5) >> 8) * 0xd] * 4 +
                        0x1bc2c) == param_1)) &&
              ((*(ushort *)(&UNK_003fcf4e + iVar5) >> 1 & 1) == 1)) {
        if ((&UNK_003fcf53)[iVar5] != '\0') {
          (&UNK_003fcf53)[iVar5] = (&UNK_003fcf53)[iVar5] + -1;
        }
        if ((&UNK_003fcf53)[iVar5] == '\0') {
          *(ushort *)(&UNK_003fcf50 + iVar5) = *(ushort *)(&UNK_003fcf50 + iVar5) & 0xfffe;
          *(ushort *)(&UNK_003fcf50 + iVar5) = *(ushort *)(&UNK_003fcf50 + iVar5) & 0xfff7;
          *(ushort *)(&UNK_003fcf50 + iVar5) = *(ushort *)(&UNK_003fcf50 + iVar5) & 0xffef;
          if ((&UNK_003fcf54)[iVar5] == '\0') {
            (&UNK_003fcf4c)[uVar4 * 0x28] = 0;
            uVar6 = (uint)fcmEnd;
            uVar1 = uVar4;
            if (uVar6 - 1 == uVar4) {
              bVar3 = 0;
              puVar2 = &UNK_003fcf4b + uVar4 * 0x28;
              do {
                puVar2 = puVar2 + 1;
                *puVar2 = 0;
                bVar3 = bVar3 + 1;
              } while (bVar3 < 0x28);
              fcmEnd = fcmEnd - 1;
            }
            else {
              while ((uVar1 = uVar1 + 1 & 0xff, uVar1 < uVar6 && (uVar1 < 0xb))) {
                FUN_00155d4c(uVar1);
              }
              fcmEnd = (byte)(uVar6 + 0xff);
              bVar3 = 0;
              puVar2 = &UNK_003fcf4b + (uVar6 + 0xff & 0xff) * 0x28;
              do {
                puVar2 = puVar2 + 1;
                *puVar2 = 0;
                bVar3 = bVar3 + 1;
              } while (bVar3 < 0x28);
            }
          }
        }
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while ((uVar4 < fcmEnd) && (uVar4 < 0xb));
  }
  return;
}

