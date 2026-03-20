/*
 * Program: n42.bin
 * Function: FUN_00172ee8
 * Entry: 00172ee8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00172ee8(void)

{
  byte bVar1;
  ushort uVar2;
  undefined2 local_30;
  ushort local_2c [2];
  ushort local_28 [2];
  ushort *local_24;
  
  uVar2 = _B_sitka;
  local_30 = _B_sitka;
  tkalin = func_0xff2187cc(&DAT_001d0bb8,DAT_005b9105);
  if (TKAUSDMX < tkalin) {
    if (DAT_005bb7a3 == '\0') {
      local_30 = uVar2 & 0xf0ff | 0x100;
      DAT_003fae59 = DAT_003fae59 & 0xfb | 4;
    }
    else {
      DAT_005bb7a3 = DAT_005bb7a3 + -1;
      DAT_003fae59 = DAT_003fae59 & 0xfb;
    }
  }
  else {
    DAT_003fae59 = DAT_003fae59 & 0xfb;
    DAT_005bb7a3 = TDTKAUS;
  }
  if (tkalin < TKAUSDMN) {
    if (DAT_005bb7a4 == '\0') {
      local_30 = local_30 & 0xf0ff | 0x200;
      DAT_003fae59 = DAT_003fae59 & 0xf7 | 8;
    }
    else {
      DAT_005bb7a4 = DAT_005bb7a4 + -1;
      DAT_003fae59 = DAT_003fae59 & 0xf7;
    }
  }
  else {
    DAT_003fae59 = DAT_003fae59 & 0xf7;
    DAT_005bb7a4 = TDTKAUS;
  }
  if ((TKAUSDMX < tkalin) || (tkalin < TKAUSDMN)) {
    DAT_003fae59 = DAT_003fae59 & 0xfd;
    DAT_005bb7a5 = TDTKAUS;
  }
  else if (DAT_005bb7a5 == '\0') {
    DAT_003fae59 = DAT_003fae59 & 0xfd | 2;
  }
  else {
    DAT_005bb7a5 = DAT_005bb7a5 + -1;
    DAT_003fae59 = DAT_003fae59 & 0xfd;
  }
  if (((DAT_003fae59 >> 3 & 1) == 0) && ((DAT_003fae59 >> 2 & 1) == 0)) {
    DAT_003fae59 = DAT_003fae59 & 0xfe;
  }
  else {
    DAT_003fae59 = DAT_003fae59 & 0xfe | 1;
  }
  bVar1 = DAT_003fae59 >> 1 & 1;
  if (bVar1 == 0) {
    if ((DAT_003fae59 & 1) != 0) {
      local_30 = local_30 & 0xffbe | 0x41;
    }
  }
  else {
    local_30 = local_30 & 0xf0be;
  }
  if ((bVar1 != 0) || ((DAT_003fae59 & 1) != 0)) {
    local_30 = local_30 & 0xdffd | 0x2002;
  }
  tka = tkalin;
  if (((byte)local_30 >> 6 & 1) != 0) {
    tka = TKAUSDE;
  }
  local_2c[0] = local_30;
  local_24 = local_2c;
  local_28[0] = local_30;
  func_0xff222958(0xb1,local_28);
  return;
}

