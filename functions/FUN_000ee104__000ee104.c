/*
 * Program: n42.bin
 * Function: FUN_000ee104
 * Entry: 000ee104
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ee104(void)

{
  ENUM_005b907d EVar1;
  
  if (((B_cdswe & B_cdtankl) != 0) && ((B_lsh != '\0' || (B_lsh2 != '\0')))) {
    if ((B_st != '\0') && ((DAT_003f9cd0 & 4) == 0)) {
      DAT_003f9cc9 = DAT_001c1bff;
    }
    if (DAT_003f9cc9 == '\0') {
      DAT_003fbf31 = '\0';
    }
    else {
      DAT_003f9cc9 = DAT_003f9cc9 + -1;
      if ((((DAT_003fdfc1 & 1) == 0) && (DAT_001cf03d < tmotab)) && (tmot < DAT_001cf03c)) {
        DAT_003fbf31 = '\x01';
      }
      else {
        DAT_003fbf31 = '\0';
      }
    }
    if (B_st == '\0') {
      DAT_003f9cd0 = DAT_003f9cd0 & 0xfb;
    }
    else {
      DAT_003f9cd0 = DAT_003f9cd0 | 4;
    }
    if (B_lsh != '\0') {
      if ((ushk_w < _DAT_001c1c06) && (DAT_003fbf31 != '\0')) {
        if (DAT_003f9cc4 == '\0') {
          DAT_003f9cd0 = DAT_003f9cd0 | 2;
        }
        else {
          DAT_003f9cc4 = DAT_003f9cc4 + -1;
        }
      }
      else {
        DAT_003f9cd0 = DAT_003f9cd0 & 0xfd;
        DAT_003f9cc4 = DAT_001c1c01;
      }
      if (ushk_w < _DAT_001c1c06) {
        B_zlshv = B_zlshv & (B_uhsig|B_zlshv|B_elshv|B_noadsh2|B_uhsig2|B_zlshv2|B_elshv2);
        DAT_003f9cc5 = DAT_001c1c01;
      }
      else if (DAT_003f9cc5 == '\0') {
        B_zlshv = B_zlshv | B_noadsh;
      }
      else {
        DAT_003f9cc5 = DAT_003f9cc5 + -1;
        B_zlshv = B_zlshv & (B_uhsig|B_zlshv|B_elshv|B_noadsh2|B_uhsig2|B_zlshv2|B_elshv2);
      }
      if ((B_fa == '\0') || (B_falsh != '\0')) {
        if ((B_nmot == '\0') ||
           (((B_ttbmhh == '\0' || (ub <= DAT_001cf040)) || (_DAT_001cf04a <= tahsom_w)))) {
          B_dshen = '\0';
        }
        else {
          B_dshen = '\x01';
        }
      }
      else {
        B_dshen = '\0';
      }
      if (_DAT_001c1c04 < ushk_w) {
        if (DAT_003f9cc8 == '\0') {
          DAT_003f9cd0 = DAT_003f9cd0 | 1;
        }
        else {
          DAT_003f9cc8 = DAT_003f9cc8 + -1;
        }
      }
      else {
        DAT_003f9cd0 = DAT_003f9cd0 & 0xfe;
        DAT_003f9cc8 = DAT_001c1c01;
      }
      if ((ushk_w < _DAT_001c1c0a) || (_DAT_001c1c08 < ushk_w)) {
        if (DAT_003f9cc6 == '\0') {
          B_zlshv = B_zlshv & (B_noadsh|B_zlshv|B_elshv|B_noadsh2|B_uhsig2|B_zlshv2|B_elshv2);
        }
        else {
          DAT_003f9cc6 = DAT_003f9cc6 + -1;
        }
      }
      else {
        B_zlshv = B_zlshv | B_uhsig;
        DAT_003f9cc6 = DAT_001c1bfe;
      }
      EVar1 = B_zlshv & (B_noadsh|B_uhsig|B_zlshv|B_noadsh2|B_uhsig2|B_zlshv2|B_elshv2) | B_zlshv;
      if ((((((B_adsh & 1) == 0) && (B_risigh == '\0')) &&
           (((DAT_003f9cd0 & 1) == 0 && (((B_adsh & 4) == 0 && (B_hsha != '\0')))))) &&
          (((DAT_003fdf49 & 1) == 0 || ((DAT_003fdf49 >> 1 & 1) == 0)))) &&
         ((B_hzkfh == '\0' && ((DAT_005b86f0 & 4) == 0)))) {
        if ((DAT_003f9cd1 & 2) != 0) {
          B_sbbhk = '\x01';
        }
      }
      else {
        B_sbbhk = '\0';
      }
      if ((((B_dshen == '\0') || (B_sbbhk == '\0')) ||
          ((B_zlshv & B_noadsh) ==
           ~(B_noadsh|B_uhsig|B_zlshv|B_elshv|B_noadsh2|B_uhsig2|B_zlshv2|B_elshv2))) ||
         (B_hzkhzyk == '\0')) {
        B_nolsh = 0;
        B_zlshv = EVar1;
      }
      else {
        B_nolsh = 1;
        B_zlshv = EVar1;
      }
    }
    if (B_lsh2 != '\0') {
      if ((ushk2_w < _DAT_001c1c06) && (DAT_003fbf31 != '\0')) {
        if (DAT_003f9cca == '\0') {
          DAT_003f9cd0 = DAT_003f9cd0 | 0x10;
        }
        else {
          DAT_003f9cca = DAT_003f9cca + -1;
        }
      }
      else {
        DAT_003f9cd0 = DAT_003f9cd0 & 0xef;
        DAT_003f9cca = DAT_001c1c01;
      }
      if (ushk2_w < _DAT_001c1c06) {
        B_zlshv = B_zlshv & (B_noadsh|B_uhsig|B_zlshv|B_elshv|B_uhsig2|B_zlshv2|B_elshv2);
        DAT_003f9ccb = DAT_001c1c01;
      }
      else if (DAT_003f9ccb == '\0') {
        B_zlshv = B_zlshv | B_noadsh2;
      }
      else {
        DAT_003f9ccb = DAT_003f9ccb + -1;
        B_zlshv = B_zlshv & (B_noadsh|B_uhsig|B_zlshv|B_elshv|B_uhsig2|B_zlshv2|B_elshv2);
      }
      if ((B_fa == '\0') || (B_falsh2 != '\0')) {
        if ((B_nmot == '\0') ||
           (((B_ttbmhh2 == '\0' || (ub <= DAT_001cf040)) || (_DAT_001cf04a <= tahsom2_w)))) {
          B_dshen2 = '\0';
        }
        else {
          B_dshen2 = '\x01';
        }
      }
      else {
        B_dshen2 = '\0';
      }
      if (_DAT_001c1c04 < ushk2_w) {
        if (DAT_003f9cce == '\0') {
          DAT_003f9cd0 = DAT_003f9cd0 | 8;
        }
        else {
          DAT_003f9cce = DAT_003f9cce + -1;
        }
      }
      else {
        DAT_003f9cd0 = DAT_003f9cd0 & 0xf7;
        DAT_003f9cce = DAT_001c1c01;
      }
      if ((ushk2_w < _DAT_001c1c0a) || (_DAT_001c1c08 < ushk2_w)) {
        if (DAT_003f9ccc == '\0') {
          B_zlshv = B_zlshv & (B_noadsh|B_uhsig|B_zlshv|B_elshv|B_noadsh2|B_zlshv2|B_elshv2);
        }
        else {
          DAT_003f9ccc = DAT_003f9ccc + -1;
        }
      }
      else {
        B_zlshv = B_zlshv | B_uhsig2;
        DAT_003f9ccc = DAT_001c1bfe;
      }
      EVar1 = B_zlshv & (B_noadsh|B_uhsig|B_zlshv|B_elshv|B_noadsh2|B_uhsig2|B_zlshv2) | B_zlshv2;
      if (((((B_adsh & 2) == 0) && (B_risigh2 == '\0')) &&
          (((DAT_003f9cd0 & 8) == 0 && (((B_adsh & 8) == 0 && (B_hsha2 != '\0')))))) &&
         ((((DAT_003fdf4b & 1) == 0 || ((DAT_003fdf4b >> 1 & 1) == 0)) &&
          (((DAT_005b86f0 & 8) == 0 && (B_hzkfh2 == '\0')))))) {
        if ((DAT_003f9cd1 & 0x20) != 0) {
          B_sbbhk2 = '\x01';
        }
      }
      else {
        B_sbbhk2 = '\0';
      }
      if ((((B_dshen2 == '\0') || (B_sbbhk2 == '\0')) ||
          ((B_zlshv & B_noadsh2) ==
           ~(B_noadsh|B_uhsig|B_zlshv|B_elshv|B_noadsh2|B_uhsig2|B_zlshv2|B_elshv2))) ||
         (B_hzkhzyk2 == '\0')) {
        B_nolsh2 = 0;
        B_zlshv = EVar1;
      }
      else {
        B_nolsh2 = 1;
        B_zlshv = EVar1;
      }
    }
  }
  return;
}

