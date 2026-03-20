/*
 * Program: n42.bin
 * Function: FUN_0017f9fc
 * Entry: 0017f9fc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017f9fc(void)

{
  byte extraout_var;
  ushort uVar2;
  uint uVar1;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  ushort local_30;
  
  DAT_005b8baa = func_0xff219bb4(&DAT_001d2dfa,_ml_w,DAT_005b91f9);
  DAT_003fb719 = func_0xff2187cc(&DAT_001d2a5c,DAT_005b91fc);
  _DAT_003fb71a = func_0xff219bb4(0x1d2be2,_ml_w,DAT_005b96d4);
  _DAT_003fb71a = _DAT_003fb71a & 0xff;
  uVar2 = func_0xff21984c(&DAT_001d2c86,nmot_w,rlsol_w);
  if (uVar2 < 0x100) {
    DAT_003fb71c = (undefined)uVar2;
  }
  else {
    DAT_003fb71c = 0xff;
  }
  DAT_003fb71d = func_0xff21a1e0(DAT_001d2a7c,&DAT_001d2a7e,DAT_001d2a7d,&DAT_001d2a88,&DAT_001d2a8c
                                 ,_ml_w,tans);
  if (DAT_005b96b2 == 0) {
    if (_DAT_003fb6f8 < _DAT_001cb6d2) {
      _DAT_003fb6f8 = _DAT_003fb6f8 + 1;
    }
    else {
      _DAT_003fb708 = 0;
    }
  }
  else {
    _DAT_003fb6f8 = 0;
  }
  if (B_atmtpa == '\0') {
    _DAT_003fb6fa = 0;
  }
  else if (_DAT_003fb6fa < _DAT_001cb6d4) {
    _DAT_003fb6fa = _DAT_003fb6fa + 1;
  }
  else {
    DAT_003fb770 = '\x01';
  }
  if (((DAT_003fb770 == '\0') && (B_katfz != '\0')) && (DAT_005b96b2 != 0)) {
    DAT_005b8ba1 = DAT_001cb6b1;
    _DAT_003fb708 = (uint)DAT_001cb6b1 << 0xc;
  }
  else {
    _DAT_003fb708 =
         func_0xff217cf8(1,DAT_005b96b2,_DAT_003fb708,_DAT_003fb708 & 0xffff,0,0,0xf,0xffff);
    DAT_005b8ba1 = (byte)(_DAT_003fb708 >> 0xc);
  }
  _DAT_003fb6fc = func_0xff2187cc(&DAT_001d2a70,DAT_005b8ba1);
  _DAT_003fb6fc = _DAT_003fb6fc & 0xff;
  _DAT_003fb750 = func_0xff217f20(_DAT_001d2ece,_ml_w,_DAT_003fb750,_DAT_003fb750 & 0xffff);
  local_30 = (ushort)(_DAT_003fb750 >> 0x14);
  uVar1 = func_0xff217b40(local_30,_DAT_003fb750 >> 4 & 0xffff,_ml_w);
  uVar1 = (uVar1 & 0xffff) - 0x1000;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0xffff < (int)uVar1) {
    uVar1 = 0xffff;
  }
  _DAT_003fb74c = (undefined2)uVar1;
  uVar1 = func_0xff2217f4(uVar1 & 0xffff,DAT_005b96d8);
  uVar1 = uVar1 >> 4 & 0xfff;
  if (uVar1 < 0x100) {
    DAT_005b91f2 = (undefined)uVar1;
  }
  else {
    DAT_005b91f2 = 0xff;
  }
  DAT_003fb718 = func_0xff2187cc(&DAT_001d2a50,DAT_005b91f2);
  _DAT_003fb754 =
       func_0xff217f20((uint)DAT_001d2b12 << 8,DAT_005b96ee,_DAT_003fb754,_DAT_003fb754 & 0xffff);
  func_0xff21a9c0(_DAT_001d2bb0,&DAT_001d2bb4,_DAT_001d2bb2,0x1d2bba,&DAT_001d2bc4,(int)DAT_005b8ba4
                  ,mifa_w);
  DAT_005b8b9a = extraout_var;
  DAT_005b8b9b = func_0xff2187cc(&DAT_001d2a38,nmot);
  iVar6 = 200 - (uint)DAT_005b8b9a;
  if (iVar6 < -0x8000) {
    iVar6 = 0;
  }
  else if (0x7fff < iVar6) {
    iVar6 = 0x7fff;
  }
  iVar6 = (int)((int)(short)(iVar6 << 7) * (uint)DAT_005b8b9b * 0x100) >> 0x10;
  if (iVar6 < -0x8000) {
    iVar6 = -0x8000;
  }
  else if (0x7fff < iVar6) {
    iVar6 = 0x7fff;
  }
  if (DAT_003fc1ec == '\0') {
    uVar2 = _DAT_001d2ec8 >> 1;
  }
  else {
    uVar2 = -(_DAT_001d2ec8 >> 1);
  }
  _DAT_003fb720 =
       func_0xff217c10(0xffff,(int)(short)uVar2,(int)_DAT_003fb720,
                       (int)(short)(0x6400 - (short)iVar6),0x6400);
  DAT_005b8b99 = (undefined)(_DAT_003fb720 >> 7);
  if (DAT_005b96da < 0x1000) {
    DAT_005b8ba0 = (undefined)((int)(uint)DAT_005b96da >> 4);
  }
  else {
    DAT_005b8ba0 = 0xff;
  }
  bVar3 = func_0xff2187cc(&DAT_001d2a18,DAT_005b8ba0);
  bVar4 = func_0xff2187cc(&DAT_001d2a28,DAT_005b91fc);
  if (bVar4 < bVar3) {
    bVar3 = bVar4;
  }
  iVar6 = 0x7fff - (uint)DAT_005b96d0;
  if (iVar6 < -0x8000) {
    iVar6 = -0x8000;
  }
  else if (0x7fff < iVar6) {
    iVar6 = 0x7fff;
  }
  iVar6 = (int)((int)(short)iVar6 *
               (uint)bVar3 *
               ((uint)(byte)(&DAT_001d2b0c)[DAT_005b9c1c >> 0x10] +
                ((int)((DAT_005b9c1c & 0xffff) *
                      ((uint)(byte)(&DAT_001d2b0d)[DAT_005b9c1c >> 0x10] -
                      (uint)(byte)(&DAT_001d2b0c)[DAT_005b9c1c >> 0x10])) >> 0x10) & 0xff)) >> 0x10;
  if (iVar6 < -0x8000) {
    iVar6 = -0x8000;
  }
  else if (0x7fff < iVar6) {
    iVar6 = 0x7fff;
  }
  DAT_005b8ba2 = (short)iVar6;
  if (B_te == '\0') {
    if (((DAT_003fdf5f & 1) != 0) && ((DAT_003fdf61 & 1) != 0)) {
      _DAT_003fb704 = 0;
      _DAT_003fb70c = 0;
      ftead_w = 0;
      DAT_005b8ba4 = 0;
      DAT_005b8b9f = 0;
      DAT_005b8bac = 0;
    }
  }
  else {
    if ((DAT_003fc1e3 != '\0') && (DAT_003fc1ed == '\0')) {
      uVar1 = func_0xff217c80(0x4e87,(int)DAT_005b8ba2,(int)_DAT_003fb704,_DAT_003fb704 & 0xffff,
                              (int)(short)((int)DAT_001d2af8 << 8),0,
                              (int)(short)((int)DAT_001d2af9 << 8),0);
      _DAT_003fb704 = (short)(uVar1 >> 0x10);
      DAT_005b8bac = _DAT_003fb704;
      _DAT_003fb704 = uVar1;
    }
    iVar6 = (int)((int)DAT_005b8bac * (uint)DAT_001d2a7b * 0x100) >> 0x10;
    if (iVar6 < -0x8000) {
      iVar6 = -0x8000;
    }
    else if (0x7fff < iVar6) {
      iVar6 = 0x7fff;
    }
    ftead_w = (word)iVar6;
    uVar1 = func_0xff217f84(_DAT_001d2ecc,(int)(short)ftead_w,(int)_DAT_003fb70c,
                            _DAT_003fb70c & 0xffff);
    _DAT_003fb70c = (short)(uVar1 >> 0x10);
    DAT_005b8ba4 = _DAT_003fb70c;
    DAT_005b8b9f = (undefined)(uVar1 >> 0x18);
    _DAT_003fb70c = uVar1;
  }
  cVar5 = (char)(ftead_w >> 8);
  B_tehbx = DAT_001d2a6b <= cVar5;
  B_teabb = cVar5 <= DAT_001d2a6a;
  if (B_lrar == '\0') {
    if ((DAT_001d2a14 <= DAT_005b91f6) || (DAT_001d2a6d <= cVar5)) {
      B_lrar = '\x01';
    }
  }
  else if ((((DAT_003fc1ec != '\0') && ((uint)DAT_001d2a69 << 8 <= (uint)DAT_005b96d0)) ||
           (DAT_001d2a6c <= DAT_005b91fc)) &&
          ((cVar5 < DAT_001d2a6d && (DAT_005b91f6 < DAT_001d2a14)))) {
    B_lrar = '\0';
  }
  if (((B_tep == '\0') || (B_lrar == '\0')) || (DAT_003fc1eb == '\0')) {
    B_tehb = 0;
  }
  else {
    B_tehb = 1;
  }
  if (DAT_003fc1ec != '\0') {
    _DAT_003fb760 = _DAT_003fb760 + (uint)_DAT_001d2eca * -0x1000;
  }
  iVar6 = (int)(short)ftead_w << 0x10;
  if (((int)(short)ftead_w << 0x10 < _DAT_003fb760) &&
     (iVar6 = _DAT_003fb760,
     (int)((int)DAT_001d2af9 * (uint)DAT_001d2a7b * 0x10000) <= _DAT_003fb760)) {
    iVar6 = (int)DAT_001d2af9 * (uint)DAT_001d2a7b * 0x10000;
  }
  _DAT_003fb760 = iVar6;
  DAT_005b8ba6 = (short)((uint)_DAT_003fb760 >> 0x10);
  return;
}

