/*
 * Program: n42.bin
 * Function: FUN_000cdac8
 * Entry: 000cdac8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cdac8(void)

{
  if (DAT_003fbebd == '\0') {
    if (DAT_001c0ea1 < ub) {
      if (_DAT_003fa5dc == 0) {
        DAT_003fa5e4 = DAT_003fa5e4 & 0xfc | 1;
      }
      else {
        _DAT_003fa5dc = _DAT_003fa5dc + -1;
      }
    }
    else {
      _DAT_003fa5dc = _DAT_001c0ec4;
    }
  }
  else {
    DAT_003fa5e4 = DAT_003fa5e4 & 0xfd | 2;
    _DAT_003fa5dc = _DAT_001c0ec4;
  }
  if (DAT_003fbebf == '\0') {
    if (DAT_001c0ea1 < ub) {
      if (_DAT_003fa5de == 0) {
        DAT_003fa5e4 = DAT_003fa5e4 & 0xf3 | 4;
      }
      else {
        _DAT_003fa5de = _DAT_003fa5de + -1;
      }
    }
    else {
      _DAT_003fa5de = _DAT_001c0ec4;
    }
  }
  else {
    DAT_003fa5e4 = DAT_003fa5e4 & 0xf7 | 8;
    _DAT_003fa5de = _DAT_001c0ec4;
  }
  if (_DAT_003fa5e2 == 0) {
    DAT_003fa5e4 = DAT_003fa5e4 & 0xef | 0x10;
  }
  else {
    DAT_003fa5e4 = DAT_003fa5e4 & 0xef;
    if ((DAT_001c0ea1 < ub) && (B_nmot != '\0')) {
      _DAT_003fa5e2 = _DAT_003fa5e2 + -1;
    }
    else {
      _DAT_003fa5e2 = _DAT_001c0ec4;
    }
  }
  return;
}

