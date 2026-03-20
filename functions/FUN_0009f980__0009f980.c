/*
 * Program: n42.bin
 * Function: FUN_0009f980
 * Entry: 0009f980
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_0009f980(int param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined2 uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  
  cVar4 = DAT_003fa1b6;
  if (DAT_003f9a49 < 0x53) {
    if (DAT_003f9a49 == 0x52) {
      uVar6 = 3;
      DAT_003fa1b3 = -0x80;
      DAT_003fa1b8 = DAT_003fa1b8 & 0xdf;
      DAT_003fa1b7 = 0;
      if (DAT_003fa1b4 != 0) {
        DAT_003fa1b7 = 0;
        do {
          if ((&DAT_003fa195)[(&DAT_003fa198)[DAT_003fa1b7]] == '\0') {
            DAT_003fa1b8 = DAT_003fa1b8 | 0x20;
          }
          else {
            DAT_003fa1b3 = '\x01';
            uVar6 = (uint)(&DAT_003fa198)[DAT_003fa1b7];
          }
          DAT_003fa1b7 = DAT_003fa1b7 + 1;
        } while (DAT_003fa1b7 < DAT_003fa1b4);
        if (uVar6 != 3) {
          DAT_003fa1b8 = DAT_003fa1b8 & 0xfc | (byte)uVar6 & 3;
          goto LAB_0009fdc8;
        }
      }
      if ((((DAT_003fa1b8 & 3) != 3) && ((&UNK_003fa19b)[DAT_003fa1b8 & 3] != -0x7e)) &&
         ((&UNK_003fa19b)[DAT_003fa1b8 & 3] != -1)) {
        DAT_003fa1b8 = DAT_003fa1b8 & 0xfc | 3;
      }
      goto LAB_0009fdc8;
    }
    if (DAT_003f9a49 == 0x50) {
      DAT_003fa1b8 = (&DAT_003fe734)[param_1];
      DAT_003fa1b5 = 0;
      DAT_003fa1b3 = '\0';
      DAT_003fa1b4 = 0;
      uVar6 = DAT_003fa1b8 & 3;
      uVar1 = *(ushort *)(&DAT_00016c7e + param_1 * 10);
      bVar5 = 0;
      do {
        uVar2 = (uint)bVar5;
        (&DAT_003fa195)[uVar2] = 0;
        (&UNK_003fa19b)[uVar2] = 0xff;
        if (uVar2 != uVar6) {
          (&DAT_003fa198)[DAT_003fa1b4] = bVar5;
          DAT_003fa1b4 = DAT_003fa1b4 + 1;
        }
        bVar5 = bVar5 + 1;
      } while ((ushort)bVar5 <= (uVar1 & 3));
      if (uVar6 != 3) {
        (&DAT_003fa198)[DAT_003fa1b4] = (char)uVar6;
        DAT_003fa1b4 = DAT_003fa1b4 + 1;
      }
      DAT_003fa1b7 = 0;
      DAT_003fa1b2 = DAT_003fa198;
      DAT_003f9a49 = 0x53;
      goto LAB_0009fabc;
    }
    if (DAT_003f9a49 == 0x51) {
      DAT_003fa1b5 = 0;
      DAT_003fa1b7 = DAT_003fa1b7 + 1;
      uVar6 = (uint)DAT_003fa1b7;
      if (uVar6 < DAT_003fa1b4) {
        DAT_003fa1b2 = (&DAT_003fa198)[uVar6];
        DAT_003f9a49 = 0x53;
        if (uVar6 == 1) {
          if ((((*(ushort *)(&DAT_00016c7e + param_1 * 10) & 3) == 1) &&
              ((&DAT_003fa195)[DAT_003fa198] == '\0')) && ((DAT_003fa1b8 & 3) != 3)) {
            DAT_003f9a49 = 0x52;
          }
        }
        else if (((uVar6 == 2) && ((&DAT_003fa195)[DAT_003fa198] == '\0')) &&
                (((&DAT_003fa195)[DAT_003fa199] == '\0' && ((DAT_003fa1b8 & 3) != 3)))) {
          DAT_003f9a49 = 0x52;
        }
      }
      else {
        DAT_003f9a49 = 0x52;
      }
      goto LAB_0009fdc8;
    }
  }
  else {
    if (DAT_003f9a49 == 0x53) {
LAB_0009fabc:
      uVar3 = FUN_0009ed4c(param_1,DAT_003fa1b2);
      cVar4 = func_0x0103a24c(uVar3,*(undefined *)(param_1 * 10 + 0x16c80),param_2,&DAT_003fa1b6,
                              _DAT_003fa19e);
      if (cVar4 == '\0') {
        DAT_003fa1b3 = -0x80;
      }
      else {
        DAT_003f9a49 = 0x54;
      }
      goto LAB_0009fdc8;
    }
    if (DAT_003f9a49 == 0x54) {
      if (DAT_003fa1b6 != '\0') {
        uVar6 = (uint)DAT_003fa1b2;
        (&UNK_003fa19b)[uVar6] = DAT_003fa1b6;
        if (cVar4 == '\x01') {
          (&DAT_003fa195)[uVar6] = 1;
          DAT_003f9a49 = 0x51;
        }
        else {
          DAT_003fa1b5 = DAT_003fa1b5 + 1;
          if (DAT_003fa1b5 < DAT_00016cfd) {
            DAT_003f9a49 = 0x53;
          }
          else {
            (&DAT_003fa195)[uVar6] = 0;
            DAT_003f9a49 = 0x51;
          }
        }
      }
      goto LAB_0009fdc8;
    }
  }
  DAT_003fa1b3 = -0x80;
LAB_0009fdc8:
  cVar4 = DAT_003fa1b3;
  if (DAT_003fa1b3 != '\0') {
    if (DAT_003fa1b3 == '\x01') {
      DAT_003fa1b8 = DAT_003fa1b8 & 0x7f;
    }
    else {
      DAT_003fa1b8 = DAT_003fa1b8 | 0x80;
    }
    (&DAT_003fe734)[param_1] = DAT_003fa1b8;
    DAT_003f9a49 = 0x50;
  }
  return cVar4;
}

