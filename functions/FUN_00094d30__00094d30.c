/*
 * Program: n42.bin
 * Function: FUN_00094d30
 * Entry: 00094d30
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00094d30(void)

{
  undefined4 uVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  switch(DAT_003fa17a) {
  case 5:
    if (_DAT_003fa188 != 0) {
      FUN_000948f0();
      return 0x11;
    }
    _DAT_003fa174 = 1;
    _DAT_003fa170 = (uint)_DAT_003fa224;
    _DAT_003fa1c0 = 0;
    FUN_00094824();
    DAT_003fa17a = 6;
    goto LAB_00094dd0;
  case 6:
LAB_00094dd0:
    cVar2 = FUN_00094554();
    if (cVar2 == '\0') {
      uVar1 = 0x10;
    }
    else if (DAT_003fa178 < 2) {
      uVar1 = 0x11;
      DAT_003fa17a = 7;
    }
    else if (DAT_003fa176 == '\0') {
      DAT_003fa17a = 9;
      uVar1 = 0x11;
    }
    else if (_DAT_003fa1c0 < _DAT_003fa212) {
      FUN_00094824();
      uVar1 = 0x10;
    }
    else {
      DAT_003fa17a = 0;
      _DAT_003fa16c = 0x12345678;
      uVar1 = 0x89;
    }
                    /* WARNING: Read-only address (ram,0x003fa224) is written */
    return uVar1;
  case 7:
    uVar1 = FUN_0009507c();
    return uVar1;
  case 8:
    uVar3 = 0;
    do {
      if ((_DAT_003fa188 & 0x80000000) != 0) {
        if ((*_DAT_003fa18c | _DAT_003fa18c[0xf]) == 0) {
          uVar3 = uVar3 + 1;
          if (0xff < uVar3) break;
          if (((((_DAT_003fa18c[1] == 0) && (_DAT_003fa18c[2] == 0)) && (_DAT_003fa18c[3] == 0)) &&
              ((((_DAT_003fa18c[4] == 0 && (_DAT_003fa18c[5] == 0)) &&
                ((_DAT_003fa18c[6] == 0 && ((_DAT_003fa18c[7] == 0 && (_DAT_003fa18c[8] == 0))))))
               && (_DAT_003fa18c[9] == 0)))) &&
             ((((_DAT_003fa18c[10] == 0 && (_DAT_003fa18c[0xb] == 0)) && (_DAT_003fa18c[0xc] == 0))
              && ((_DAT_003fa18c[0xd] == 0 && (_DAT_003fa18c[0xe] == 0)))))) goto LAB_000951b0;
        }
        _DAT_003fa194 = _DAT_003fa194 | 0x80000000U >> (DAT_003fa179 & 0x3f);
      }
LAB_000951b0:
      _DAT_003fa18c = _DAT_003fa18c + 0x2000;
      _DAT_003fa194 = _DAT_003fa194 * 2;
      _DAT_003fa188 = _DAT_003fa188 * 2;
      DAT_003fa198 = DAT_003fa198 - 1;
    } while (DAT_003fa198 != 0);
    if (DAT_003fa198 != 0) {
      return 0x11;
    }
    if (_DAT_003fa194 == 0) {
      DAT_003fa17a = 0xc;
      _DAT_003fa184 = _DAT_003fa194;
      DAT_003fa198 = 0;
      return 0x11;
    }
    if (_DAT_003fa210 <= _DAT_003fa1c0) {
      uVar1 = 0x88;
      goto LAB_00095220;
    }
    goto LAB_00095208;
  case 9:
    if (DAT_003fa178 < 4) {
      if ((_DAT_003fa184 & 0x80800000) == 0) {
        DAT_003fa199 = '\0';
      }
      else {
        DAT_003fa199 = '\x01';
        FUN_000944bc();
      }
    }
    break;
  case 10:
    break;
  case 0xb:
    goto LAB_00094ee0;
  case 0xc:
    uVar1 = FUN_00095248();
    return uVar1;
  default:
    return 0x86;
  }
  if (DAT_003fa199 == '\0') {
    DAT_003fa198 = DAT_003fa179;
    _DAT_003fa188 = _DAT_003fa184;
  }
  else {
    _DAT_003fa188 = _DAT_003fa184 & 0x80800000;
    DAT_003fa198 = 9;
  }
  _DAT_003fa194 = 0;
  _DAT_003fa18c = (uint *)(_DAT_003fa17c + _DAT_003fa1c4);
  DAT_003fa17a = 0xb;
LAB_00094ee0:
  uVar3 = 0;
  do {
    if ((_DAT_003fa188 & 0x80000000) != 0) {
      uVar3 = uVar3 + 1;
      if (0xff < uVar3) break;
      puVar5 = _DAT_003fa18c + -1;
      iVar4 = 0x10;
      do {
        puVar5 = puVar5 + 1;
        if (*puVar5 != 0xffffffff) {
          if (DAT_003fa199 == '\0') {
            _DAT_003fa194 = _DAT_003fa194 | 0x80000000U >> (DAT_003fa179 & 0x3f);
          }
          else {
            _DAT_003fa194 = _DAT_003fa194 | 0x400000;
          }
          break;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    _DAT_003fa18c = _DAT_003fa18c + 0x2000;
    _DAT_003fa194 = _DAT_003fa194 * 2;
    _DAT_003fa188 = _DAT_003fa188 * 2;
    DAT_003fa198 = DAT_003fa198 - 1;
  } while (DAT_003fa198 != 0);
  if (DAT_003fa198 != 0) {
    return 0x11;
  }
  if (_DAT_003fa194 == 0) {
    if (DAT_003fa199 == '\0') {
      uVar6 = 0x7fc0;
    }
    else {
      uVar6 = 0xc0;
    }
    if (_DAT_003fa17c < uVar6) {
      DAT_003fa17a = 10;
      _DAT_003fa17c = _DAT_003fa17c + 0x40;
      _DAT_003fa184 = _DAT_003fa180;
      return 0x11;
    }
    _DAT_003fa184 = _DAT_003fa194;
    if (DAT_003fa199 != '\0') {
      FUN_00094508();
      DAT_003fa17a = 10;
      _DAT_003fa17c = 0;
      _DAT_003fa184 = _DAT_003fa180;
      DAT_003fa199 = 0;
      return 0x11;
    }
    if (DAT_003fa177 != '\x01') {
      DAT_003fa17a = 0xc;
      _DAT_003fa184 = 0;
      _DAT_003fa194 = 0;
      DAT_003fa198 = 0;
      return 0x11;
    }
    DAT_003fa177 = '\x02';
    if (_DAT_003fa212 <= _DAT_003fa1c0) {
      DAT_003fa17a = 0;
      FUN_00094980();
      return 0x89;
    }
  }
  else if (_DAT_003fa212 <= _DAT_003fa1c0) {
    uVar1 = 0x89;
LAB_00095220:
    DAT_003fa198 = 0;
    DAT_003fa17a = 0;
    _DAT_003fa184 = _DAT_003fa194;
    FUN_00094980();
    return uVar1;
  }
LAB_00095208:
  DAT_003fa198 = 0;
  _DAT_003fa184 = _DAT_003fa194;
  FUN_00094824();
  DAT_003fa17a = 6;
  return 0x10;
}

