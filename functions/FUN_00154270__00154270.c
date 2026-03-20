/*
 * Program: n42.bin
 * Function: FUN_00154270
 * Entry: 00154270
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00154270(void)

{
  byte bVar1;
  ushort local_20;
  ushort local_1c [2];
  ushort local_18 [2];
  ushort *local_14;
  
  local_20 = _DAT_003fde6c;
  bVar1 = DAT_005b8ff5 - DAT_005bb784;
  DAT_005bb784 = DAT_005b8ff5;
  if (((bVar1 & DAT_001ce2b1) == 0) && (DAT_001c0ea2 == '\0')) {
    DAT_003fbea0 = '\0';
  }
  else if (DAT_003fbeaf == '\0') {
    if (DAT_003fbeab == '\0') {
      if (((DAT_005b8ff6 == -1) && (DAT_005b8ff7 == 0xff)) && (DAT_005b8ff8 == 0)) {
        DAT_003fbea0 = '\x01';
      }
      else {
        DAT_003fbea0 = '\0';
      }
    }
    else {
      if (DAT_001c0ea2 == '\0') {
        bVar1 = ~(DAT_005b8ff7 + DAT_005b8ff5);
      }
      else {
        bVar1 = 0;
      }
      if ((DAT_005b8ff7 < 0xff) && (bVar1 == DAT_005b8ff8)) {
        DAT_003fbea0 = '\x01';
      }
      else {
        DAT_003fbea0 = '\0';
      }
    }
  }
  else {
    bVar1 = DAT_005b8ff8;
    if (DAT_001c0ea2 == '\0') {
      bVar1 = DAT_005b8ff8 - DAT_005b8ff5;
    }
    if (((DAT_003fbeab == '\0') && (DAT_005b8ff8 != 0)) && ((byte)~bVar1 == DAT_005b8ff7)) {
      DAT_003fbea0 = '\x01';
    }
    else {
      DAT_003fbea0 = '\0';
    }
  }
  if ((DAT_003fde79 & 1) == 0) {
    if (DAT_003fbea0 != '\0') {
      if (B_fgdcan != '\0') {
        DAT_003fbe9f = 1;
        DAT_005bb783 = DAT_001c0ea3;
        if (DAT_005bb782 == '\0') {
          local_20 = _DAT_003fde6c & 0xd0fc | 0x2002;
        }
        else {
          DAT_005bb782 = DAT_005bb782 + -1;
        }
      }
      if (DAT_003fbea0 != '\0') goto LAB_00154574;
    }
    if (B_fgdcan != '\0') {
      DAT_005bb782 = DAT_001c0ea3;
      if (DAT_005bb783 == '\0') {
        DAT_003fbe9f = 0;
        local_20 = local_20 & 0xd0fc | 0x2803;
      }
      else {
        DAT_005bb783 = DAT_005bb783 + -1;
      }
    }
  }
  else {
    DAT_003fbe9f = 1;
    DAT_005bb783 = DAT_001c0ea3;
    DAT_005bb782 = DAT_001c0ea3;
  }
LAB_00154574:
  local_1c[0] = local_20;
  local_14 = local_1c;
  local_18[0] = local_20;
  func_0xff222958(5,local_18);
  return;
}

