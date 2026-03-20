/*
 * Program: n42.bin
 * Function: FUN_000be830
 * Entry: 000be830
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000bed64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000be830(void)

{
  uint uVar1;
  short sVar3;
  uint uVar2;
  uint uVar4;
  int iVar5;
  uint uVar6;
  word wVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = (int)(short)dpssyn_w;
  iVar9 = (int)(short)_DAT_003fabd0;
  uVar1 = (uint)rlroh_w;
  if (DAT_003fabd3 == '\x01') {
    _DAT_003fabd4 = rlroh_w;
    _DAT_003fabd6 = rlroh_w;
    iVar5 = iVar9 - iVar8;
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
    else if (0x7fff < iVar5) {
      iVar5 = 0x7fff;
    }
    _DAT_003fabd8 = (short)iVar5;
    iVar5 = iVar9 - iVar8;
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
    else if (0x7fff < iVar5) {
      iVar5 = 0x7fff;
    }
    _DAT_003fabda = (short)iVar5;
    DAT_003fabd3 = '\0';
  }
  iVar9 = iVar9 - iVar8;
  if (iVar9 < -0x8000) {
    iVar9 = -0x8000;
  }
  else if (0x7fff < iVar9) {
    iVar9 = 0x7fff;
  }
  sVar3 = (short)iVar9;
  DAT_005b985c = _DAT_001c39e4;
  if ((sVar3 <= _DAT_001c39e4) && (DAT_005b985c = sVar3, sVar3 < _DAT_001c39e2)) {
    DAT_005b985c = _DAT_001c39e2;
  }
  _DAT_003fabd0 = dpssyn_w;
  uVar2 = (int)(0x100 - (uint)DAT_001c39e8) >> 1 & 0xff;
  uVar4 = -uVar2 - (uint)DAT_001c39e8 & 0xff;
  uVar6 = (uint)DAT_001c39e8 * (uint)_DAT_003fabd6 + uVar2 * uVar1 + uVar4 * _DAT_003fabd4;
  uVar6 = uVar6 + (uVar6 & 0xff);
  if (uVar6 >> 8 < 0x10000) {
    DAT_005b9362 = (ushort)(uVar6 >> 8);
  }
  else {
    DAT_005b9362 = 0xffff;
  }
  _DAT_003fabd4 = rlroh_w;
  _DAT_003fabd6 = DAT_005b9362;
  iVar9 = (int)DAT_005b985c;
  iVar8 = (uint)DAT_001c39e8 * (int)_DAT_003fabda + uVar2 * iVar9 + uVar4 * (int)_DAT_003fabd8;
  iVar8 = iVar8 * 2 + (iVar8 >> 8) * -0x100;
  iVar5 = iVar8 >> 8;
  if (iVar5 < 0x8000) {
    if (iVar5 < -0x8000) {
      DAT_005b985a = -0x8000;
    }
    else {
      DAT_005b985a = (short)((uint)iVar8 >> 8);
    }
  }
  else {
    DAT_005b985a = 0x7fff;
  }
  iVar8 = (int)DAT_005b985a;
  _DAT_003fabda = DAT_005b985a;
  _DAT_003fabd8 = DAT_005b985c;
  if (DAT_001c39eb != '\0') {
    sVar3 = calc_value_from_y_2(&DAT_001c3938,iVar8);
    iVar9 = (int)(short)(iVar8 * sVar3 >> 0xf);
    uVar1 = (uint)DAT_005b9362;
  }
  if (DAT_001c39e9 == '\0') {
    wVar7 = dps_w;
    if ((short)dps_w < 1) {
      wVar7 = 0;
    }
  }
  else {
    wVar7 = dpssyn_w;
    if ((short)dpssyn_w < 1) {
      wVar7 = 0;
    }
  }
  iVar8 = FUN_000a949c(KLSRMKOR,&DAT_001cf8ea,0x1cf8fa,nmot_w);
  uVar2 = FUN_000aa054(DAT_001c39ee,&DAT_001c39f0,DAT_001c39ef,&DAT_001c39f8,&DAT_001c3a08,tans,
                       wVar7);
  uVar2 = (int)(iVar8 * (uVar2 & 0xff) * 4 + 0x80) >> 10;
  DAT_003fabd2 = (undefined)uVar2;
  iVar9 = (int)(iVar9 * (uVar2 & 0xff) * 0x14) / 0x180;
  if ((iVar9 < 0x8000) && (-0x8001 < iVar9)) {
    DAT_005b985e = (short)iVar9;
  }
  iVar9 = uVar1 - (int)DAT_005b985e;
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  else if (0xffff < iVar9) {
    iVar9 = 0xffff;
  }
  DAT_005b9360 = (ushort)iVar9;
  iVar9 = (uint)rlroh_w - (uint)_DAT_003fc28a;
  if (iVar9 < -0x8000) {
    iVar9 = -0x8000;
  }
  else if (0x7fff < iVar9) {
    iVar9 = 0x7fff;
  }
  iVar9 = (int)(short)iVar9 * (uint)_DAT_003fabce;
  if (iVar9 < 0x7fff001) {
    if (iVar9 < -0x8000000) {
      DAT_005b934a = -0x8000;
    }
    else {
      DAT_005b934a = (short)(iVar9 >> 0xc);
    }
  }
  else {
    DAT_005b934a = 0x7fff;
  }
  uVar1 = (uint)DAT_005b9356 + (int)DAT_005b934a;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0xffff < (int)uVar1) {
    uVar1 = 0xffff;
  }
  uVar2 = (uint)DAT_005b8b74;
  uVar4 = psmx_w - uVar2;
  if ((int)uVar4 < 0) {
    uVar4 = 0;
  }
  else if (0xffff < (int)uVar4) {
    uVar4 = 0xffff;
  }
  if ((uVar4 & 0xffff) < (uVar1 & 0xffff)) {
    iVar9 = psmx_w - uVar2;
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    else if (0xffff < iVar9) {
      iVar9 = 0xffff;
    }
    DAT_005b9356 = (ushort)iVar9;
  }
  else {
    DAT_005b9356 = (ushort)uVar1;
  }
  if (B_psger == '\0') {
    uVar2 = DAT_005b9356 + uVar2;
    if (0xffff < uVar2) {
      uVar2 = 0xffff;
    }
    _ps_w = (ushort)uVar2;
  }
  else {
    iVar9 = (uint)pu_w - (int)(short)dps_w;
    if (iVar9 < 0) {
      _ps_w = 0;
    }
    else if (iVar9 < 0x10000) {
      _ps_w = (ushort)iVar9;
    }
    else {
      _ps_w = 0xffff;
    }
  }
  uVar1 = (uint)_ps_w - (uint)DAT_005b9354;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0xffff < (int)uVar1) {
    uVar1 = 0xffff;
  }
  uVar1 = FUN_000b17f4(DAT_005b934e,uVar1 & 0xffff);
  DAT_005b935e = (ushort)((uVar1 & 0xffff) >> 1);
  uVar1 = FUN_000a7b40(DAT_005b8b74,0,_ps_w);
  DAT_005b9348 = (undefined2)uVar1;
  DAT_005b90a8 = (undefined)((uVar1 & 0xffff) >> 8);
  DAT_005b935c = FUN_000b17f4(DAT_005b935e,uVar1 & 0xffff);
  iVar9 = (uint)DAT_005b935e - (uint)DAT_005b935c;
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  else if (0xffff < iVar9) {
    iVar9 = 0xffff;
  }
  _rl_w = (ushort)iVar9;
  _DAT_003fc28a = _rl_w;
  if (B_stend == '\0') {
    _rl_w = rlroh_w;
  }
  else if (B_rlh == 0) {
    _rl_w = DAT_005b9360;
  }
  rlp_w = _rl_w;
  _rl_f = (float)((double)CONCAT44(0x43300000,(uint)_rl_w) - (double)_DAT_0001c2c0) * _DAT_0001c2c4
          * _DAT_0001c2c8;
  uVar1 = (uint)_rl_w;
  if (uVar1 < 0x1fe1) {
    rl = (byte)((int)uVar1 >> 5);
  }
  else {
    rl = 0xff;
  }
  rlp = rl;
  iVar9 = uVar1 - _DAT_003fabcc;
  if (iVar9 < -0x8000) {
    iVar9 = -0x8000;
  }
  else if (0x7fff < iVar9) {
    iVar9 = 0x7fff;
  }
  DAT_005b934c = (word)iVar9;
  drlp_w = (word)iVar9;
  _DAT_003fabcc = _rl_w;
  return;
}

