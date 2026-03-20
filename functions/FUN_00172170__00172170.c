/*
 * Program: n42.bin
 * Function: FUN_00172170
 * Entry: 00172170
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00172170(void)

{
  int iVar1;
  short sVar2;
  ushort local_28;
  ushort local_24 [2];
  ushort local_20 [2];
  ushort *local_1c;
  
  if ((DAT_005b9002 == -0x7f) || ((DAT_003fde7d & 1) != 0)) {
    B_etum = 1;
  }
  else {
    B_etum = 0;
  }
  if ((DAT_003fdfb7 & 1) == 0) {
    if (((DAT_001d0b2e <= imlatm) && (DAT_001d0b2f <= nmot)) && (DAT_001d0b33 <= vfzg)) {
      iVar1 = (uint)tans - (int)DTUMTA;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (0xff < iVar1) {
        iVar1 = 0xff;
      }
      DAT_003fdc64 = (byte)iVar1;
    }
  }
  else {
    DAT_003fdc64 = DAT_001d0b32;
  }
  if (B_tfu == '\0') {
    DAT_003fc00d = '\0';
LAB_0017236c:
    local_28 = _B_betum & 0xffbf | 0x40;
    tumg = DAT_003fdc64;
  }
  else {
    if ((B_ins3cok != '\0') && (DAT_005b9002 == -0x7f)) {
      DAT_003fc00d = '\x01';
      goto LAB_0017236c;
    }
    DAT_003fc00d = '\0';
    if ((DAT_003fde7d & 1) == 0) {
      local_28 = _B_betum & 0xffbf;
      iVar1 = ((short)DAT_005b9002 * 4 + 0xc0) / 3;
      sVar2 = (short)iVar1;
      if (sVar2 < 0x100) {
        if (sVar2 < 0) {
          tumg = 0;
        }
        else {
          tumg = (byte)iVar1;
        }
      }
      else {
        tumg = 0xff;
      }
    }
    else {
      local_28 = _B_betum & 0xffbf | 0x40;
      tumg = DAT_003fdc64;
    }
  }
  if (DAT_003fc00d != '\0') {
    DAT_005bb79f = DAT_001d0b31;
    if (DAT_005bb79e == '\0') {
      local_28 = local_28 & 0xd0fc | 0x2803;
    }
    else {
      DAT_005bb79e = DAT_005bb79e + -1;
    }
    if (DAT_003fc00d != '\0') goto LAB_00172470;
  }
  DAT_005bb79e = DAT_001d0b30;
  if (DAT_005bb79f == '\0') {
    local_28 = local_28 & 0xd0fc | 0x2002;
  }
  else {
    DAT_005bb79f = DAT_005bb79f + -1;
  }
LAB_00172470:
  local_24[0] = local_28;
  local_1c = local_24;
  local_20[0] = local_28;
  func_0xff222958(0xb2,local_20);
  return;
}

