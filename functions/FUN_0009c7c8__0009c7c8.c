/*
 * Program: n42.bin
 * Function: FUN_0009c7c8
 * Entry: 0009c7c8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009c7c8(void)

{
  if (4 < _DAT_003fa158) {
    if (_DAT_003fa164 < 5) {
      _DAT_003fa158 = 5;
    }
    else if (_DAT_003fa160 < _DAT_003fa16c) {
      _DAT_003fa158 = 6;
    }
    else if (_DAT_003fa16c < _DAT_003fa160) {
      _DAT_003fa158 = 5;
    }
    else {
      _DAT_003fa15c = _DAT_003fa15c | 0x200;
      _DAT_003fa158 = 5;
    }
  }
  if (4 < _DAT_003fa164) {
    if (_DAT_003fa158 < 5) {
      _DAT_003fa164 = 5;
    }
    else if (_DAT_003fa16c < _DAT_003fa160) {
      _DAT_003fa164 = 6;
    }
    else if (_DAT_003fa160 < _DAT_003fa16c) {
      _DAT_003fa164 = 5;
    }
    else {
      _DAT_003fa168 = _DAT_003fa168 | 0x200;
      _DAT_003fa164 = 6;
    }
  }
  return;
}

