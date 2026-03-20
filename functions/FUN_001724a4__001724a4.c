/*
 * Program: n42.bin
 * Function: FUN_001724a4
 * Entry: 001724a4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001724a4(void)

{
  byte bVar1;
  ushort uVar2;
  undefined2 local_30;
  ushort local_2c [2];
  ushort local_28 [2];
  ushort *local_24;
  
  uVar2 = _DAT_003fdfbe;
  local_30 = _DAT_003fdfbe;
  DAT_005b90d5 = func_0xff2187cc(&DAT_001d0b38,wtka);
  if (DAT_001d0b63 < DAT_005b90d5) {
    if (DAT_005bb7a0 == '\0') {
      local_30 = uVar2 & 0xf0ff | 0x100;
      DAT_003fae49 = DAT_003fae49 & 0xfb | 4;
    }
    else {
      DAT_005bb7a0 = DAT_005bb7a0 + -1;
      DAT_003fae49 = DAT_003fae49 & 0xfb;
    }
  }
  else {
    DAT_003fae49 = DAT_003fae49 & 0xfb;
    DAT_005bb7a0 = DAT_001d0b34;
  }
  if (DAT_005b90d5 < DAT_001d0b62) {
    if (DAT_005bb7a1 == '\0') {
      local_30 = local_30 & 0xf0ff | 0x200;
      DAT_003fae49 = DAT_003fae49 & 0xf7 | 8;
    }
    else {
      DAT_005bb7a1 = DAT_005bb7a1 + -1;
      DAT_003fae49 = DAT_003fae49 & 0xf7;
    }
  }
  else {
    DAT_003fae49 = DAT_003fae49 & 0xf7;
    DAT_005bb7a1 = DAT_001d0b34;
  }
  if ((DAT_001d0b63 < DAT_005b90d5) || (DAT_005b90d5 < DAT_001d0b62)) {
    DAT_003fae49 = DAT_003fae49 & 0xfd;
    DAT_005bb7a2 = DAT_001d0b34;
  }
  else if (DAT_005bb7a2 == '\0') {
    DAT_003fae49 = DAT_003fae49 & 0xfd | 2;
  }
  else {
    DAT_005bb7a2 = DAT_005bb7a2 + -1;
    DAT_003fae49 = DAT_003fae49 & 0xfd;
  }
  if (((DAT_003fae49 >> 3 & 1) == 0) && ((DAT_003fae49 >> 2 & 1) == 0)) {
    DAT_003fae49 = DAT_003fae49 & 0xfe;
  }
  else {
    DAT_003fae49 = DAT_003fae49 & 0xfe | 1;
  }
  bVar1 = DAT_003fae49 >> 1 & 1;
  if (bVar1 == 0) {
    if ((DAT_003fae49 & 1) != 0) {
      local_30 = local_30 & 0xffbe | 0x41;
    }
  }
  else {
    local_30 = local_30 & 0xf0be;
  }
  if ((bVar1 != 0) || ((DAT_003fae49 & 1) != 0)) {
    local_30 = local_30 & 0xdffd | 0x2002;
  }
  DAT_005b90d4 = DAT_005b90d5;
  if (((byte)local_30 >> 6 & 1) != 0) {
    DAT_005b90d4 = DAT_001d0b61;
  }
  local_2c[0] = local_30;
  local_24 = local_2c;
  local_28[0] = local_30;
  func_0xff222958(0xae,local_28);
  return;
}

