/*
 * Program: n42.bin
 * Function: FUN_00189184
 * Entry: 00189184
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00189184(void)

{
  int iVar1;
  ushort uVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  
  if (B_stend != '\0') {
    if (DAT_003fc07a == '\0') {
      _DAT_003fb8c0 = _DAT_003fb8c0 + (uint)_DAT_001ce1b0 * -0x100;
    }
    else {
      _DAT_003fb8c0 = _DAT_003fb8c0 + (uint)_DAT_001ce1b0 * 0x100;
    }
  }
  if ((int)((uint)_DAT_001ce1be << 0x10) < _DAT_003fb8c0) {
    if ((int)((uint)_DAT_001ce1bc << 0x10) <= _DAT_003fb8c0) {
      _DAT_003fb8c0 = (uint)_DAT_001ce1bc << 0x10;
      DAT_003fc220 = 1;
      if (DAT_001ce1d8 < tumg) {
        DAT_003fb8b4 = DAT_001ce1cf;
      }
      else {
        DAT_003fb8b4 = DAT_001ce1d1;
      }
    }
  }
  else {
    _DAT_003fb8c0 = (uint)_DAT_001ce1be << 0x10;
    DAT_003fc220 = 0;
    DAT_003fb8b4 = DAT_001ce1d1;
  }
  DAT_005b9706 = (undefined2)((uint)_DAT_003fb8c0 >> 0x10);
  if (B_stend != '\0') {
    bVar3 = func_0xff2187cc(&DAT_001d3540,nmot);
    if (bVar3 < rl) {
      _DAT_003fb8c4 = _DAT_003fb8c4 + (uint)_DAT_001ce1b2 * 0x100;
    }
    else {
      _DAT_003fb8c4 = _DAT_003fb8c4 + (uint)_DAT_001ce1b2 * -0x100;
    }
  }
  if ((int)((uint)_DAT_001ce1c2 << 0x10) < _DAT_003fb8c4) {
    if ((int)((uint)_DAT_001ce1c0 << 0x10) <= _DAT_003fb8c4) {
      _DAT_003fb8c4 = (uint)_DAT_001ce1c0 << 0x10;
      DAT_003fc221 = 1;
      if (DAT_001ce1d9 < tumg) {
        DAT_003fb8b5 = DAT_001ce1d0;
      }
      else {
        DAT_003fb8b5 = DAT_001ce1d1;
      }
    }
  }
  else {
    _DAT_003fb8c4 = (uint)_DAT_001ce1c2 << 0x10;
    DAT_003fc221 = 0;
    DAT_003fb8b5 = DAT_001ce1d1;
  }
  DAT_005b9708 = (undefined2)((uint)_DAT_003fb8c4 >> 0x10);
  if (B_stend != '\0') {
    bVar3 = func_0xff2187cc(&DAT_001d3554,vfzg);
    if (bVar3 < tans) {
      _DAT_003fb8c8 = _DAT_003fb8c8 + (uint)_DAT_001ce1b4 * 0x100;
    }
    else {
      _DAT_003fb8c8 = _DAT_003fb8c8 + (uint)_DAT_001ce1b4 * -0x100;
    }
  }
  if ((int)((uint)_DAT_001ce1ca << 0x10) < _DAT_003fb8c8) {
    if ((int)((uint)_DAT_001ce1c8 << 0x10) <= _DAT_003fb8c8) {
      _DAT_003fb8c8 = (uint)_DAT_001ce1c8 << 0x10;
      DAT_003fc222 = 1;
      if (DAT_001ce1da < tumg) {
        DAT_003fb8b6 = DAT_001ce1d3;
      }
      else {
        DAT_003fb8b6 = DAT_001ce1d1;
      }
    }
  }
  else {
    _DAT_003fb8c8 = (uint)_DAT_001ce1ca << 0x10;
    DAT_003fc222 = 0;
    DAT_003fb8b6 = DAT_001ce1d1;
  }
  DAT_005b970a = (undefined2)((uint)_DAT_003fb8c8 >> 0x10);
  if (B_stend != '\0') {
    bVar3 = func_0xff2187cc(&DAT_001d352c,vfzg);
    if (bVar3 < rl) {
      _DAT_003fb8cc = _DAT_003fb8cc + (uint)_DAT_001ce1ae * 0x100;
    }
    else {
      _DAT_003fb8cc = _DAT_003fb8cc + (uint)_DAT_001ce1ae * -0x100;
    }
  }
  if ((int)((uint)_DAT_001ce1b8 << 0x10) < _DAT_003fb8cc) {
    if ((int)((uint)_DAT_001ce1b6 << 0x10) <= _DAT_003fb8cc) {
      _DAT_003fb8cc = (uint)_DAT_001ce1b6 << 0x10;
      DAT_003fc21f = 1;
      if (DAT_001ce1d7 < tumg) {
        DAT_003fb8b7 = DAT_001ce1cd;
      }
      else {
        DAT_003fb8b7 = DAT_001ce1d1;
      }
    }
  }
  else {
    _DAT_003fb8cc = (uint)_DAT_001ce1b8 << 0x10;
    DAT_003fc21f = 0;
    DAT_003fb8b7 = DAT_001ce1d1;
  }
  DAT_005b9704 = (undefined2)((uint)_DAT_003fb8cc >> 0x10);
  if (DAT_003fb8b5 < DAT_003fb8b6) {
    DAT_003fb8b8 = DAT_003fb8b5;
  }
  else {
    DAT_003fb8b8 = DAT_003fb8b6;
  }
  if (DAT_003fb8b7 < DAT_003fb8b8) {
    DAT_003fb8b8 = DAT_003fb8b7;
  }
  if (DAT_003fb8b4 < DAT_003fb8b8) {
    DAT_003fb8b8 = DAT_003fb8b4;
  }
  sVar4 = ((ushort)DAT_001ce1d6 - (ushort)DAT_001ce1cc) + 0x40;
  if (sVar4 < 0) {
    sVar4 = 0;
  }
  else if (0xff < sVar4) {
    sVar4 = 0xff;
  }
  uVar2 = (ushort)tmot;
  if (DAT_001ce1d6 < uVar2) {
    DAT_003fc223 = '\x01';
  }
  else if ((short)uVar2 < sVar4) {
    DAT_003fc223 = '\0';
  }
  if (DAT_003fc223 == '\0') {
    DAT_003fb8b8 = DAT_001ce1d1;
  }
  if (DAT_001ce1d5 < uVar2) {
    DAT_003fb8b9 = DAT_001ce1d4;
  }
  else {
    DAT_003fb8b9 = DAT_001ce1d1;
  }
  if (DAT_003fbeb5 == '\0') {
    DAT_003fb8ba = DAT_001ce1d1;
  }
  else {
    DAT_003fb8ba = DAT_001ce1ce;
  }
  if (DAT_003fbec2 == '\0') {
    DAT_003fb8bb = DAT_001ce1d1;
  }
  else {
    DAT_003fb8bb = DAT_001ce1d2;
  }
  if (DAT_003fb8b8 < DAT_003fb8bb) {
    DAT_005b9243 = DAT_003fb8b8;
  }
  else {
    DAT_005b9243 = DAT_003fb8bb;
  }
  if (DAT_003fb8ba < DAT_005b9243) {
    DAT_005b9243 = DAT_003fb8ba;
  }
  if (DAT_003fb8b9 < DAT_005b9243) {
    DAT_005b9243 = DAT_003fb8b9;
  }
  DAT_003fc21e = DAT_005b9243 < DAT_001ce1d1;
  tkwdiff = ((ushort)DAT_005b9243 - (ushort)tmot) + 0x40;
  DAT_005b9716 = func_0xff21984c(&DAT_001ce09e,rlsol_w,DAT_005b9243);
  if (0x7ffe < DAT_005b9716) {
    DAT_005b9716 = 0x7fff;
  }
  if (DAT_003fc21e == '\0') {
    _DAT_003fb8bc = 0;
  }
  else {
    sVar4 = func_0xff218abc(&DAT_001ce142,(int)tkwdiff);
    iVar5 = _DAT_003fb8bc + (int)sVar4 * (uint)_DAT_001ce1ba;
    _DAT_003fb8bc = (short)DAT_005b9716 * 0x10000 + -0x3e80000;
    if ((_DAT_003fb8bc <= iVar5) &&
       (iVar1 = (1000 - (short)DAT_005b9716) * 0x10000, _DAT_003fb8bc = iVar5, iVar1 < iVar5)) {
      _DAT_003fb8bc = iVar1;
    }
  }
  DAT_005b970e = (short)((uint)_DAT_003fb8bc >> 0x10);
  DAT_005b9710 = func_0xff218abc(&DAT_001ce178,(int)tkwdiff);
  if (DAT_005b9710 < 0x3e9) {
    if (DAT_005b9710 < -1000) {
      DAT_005b9710 = -1000;
    }
  }
  else {
    DAT_005b9710 = 1000;
  }
  DAT_005b9712 = DAT_005b970e + DAT_005b9710;
  if (DAT_005b9712 < -1000) {
    DAT_005b9712 = -1000;
  }
  else if (1000 < DAT_005b9712) {
    DAT_005b9712 = 1000;
  }
  tkwpwm = DAT_005b9716 + DAT_005b9712;
  if (B_faetr == '\0') {
    if (tkwpwm < _TKWPWMMN) {
      tkwpwm = _TKWPWMMN;
    }
    else if (_TKWPWMMX < tkwpwm) {
      tkwpwm = _TKWPWMMX;
    }
  }
  else if (B_etret == '\0') {
    tkwpwm = _TKWPWMMN;
  }
  else {
    tkwpwm = _TKWPWMMX;
  }
  if (B_nlale < '\0') {
    tkwpwm = 0;
  }
  return;
}

