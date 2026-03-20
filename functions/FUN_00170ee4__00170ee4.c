/*
 * Program: n42.bin
 * Function: FUN_00170ee4
 * Entry: 00170ee4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00170ee4(void)

{
  ushort uVar1;
  undefined2 uVar2;
  byte bVar3;
  ushort local_20;
  ushort local_1c [2];
  ushort local_18 [2];
  ushort *local_14;
  
  uVar1 = _B_mnta;
  local_20 = _B_mnta;
  tanslin = func_0xff2187cc(&DAT_001d0a0c,wtans);
  if (TADMX < tanslin) {
    local_20 = uVar1 & 0xf0ff | 0x100;
    DAT_003fae45 = DAT_003fae45 & 0xef | 0x10;
  }
  else {
    DAT_003fae45 = DAT_003fae45 & 0xef;
  }
  if ((tanslin < TADMN) && ((DAT_003fae45 >> 1 & 1) != 0)) {
    local_20 = local_20 & 0xf0ff | 0x200;
    DAT_003fae45 = DAT_003fae45 & 0xdf | 0x20;
  }
  else {
    DAT_003fae45 = DAT_003fae45 & 0xdf;
  }
  if (((DAT_003fae45 >> 4 & 1) == 0) && (TADMN <= tanslin)) {
    if (DAT_003fae3e == '\0') {
      DAT_003fae45 = DAT_003fae45 & 0xf7 | 8;
    }
    else {
      DAT_003fae3e = DAT_003fae3e + -1;
    }
  }
  else {
    DAT_003fae45 = DAT_003fae45 & 0xf7;
    DAT_003fae3e = TDTA;
  }
  if (((DAT_003fae45 >> 5 & 1) == 0) && ((DAT_003fae45 >> 4 & 1) == 0)) {
    DAT_003fae45 = DAT_003fae45 & 0xfb;
    DAT_003fae3f = TDTA;
  }
  else if (DAT_003fae3f == '\0') {
    DAT_003fae45 = DAT_003fae45 & 0xfb | 4;
  }
  else {
    DAT_003fae3f = DAT_003fae3f + -1;
  }
  bVar3 = DAT_003fae45 >> 3 & 1;
  if (bVar3 == 0) {
    if ((DAT_003fae45 >> 2 & 1) != 0) {
      local_20 = local_20 & 0xffbe | 0x41;
    }
  }
  else {
    local_20 = local_20 & 0xf0be;
  }
  if ((bVar3 != 0) || ((DAT_003fae45 >> 2 & 1) != 0)) {
    local_20 = local_20 & 0xdffd | 0x2002;
  }
  bVar3 = tanslin;
  if ((local_20 & 1) != 0) {
    bVar3 = TADE;
  }
  uVar2 = func_0xff217fe8(_ZFTANS,bVar3,_DAT_003fae40);
  DAT_003fae40 = (byte)((ushort)uVar2 >> 8);
  tans = DAT_003fae40;
  tansk_w = (ushort)DAT_003fae40 * 0x20 + 0x2586;
  local_1c[0] = local_20;
  local_14 = local_1c;
  local_18[0] = local_20;
  _DAT_003fae40 = uVar2;
  func_0xff222958(0xaa,local_18);
  return;
}

