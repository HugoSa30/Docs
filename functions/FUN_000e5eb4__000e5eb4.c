/*
 * Program: n42.bin
 * Function: FUN_000e5eb4
 * Entry: 000e5eb4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000e5eb4(void)

{
  if ((DAT_005b961a & 0x20) != 0) {
    if (B_lsh != '\0') {
      if ((((DAT_005bb8ed & 1) == 0) || (B_hshe == '\0')) || (uhsh < UHDMXH)) {
        DAT_003f9cb8 = DAT_003f9cb8 & 0xfd;
        DAT_003f9cba = TVFHSH;
      }
      else if (DAT_003f9cba == '\0') {
        DAT_003f9cb8 = DAT_003f9cb8 | 2;
      }
      else {
        DAT_003f9cba = DAT_003f9cba + -1;
      }
      if ((((DAT_005bb8ed & 1) == 0) || (B_hshe != '\0')) || (UHDMNH < uhsh)) {
        DAT_003f9cb8 = DAT_003f9cb8 & 0xfb;
        DAT_003f9cbb = TVFHSH;
      }
      else if (DAT_003f9cbb == '\0') {
        DAT_003f9cb8 = DAT_003f9cb8 | 4;
      }
      else {
        DAT_003f9cbb = DAT_003f9cbb + -1;
      }
      if ((((DAT_005bb8ed & 1) == 0) || (B_hshe != '\0')) || ((uhsh <= UHDMNH || (UHDMXH <= uhsh))))
      {
        DAT_003f9cb8 = DAT_003f9cb8 & 0xf7;
        DAT_003f9cbc = TVFHSH;
      }
      else if (DAT_003f9cbc == '\0') {
        DAT_003f9cb8 = DAT_003f9cb8 | 8;
      }
      else {
        DAT_003f9cbc = DAT_003f9cbc + -1;
      }
      if (B_hsokh == '\0') {
        if ((DAT_003f9cb8 & 2) != 0) {
          DAT_003f9cb8 = DAT_003f9cb8 | 0x10;
        }
        if ((DAT_003f9cb8 & 4) != 0) {
          DAT_003f9cb8 = DAT_003f9cb8 | 0x20;
        }
        if ((DAT_003f9cb8 & 8) != 0) {
          DAT_003f9cb8 = DAT_003f9cb8 | 0x40;
        }
      }
      else {
        DAT_003f9cb8 = DAT_003f9cb8 & 0x8f;
      }
      if ((((DAT_003f9cb8 & 2) == 0) && ((DAT_003f9cb8 & 4) == 0)) && ((DAT_003f9cb8 & 8) == 0)) {
        if ((B_hshe == '\0') && (UHDMXH <= uhsh)) {
          DAT_003f9cb8 = DAT_003f9cb8 | 1;
        }
      }
      else {
        DAT_003f9cb8 = DAT_003f9cb8 & 0xfe;
      }
    }
    if (((DAT_005b961a & 0x20) != 0) && (B_lsh2 != '\0')) {
      if (((DAT_005bb8ee & 8) == 0) || ((B_hshe2 == '\0' || (uhsh2 < UHDMXH)))) {
        DAT_003f9cb9 = DAT_003f9cb9 & 0xf7;
        DAT_003f9cbd = TVFHSH;
      }
      else if (DAT_003f9cbd == '\0') {
        DAT_003f9cb9 = DAT_003f9cb9 | 8;
      }
      else {
        DAT_003f9cbd = DAT_003f9cbd + -1;
      }
      if ((((DAT_005bb8ee & 8) == 0) || (B_hshe2 != '\0')) || (UHDMNH < uhsh2)) {
        DAT_003f9cb9 = DAT_003f9cb9 & 0xef;
        DAT_003f9cbe = TVFHSH;
      }
      else if (DAT_003f9cbe == '\0') {
        DAT_003f9cb9 = DAT_003f9cb9 | 0x10;
      }
      else {
        DAT_003f9cbe = DAT_003f9cbe + -1;
      }
      if ((((DAT_005bb8ee & 8) == 0) || (B_hshe2 != '\0')) ||
         ((uhsh2 <= UHDMNH || (UHDMXH <= uhsh2)))) {
        DAT_003f9cb9 = DAT_003f9cb9 & 0xdf;
        DAT_003f9cbf = TVFHSH;
      }
      else if (DAT_003f9cbf == '\0') {
        DAT_003f9cb9 = DAT_003f9cb9 | 0x20;
      }
      else {
        DAT_003f9cbf = DAT_003f9cbf + -1;
      }
      if (B_hsokh2 == '\0') {
        if ((DAT_003f9cb9 & 8) != 0) {
          DAT_003f9cb9 = DAT_003f9cb9 | 1;
        }
        if ((DAT_003f9cb9 & 0x10) != 0) {
          DAT_003f9cb9 = DAT_003f9cb9 | 2;
        }
        if ((DAT_003f9cb9 & 0x20) != 0) {
          DAT_003f9cb9 = DAT_003f9cb9 | 4;
        }
      }
      else {
        DAT_003f9cb9 = DAT_003f9cb9 & 0xf8;
      }
      if ((((DAT_003f9cb9 & 8) == 0) && ((DAT_003f9cb9 & 0x10) == 0)) &&
         ((DAT_003f9cb9 & 0x20) == 0)) {
        if ((B_hshe2 == '\0') && (UHDMXH <= uhsh2)) {
          DAT_003f9cb9 = DAT_003f9cb9 | 0x40;
        }
      }
      else {
        DAT_003f9cb9 = DAT_003f9cb9 & 0xbf;
      }
    }
  }
  return;
}

