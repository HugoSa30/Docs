/*
 * Program: n42.bin
 * Function: FUN_0011a624
 * Entry: 0011a624
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0011a624(int *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte local_40 [2];
  byte local_3e;
  byte local_3d;
  byte local_3b;
  
  DAT_003fb298 = 0;
  if (*(char *)(param_1 + 3) == '\n') {
    _DAT_003fb29c = *param_1 + 0x96;
    uVar4 = (ushort)*(byte *)(*param_1 + 1) * 0x100 + (ushort)*(byte *)(*param_1 + 2);
    uVar5 = 0;
    if (fcmEnd != 0) {
      do {
        iVar7 = uVar5 * 0x28;
        uVar6 = (uint)(byte)(&UNK_003fcf4c)[iVar7];
        if (*(ushort *)(&CDKAAA + uVar6 * 2) == uVar4) {
          func_0xff2509e4(uVar5,local_40);
          *(byte *)(*param_1 + 0x96) = fcmEnd;
          *(char *)(*param_1 + 0x97) = (char)((ushort)*(undefined2 *)(&CDKAAA + uVar6 * 2) >> 8);
          *(char *)(*param_1 + 0x98) = (char)*(undefined2 *)(&CDKAAA + uVar6 * 2);
          if ((local_3e & 1) == 0) {
            if ((local_3e >> 1 & 1) == 0) {
              if ((local_3e >> 2 & 1) == 0) {
                if ((local_3e >> 3 & 1) == 0) {
                  if ((local_3e >> 4 & 1) == 0) {
                    if ((local_3e >> 5 & 1) == 0) {
                      if ((local_3e >> 6 & 1) == 0) {
                        iVar2 = 3;
                      }
                      else {
                        iVar2 = 2;
                      }
                    }
                    else {
                      iVar2 = 1;
                    }
                  }
                  else {
                    iVar2 = 0;
                  }
                }
                else {
                  iVar2 = 3;
                }
              }
              else {
                iVar2 = 2;
              }
            }
            else {
              iVar2 = 1;
            }
          }
          else {
            iVar2 = 0;
          }
          iVar1 = (uVar6 * 4 + iVar2) * 2;
          *(char *)(*param_1 + 0xc2) = (char)((ushort)*(undefined2 *)(&DAT_001d3b8c + iVar1) >> 8);
          *(char *)(*param_1 + 0xc3) = (char)*(undefined2 *)(&DAT_001d3b8c + iVar1);
          if (iVar2 == 0) {
            bVar3 = 1;
          }
          else if (iVar2 == 1) {
            bVar3 = 2;
          }
          else if (iVar2 == 2) {
            bVar3 = 4;
          }
          else {
            bVar3 = 8;
          }
          if ((&DAT_001d44b0)[(uint)(byte)(&CLAAAA)[uVar6] * 0xd] != '\0') {
            bVar3 = bVar3 | 0x80;
          }
          if ((local_3b >> 1 & 1) == 0) {
            if (((&UNK_003fde63)[uVar6 * 2] & 1) != 0) {
              bVar3 = bVar3 | 0x40;
            }
          }
          else if (((&UNK_003fde63)[uVar6 * 2] & 1) == 0) {
            bVar3 = bVar3 | 0x20;
          }
          else {
            bVar3 = bVar3 | 0x60;
          }
          if (((byte)(&UNK_003fde62)[(uint)local_40[0] * 2] >> 5 & 1) == 0) {
            bVar3 = bVar3 | 0x10;
          }
          *(byte *)(*param_1 + 0x99) = bVar3;
          bVar3 = 0;
          if (((*(ushort *)(&UNK_003fcf50 + iVar7) & 1) == 0) &&
             ((*(ushort *)(&UNK_003fcf50 + iVar7) >> 1 & 1) != 0)) {
            bVar3 = 0x20;
          }
          if ((local_3b >> 3 & 1) != 0) {
            bVar3 = bVar3 | 0x10;
          }
          if ((*(ushort *)(&UNK_003fcf4e + iVar7) >> 4 & 1) != 0) {
            bVar3 = bVar3 | 8;
          }
          if ((local_3d >> 1 & 1) != 0) {
            bVar3 = bVar3 | 4;
          }
          if (((&DAT_005bb398)[uVar6] & 2) != 0) {
            bVar3 = bVar3 | 2;
          }
          if (((&DAT_005bb398)[uVar6] & 1) != 0) {
            bVar3 = bVar3 | 1;
          }
          *(byte *)(*param_1 + 0x9a) = bVar3;
          *(undefined *)(*param_1 + 0x9b) = (&UNK_003fcf72)[iVar7];
          *(undefined *)(*param_1 + 0x9c) = (&UNK_003fcf53)[iVar7];
          *(undefined *)(*param_1 + 0x9d) = (&UNK_003fcf60)[iVar7];
          *(undefined *)(*param_1 + 0x9e) = (&UNK_003fcf61)[iVar7];
          *(undefined *)(*param_1 + 0x9f) = (&UNK_003fcf62)[iVar7];
          iVar2 = uVar6 * 4;
          *(undefined *)(*param_1 + 0xa0) = (&DAT_001d37bc)[iVar2];
          *(undefined *)(*param_1 + 0xa1) = (&UNK_003fcf63)[iVar7];
          *(undefined *)(*param_1 + 0xa2) = (&DAT_001d37bd)[iVar2];
          *(undefined *)(*param_1 + 0xa3) = (&UNK_003fcf64)[iVar7];
          *(undefined *)(*param_1 + 0xa4) = (&DAT_001d37be)[iVar2];
          *(undefined *)(*param_1 + 0xa5) = (&UNK_003fcf65)[iVar7];
          *(undefined *)(*param_1 + 0xa6) = (&DAT_001d37bf)[iVar2];
          *(undefined *)(*param_1 + 0xa7) = (&UNK_003fcf66)[iVar7];
          *(undefined *)(*param_1 + 0xa8) = (&UNK_003fcf67)[iVar7];
          *(undefined *)(*param_1 + 0xa9) = (&UNK_003fcf68)[iVar7];
          *(undefined *)(*param_1 + 0xaa) = (&UNK_003fcf69)[iVar7];
          *(undefined *)(*param_1 + 0xab) = (&UNK_003fcf6a)[iVar7];
          *(undefined *)(*param_1 + 0xac) = (&UNK_003fcf6b)[iVar7];
          *(undefined *)(*param_1 + 0xad) = (&UNK_003fcf6c)[iVar7];
          *(undefined *)(*param_1 + 0xae) = (&UNK_003fcf6d)[iVar7];
          *(undefined *)(*param_1 + 0xaf) = (&UNK_003fcf6e)[iVar7];
          *(undefined *)(*param_1 + 0xb0) = (&UNK_003fcf6f)[iVar7];
          *(undefined *)(*param_1 + 0xb1) = (&UNK_003fcf70)[iVar7];
          *(undefined *)(*param_1 + 0xb2) = (&UNK_003fcf71)[iVar7];
          *(undefined *)(*param_1 + 0xb3) = (&CLAAAA)[uVar6];
          *(undefined *)(*param_1 + 0xb4) = (&UNK_003fcf4d)[iVar7];
          *(undefined *)(*param_1 + 0xb5) = (&UNK_003fcf52)[iVar7];
          *(undefined *)(*param_1 + 0xb6) = (&UNK_003fcf54)[iVar7];
          *(undefined *)(*param_1 + 0xb7) = (&UNK_003fcf55)[iVar7];
          *(undefined *)(*param_1 + 0xb8) = (&UNK_003fcf56)[iVar7];
          *(undefined *)(*param_1 + 0xb9) = (&UNK_003fcf57)[iVar7];
          *(undefined *)(*param_1 + 0xba) = (&UNK_003fcf58)[iVar7];
          *(undefined *)(*param_1 + 0xbb) = (&UNK_003fcf59)[iVar7];
          *(undefined *)(*param_1 + 0xbc) = (&UNK_003fcf5a)[iVar7];
          *(undefined *)(*param_1 + 0xbd) = (&UNK_003fcf5b)[iVar7];
          *(undefined *)(*param_1 + 0xbe) = (&UNK_003fcf5c)[iVar7];
          *(undefined *)(*param_1 + 0xbf) = (&UNK_003fcf5d)[iVar7];
          *(undefined *)(*param_1 + 0xc0) = (&UNK_003fcf5e)[iVar7];
          *(undefined *)(*param_1 + 0xc1) = (&UNK_003fcf5f)[iVar7];
          *(undefined *)(*param_1 + 0xc4) = (&UNK_003fcf73)[iVar7];
          break;
        }
        uVar5 = uVar5 + 1 & 0xff;
      } while (uVar5 < fcmEnd);
    }
    if ((fcmEnd == 0) || (fcmEnd <= uVar5)) {
      if (0x35fb < uVar4 - 10000) {
        return 0;
      }
      DAT_003fb298 = 4;
      *(byte *)(*param_1 + 0x96) = fcmEnd;
      *(undefined *)(*param_1 + 0x97) = *(undefined *)(*param_1 + 1);
      *(undefined *)(*param_1 + 0x98) = *(undefined *)(*param_1 + 2);
      *(undefined *)(*param_1 + 0x99) = 0;
    }
    else {
      DAT_003fb298 = 0x2f;
    }
  }
  return 1;
}

