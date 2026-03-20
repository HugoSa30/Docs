/*
 * Program: n42.bin
 * Function: FUN_000efc78
 * Entry: 000efc78
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000effa4) */

void FUN_000efc78(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)DAT_005b91ed;
  if ((DAT_001d2ed2 & 8) != 0) {
    uVar5 = 10;
  }
  iVar2 = 0xff - ((int)((uint)DAT_005b91ed * (uint)DAT_001cb63b * 100) >> 10);
  if (iVar2 < 0) {
    DAT_005b91e7 = 0;
  }
  else {
    DAT_005b91e7 = (byte)iVar2;
  }
  if ((DAT_005b96b4 == 0) || (uVar5 == 0)) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = ((uint)DAT_005b96f4 << 0xd) / (DAT_005b96b4 * uVar5 * 0x19 >> 8);
    if (0xffff < uVar3) {
      uVar3 = 0xffff;
    }
  }
  DAT_005b96a8 = FUN_000a81f0(0x1cb63e,uVar3 & 0xffff);
  if (((B_evloc == '\0') || (DAT_005b96f4 == 0)) &&
     (((B_dtes == '\0' && (B_tevcheck == '\0')) || (DAT_005b96f4 != 0)))) {
    DAT_005b91e9 = 0;
  }
  else if (((B_dtes == '\0') && (B_tevcheck == '\0')) || (DAT_005b96f4 != 0)) {
    uVar5 = (DAT_005b96a8 * uVar5) / 5 >> 9;
    if (uVar5 < 0x100) {
      DAT_005b91e9 = (byte)uVar5;
    }
    else {
      DAT_005b91e9 = 0xff;
    }
  }
  else {
    DAT_005b91e9 = DAT_005b8b8f;
  }
  if (((uint)DAT_001cb638 < (uint)DAT_005b91e9) || (DAT_003fb6e2 < DAT_001cb637)) {
    B_tevtstp = 0;
    bVar1 = false;
    DAT_003fb6e3 = '\0';
  }
  else if (DAT_003fb6e3 == '\0') {
    B_tevtstp = 1;
    bVar1 = true;
    DAT_003fb6e3 = -1;
  }
  else {
    B_tevtstp = 0;
    bVar1 = false;
  }
  DAT_003fb6e2 = DAT_003fb6e1;
  DAT_003fb6e1 = DAT_005b91e9;
  if (DAT_005b91e9 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)DAT_005b91e9 + (uint)DAT_003fb6e0;
  }
  uVar3 = (uint)DAT_005b91e7;
  if (bVar1) {
    tateout = 0;
    tevper = DAT_001cb63a;
    if (uVar5 < uVar3) {
      tatesoll = DAT_005b91e9;
    }
    else {
      tatesoll = 0xff;
    }
  }
  else if (uVar5 < uVar3) {
    if (DAT_005b91e9 == 0) {
      tatesoll = 0;
      tateout = 0;
    }
    else {
      tatesoll = DAT_005b91e9;
      uVar4 = (uint)DAT_005b91e9 + (uint)DAT_003fb6e0;
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      tateout = (byte)uVar4;
    }
    tevper = DAT_005b91e5;
  }
  else {
    tatesoll = 0xff;
    tateout = 0xff;
    tevper = DAT_001cb639;
  }
  if (B_tevtini != '\0') {
    tateist = tatesoll;
  }
  if (uVar5 < uVar3) {
    DAT_005b96a6 = (ushort)tatesoll * (ushort)tevper;
  }
  else {
    DAT_005b96a6 = (ushort)tevper << 8;
  }
  return;
}

