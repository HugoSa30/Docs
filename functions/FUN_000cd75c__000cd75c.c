/*
 * Program: n42.bin
 * Function: FUN_000cd75c
 * Entry: 000cd75c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cd75c(void)

{
  if (DAT_003fbea5 == '\0') {
    if ((DAT_001c0ea1 < ub) && (DAT_003fd7e5 != '\0')) {
      if (DAT_005b925e == 0) {
        DAT_003fa5d0 = DAT_003fa5d0 & 0xfc | 1;
      }
      else {
        DAT_005b925e = DAT_005b925e + -1;
      }
    }
    else {
      DAT_005b925e = _DAT_001c0ec0;
    }
  }
  else {
    DAT_003fa5d0 = DAT_003fa5d0 & 0xfc | 2;
    DAT_005b925e = _DAT_001c0ec0;
  }
  if (DAT_003fbea7 == '\0') {
    if ((DAT_001c0ea1 < ub) && (DAT_003fd7e5 != '\0')) {
      if (DAT_005b9260 == 0) {
        DAT_003fa5d0 = DAT_003fa5d0 & 0xf3 | 4;
      }
      else {
        DAT_005b9260 = DAT_005b9260 + -1;
      }
    }
    else {
      DAT_005b9260 = _DAT_001c0ec0;
    }
  }
  else {
    DAT_003fa5d0 = DAT_003fa5d0 & 0xf3 | 8;
    DAT_005b9260 = _DAT_001c0ec0;
  }
  if (_DAT_003fa5cc == 0) {
    DAT_003fa5d0 = DAT_003fa5d0 & 0xef | 0x10;
  }
  else {
    DAT_003fa5d0 = DAT_003fa5d0 & 0xef;
    if ((DAT_001c0ea1 < ub) && (B_nmot != '\0')) {
      _DAT_003fa5cc = _DAT_003fa5cc + -1;
    }
    else {
      _DAT_003fa5cc = _DAT_001c0ec0;
    }
  }
  return;
}

