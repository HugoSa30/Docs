/*
 * Program: n42.bin
 * Function: FUN_00140cc0
 * Entry: 00140cc0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00140cc0(undefined8 param_1,double param_2)

{
  byte bVar1;
  float fVar2;
  int in_r12;
  byte *unaff_r24;
  char *unaff_r27;
  char *unaff_r28;
  ushort uVar3;
  int unaff_r30;
  uint unaff_r31;
  double dVar4;
  double dVar5;
  double in_f30;
  double in_f31;
  
  *(float *)(in_r12 + -0x4b70) = (float)param_2;
  _DAT_003fb43c = (float)(in_f31 / param_2);
  _DAT_003fb440 = _DAT_003fb43c / _DAT_001caf70;
  _DAT_003fb458 = (float)((double)_DAT_003fb440 - in_f30);
  _DAT_003fb45c = _DAT_003fb458 + _DAT_003fddcc;
  if ((DAT_001caf4e == unaff_r31) && (unaff_r30 == 0)) {
    _DAT_003fb484 = _DAT_001caf74 - _DAT_001caf70;
    _DAT_003fb488 = (float)((double)_DAT_003fb484 + _DAT_0001cc50);
    _DAT_003fb444 = _DAT_003fb45c / _DAT_003fb488;
    _DAT_003fb448 = _DAT_003fb444 * _DAT_001caf74;
    _DAT_003fb44c = _DAT_003fddd0 - _DAT_003fb448;
    _DAT_003fb460 = _DAT_003fb43c / _DAT_001caf74;
    _DAT_003fb450 = _DAT_003fb44c - _DAT_003fb460;
    _DAT_003fb480 = _DAT_003fb450 + _DAT_003fb458;
  }
  if ((DAT_001caf4e == unaff_r31) && (unaff_r30 == 0)) {
    if (tabst_w < 2) {
      dVar4 = 4503599627370497.0 - (double)_DAT_0001cc4c;
    }
    else {
      dVar4 = (double)CONCAT44(0x43300000,(uint)tabst_w) - (double)_DAT_0001cc4c;
    }
    _DAT_003fb490 = (float)dVar4;
    func_0xff218740((double)_DAT_003fb490,&DAT_001caeb8);
    return;
  }
  bVar1 = *unaff_r24;
  if (((DAT_001caf4e == bVar1) && (*unaff_r28 == '\0')) &&
     (_DAT_003fb498 =
           (float)(((double)CONCAT44(0x43300000,(uint)DAT_001caf56) - (double)_DAT_0001cc4c) *
                   (double)_DAT_0001cc58 * (double)_DAT_0001cc5c - (double)_DAT_0001cc60),
     _DAT_003fb4a8 = _DAT_003fb498, DAT_001caf4c != '\x01')) {
    if (B_pwf == '\0') {
      uVar3 = tabst_w;
      if (tabst_w < 2) {
        uVar3 = 1;
      }
      _DAT_003fb4a8 = _DAT_003fb49c;
      if (uVar3 < _DAT_001caf48) goto LAB_00140fac;
    }
    _DAT_003fb4a8 = _DAT_003fb4a4;
  }
LAB_00140fac:
  if ((DAT_001caf4e == bVar1) && (*unaff_r28 == '\0')) {
    _DAT_003fb4bc = _DAT_003fb4a8;
    _DAT_003fb4b8 = _DAT_001caf8c;
    *unaff_r28 = '\x01';
  }
  if ((DAT_001caf4e == bVar1) && (*unaff_r28 != '\0')) {
    if (vfzg < DAT_001caf4f) {
      _DAT_003fb47c = (float)_DAT_001caf68;
    }
    else {
      _DAT_003fb47c = (float)_DAT_001caf64;
    }
    _DAT_003fb4a4 =
         (float)((double)CONCAT44(0x43300000,(int)*unaff_r27 ^ 0x80000000) - (double)_DAT_0001cc48);
    _DAT_003fb494 =
         (float)(((double)CONCAT44(0x43300000,(uint)tans) - (double)_DAT_0001cc4c) *
                 (double)_DAT_0001cc58 * (double)_DAT_0001cc5c - (double)_DAT_0001cc60);
    DAT_005b8abc = (float)(((double)CONCAT44(0x43300000,(uint)vfzg) - (double)_DAT_0001cc4c) *
                           (double)_DAT_0001cc64 * (double)_DAT_0001cc5c);
    func_0xff218740((double)DAT_005b8abc,&DAT_001cadcc);
    return;
  }
  if ((*unaff_r24 != DAT_001caf4e) && (*unaff_r28 == '\0')) {
    dVar4 = (double)_DAT_0001cc48;
    _DAT_003fb418 =
         (float)((double)CONCAT44(0x43300000,(int)(short)*unaff_r27 - (int)DAT_003fddc8 ^ 0x80000000
                                 ) - dVar4);
    _DAT_003fb4a4 = (float)((double)CONCAT44(0x43300000,(int)*unaff_r27 ^ 0x80000000) - dVar4);
    if (tabst_w < 2) {
      dVar5 = 4503599627370497.0;
    }
    else {
      dVar5 = (double)CONCAT44(0x43300000,(uint)tabst_w);
    }
    _DAT_003fb490 = (float)(dVar5 - (double)_DAT_0001cc4c);
    _DAT_003fb414 = _DAT_003fb418 / _DAT_003fb490;
    _DAT_003fb424 = _DAT_003fb414 / _DAT_001caf6c;
    _DAT_003fb41c = (float)((double)CONCAT44(0x43300000,(int)DAT_003fddc8 ^ 0x80000000) - dVar4);
    _DAT_003fb420 = _DAT_003fb424 - _DAT_003fb41c;
    _DAT_003fb428 = _DAT_003fddd0 + _DAT_003fb420;
    func_0xff218740((double)_DAT_003fb490,&DAT_001cae00);
    return;
  }
  bVar1 = *unaff_r24;
  if ((DAT_001caf4e != bVar1) && (*unaff_r28 == '\0')) {
    _DAT_003fb4b0 = _DAT_003fb4a8;
    _DAT_003fb4b4 = _DAT_001caf8c;
    *unaff_r28 = '\x01';
  }
  if ((DAT_001caf4e != bVar1) && (*unaff_r28 != '\0')) {
    if (vfzg < DAT_001caf4f) {
      _DAT_003fb47c = _DAT_001caf60;
    }
    else {
      _DAT_003fb47c = _DAT_001caf5c;
    }
    func_0xff22291c((double)_DAT_003fddcc,(double)_DAT_003fb47c,&DAT_003fb4b0);
    _DAT_003fddd0 = _DAT_003fb4b0;
    fVar2 = (_DAT_003fb4b0 * _DAT_0001cc70) / _DAT_0001cc58 + _DAT_0001cc74;
    if (_DAT_0001cc6c <= fVar2) {
      if (fVar2 <= _DAT_0001cc78) {
        tbatt = (byte)(int)fVar2;
      }
      else {
        tbatt = 0xff;
      }
    }
    else {
      tbatt = 0;
    }
    _DAT_003fddcc =
         (float)((double)CONCAT44(0x43300000,(int)(short)*unaff_r27 + (int)DAT_001caf55 ^ 0x80000000
                                 ) - (double)_DAT_0001cc48);
    func_0xff218740((double)_DAT_003fb4b0,&DAT_001caf14);
    return;
  }
  if (DAT_001caf4d == *unaff_r24) {
    fVar2 = _DAT_001caf8c * _DAT_0001cc7c - _DAT_0001cc80;
    if (_DAT_0001cc6c <= fVar2) {
      if (_DAT_0001cc78 < fVar2) {
        FUN_001416c8();
        return;
      }
      ctrgenutar = (byte)(int)fVar2;
    }
    else {
      ctrgenutar = 0;
    }
  }
  else if ((DAT_001caf4e == *unaff_r24) && (*unaff_r28 != '\0')) {
    fVar2 = _DAT_003fb4b8;
    if (B_taerr != 0) {
      fVar2 = _DAT_001caf8c;
    }
    fVar2 = fVar2 * _DAT_0001cc64 * _DAT_0001cc84 - _DAT_0001cc80;
    if (_DAT_0001cc6c <= fVar2) {
      if (fVar2 <= _DAT_0001cc78) {
        ctrgenutar = (byte)(int)fVar2;
      }
      else {
        ctrgenutar = 0xff;
      }
    }
    else {
      ctrgenutar = 0;
    }
  }
  else {
    fVar2 = _DAT_003fb4b4 * _DAT_0001cc7c - _DAT_0001cc80;
    if (_DAT_0001cc6c <= fVar2) {
      if (fVar2 <= _DAT_0001cc78) {
        ctrgenutar = (byte)(int)fVar2;
      }
      else {
        ctrgenutar = 0xff;
      }
    }
    else {
      ctrgenutar = 0;
    }
  }
  return;
}

