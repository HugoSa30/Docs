/*
 * Program: n42.bin
 * Function: FUN_000cd978
 * Entry: 000cd978
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cd978(void)

{
  if (DAT_003fbeb3 == '\0') {
    if ((DAT_001c0ea1 < ub) && (B_autget != '\0')) {
      if (_DAT_003fa5d4 == 0) {
        DAT_003fa5d8 = DAT_003fa5d8 & 0xfc | 1;
      }
      else {
        _DAT_003fa5d4 = _DAT_003fa5d4 + -1;
      }
    }
    else {
      _DAT_003fa5d4 = _DAT_001c0ec2;
    }
  }
  else {
    DAT_003fa5d8 = DAT_003fa5d8 & 0xfc | 2;
    _DAT_003fa5d4 = _DAT_001c0ec2;
  }
  if (_DAT_003fa5d6 == 0) {
    DAT_003fa5d8 = DAT_003fa5d8 & 0xfb | 4;
  }
  else {
    DAT_003fa5d8 = DAT_003fa5d8 & 0xfb;
    if ((DAT_001c0ea1 < ub) && (B_nmot != '\0')) {
      _DAT_003fa5d6 = _DAT_003fa5d6 + -1;
    }
    else {
      _DAT_003fa5d6 = _DAT_001c0ec2;
    }
  }
  return;
}

