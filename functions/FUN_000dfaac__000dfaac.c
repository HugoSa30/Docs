/*
 * Program: n42.bin
 * Function: FUN_000dfaac
 * Entry: 000dfaac
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dfaac(void)

{
  if ((B_fgdcan == '\0') || (B_vvt1new != 0)) {
    _DAT_003f9bde = 0;
LAB_000dfb14:
    DAT_003f9b80 = DAT_003f9b80 & 0xfe;
  }
  else {
    if (_DAT_003f9bde < _TDCVVT) {
      _DAT_003f9bde = _DAT_003f9bde + 1;
      goto LAB_000dfb14;
    }
    DAT_003f9b80 = DAT_003f9b80 | 1;
  }
  if ((B_fgdcan == '\0') || (B_vvt2new != 0)) {
    _DAT_003f9be0 = 0;
LAB_000dfb88:
    DAT_003f9b80 = DAT_003f9b80 & 0xfd;
  }
  else {
    if (_DAT_003f9be0 < _TDCVVT) {
      _DAT_003f9be0 = _DAT_003f9be0 + 1;
      goto LAB_000dfb88;
    }
    DAT_003f9b80 = DAT_003f9b80 | 2;
  }
  if ((B_fgdcan == '\0') || ((B_vvt1chso != 0 && (B_vvt2chso != 0)))) {
    _DAT_003f9be2 = 0;
  }
  else {
    if (_TDCNPVVT <= _DAT_003f9be2) {
      DAT_003f9b80 = DAT_003f9b80 | 0x10;
      goto LAB_000dfc20;
    }
    _DAT_003f9be2 = _DAT_003f9be2 + 1;
  }
  DAT_003f9b80 = DAT_003f9b80 & 0xef;
LAB_000dfc20:
  if ((((B_fgdcan == '\0') || (B_vvt1cok == 0)) || (B_vvt2cok == 0)) ||
     (((B_vdia1cok == 0 || (B_vdia2cok == 0)) || ((B_vvt1chso == 0 || (B_vvt2chso == 0)))))) {
    _DAT_003f9be4 = 0;
  }
  else {
    if (_TDCVVTH <= _DAT_003f9be4) {
      DAT_003f9b80 = DAT_003f9b80 | 0x20;
      return;
    }
    _DAT_003f9be4 = _DAT_003f9be4 + 1;
  }
  DAT_003f9b80 = DAT_003f9b80 & 0xdf;
  return;
}

