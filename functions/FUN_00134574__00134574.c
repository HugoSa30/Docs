/*
 * Program: n42.bin
 * Function: FUN_00134574
 * Entry: 00134574
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00134574(void)

{
  dlrkomp = DLRKREIS;
  _DAT_003fb09c = 0x8000;
  dlrp = DLRKPONLP0;
  dlri = 0x10;
  dlrd = DLRKDONLP0;
  B_dlrparc = 1;
  B_dlrumzu = 1;
  B_ubdve = 1;
  B_ubpvg = 1;
  B_ub_ok = 1;
  DAT_003fb080 = 2;
  if (DLRKREIS == 0) {
    DAT_005b8926 = _DAT_001d0e92;
    _dlrini_w = _DAT_001c7bcc;
  }
  else {
    DAT_005b8926 = (short)(((int)_DAT_001d0e92 << 7) / (int)(uint)DLRKREIS);
    if (DAT_005b8926 < -0x1ff) {
      DAT_005b8926 = -0x1ff;
    }
    _dlrini_w = (ushort)(((uint)_DAT_001c7bcc << 7) / (uint)DLRKREIS);
    if (0x1ff < (short)_dlrini_w) {
      _dlrini_w = 0x1ff;
    }
  }
  DAT_003fb0a5 = 1;
  return;
}

