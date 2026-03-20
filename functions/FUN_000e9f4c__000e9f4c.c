/*
 * Program: n42.bin
 * Function: FUN_000e9f4c
 * Entry: 000e9f4c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e9f4c(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  byte bVar5;
  uint in_TBLr;
  
  iVar3 = (uint)(mifa_w >> 1) - (uint)(mdverl_w >> 1);
  if (iVar3 < -0x8000) {
    iVar3 = -0x8000;
  }
  else if (0x7fff < iVar3) {
    iVar3 = 0x7fff;
  }
  DAT_005b9546 = (short)iVar3;
  if (100 < nmot) {
    iVar3 = (int)DAT_005b9546 - (int)DAT_005b9548;
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    DAT_005b9544 = (short)iVar3;
    if (nmot < 0x70) {
      if (DAT_003f9cda == '\0') goto LAB_000ea0d8;
    }
    else if (DAT_003f9cda == '\0') {
LAB_000ea0d8:
      uVar2 = FUN_000a7c80((uint)DAT_005b9542 * 0x98 >> 8,(int)DAT_005b9544,
                           (int)(short)_DAT_003f9d18,_DAT_003f9d18 & 0xffff,0,0,0x7fff,0xffff);
      _DAT_003f9d18 = (ushort)(uVar2 >> 0x10);
      DAT_005b9556 = _DAT_003f9d18;
      _DAT_003f9cf2 = (ushort)(in_TBLr >> 5);
      _DAT_003f9d18 = uVar2;
    }
    else {
      uVar2 = (in_TBLr >> 5) - (uint)_DAT_003f9cf2;
      _DAT_003f9cf4 = (undefined2)uVar2;
      _DAT_003f9cf2 = (ushort)(in_TBLr >> 5);
      _DAT_003f9cf6 = FUN_000b17f4(uVar2 & 0xffff,0x3200);
      uVar2 = FUN_000a7c80((uint)DAT_005b9542 * (uint)_DAT_003f9cf6 >> 8 & 0xffff,(int)DAT_005b9544,
                           (int)(short)_DAT_003f9d18,_DAT_003f9d18 & 0xffff,0,0,0x7fff,0xffff);
      _DAT_003f9d18 = (ushort)(uVar2 >> 0x10);
      DAT_005b9556 = _DAT_003f9d18;
      DAT_003f9cda = '\0';
      _DAT_003f9d18 = uVar2;
    }
    iVar3 = (uint)DAT_005b9556 - (uint)nmot_w;
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    DAT_005b9552 = (short)iVar3;
    iVar3 = (int)DAT_005b9552 * ((uint)DAT_005b9193 * 0xa4 >> 5);
    if (iVar3 < 0x8000) {
      if (iVar3 < -0x8000) {
        DAT_005b9548 = -0x8000;
      }
      else {
        DAT_005b9548 = (short)iVar3;
      }
    }
    else {
      DAT_005b9548 = 0x7fff;
    }
  }
  if ((DAT_001c8bdc & 0x40) == 0) {
    DAT_003fc10d = B_kuppl;
  }
  else {
    DAT_003fc10d = DAT_005b8ccb;
  }
  if ((DAT_001c8bdc & 1) != 0) {
    if (DAT_003fc10e == '\0') {
      DAT_005b9195 = 0;
    }
    else if (DAT_005b9195 != 0xff) {
      DAT_005b9195 = DAT_005b9195 + 1;
    }
    if (DAT_003fc108 == '\0') {
      DAT_005b9196 = 0;
    }
    else if (DAT_005b9196 != 0xff) {
      DAT_005b9196 = DAT_005b9196 + 1;
    }
    uVar2 = (uint)gangi;
    bVar5 = DAT_001c8c08;
    if ((1 < uVar2) && (bVar5 = DAT_001c8c0d, (int)(uVar2 - 1) < 6)) {
      bVar5 = (&DAT_001c8c07)[uVar2];
    }
    if (DAT_005b9195 < bVar5) {
      bVar5 = DAT_001c8c10;
      if ((1 < uVar2) && (bVar5 = DAT_001c8c15, (int)(uVar2 - 1) < 6)) {
        bVar5 = (&DAT_001c8c0f)[uVar2];
      }
      if (DAT_005b9196 < bVar5) {
        DAT_003fc10c = '\x01';
        goto LAB_000ea304;
      }
    }
    DAT_003fc10c = '\0';
  }
LAB_000ea304:
  if ((int)DAT_005b9550 < (int)DAT_005b9552) {
    if (DAT_005b9194 != '\0') {
      DAT_005b9194 = DAT_005b9194 + -1;
    }
  }
  else {
    DAT_005b9194 = DAT_001c8be9;
  }
  if (DAT_003fc10a == '\0') {
    if (DAT_005b9197 == '\0') {
      DAT_003fc10b = '\0';
    }
    else {
      DAT_005b9197 = DAT_005b9197 + -1;
    }
  }
  if ((DAT_001c8bdc & 2) == 0) {
    if ((DAT_001c8bdc & 1) == 0) {
      if (DAT_003fc10d == '\0') {
        DAT_003f9cd8 = DAT_003f9cd8 & 0xfb;
      }
      else {
        DAT_003f9cd8 = DAT_003f9cd8 | 4;
      }
    }
    else if (DAT_003fc10c == '\0') {
      DAT_003f9cd8 = DAT_003f9cd8 & 0xfb;
    }
    else {
      DAT_003f9cd8 = DAT_003f9cd8 | 4;
    }
  }
  else {
    DAT_003f9cd8 = DAT_003f9cd8 & 0xfb;
  }
  if (((((B_brems == '\0') || (DAT_005b9194 != '\0')) && ((DAT_003f9cd8 & 4) == 0)) &&
      (((uVar2 = (uint)gangi, uVar2 != 0 && (mifa_w == misolv_w)) &&
       (((DAT_003f9cd8 & 1) != 0 || (B_wk == '\0')))))) &&
     ((B_gwhs == '\0' && (_DAT_003f9cec <= _DAT_001c8c22)))) {
    uVar4 = _DAT_001c8c24;
    if ((1 < uVar2) && (uVar4 = _DAT_001c8c2e, (int)(uVar2 - 1) < 6)) {
      uVar4 = *(ushort *)(&DAT_001c8c22 + uVar2 * 2);
    }
    if ((uVar4 < DAT_005b954c) && (DAT_003f9cd2 == '\0')) goto LAB_000ea528;
    DAT_003fc10a = '\0';
    if (DAT_005b9197 == '\0') {
      DAT_003fc10b = '\0';
    }
  }
  else {
LAB_000ea528:
    DAT_003fc10a = '\x01';
    DAT_003fc10b = '\x01';
    DAT_005b9197 = DAT_001c8be7;
    DAT_003f9cd2 = DAT_001c8c16;
  }
  if (((DAT_003fc10a == '\0') || (DAT_003fc106 != '\0')) &&
     ((DAT_003fc106 == '\0' || ((DAT_003f9cd8 & 2) != 0)))) {
    DAT_003fc109 = 0;
  }
  else {
    DAT_003fc109 = 1;
    DAT_005b954e = 0;
    _DAT_003f9ce4 = 0;
    _DAT_003f9ce6 = 0;
    _DAT_003f9ce8 = 0;
    _DAT_003f9cea = 0;
    _DAT_003f9d00 = 0;
    _DAT_003f9d04 = 0;
    _DAT_003f9d08 = 0;
    _DAT_003f9d0c = 0;
    _DAT_003f9d10 = 0;
    _DAT_003f9d14 = 0;
    DAT_005b9556 = nmot_w;
    if (DAT_003fc106 != '\0') {
      DAT_005b9556 = DAT_005b9554;
    }
    _DAT_003f9d18 = (uint)DAT_005b9556 << 0x10;
  }
  if (DAT_003fc106 == '\0') {
    DAT_003f9cd8 = DAT_003f9cd8 & 0xfd;
  }
  else {
    DAT_003f9cd8 = DAT_003f9cd8 | 2;
  }
  if (B_wk == '\0') {
    DAT_003f9cd8 = DAT_003f9cd8 & 0xfe;
  }
  else {
    DAT_003f9cd8 = DAT_003f9cd8 | 1;
  }
  DAT_003fc105 = (DAT_001c8bdc & 4) != 0;
  if ((DAT_001c8bdc & 8) != 0) {
    if (B_lsd == '\0') {
      if ((((DAT_003f9cd8 & 8) != 0) &&
          (uVar2 = (uint)gangi, DAT_003f9cd5 = DAT_001c8bfc, uVar2 != 0)) &&
         (DAT_003f9cd5 = DAT_001c8c03, uVar2 < 8)) {
        DAT_003f9cd5 = (&DAT_001c8bfc)[uVar2];
      }
      if (DAT_003f9cd5 != '\0') goto LAB_000ea788;
    }
    else {
LAB_000ea788:
      DAT_003fc105 = true;
      if (DAT_003f9cd5 != '\0') {
        DAT_003f9cd5 = DAT_003f9cd5 + -1;
      }
      if (B_lsd != '\0') {
        DAT_003f9cd8 = DAT_003f9cd8 | 8;
        goto LAB_000ea7e0;
      }
    }
    DAT_003f9cd8 = DAT_003f9cd8 & 0xf7;
  }
LAB_000ea7e0:
  if ((DAT_001c8bdc & 0x10) != 0) {
    if (B_dash == '\0') {
      if ((((DAT_003f9cd8 & 0x10) != 0) &&
          (uVar2 = (uint)gangi, DAT_003f9cd6 = DAT_001c8bec, uVar2 != 0)) &&
         (DAT_003f9cd6 = DAT_001c8bf3, uVar2 < 8)) {
        DAT_003f9cd6 = (&DAT_001c8bec)[uVar2];
      }
      if (DAT_003f9cd6 != '\0') goto LAB_000ea864;
    }
    else {
LAB_000ea864:
      DAT_003fc105 = true;
      if (DAT_003f9cd6 != '\0') {
        DAT_003f9cd6 = DAT_003f9cd6 + -1;
      }
      if (B_dash != '\0') {
        DAT_003f9cd8 = DAT_003f9cd8 | 0x10;
        goto LAB_000ea8bc;
      }
    }
    DAT_003f9cd8 = DAT_003f9cd8 & 0xef;
  }
LAB_000ea8bc:
  if ((DAT_001c8bdc & 0x20) != 0) {
    if (DAT_003fc10d == '\0') {
      if ((((DAT_003f9cd8 & 0x20) != 0) &&
          (uVar2 = (uint)gangi, DAT_003f9cd7 = DAT_001c8bf4, uVar2 != 0)) &&
         (DAT_003f9cd7 = DAT_001c8bfb, uVar2 < 8)) {
        DAT_003f9cd7 = (&DAT_001c8bf4)[uVar2];
      }
      if (DAT_003f9cd7 != '\0') goto LAB_000ea940;
    }
    else {
LAB_000ea940:
      DAT_003fc105 = true;
      if (DAT_003f9cd7 != '\0') {
        DAT_003f9cd7 = DAT_003f9cd7 + -1;
      }
      if (DAT_003fc10d != '\0') {
        DAT_003f9cd8 = DAT_003f9cd8 | 0x20;
        goto LAB_000ea998;
      }
    }
    DAT_003f9cd8 = DAT_003f9cd8 & 0xdf;
  }
LAB_000ea998:
  if (((B_stend != '\0') && (B_sa == '\0')) &&
     ((((DAT_003fc106 != '\0' || (DAT_003fc10d == '\0')) && (DAT_003f9cd9 != '\0')) &&
      ((B_ll == '\0' || (DAT_001c8be6 <= nmot)))))) {
    uVar2 = (uint)gangi;
    bVar5 = DAT_001c8be0;
    if ((1 < uVar2) && (bVar5 = DAT_001c8be5, (int)(uVar2 - 1) < 6)) {
      bVar5 = (&DAT_001c8bdf)[uVar2];
    }
    if ((((bVar5 <= nmot) && (nmot <= DAT_001c8bde)) && (DAT_003fc10b == '\0')) &&
       ((DAT_003f9cdb == '\0' && ((bool)DAT_003fc105 != false)))) {
      DAT_003fc104 = 1;
      goto LAB_000eaa84;
    }
  }
  DAT_003fc104 = 0;
LAB_000eaa84:
  if (DAT_003f9cd2 != '\0') {
    DAT_003f9cd2 = DAT_003f9cd2 + -1;
  }
  DAT_003f9cd3 = DAT_003f9cd3 + '\x01';
  if (DAT_003f9cd3 == '\x01') {
    _DAT_003f9d0c = (int)_DAT_003f9ce6 * (int)_DAT_001c8c20;
  }
  else if (DAT_003f9cd3 == '\x02') {
    uVar2 = (int)_DAT_003f9ce4 * (int)_DAT_001c8c1e;
    _DAT_003f9d08 = (short)(uVar2 >> 0x10);
    iVar3 = (int)_DAT_003f9d08;
    _DAT_003f9d08 = uVar2;
    iVar3 = FUN_000a79ac(iVar3,uVar2 & 0xffff,(int)_DAT_003f9d0c,_DAT_003f9d0c & 0xffff);
    _DAT_003f9d14 = iVar3 >> 0xe;
  }
  else if (DAT_003f9cd3 == '\x03') {
    _DAT_003f9d04 = (int)_DAT_003f9cea * (int)_DAT_001c8c1c;
  }
  else if (DAT_003f9cd3 == '\x04') {
    uVar2 = (int)_DAT_003f9ce8 * (int)_DAT_001c8c1a;
    _DAT_003f9d00 = (short)(uVar2 >> 0x10);
    iVar3 = (int)_DAT_003f9d00;
    _DAT_003f9d00 = uVar2;
    _DAT_003f9d10 = FUN_000a79ac((int)_DAT_003f9d04,_DAT_003f9d04 & 0xffff,iVar3,uVar2 & 0xffff);
  }
  else if (DAT_003f9cd3 == '\x05') {
    DAT_003f9cd3 = '\0';
    uVar2 = (int)DAT_005b9552 * (int)_DAT_001c8c18;
    _DAT_003f9cfc = (short)(uVar2 >> 0x10);
    iVar3 = (int)_DAT_003f9cfc;
    _DAT_003f9cfc = uVar2;
    iVar3 = FUN_000a79ac((int)_DAT_003f9d10,_DAT_003f9d10 & 0xffff,iVar3,uVar2 & 0xffff);
    _DAT_003f9d10 = (short)(iVar3 >> 0x1f);
    iVar1 = (int)_DAT_003f9d10;
    _DAT_003f9d10 = iVar3 >> 0x13;
    iVar3 = FUN_000a7ac0(iVar1,iVar3 >> 0x13 & 0xffff,(int)_DAT_003f9d14,_DAT_003f9d14 & 0xffff);
    if (iVar3 < 0x8000) {
      if (iVar3 < -0x8000) {
        DAT_005b954e = -0x8000;
      }
      else {
        DAT_005b954e = (short)iVar3;
      }
    }
    else {
      DAT_005b954e = 0x7fff;
    }
    DAT_005b954c = FUN_000b13bc((int)DAT_005b954e,0x7fff);
    iVar3 = (int)DAT_005b954e - (int)_DAT_003f9ce4;
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    _DAT_003f9cec = FUN_000b13bc((int)(short)iVar3,0x7fff);
    _DAT_003f9cea = _DAT_003f9ce8;
    _DAT_003f9ce8 = DAT_005b9552;
    _DAT_003f9ce6 = _DAT_003f9ce4;
    _DAT_003f9ce4 = DAT_005b954e;
  }
  if (DAT_003f9cd4 != '\0') {
    DAT_003f9cd4 = DAT_003f9cd4 + -1;
  }
  return;
}

