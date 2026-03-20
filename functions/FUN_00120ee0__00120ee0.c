/*
 * Program: n42.bin
 * Function: FUN_00120ee0
 * Entry: 00120ee0
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00120ee0(byte *param_1,int param_2,byte *param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte local_30;
  byte local_2c [2];
  byte local_2a;
  byte local_29;
  byte local_27;
  byte *local_24;
  
  bVar5 = 0;
  local_24 = param_1;
  cVar1 = func_0xff250aac(param_4,local_2c);
  if (cVar1 == '\0') {
LAB_00121084:
    if (bVar5 != 0) goto LAB_00121114;
  }
  else {
    if ((local_2a & 1) == 0) {
      if ((local_2a >> 1 & 1) == 0) {
        if ((local_2a >> 2 & 1) == 0) {
          if ((local_2a >> 3 & 1) == 0) {
            if ((local_2a >> 4 & 1) == 0) {
              if ((local_2a >> 5 & 1) == 0) {
                if ((local_2a >> 6 & 1) == 0) {
                  if ((char)local_2a < '\0') {
                    bVar5 = 8;
                  }
                }
                else {
                  bVar5 = 4;
                }
              }
              else {
                bVar5 = 2;
              }
            }
            else {
              bVar5 = 1;
            }
          }
          else {
            bVar5 = 8;
          }
        }
        else {
          bVar5 = 4;
        }
      }
      else {
        bVar5 = 2;
      }
    }
    else {
      bVar5 = 1;
    }
    if (bVar5 != 0) {
      if ((local_27 >> 1 & 1) == 0) {
        if ((local_29 & 1) != 0) {
          bVar5 = bVar5 | 0x40;
        }
      }
      else if ((local_29 & 1) == 0) {
        bVar5 = bVar5 | 0x20;
      }
      else {
        bVar5 = bVar5 | 0x60;
      }
      if (((byte)(&UNK_003fde62)[(uint)local_2c[0] * 2] >> 5 & 1) == 0) {
        bVar5 = bVar5 | 0x10;
      }
      if ((&DAT_001d44b0)[(uint)(byte)(&CLAAAA)[local_2c[0]] * 0xd] != '\0') {
        bVar5 = bVar5 | 0x80;
      }
      goto LAB_00121084;
    }
  }
  local_30 = (byte)(*(ushort *)(&UNK_003fde62 + param_4 * 2) >> 8);
  bVar2 = local_30 & 0xf;
  if (bVar2 == 1) {
    bVar5 = 1;
  }
  else if (bVar2 == 2) {
    bVar5 = 2;
  }
  else if (bVar2 == 4) {
    bVar5 = 4;
  }
  else if (bVar2 == 8) {
    bVar5 = 8;
  }
  if ((local_30 >> 5 & 1) == 0) {
    bVar5 = bVar5 | 0x10;
  }
  if ((*(ushort *)(&UNK_003fde62 + param_4 * 2) & 1) != 0) {
    bVar5 = bVar5 | 0x40;
  }
LAB_00121114:
  *param_3 = fcmEnd;
  param_3[1] = *local_24;
  param_3[2] = local_24[1];
  param_3[3] = bVar5;
  if ((bVar5 != 0) && (param_2 != 0)) {
    uVar4 = 0;
    if (fcmEnd != 0) {
      do {
        iVar3 = uVar4 * 0x28;
        if ((byte)(&UNK_003fcf4c)[iVar3] == param_4) {
          param_3[4] = 0;
          param_3[5] = (&UNK_003fcf72)[iVar3];
          param_3[6] = (&UNK_003fcf53)[iVar3];
          param_3[7] = (&UNK_003fcf60)[iVar3];
          param_3[8] = (&UNK_003fcf61)[iVar3];
          param_3[9] = (&UNK_003fcf62)[iVar3];
          param_3[10] = (&UNK_003fcf63)[iVar3];
          param_3[0xb] = (&UNK_003fcf64)[iVar3];
          param_3[0xc] = (&UNK_003fcf65)[iVar3];
          param_3[0xd] = (&UNK_003fcf66)[iVar3];
          param_3[0xe] = (&UNK_003fcf67)[iVar3];
          param_3[0xf] = (&UNK_003fcf68)[iVar3];
          param_3[0x10] = (&UNK_003fcf69)[iVar3];
          param_3[0x11] = (&UNK_003fcf6a)[iVar3];
          param_3[0x12] = (&UNK_003fcf6b)[iVar3];
          param_3[0x13] = (&UNK_003fcf6c)[iVar3];
          param_3[0x14] = (&UNK_003fcf6d)[iVar3];
          param_3[0x15] = (&UNK_003fcf6e)[iVar3];
          param_3[0x16] = (&UNK_003fcf6f)[iVar3];
          param_3[0x17] = (&UNK_003fcf70)[iVar3];
          param_3[0x18] = (&UNK_003fcf71)[iVar3];
          param_3[0x19] = (byte)((ushort)*(undefined2 *)(&UNK_003fcf50 + iVar3) >> 8);
          param_3[0x1a] = (&UNK_003fcf4d)[iVar3];
          param_3[0x1b] = (&UNK_003fcf52)[iVar3];
          param_3[0x1c] = (&UNK_003fcf54)[iVar3];
          param_3[0x1d] = (&UNK_003fcf55)[iVar3];
          param_3[0x1e] = (&UNK_003fcf56)[iVar3];
          param_3[0x1f] = (&UNK_003fcf57)[iVar3];
          param_3[0x20] = (&UNK_003fcf58)[iVar3];
          param_3[0x21] = (&UNK_003fcf59)[iVar3];
          param_3[0x22] = (&UNK_003fcf5a)[iVar3];
          param_3[0x23] = (&UNK_003fcf5b)[iVar3];
          param_3[0x24] = (&UNK_003fcf5c)[iVar3];
          param_3[0x25] = (&UNK_003fcf5d)[iVar3];
          param_3[0x26] = (&UNK_003fcf5e)[iVar3];
          param_3[0x27] = (&UNK_003fcf5f)[iVar3];
          param_3[0x28] = (&UNK_003fcf73)[iVar3];
          return 0x29;
        }
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < fcmEnd);
    }
  }
  return 4;
}

