/*
 * Program: n42.bin
 * Function: FUN_0013c244
 * Entry: 0013c244
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013c244(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = (uint)fcmEnd;
  if (uVar8 != 0) {
    uVar6 = 0;
    uVar2 = 0;
    errorCntTcsort = 0;
    uVar3 = 0xff;
    uVar7 = 0;
    uVar5 = 0;
    uVar1 = 0xff;
    if (cw_erfil == 0) {
      do {
        iVar9 = uVar6 * 0x28;
        if (((byte)(&UNK_003fcf4c)[iVar9] < 0x84) || (0x87 < (byte)(&UNK_003fcf4c)[iVar9])) {
          if ((&UNK_003fcf4c)[iVar9] == -0x7d) {
            if ((*(ushort *)(&UNK_003fcf50 + iVar9) >> 1 & 1) == 0) {
              uVar1 = uVar6;
              if ((((*(ushort *)(&UNK_003fcf50 + iVar9) >> 2 & 1) == 0) &&
                  ((*(ushort *)(&UNK_003fcf4e + iVar9) & 1) != 0)) &&
                 (*(char *)((uint)(*(ushort *)(&UNK_003fcf50 + iVar9) >> 8) * 0xd + 0x1d44b5) ==
                  '\x01')) {
                *(ushort *)(&UNK_003fcf50 + iVar9) = *(ushort *)(&UNK_003fcf50 + iVar9) & 0xfffb | 4
                ;
              }
            }
            else {
              uVar3 = uVar6;
              if (((*(ushort *)(&UNK_003fcf50 + iVar9) >> 2 & 1) == 0) &&
                 (*(char *)((uint)(*(ushort *)(&UNK_003fcf50 + iVar9) >> 8) * 0xd + 0x1d44b5) ==
                  '\x01')) {
                *(ushort *)(&UNK_003fcf50 + iVar9) = *(ushort *)(&UNK_003fcf50 + iVar9) & 0xfffb | 4
                ;
              }
            }
          }
        }
        else if ((*(ushort *)(&UNK_003fcf50 + iVar9) >> 1 & 1) == 0) {
          if (((*(ushort *)(&UNK_003fcf50 + iVar9) >> 2 & 1) == 1) ||
             (((*(ushort *)(&UNK_003fcf4e + iVar9) & 1) != 0 &&
              (*(char *)((uint)(*(ushort *)(&UNK_003fcf50 + iVar9) >> 8) * 0xd + 0x1d44b5) == '\x01'
              )))) {
            uVar5 = uVar5 + 1 & 0xff;
            if (uVar5 < 2) {
              *(ushort *)(&UNK_003fcf50 + iVar9) = *(ushort *)(&UNK_003fcf50 + iVar9) & 0xfffb | 4;
              uVar7 = uVar6;
            }
            else {
              *(ushort *)(&UNK_003fcf50 + iVar9) = *(ushort *)(&UNK_003fcf50 + iVar9) & 0xfffb;
              if (uVar5 == 2) {
                *(ushort *)(&UNK_003fcf50 + uVar7 * 0x28) =
                     *(ushort *)(&UNK_003fcf50 + uVar7 * 0x28) & 0xfffb;
              }
            }
          }
        }
        else if (((*(ushort *)(&UNK_003fcf50 + iVar9) >> 2 & 1) == 1) ||
                (*(char *)((uint)(*(ushort *)(&UNK_003fcf50 + iVar9) >> 8) * 0xd + 0x1d44b5) ==
                 '\x01')) {
          bVar4 = errorCntTcsort + 1;
          errorCntTcsort = bVar4;
          if (bVar4 < 2) {
            *(ushort *)(&UNK_003fcf50 + iVar9) = *(ushort *)(&UNK_003fcf50 + iVar9) & 0xfffb | 4;
            uVar2 = uVar6;
          }
          else {
            *(ushort *)(&UNK_003fcf50 + iVar9) = *(ushort *)(&UNK_003fcf50 + iVar9) & 0xfffb;
            if (bVar4 == 2) {
              *(ushort *)(&UNK_003fcf50 + uVar2 * 0x28) =
                   *(ushort *)(&UNK_003fcf50 + uVar2 * 0x28) & 0xfffb;
            }
          }
        }
        uVar6 = uVar6 + 1 & 0xff;
      } while (uVar6 < uVar8);
      if (errorCntTcsort == 1) {
        if (uVar5 == 1) {
          *(ushort *)(&UNK_003fcf50 + uVar7 * 0x28) =
               *(ushort *)(&UNK_003fcf50 + uVar7 * 0x28) & 0xfffb;
          *(ushort *)(&UNK_003fcf50 + uVar2 * 0x28) =
               *(ushort *)(&UNK_003fcf50 + uVar2 * 0x28) & 0xfffb;
          FUN_0013c85c();
          return;
        }
        if (1 < uVar5) {
          *(ushort *)(&UNK_003fcf50 + uVar2 * 0x28) =
               *(ushort *)(&UNK_003fcf50 + uVar2 * 0x28) & 0xfffb;
          FUN_0013c85c();
          return;
        }
        if (uVar3 != 0xff) {
          *(ushort *)(&UNK_003fcf50 + uVar3 * 0x28) =
               *(ushort *)(&UNK_003fcf50 + uVar3 * 0x28) & 0xfffb;
          FUN_0013c85c();
          return;
        }
      }
      else if (errorCntTcsort < 2) {
        if ((uVar5 == 1) && (uVar1 != 0xff)) {
          *(ushort *)(&UNK_003fcf50 + uVar1 * 0x28) =
               *(ushort *)(&UNK_003fcf50 + uVar1 * 0x28) & 0xfffb;
        }
      }
      else if (uVar5 == 1) {
        *(ushort *)(&UNK_003fcf50 + uVar7 * 0x28) =
             *(ushort *)(&UNK_003fcf50 + uVar7 * 0x28) & 0xfffb;
        FUN_0013c85c();
        return;
      }
    }
    else {
      do {
        iVar9 = uVar6 * 0x28;
        if (((byte)(&UNK_003fcf4c)[iVar9] < 0x84) || (0x87 < (byte)(&UNK_003fcf4c)[iVar9])) {
          if ((&UNK_003fcf4c)[iVar9] == -0x7d) {
            if ((*(ushort *)(&UNK_003fcf50 + iVar9) >> 1 & 1) == 0) {
              uVar1 = uVar6;
              if ((((*(ushort *)(&UNK_003fcf50 + iVar9) >> 2 & 1) == 0) &&
                  ((*(ushort *)(&UNK_003fcf4e + iVar9) & 1) != 0)) &&
                 (*(char *)((uint)(*(ushort *)(&UNK_003fcf50 + iVar9) >> 8) * 0xd + 0x1d44b5) ==
                  '\x01')) {
                *(ushort *)(&UNK_003fcf50 + iVar9) = *(ushort *)(&UNK_003fcf50 + iVar9) & 0xfffb | 4
                ;
              }
            }
            else {
              uVar3 = uVar6;
              if (((*(ushort *)(&UNK_003fcf50 + iVar9) >> 2 & 1) == 0) &&
                 (*(char *)((uint)(*(ushort *)(&UNK_003fcf50 + iVar9) >> 8) * 0xd + 0x1d44b5) ==
                  '\x01')) {
                *(ushort *)(&UNK_003fcf50 + iVar9) = *(ushort *)(&UNK_003fcf50 + iVar9) & 0xfffb | 4
                ;
              }
            }
          }
        }
        else if ((*(ushort *)(&UNK_003fcf50 + iVar9) >> 1 & 1) == 0) {
          if ((((*(ushort *)(&UNK_003fcf50 + iVar9) >> 2 & 1) == 0) &&
              ((*(ushort *)(&UNK_003fcf4e + iVar9) & 1) != 0)) &&
             (*(char *)((uint)(*(ushort *)(&UNK_003fcf50 + iVar9) >> 8) * 0xd + 0x1d44b5) == '\x01')
             ) {
            *(ushort *)(&UNK_003fcf50 + iVar9) = *(ushort *)(&UNK_003fcf50 + iVar9) & 0xfffb | 4;
          }
          uVar5 = uVar5 + 1 & 0xff;
        }
        else {
          if (((*(ushort *)(&UNK_003fcf50 + iVar9) >> 2 & 1) == 0) &&
             (*(char *)((uint)(*(ushort *)(&UNK_003fcf50 + iVar9) >> 8) * 0xd + 0x1d44b5) == '\x01')
             ) {
            *(ushort *)(&UNK_003fcf50 + iVar9) = *(ushort *)(&UNK_003fcf50 + iVar9) & 0xfffb | 4;
          }
          errorCntTcsort = errorCntTcsort + 1;
        }
        uVar6 = uVar6 + 1 & 0xff;
      } while (uVar6 < uVar8);
      if (errorCntTcsort + uVar5 == 1) {
        if (uVar3 != 0xff) {
          *(ushort *)(&UNK_003fcf50 + uVar3 * 0x28) =
               *(ushort *)(&UNK_003fcf50 + uVar3 * 0x28) & 0xfffb;
        }
        if (uVar1 != 0xff) {
          *(ushort *)(&UNK_003fcf50 + uVar1 * 0x28) =
               *(ushort *)(&UNK_003fcf50 + uVar1 * 0x28) & 0xfffb;
        }
      }
    }
  }
  return;
}

