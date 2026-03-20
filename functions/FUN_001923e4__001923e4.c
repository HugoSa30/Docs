/*
 * Program: n42.bin
 * Function: FUN_001923e4
 * Entry: 001923e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001923e4(void)

{
  byte local_28;
  byte local_24;
  
  if (((DAT_005b961a & 0x40) != 0) && ((DAT_005b961a & 0x80) != 0)) {
    if ((B_enheat == '\0') || (((B_mxhlsu != '\0' || (B_mnhlsu != '\0')) || (B_sihlsu != '\0')))) {
      DAT_005b816d = DAT_005b816d & 0xdf;
    }
    else {
      DAT_005b816d = DAT_005b816d | 0x20;
    }
    if ((DAT_005b816d & 0x20) == 0) {
      DAT_005b8178 = _DAT_001cf036;
      DAT_005b816d = DAT_005b816d & 0xf7;
    }
    else if (DAT_005b8178 == 0) {
      DAT_005b816d = DAT_005b816d | 8;
    }
    else {
      DAT_005b8178 = DAT_005b8178 + -1;
    }
    if (B_sa == '\0') {
      DAT_005b816d = DAT_005b816d & 0xef;
      DAT_005b817a = _DAT_001cf038;
    }
    else if (DAT_005b817a == 0) {
      DAT_005b816d = DAT_005b816d | 0x10;
    }
    else {
      DAT_005b817a = DAT_005b817a + -1;
    }
    if ((DAT_005b816d & 0x10) == 0) {
      DAT_005b8184 = _DAT_001c1bf4;
      DAT_005b816d = DAT_005b816d & 0xbf;
    }
    else if (DAT_005b8184 == 0) {
      DAT_005b816d = DAT_005b816d | 0x40;
    }
    else {
      DAT_005b8184 = DAT_005b8184 + -1;
    }
    if (((_DAT_001cf02c < usvkk_w) && (usvkk_w < _DAT_001cf030)) &&
       ((talsuf_w < _DAT_001c1bf0 && ((DAT_005b816d & 0x20) != 0)))) {
      if (DAT_005b817c == 0) {
        B_helsusa = B_helsusa | B_helsusa;
      }
      else {
        DAT_005b817c = DAT_005b817c + -1;
      }
    }
    else {
      DAT_005b817c = _DAT_001cf03a;
      B_helsusa = B_helsusa & ~B_helsusa;
    }
    if ((B_helsusa & B_helsusa) == 0) {
      if (((_DAT_001cf02e <= usvkk_w) && (usvkk_w <= _DAT_001cf02c)) &&
         ((_DAT_001c1bf2 < talsuf_w &&
          ((((local_28 = (byte)((ushort)_DAT_003fdf5e >> 8), (local_28 & 0xf) != 2 &&
             ((DAT_005b816d & 0x40) == 0)) && ((DAT_005b816d & 0x10) != 0)) &&
           ((DAT_005b816d & 8) != 0)))))) {
        B_nplsusa = 1;
      }
    }
    else {
      B_nplsusa = 0;
    }
    if (((B_enheat2 == '\0') || (B_mxhlsu2 != '\0')) || ((B_mnhlsu2 != '\0' || (B_sihlsu2 != '\0')))
       ) {
      DAT_005b8170 = DAT_005b8170 & 0xef;
    }
    else {
      DAT_005b8170 = DAT_005b8170 | 0x10;
    }
    if ((DAT_005b8170 & 0x10) == 0) {
      DAT_005b8192 = _DAT_001cf036;
      DAT_005b8170 = DAT_005b8170 & 0xfb;
    }
    else if (DAT_005b8192 == 0) {
      DAT_005b8170 = DAT_005b8170 | 4;
    }
    else {
      DAT_005b8192 = DAT_005b8192 + -1;
    }
    if (B_sa == '\0') {
      DAT_005b8170 = DAT_005b8170 & 0xf7;
      DAT_005b8194 = _DAT_001cf038;
    }
    else if (DAT_005b8194 == 0) {
      DAT_005b8170 = DAT_005b8170 | 8;
    }
    else {
      DAT_005b8194 = DAT_005b8194 + -1;
    }
    if ((DAT_005b8170 & 8) == 0) {
      DAT_005b819e = _DAT_001c1bf4;
      DAT_005b8170 = DAT_005b8170 & 0xdf;
    }
    else if (DAT_005b819e == 0) {
      DAT_005b8170 = DAT_005b8170 | 0x20;
    }
    else {
      DAT_005b819e = DAT_005b819e + -1;
    }
    if (((_DAT_001cf02c < usvkk2_w) && (usvkk2_w < _DAT_001cf030)) &&
       ((talsuf2_w < _DAT_001c1bf0 && ((DAT_005b8170 & 0x10) != 0)))) {
      if (DAT_005b8196 == 0) {
        B_helsusa = B_helsusa | B_helsusa2;
      }
      else {
        DAT_005b8196 = DAT_005b8196 + -1;
      }
    }
    else {
      DAT_005b8196 = _DAT_001cf03a;
      B_helsusa = B_helsusa & ~B_helsusa2;
    }
    if ((B_helsusa & B_helsusa2) == 0) {
      if ((((_DAT_001cf02e <= usvkk2_w) && (usvkk2_w <= _DAT_001cf02c)) &&
          (_DAT_001c1bf2 < talsuf2_w)) &&
         (((local_24 = (byte)((ushort)_DAT_003fdf60 >> 8), (local_24 & 0xf) != 2 &&
           ((DAT_005b8170 & 0x20) == 0)) && (((DAT_005b8170 & 8) != 0 && ((DAT_005b8170 & 4) != 0)))
          ))) {
        B_nplsusa2 = 1;
      }
    }
    else {
      B_nplsusa2 = 0;
    }
  }
  return;
}

