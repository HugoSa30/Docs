/*
 * Program: n42.bin
 * Function: FUN_000e639c
 * Entry: 000e639c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e639c(void)

{
  if ((DAT_005b961a & 0x2000) == 0) {
    return;
  }
  if (B_lsh != '\0') {
    if (_DAT_001c1bea < tahsom_w) {
      DAT_005b9076 = DAT_005b9076 | 1;
    }
    else {
      DAT_005b9076 = DAT_005b9076 & 0xfe;
    }
    if (B_sa == '\0') {
      DAT_005b86f5 = DAT_005b86f5 & 0x7f;
LAB_000e658c:
      if ((DAT_005b86f5 & 0x80) == 0) goto LAB_000e65b8;
      DAT_003f9cc1 = DAT_003f9cc1 | 1;
    }
    else {
      if (((DAT_005bb906 & 8) == 0) || (DAT_001c1be6 <= ushk)) {
        if ((((DAT_005b86f3 & 0x10) != 0) &&
            (((B_cwlshdyn != '\0' && ((DAT_005b86f6 & 8) != 0)) && (DAT_001c1be7 < ushk)))) &&
           ((_DAT_001c1be8 < _ml_w && ((DAT_005b9076 & 1) != 0)))) {
          DAT_005b86f5 = DAT_005b86f5 | 0x80;
        }
      }
      else {
        DAT_005b86f5 = DAT_005b86f5 & 0x7f;
      }
      if ((DAT_005b86f5 & 0x80) != 0) {
        _DAT_003f9cde = (ushort)ushk - (ushort)DAT_003f9cc0;
        DAT_005b9079 = (byte)_DAT_003f9cde;
        if (_DAT_003f9cde < 0) {
          DAT_005b9079 = -DAT_005b9079;
        }
        if ((DAT_003f9cc1 & 1) == 0) {
          DAT_005b9077 = 0;
        }
        else if (DAT_005b9077 < DAT_005b9079) {
          DAT_005b9077 = DAT_005b9079;
        }
        goto LAB_000e658c;
      }
LAB_000e65b8:
      DAT_003f9cc1 = DAT_003f9cc1 & 0xfe;
    }
    DAT_003f9cc0 = ushk;
  }
  if (B_lsh2 == '\0') {
    return;
  }
  if (_DAT_001c1bea < tahsom2_w) {
    DAT_005b9076 = DAT_005b9076 | 0x10;
  }
  else {
    DAT_005b9076 = DAT_005b9076 & 0xef;
  }
  if (B_sa == '\0') {
    DAT_005b86f7 = DAT_005b86f7 & 0x7f;
  }
  else {
    if (((DAT_005bb913 & 2) == 0) || (DAT_001c1be6 <= ushk2)) {
      if (((DAT_005b86f3 & 0x20) != 0) &&
         ((((B_cwlshdyn != '\0' && ((DAT_005b86f8 & 8) != 0)) && (DAT_001c1be7 < ushk2)) &&
          ((_DAT_001c1be8 < _ml_w && ((DAT_005b9076 & 0x10) != 0)))))) {
        DAT_005b86f7 = DAT_005b86f7 | 0x80;
      }
    }
    else {
      DAT_005b86f7 = DAT_005b86f7 & 0x7f;
    }
    if ((DAT_005b86f7 & 0x80) == 0) goto LAB_000e67d8;
    _DAT_003f9cde = (ushort)ushk2 - (ushort)DAT_003f9cc2;
    DAT_005b907a = (byte)_DAT_003f9cde;
    if (_DAT_003f9cde < 0) {
      DAT_005b907a = -DAT_005b907a;
    }
    if ((DAT_003f9cc3 & 1) == 0) {
      DAT_005b9078 = 0;
    }
    else if (DAT_005b9078 < DAT_005b907a) {
      DAT_005b9078 = DAT_005b907a;
    }
  }
  if ((DAT_005b86f7 & 0x80) != 0) {
    DAT_003f9cc2 = ushk2;
    DAT_003f9cc3 = DAT_003f9cc3 | 1;
    return;
  }
LAB_000e67d8:
  DAT_003f9cc3 = DAT_003f9cc3 & 0xfe;
  DAT_003f9cc2 = ushk2;
  return;
}

