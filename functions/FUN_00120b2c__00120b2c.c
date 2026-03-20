/*
 * Program: n42.bin
 * Function: FUN_00120b2c
 * Entry: 00120b2c
 * Exported by: ExportAllDecompiledFunctions.java
 */


byte FUN_00120b2c(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  
  if (param_1 != 1) {
    uVar4 = 0;
    do {
      *(undefined2 *)(&UNK_003fb250 + uVar4 * 2) = 0xffff;
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < 0xd);
  }
  bVar5 = 0;
  bVar3 = 0;
  if (fcmEnd != 0) {
    do {
      cVar2 = func_0xff250988(bVar3,&DAT_003fb228);
      if ((cVar2 != '\0') && ((DAT_003fb22d >> 2 & 1) == 1)) {
        bVar1 = DAT_003fb22d >> 1 & 1;
        if (bVar1 == 1) {
          if (param_1 == 1) {
            bVar5 = bVar5 + 1;
          }
          else {
            if (param_1 != 3) goto LAB_00120cd4;
            if ((DAT_003fb22a & 1) != 1) {
              if ((DAT_003fb22a >> 1 & 1) == 1) {
                *(undefined2 *)(&UNK_003fb250 + (uint)bVar5 * 2) =
                     *(undefined2 *)(&DAT_001d3b8e + (uint)DAT_003fb228 * 8);
                bVar5 = bVar5 + 1;
              }
              else if ((DAT_003fb22a >> 2 & 1) == 1) {
                *(undefined2 *)(&UNK_003fb250 + (uint)bVar5 * 2) =
                     *(undefined2 *)(&DAT_001d3b90 + (uint)DAT_003fb228 * 8);
                bVar5 = bVar5 + 1;
              }
              else {
                *(undefined2 *)(&UNK_003fb250 + (uint)bVar5 * 2) =
                     *(undefined2 *)(&DAT_001d3b92 + (uint)DAT_003fb228 * 8);
                bVar5 = bVar5 + 1;
              }
              goto LAB_00120dd0;
            }
            *(undefined2 *)(&UNK_003fb250 + (uint)bVar5 * 2) =
                 *(undefined2 *)(&DAT_001d3b8c + (uint)DAT_003fb228 * 8);
LAB_00120dcc:
            bVar5 = bVar5 + 1;
          }
        }
        else {
LAB_00120cd4:
          if ((bVar1 == 0) && (param_1 == 7)) {
            if ((DAT_003fb22a & 1) == 1) {
              *(undefined2 *)(&UNK_003fb250 + (uint)bVar5 * 2) =
                   *(undefined2 *)(&DAT_001d3b8c + (uint)DAT_003fb228 * 8);
              bVar5 = bVar5 + 1;
            }
            else if ((DAT_003fb22a >> 1 & 1) == 1) {
              *(undefined2 *)(&UNK_003fb250 + (uint)bVar5 * 2) =
                   *(undefined2 *)(&DAT_001d3b8e + (uint)DAT_003fb228 * 8);
              bVar5 = bVar5 + 1;
            }
            else {
              if ((DAT_003fb22a >> 2 & 1) != 1) {
                *(undefined2 *)(&UNK_003fb250 + (uint)bVar5 * 2) =
                     *(undefined2 *)(&DAT_001d3b92 + (uint)DAT_003fb228 * 8);
                goto LAB_00120dcc;
              }
              *(undefined2 *)(&UNK_003fb250 + (uint)bVar5 * 2) =
                   *(undefined2 *)(&DAT_001d3b90 + (uint)DAT_003fb228 * 8);
              bVar5 = bVar5 + 1;
            }
          }
        }
      }
LAB_00120dd0:
      bVar3 = bVar3 + 1;
    } while (bVar3 < fcmEnd);
  }
  return bVar5;
}

