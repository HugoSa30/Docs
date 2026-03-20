/*
 * Program: n42.bin
 * Function: FUN_000e6ecc
 * Entry: 000e6ecc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e6ecc(void)

{
  uint uVar1;
  
  if ((B_cdswe & B_cdtankl) == 0) {
    return;
  }
  if (B_lsh != '\0') {
    if ((DAT_003f9ccf & 4) == 0) {
      DAT_003f9ccf = DAT_003f9ccf & 0xf7;
    }
    else {
      DAT_003f9ccf = DAT_003f9ccf | 8;
    }
    if (((DAT_003f9cd1 & 8) == 0) || (B_hshe == '\0')) {
      DAT_003f9ccf = DAT_003f9ccf & 0xfb;
    }
    else {
      DAT_003f9ccf = DAT_003f9ccf | 4;
    }
    if (B_tushzfh == '\0') {
      DAT_003f9ccf = DAT_003f9ccf & 0xfd;
    }
    else {
      DAT_003f9ccf = DAT_003f9ccf | 2;
    }
    if (((DAT_003f9ccf & 4) == 0) && ((DAT_003f9ccf & 8) != 0)) {
      B_tushzfh = '\x01';
      DAT_003f9cc7 = TUSHZFH;
    }
    else if (DAT_003f9cc7 == '\0') {
      B_tushzfh = '\0';
    }
    else {
      DAT_003f9cc7 = DAT_003f9cc7 + -1;
    }
    if (((DAT_003f9ccf & 1) == 0) && (B_anzhzoh == '\0')) {
      if (((DAT_003f9ccf & 4) == 0) && ((DAT_003f9ccf & 8) != 0)) {
        B_hzoffh = '\x01';
      }
    }
    else {
      B_hzoffh = '\0';
    }
    if ((B_tushzfh == '\0') && ((DAT_003f9ccf & 2) != 0)) {
      zhzoffh = zhzoffh + 1;
    }
    B_anzhzoh = ANZHZOFFH <= zhzoffh;
    if ((B_hzoffh == '\0') || (B_tushzfh == '\0')) {
LAB_000e7100:
      DAT_003f9ccf = DAT_003f9ccf & 0xfe;
    }
    else {
      uVar1 = (uint)ushk_w - (uint)_DAT_003f9ce0;
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      else if (0xffff < (int)uVar1) {
        uVar1 = 0xffff;
      }
      if ((uVar1 & 0xffff) < (uint)_DUSHKHZK) goto LAB_000e7100;
      DAT_003f9ccf = DAT_003f9ccf | 1;
    }
    if ((DAT_003f9ccf & 1) != 0) {
      zhzkh = zhzkh + 1;
    }
    _DAT_003f9ce0 = ushk_w;
    B_anzhzkh = ANZHZKH <= zhzkh;
    if ((bool)B_anzhzoh) {
      B_hzkhzyk = 1;
      zhzkh = 0;
      zhzoffh = 0;
      B_hzkfh = B_anzhzkh;
    }
  }
  if (B_lsh2 == '\0') {
    return;
  }
  if ((DAT_003f9ccf & 0x40) == 0) {
    DAT_003f9ccf = DAT_003f9ccf & 0x7f;
  }
  else {
    DAT_003f9ccf = DAT_003f9ccf | 0x80;
  }
  if (((DAT_003f9cd1 & 0x80) == 0) || (B_hshe2 == '\0')) {
    DAT_003f9ccf = DAT_003f9ccf & 0xbf;
  }
  else {
    DAT_003f9ccf = DAT_003f9ccf | 0x40;
  }
  if (B_tushzfh2 == '\0') {
    DAT_003f9ccf = DAT_003f9ccf & 0xdf;
  }
  else {
    DAT_003f9ccf = DAT_003f9ccf | 0x20;
  }
  if (((DAT_003f9ccf & 0x40) == 0) && ((DAT_003f9ccf & 0x80) != 0)) {
    B_tushzfh2 = '\x01';
    DAT_003f9ccd = TUSHZFH;
  }
  else if (DAT_003f9ccd == '\0') {
    B_tushzfh2 = '\0';
  }
  else {
    DAT_003f9ccd = DAT_003f9ccd + -1;
  }
  if (((DAT_003f9ccf & 0x10) == 0) && (B_anzhzoh2 == '\0')) {
    if (((DAT_003f9ccf & 0x40) == 0) && ((DAT_003f9ccf & 0x80) != 0)) {
      B_hzoffh2 = '\x01';
    }
  }
  else {
    B_hzoffh2 = '\0';
  }
  if ((B_tushzfh2 == '\0') && ((DAT_003f9ccf & 0x20) != 0)) {
    zhzoffh2 = zhzoffh2 + 1;
  }
  B_anzhzoh2 = ANZHZOFFH <= zhzoffh2;
  if ((B_hzoffh2 != '\0') && (B_tushzfh2 != '\0')) {
    uVar1 = (uint)ushk2_w - (uint)_DAT_003f9ce2;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0xffff < (int)uVar1) {
      uVar1 = 0xffff;
    }
    if ((uint)_DUSHKHZK <= (uVar1 & 0xffff)) {
      DAT_003f9ccf = DAT_003f9ccf | 0x10;
      goto LAB_000e7398;
    }
  }
  DAT_003f9ccf = DAT_003f9ccf & 0xef;
LAB_000e7398:
  if ((DAT_003f9ccf & 0x10) != 0) {
    zhzkh2 = zhzkh2 + 1;
  }
  _DAT_003f9ce2 = ushk2_w;
  B_anzhzkh2 = ANZHZKH <= zhzkh2;
  if ((bool)B_anzhzoh2) {
    B_hzkhzyk2 = 1;
    zhzkh2 = 0;
    zhzoffh2 = 0;
    B_hzkfh2 = B_anzhzkh2;
  }
  return;
}

