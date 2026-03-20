/*
 * Program: n42.bin
 * Function: FUN_0009507c
 * Entry: 0009507c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009507c(void)

{
  ushort uVar1;
  undefined4 uVar2;
  
  _DAT_003fa18c = (uint *)(_DAT_003fa17c + _DAT_003fa1c4);
  DAT_003fa17a = 8;
  uVar1 = 0;
  _DAT_003fa194 = 0;
  _DAT_003fa188 = _DAT_003fa184;
  DAT_003fa198 = DAT_003fa179;
  do {
    if ((_DAT_003fa188 & 0x80000000) != 0) {
      if ((*_DAT_003fa18c | _DAT_003fa18c[0xf]) == 0) {
        uVar1 = uVar1 + 1;
        if (0xff < uVar1) break;
        if (((((_DAT_003fa18c[1] == 0) && (_DAT_003fa18c[2] == 0)) && (_DAT_003fa18c[3] == 0)) &&
            ((((_DAT_003fa18c[4] == 0 && (_DAT_003fa18c[5] == 0)) &&
              ((_DAT_003fa18c[6] == 0 && ((_DAT_003fa18c[7] == 0 && (_DAT_003fa18c[8] == 0)))))) &&
             (_DAT_003fa18c[9] == 0)))) &&
           ((((_DAT_003fa18c[10] == 0 && (_DAT_003fa18c[0xb] == 0)) && (_DAT_003fa18c[0xc] == 0)) &&
            ((_DAT_003fa18c[0xd] == 0 && (_DAT_003fa18c[0xe] == 0)))))) goto LAB_000951b0;
      }
      _DAT_003fa194 = _DAT_003fa194 | 0x80000000U >> (DAT_003fa179 & 0x3f);
    }
LAB_000951b0:
    _DAT_003fa18c = _DAT_003fa18c + 0x2000;
    _DAT_003fa194 = _DAT_003fa194 * 2;
    _DAT_003fa188 = _DAT_003fa188 * 2;
    DAT_003fa198 = DAT_003fa198 - 1;
  } while (DAT_003fa198 != 0);
  if (DAT_003fa198 == 0) {
    _DAT_003fa184 = _DAT_003fa194;
    if (_DAT_003fa194 == 0) {
      DAT_003fa17a = 0xc;
      uVar2 = 0x11;
    }
    else if (_DAT_003fa1c0 < _DAT_003fa210) {
      FUN_00094824();
      DAT_003fa17a = 6;
      uVar2 = 0x10;
    }
    else {
      uVar2 = 0x88;
      DAT_003fa17a = 0;
      FUN_00094980();
    }
  }
  else {
    uVar2 = 0x11;
  }
  return uVar2;
}

