/*
 * Program: n42.bin
 * Function: FUN_001212f8
 * Entry: 001212f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


char FUN_001212f8(byte *param_1,int param_2,byte *param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar6;
  int iVar5;
  byte local_30;
  byte local_2c [2];
  byte local_2a;
  byte local_29;
  byte local_27;
  byte *local_24;
  
  bVar6 = 0;
  iVar4 = 0;
  local_24 = param_1;
  cVar1 = func_0xff250aac(param_4,local_2c);
  if (cVar1 == '\0') {
LAB_001214b4:
    if (bVar6 != 0) goto LAB_00121544;
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
                    bVar6 = 8;
                    iVar4 = 3;
                  }
                }
                else {
                  bVar6 = 4;
                  iVar4 = 2;
                }
              }
              else {
                bVar6 = 2;
                iVar4 = 1;
              }
            }
            else {
              bVar6 = 1;
              iVar4 = 0;
            }
          }
          else {
            bVar6 = 8;
            iVar4 = 3;
          }
        }
        else {
          bVar6 = 4;
          iVar4 = 2;
        }
      }
      else {
        bVar6 = 2;
        iVar4 = 1;
      }
    }
    else {
      bVar6 = 1;
      iVar4 = 0;
    }
    if (bVar6 != 0) {
      if ((local_27 >> 1 & 1) == 0) {
        if ((local_29 & 1) != 0) {
          bVar6 = bVar6 | 0x40;
        }
      }
      else if ((local_29 & 1) == 0) {
        bVar6 = bVar6 | 0x20;
      }
      else {
        bVar6 = bVar6 | 0x60;
      }
      if (((byte)(&UNK_003fde62)[(uint)local_2c[0] * 2] >> 5 & 1) == 0) {
        bVar6 = bVar6 | 0x10;
      }
      if ((&DAT_001d44b0)[(uint)(byte)(&CLAAAA)[local_2c[0]] * 0xd] != '\0') {
        bVar6 = bVar6 | 0x80;
      }
      goto LAB_001214b4;
    }
  }
  local_30 = (byte)(*(ushort *)(&UNK_003fde62 + param_4 * 2) >> 8);
  bVar2 = local_30 & 0xf;
  if (bVar2 == 1) {
    bVar6 = 1;
  }
  else if (bVar2 == 2) {
    bVar6 = 2;
  }
  else if (bVar2 == 4) {
    bVar6 = 4;
  }
  else if (bVar2 == 8) {
    bVar6 = 8;
  }
  if ((local_30 >> 5 & 1) == 0) {
    bVar6 = bVar6 | 0x10;
  }
  if ((*(ushort *)(&UNK_003fde62 + param_4 * 2) & 1) != 0) {
    bVar6 = bVar6 | 0x40;
  }
LAB_00121544:
  *param_3 = fcmEnd;
  param_3[1] = *local_24;
  param_3[2] = local_24[1];
  param_3[3] = bVar6;
  if ((bVar6 != 0) && (param_2 != 0)) {
    uVar3 = 0;
    if (fcmEnd != 0) {
      do {
        iVar5 = uVar3 * 0x28;
        if ((byte)(&UNK_003fcf4c)[iVar5] == param_4) {
          cVar1 = '\0';
          if (((*(ushort *)(&UNK_003fcf50 + iVar5) & 1) == 0) &&
             ((*(ushort *)(&UNK_003fcf50 + iVar5) >> 1 & 1) != 0)) {
            cVar1 = ' ';
          }
          if ((*(ushort *)(&UNK_003fcf50 + iVar5) >> 3 & 1) == 1) {
            cVar1 = cVar1 + '\x10';
          }
          if ((*(ushort *)(&UNK_003fcf4e + iVar5) >> 4 & 1) != 0) {
            cVar1 = cVar1 + '\b';
          }
          if ((*(ushort *)(&UNK_003fcf4e + iVar5) >> 1 & 1) == 1) {
            cVar1 = cVar1 + '\x04';
          }
          if (((int)(uint)(byte)(&DAT_005bb398)[param_4] >> 1 & 1U) != 0) {
            cVar1 = cVar1 + '\x02';
          }
          param_3[4] = cVar1 + (((&DAT_005bb398)[param_4] & 1) != 0);
          if (((local_27 >> 2 & 1) == 1) && ((local_27 >> 1 & 1) == 1)) {
            param_3[5] = (byte)((ushort)*(undefined2 *)
                                         (&DAT_001d3b8c + ((uint)local_2c[0] * 4 + iVar4) * 2) >> 8)
            ;
            param_3[6] = (byte)*(undefined2 *)(&DAT_001d3b8c + ((uint)local_2c[0] * 4 + iVar4) * 2);
          }
          else {
            param_3[5] = 0;
            param_3[6] = 0;
          }
          param_3[7] = (&UNK_003fcf72)[iVar5];
          param_3 = param_3 + 8;
          *param_3 = (&UNK_003fcf54)[iVar5];
          cVar1 = '\t';
          uVar3 = 0;
          do {
            iVar4 = uVar3 * 6 + iVar5;
            param_3[1] = (&UNK_003fcf4c)[iVar4 + 0x14];
            param_3[2] = (&UNK_003fcf4c)[iVar4 + 0x15];
            param_3[3] = (&UNK_003fcf4c)[iVar4 + 0x16];
            param_3[4] = (&UNK_003fcf4c)[iVar4 + 0x17];
            param_3[5] = (&UNK_003fcf4c)[iVar4 + 0x18];
            param_3 = param_3 + 6;
            *param_3 = (&UNK_003fcf4c)[iVar4 + 0x19];
            cVar1 = cVar1 + '\x06';
            uVar3 = uVar3 + 1 & 0xff;
          } while (uVar3 < 3);
          return cVar1;
        }
        uVar3 = uVar3 + 1 & 0xff;
      } while (uVar3 < fcmEnd);
    }
  }
  return '\x04';
}

