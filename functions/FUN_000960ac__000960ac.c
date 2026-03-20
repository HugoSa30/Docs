/*
 * Program: n42.bin
 * Function: FUN_000960ac
 * Entry: 000960ac
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000960ac(void)

{
  char cVar2;
  uint uVar1;
  int iVar3;
  uint in_TBLr;
  
  if ((_DAT_003f9f28 & 0x20) != 0x20) {
    return;
  }
  if (3 < DAT_003f9f50) {
    if (DAT_003f9f50 == 4) {
      cVar2 = FUN_0009669c();
      if (cVar2 == '\0') {
        if ((DAT_003f9f68 == '\0') && ((int)(in_TBLr - _DAT_003f9f7c) < _DAT_003f9ecc)) {
          return;
        }
        FUN_00096064();
        DAT_003f9f68 = 0;
        _DAT_003f9f58 = _DAT_003f9ed0;
        uVar1 = FUN_000923e8();
        _DAT_003f9ed0 = _DAT_003f9ed0 + (uVar1 >> 1 & 0x7fff);
        if (_DAT_003f9ed4 - _DAT_003f9f4c < _DAT_003f9ed0) {
          _DAT_003f9ed0 = _DAT_003f9ed4 - _DAT_003f9f4c;
        }
        DAT_003f9f50 = 3;
        _DAT_003f9f54 = _DAT_003f9f7c;
        return;
      }
      if (DAT_003f9eee == '\0') {
        if (((_DAT_003f9f28 & 2) != 0) && (_DAT_003f9ed8 < 0x1389)) {
          DAT_003f9f42 = 0;
          DAT_003f9f50 = 0;
          _DAT_003f9f54 = _DAT_003f9f7c;
          return;
        }
        DAT_003f9f50 = 5;
      }
      else {
        DAT_003f9f50 = 3;
      }
      FUN_00096064();
      _DAT_003f9f54 = _DAT_003f9f7c;
      DAT_003f9f42 = 0;
                    /* WARNING: Read-only address (ram,0x003f9ecc) is written */
                    /* WARNING: Read-only address (ram,0x003f9ed8) is written */
                    /* WARNING: Read-only address (ram,0x003f9edc) is written */
                    /* WARNING: Read-only address (ram,0x003f9ee4) is written */
      return;
                    /* WARNING: Read-only address (ram,0x003f9ecc) is written */
                    /* WARNING: Read-only address (ram,0x003f9ed8) is written */
                    /* WARNING: Read-only address (ram,0x003f9edc) is written */
                    /* WARNING: Read-only address (ram,0x003f9ee4) is written */
                    /* WARNING: Read-only address (ram,0x003f9ecc) is written */
                    /* WARNING: Read-only address (ram,0x003f9ed8) is written */
                    /* WARNING: Read-only address (ram,0x003f9edc) is written */
                    /* WARNING: Read-only address (ram,0x003f9ee4) is written */
    }
    if (DAT_003f9f50 != 5) {
      return;
    }
    if ((DAT_003f9f90 == '\n') && (cVar2 = FUN_000966e8(), cVar2 != '\0')) {
      _DAT_003f9f54 = in_TBLr;
    }
    if (_DAT_003f9ee4 < _DAT_003f9ed8) {
      iVar3 = 0x10;
    }
    else {
      iVar3 = 0x1c;
    }
    if ((in_TBLr - _DAT_003f9f54) + _DAT_003f9f4c * 3 < *(uint *)(&UNK_003f9ec8 + iVar3)) {
      return;
    }
    _DAT_003f9f60 = _DAT_003f9f64 + 1;
    DAT_003f9f50 = 0;
    FUN_00096088();
    if (DAT_003f9f45 == '\0') {
      return;
    }
    DAT_003f9f45 = 0;
    FUN_00096674();
    return;
  }
  if (DAT_003f9f50 != 3) {
    if (DAT_003f9f50 == 0) {
      if (_DAT_003f9f60 <= _DAT_003f9f64 + 1U) {
        if ((int)(in_TBLr - _DAT_003f9f54) < _DAT_003f9edc) {
          return;
        }
        FUN_000926a8(0xff,3);
        return;
      }
      if (((*(char *)(_DAT_003f9f64 + 1) == '\0') && (_DAT_003f9f64 + 2U == _DAT_003f9f60)) &&
         ((_DAT_003f9f80 & 2) != 0)) {
        DAT_003f9f50 = 1;
        _DAT_003f9f52 = 0;
        _DAT_003f9f54 = in_TBLr + 100000;
        return;
      }
      if (DAT_003f9eed == '\0') {
        DAT_003f9ef6 = 0;
        DAT_003f9f40 = 1;
        DAT_003f9f50 = 2;
        return;
      }
      DAT_003f9ef6 = 5;
      DAT_003f9f40 = 1;
      DAT_003f9f50 = 2;
      return;
    }
    if (DAT_003f9f50 == 1) {
      cVar2 = FUN_0009687c();
      if (cVar2 != '\0') {
        _DAT_003f9f52 = _DAT_003f9f52 + (short)(_DAT_003f9f4c / 0x9c4);
      }
      if (in_TBLr <= _DAT_003f9f54) {
        return;
      }
      if (10 < _DAT_003f9f52) {
        DAT_003f9f50 = 0;
        _DAT_003f9f54 = in_TBLr + 10;
        _DAT_003f9f60 = _DAT_003f9f64 + 1;
        return;
      }
      FUN_000926a8(0xff,3);
      FUN_00091480(0x28);
      return;
    }
    if (DAT_003f9f50 != 2) {
      return;
    }
    if (((int)(in_TBLr - _DAT_003f9f78) <= (int)_DAT_003f9ee4) && (DAT_003f9f44 != '\x01')) {
      if (DAT_003f9f43 == '\0') {
        return;
      }
      DAT_003f9f50 = 5;
      DAT_003f9f44 = 0;
      _DAT_003f9f60 = _DAT_003f9f64 + 1;
      FUN_00096064();
      DAT_003f9f40 = 0;
      DAT_003f9f41 = 0;
      DAT_003f9f43 = 0;
      _DAT_003f9f78 = in_TBLr;
      return;
    }
    DAT_003f9f50 = 3;
    DAT_003f9f41 = 1;
    _DAT_003f9f54 = _DAT_003f9f78;
    _DAT_003f9f58 = _DAT_003f9ed0;
    FUN_00096064();
  }
  if (DAT_003f9f43 != '\0') {
    DAT_003f9f50 = 5;
    _DAT_003f9f60 = _DAT_003f9f64 + 1;
    FUN_000966bc();
    DAT_003f9f40 = 0;
    DAT_003f9f41 = 0;
    DAT_003f9f43 = 0;
    _DAT_003f9f78 = in_TBLr;
    return;
                    /* WARNING: Read-only address (ram,0x003f9ecc) is written */
                    /* WARNING: Read-only address (ram,0x003f9ed8) is written */
                    /* WARNING: Read-only address (ram,0x003f9edc) is written */
                    /* WARNING: Read-only address (ram,0x003f9ee4) is written */
  }
  if ((DAT_003f9f90 == '\n') && (cVar2 = FUN_000966e8(), cVar2 != '\0')) {
    _DAT_003f9f54 = in_TBLr;
  }
  if ((int)(in_TBLr - _DAT_003f9f54) < (int)_DAT_003f9ed0) {
    return;
  }
  if (DAT_003f9f42 == '\0') {
    return;
  }
  _DAT_003f9f60 = _DAT_003f9f10;
  _DAT_003f9ed0 = _DAT_003f9f58;
  _DAT_003f9f7c = in_TBLr;
  FUN_00096524();
  DAT_003f9f50 = 4;
  DAT_003f9f41 = 0;
  DAT_003f9f40 = 0;
  FUN_00096088();
  FUN_000967a4(*_DAT_003f9f5c);
  return;
}

