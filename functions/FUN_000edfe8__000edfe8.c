/*
 * Program: n42.bin
 * Function: FUN_000edfe8
 * Entry: 000edfe8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000edfe8(void)

{
  if ((((B_mdstop == 0) && (B_fomod == '\0')) && (CDFO != '\0')) && (B_fofr1 != '\0')) {
    if (B_autget == '\0') {
      _DAT_003fa9e4 = *(float *)(&DAT_001c19e8 + (uint)idxfon * 4);
      _DAT_003fa9e8 = *(float *)(&DAT_001c1a28 + (uint)idxforl * 4);
    }
    else {
      _DAT_003fa9e4 = *(float *)(&DAT_001c1a08 + (uint)idxfon * 4);
      _DAT_003fa9e8 = *(float *)(&DAT_001c1a34 + (uint)idxforl * 4);
    }
    if (_nmot_f < _DAT_003fa9e4) {
      if (_rl_f < _DAT_003fa9e8) {
        idxfonl = 2;
      }
      else {
        idxfonl = 0;
      }
    }
    else if (_rl_f < _DAT_003fa9e8) {
      idxfonl = 3;
    }
    else {
      idxfonl = 1;
    }
  }
  return;
}

