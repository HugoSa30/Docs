/*
 * Program: n42.bin
 * Function: FUN_00096530
 * Entry: 00096530
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00096530(void)

{
  undefined4 in_TBLr;
  
  _DAT_003f9f80 = *(ushort *)(_DAT_003f9f88 + 0xc);
  if ((_DAT_003f9f80 & 8) != 0) {
    DAT_003f9f74 = 1;
  }
  if ((_DAT_003f9f80 & 0x40) != 0) {
    if (DAT_003f9f75 == '\n') {
      if (DAT_003f9f44 == '\0') {
        *_DAT_003f9f60 = (byte)*(undefined2 *)(_DAT_003f9f88 + 0xe);
        _DAT_003f9f60 = _DAT_003f9f60 + 1;
        _DAT_003f9f78 = in_TBLr;
      }
      else {
        FUN_000966bc();
      }
      if ((byte *)(_DAT_003f9f64 + 0x104) < _DAT_003f9f60) {
        _DAT_003f9f60 = (byte *)(_DAT_003f9f64 + 0x104);
        FUN_000925d0(0x10);
        FUN_000926a8(0xff,3);
      }
    }
    else if (DAT_003f9f75 == '\x14') {
      _DAT_003f9f7c = in_TBLr;
      if ((ushort)*_DAT_003f9f60 == (*(ushort *)(_DAT_003f9f88 + 0xe) & 0xff)) {
        if (_DAT_003f9f48 < _DAT_003f9f60) {
          if (_DAT_003f9ef0 != 0) {
            FUN_00092534();
          }
          _DAT_003f9f60 = (byte *)(_DAT_003f9f64 + 1);
          DAT_003f9f75 = '\n';
          DAT_003f9f44 = '\0';
          DAT_003f9f82 = 1;
        }
        else {
          _DAT_003f9f60 = _DAT_003f9f60 + 1;
          *(ushort *)(_DAT_003f9f88 + 0xe) = (ushort)*_DAT_003f9f60;
        }
      }
      else {
        DAT_003f9f68 = 1;
      }
    }
  }
  return;
}

