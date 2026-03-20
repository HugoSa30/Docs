/*
 * Program: n42.bin
 * Function: FUN_00166a9c
 * Entry: 00166a9c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00167384) */
/* WARNING: Removing unreachable block (ram,0x00166ffc) */
/* WARNING: Removing unreachable block (ram,0x00166dc4) */
/* WARNING: Removing unreachable block (ram,0x00166ed4) */
/* WARNING: Removing unreachable block (ram,0x0016726c) */
/* WARNING: Removing unreachable block (ram,0x0016747c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00166a9c(void)

{
  byte bVar1;
  undefined2 uVar3;
  uint uVar2;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bStack_37;
  byte bStack_36;
  
  if ((DAT_003faae6 & 4) == 0) {
    DAT_003faae6 = DAT_003faae6 & 0xf7;
  }
  else {
    DAT_003faae6 = DAT_003faae6 | 8;
  }
  if ((B_stoe == '\0') || (tabst_w < _TABSTHLSU)) {
    DAT_003faae6 = DAT_003faae6 & 0xfb;
  }
  else {
    DAT_003faae6 = DAT_003faae6 | 4;
  }
  if (((DAT_003faae6 & 4) == 0) || ((DAT_003faae6 & 8) != 0)) {
    if (DAT_003faaeb == '\0') {
      DAT_003faae6 = DAT_003faae6 & 0xfd;
      goto LAB_00166b94;
    }
  }
  else if (DAT_003faaeb == '\0') {
    DAT_003faaeb = DAT_001c1c1a;
    DAT_003faae6 = DAT_003faae6 | 2;
    goto LAB_00166b94;
  }
  DAT_003faaeb = DAT_003faaeb + -1;
LAB_00166b94:
  if ((UBHS < ub) ||
     (((DAT_003faae6 & 2) == 0 && (((B_atmtpa == '\0' || (B_stoe == '\0')) && (B_trkh == '\0'))))))
  {
    B_hsv = '\0';
  }
  else {
    B_hsv = '\x01';
  }
  if (B_hsv == '\0') {
    DAT_003faaf4 = DAT_003faaf4 & 0xfe;
    DAT_003faaea = 0;
  }
  else if (DAT_003faaea < DAT_001c1c1c) {
    DAT_003faaea = DAT_003faaea + 1;
  }
  else {
    DAT_003faaf4 = DAT_003faaf4 | 1;
  }
  if ((((DAT_003faaf4 & 1) == 0) && ((B_trkh != '\0' || (tabgm < DAT_001c1c18)))) &&
     ((B_sbbvk == '\0' || (tmot < DAT_001c1c1b)))) {
    B_wu = '\0';
  }
  else {
    B_wu = '\x01';
  }
  if (B_hsv == '\0') {
    tedst = DAT_001c1c19;
    bVar1 = func_0xff2187cc(&TLSUTA,tans);
    _DAT_003faaec = (ushort)bVar1 << 8;
  }
  else if ((B_hmx == '\0') || (B_wu != '\0')) {
    if (B_wu == '\0') {
      uVar2 = (uint)_DAT_003faaec + (uint)DAT_001c1c17;
      if (0xffff < uVar2) {
        uVar2 = 0xffff;
      }
      _DAT_003faaec = (ushort)uVar2;
    }
    else {
      iVar7 = (uint)_DAT_003faaec - (uint)DAT_001c1c16;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      else if (0xffff < iVar7) {
        iVar7 = 0xffff;
      }
      _DAT_003faaec = (ushort)iVar7;
    }
    if (DAT_003faaec < 0x32) {
      tedst = DAT_003faaec;
    }
    else {
      _DAT_003faaec = 0x3200;
      tedst = 0x32;
    }
  }
  if ((DAT_003faae6 & 0x10) == 0) {
    DAT_003faae6 = DAT_003faae6 & 0xdf;
  }
  else {
    DAT_003faae6 = DAT_003faae6 | 0x20;
  }
  if (((B_nplsusa == '\0') || ((DAT_003fdf5f & 1) != 0)) || ((DAT_003fdf23 & 1) != 0)) {
    DAT_003faae6 = DAT_003faae6 & 0xef;
  }
  else {
    DAT_003faae6 = DAT_003faae6 | 0x10;
  }
  if (((DAT_003faae6 & 0x10) != 0) && ((DAT_003faae6 & 0x20) == 0)) {
    uVar2 = (uint)WHLSUKOR + (uint)hlsukor;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    if ((uVar2 & 0xff) < (uint)HLSUKORMX) {
      hlsukor = (byte)uVar2;
    }
    else {
      hlsukor = HLSUKORMX;
    }
  }
  tedtml = func_0xff2196d0(&KFLSUED,tabgm,msabg);
  uVar2 = (int)((uint)tedtml * (uint)hlsukor) >> 7;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  tedi = tedst;
  if (((uint)tedst <= (uVar2 & 0xff)) && (B_wu != '\0')) {
    tedi = (byte)uVar2;
  }
  uVar2 = func_0xff217b40(0x2532,0,(uint)ub * (uint)ub);
  uVar6 = (uVar2 & 0xffff) * (uint)tedi;
  uVar4 = 0x7fff;
  uVar3 = uVar4;
  if (uVar6 < 0x800000) {
    uVar3 = (short)(uVar6 * 2 >> 8);
  }
  bStack_36 = (byte)uVar3;
  bStack_37 = (byte)((ushort)uVar3 >> 8);
  if (bStack_36 < 0x80) {
    uVar6 = (uint)bStack_37;
  }
  else {
    uVar6 = bStack_37 + 1;
    if (0xff < uVar6) {
      uVar6 = 0xff;
    }
  }
  if (0x32 < (uVar6 & 0xff)) {
    uVar6 = 0x32;
  }
  tedub = (byte)uVar6;
  B_hmx = (byte)(((uint)(byte)(((uVar6 & 0xff) < 0x32) << 3) << 8) >> 0xb) ^ 1;
  if ((UBHS < ub) ||
     (((DAT_003faae6 & 2) == 0 && (((B_atmtpa2 == '\0' || (B_stoe == '\0')) && (B_trkh == '\0'))))))
  {
    B_hsv2 = false;
  }
  else {
    B_hsv2 = true;
  }
  if ((bool)B_hsv2) {
    if (DAT_003faaf0 < DAT_001c1c1c) {
      DAT_003faaf0 = DAT_003faaf0 + 1;
    }
    else {
      DAT_003faaf4 = DAT_003faaf4 | 2;
    }
  }
  else {
    DAT_003faaf4 = DAT_003faaf4 & 0xfd;
    DAT_003faaf0 = 0;
  }
  if ((((DAT_003faaf4 & 2) == 0) && ((B_trkh != '\0' || (tabgm2 < DAT_001c1c18)))) &&
     ((B_sbbvk2 == '\0' || (tmot < DAT_001c1c1b)))) {
    B_wu2 = '\0';
  }
  else {
    B_wu2 = '\x01';
  }
  if ((bool)B_hsv2) {
    if ((B_hmx2 == '\0') || (B_wu2 != '\0')) {
      if (B_wu2 == '\0') {
        uVar6 = (uint)_DAT_003faaf2 + (uint)DAT_001c1c17;
        if (0xffff < uVar6) {
          uVar6 = 0xffff;
        }
        _DAT_003faaf2 = (ushort)uVar6;
      }
      else {
        iVar7 = (uint)_DAT_003faaf2 - (uint)DAT_001c1c16;
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        else if (0xffff < iVar7) {
          iVar7 = 0xffff;
        }
        _DAT_003faaf2 = (ushort)iVar7;
      }
      if (DAT_003faaf2 < 0x32) {
        tedst2 = DAT_003faaf2;
      }
      else {
        _DAT_003faaf2 = 0x3200;
        tedst2 = 0x32;
      }
    }
  }
  else {
    tedst2 = DAT_001c1c19;
    bVar1 = func_0xff2187cc(&TLSUTA,tans);
    _DAT_003faaf2 = (ushort)bVar1 << 8;
  }
  if ((DAT_003faae7 & 1) == 0) {
    DAT_003faae7 = DAT_003faae7 & 0xfd;
  }
  else {
    DAT_003faae7 = DAT_003faae7 | 2;
  }
  if (((B_nplsusa2 == '\0') || ((DAT_003fdf61 & 1) != 0)) || ((DAT_003fdf25 & 1) != 0)) {
    DAT_003faae7 = DAT_003faae7 & 0xfe;
  }
  else {
    DAT_003faae7 = DAT_003faae7 | 1;
  }
  if (((DAT_003faae7 & 1) != 0) && ((DAT_003faae7 & 2) == 0)) {
    uVar6 = (uint)WHLSUKOR + (uint)hlsukor2;
    if (0xff < uVar6) {
      uVar6 = 0xff;
    }
    if ((uVar6 & 0xff) < (uint)HLSUKORMX) {
      hlsukor2 = (byte)uVar6;
    }
    else {
      hlsukor2 = HLSUKORMX;
    }
  }
  tedtml2 = func_0xff2196d0(&KFLSUED2,tabgm2,msabg2);
  uVar6 = (int)((uint)tedtml2 * (uint)hlsukor2) >> 7;
  if (0xff < uVar6) {
    uVar6 = 0xff;
  }
  uVar5 = (uint)tedst2;
  if ((uVar5 <= (uVar6 & 0xff)) && (B_wu2 != '\0')) {
    uVar5 = uVar6;
  }
  tedi2 = (byte)uVar5;
  uVar2 = (uVar2 & 0xffff) * (uVar5 & 0xff);
  if (uVar2 < 0x800000) {
    uVar4 = (undefined2)(uVar2 * 2 >> 8);
  }
  bStack_36 = (byte)uVar4;
  bStack_37 = (byte)((ushort)uVar4 >> 8);
  if (bStack_36 < 0x80) {
    uVar2 = (uint)bStack_37;
  }
  else {
    uVar2 = bStack_37 + 1;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
  }
  if (0x32 < (uVar2 & 0xff)) {
    uVar2 = 0x32;
  }
  tedub2 = (byte)uVar2;
  B_hmx2 = (byte)(((uint)(byte)(((uVar2 & 0xff) < 0x32) << 3) << 8) >> 0xb) ^ 1;
  return;
}

