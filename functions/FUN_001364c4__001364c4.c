/*
 * Program: n42.bin
 * Function: FUN_001364c4
 * Entry: 001364c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001364c4(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  
  if (DAT_003fa679 == '\0') {
    uVar2 = 0;
    uVar1 = (uint)fcmEnd;
    if (uVar1 != 0) {
      do {
        iVar5 = uVar2 * 0x28;
        if (((*(ushort *)(&UNK_003fcf4e + iVar5) & 1) == 0) &&
           (((byte)(&UNK_003fde63)[(uint)(byte)(&UNK_003fcf4c)[iVar5] * 2] >> 1 & 1) == 1)) {
          if ((byte)(&DAT_001d3ac8)[(byte)(&UNK_003fcf4c)[iVar5]] < (byte)(&UNK_003fcf4d)[iVar5]) {
            if ((**(char **)((uint)(byte)(&DAT_001d44b1)
                                         [(uint)(*(ushort *)(&UNK_003fcf50 + iVar5) >> 8) * 0xd] * 4
                            + 0x1bc2c) == '\x01') && ((&UNK_003fcf52)[iVar5] != '\0')) {
              (&UNK_003fcf52)[iVar5] = (&UNK_003fcf52)[iVar5] + -1;
            }
          }
          else if (**(char **)((uint)(byte)(&DAT_001d44b3)
                                           [(uint)(*(ushort *)(&UNK_003fcf50 + iVar5) >> 8) * 0xd] *
                               4 + 0x1bc2c) == '\x01') {
            (&UNK_003fcf52)[iVar5] =
                 (&DAT_001d44b2)[(uint)(*(ushort *)(&UNK_003fcf50 + iVar5) >> 8) * 0xd];
          }
        }
        if ((*(ushort *)(&UNK_003fcf50 + iVar5) & 1) == 0) {
          if ((*(ushort *)(&UNK_003fcf4e + iVar5) & 1) == 1) {
            if ((**(char **)((uint)*(byte *)((uint)(*(ushort *)(&UNK_003fcf50 + iVar5) >> 8) * 0xd +
                                            0x1d44b6) * 4 + 0x1bc2c) == '\x01') &&
               ((&UNK_003fcf54)[iVar5] != '\0')) {
              (&UNK_003fcf54)[iVar5] = (&UNK_003fcf54)[iVar5] + -1;
            }
          }
          else if ((**(char **)((uint)(byte)(&DAT_001d44b8)
                                            [(uint)(*(ushort *)(&UNK_003fcf50 + iVar5) >> 8) * 0xd]
                                * 4 + 0x1bc2c) == '\x01') && ((&UNK_003fcf54)[iVar5] != '\0')) {
            (&UNK_003fcf54)[iVar5] = (&UNK_003fcf54)[iVar5] + -1;
          }
        }
        if ((&UNK_003fcf54)[iVar5] == '\0') {
          (&UNK_003fde63)[(uint)(byte)(&UNK_003fcf4c)[iVar5] * 2] =
               (&UNK_003fde63)[(uint)(byte)(&UNK_003fcf4c)[iVar5] * 2] & 0xfe;
          (&UNK_003fde62)[(uint)(byte)(&UNK_003fcf4c)[uVar2 * 0x28] * 2] =
               (&UNK_003fde62)[(uint)(byte)(&UNK_003fcf4c)[uVar2 * 0x28] * 2] & 0xef;
          bVar4 = 0;
          puVar3 = &UNK_003fcf4b + uVar2 * 0x28;
          do {
            puVar3 = puVar3 + 1;
            *puVar3 = 0;
            bVar4 = bVar4 + 1;
          } while (bVar4 < 0x28);
        }
        uVar2 = uVar2 + 1 & 0xff;
      } while ((uVar2 < uVar1) && (uVar2 < 0xb));
    }
    DAT_003fa679 = '\x01';
  }
  return;
}

