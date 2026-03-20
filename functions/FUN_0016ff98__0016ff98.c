/*
 * Program: n42.bin
 * Function: FUN_0016ff98
 * Entry: 0016ff98
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0016ff98(void)

{
  if (((B_falsh == '\0') && ((DAT_005b86e5 & 1) == 0)) && ((DAT_005b86f5 & 0x20) == 0)) {
    B_lamdiag = '\0';
  }
  else {
    B_lamdiag = '\x01';
  }
  if ((DAT_005b86e5 & 1) == 0) {
    if (B_falsh == '\0') {
      if ((DAT_005b86f5 & 0x20) == 0) {
        lamdiag_w = 0x1000;
      }
      else {
        lamdiag_w = DAT_005b870a;
      }
    }
    else {
      lamdiag_w = lamelsh_w;
    }
  }
  else {
    lamdiag_w = DAT_005b86ba;
  }
  if (((B_falsh2 == '\0') && ((DAT_005b86e5 & 2) == 0)) && ((DAT_005b86f7 & 0x20) == 0)) {
    B_lamdiag2 = '\0';
  }
  else {
    B_lamdiag2 = '\x01';
  }
  if ((DAT_005b86e5 & 2) == 0) {
    if (B_falsh2 == '\0') {
      if ((DAT_005b86f7 & 0x20) == 0) {
        lamdiag2_w = 0x1000;
      }
      else {
        lamdiag2_w = DAT_005b8708;
      }
    }
    else {
      lamdiag2_w = lamelsh2_w;
    }
  }
  else {
    lamdiag2_w = DAT_005b86b8;
  }
  if (((B_lamnse != 0) && (B_lamkhe != '\0')) && (B_lamkh != '\0')) {
    func_0xff21c604();
  }
  if ((B_fa == '\0') || ((B_lamdiag == '\0' && (B_lamdiag2 == '\0')))) {
    lamlgm = (&DAT_001d093c)[esst_stm12esub >> 0x10] +
             (char)((esst_stm12esub & 0xffff) *
                    ((uint)*(byte *)((esst_stm12esub >> 0x10) + 0x1d093d) -
                    (uint)(byte)(&DAT_001d093c)[esst_stm12esub >> 0x10]) >> 0x10);
  }
  else {
    lamlgm = DAT_001d0938;
  }
  if (B_sls == '\0') {
    if ((B_fa == '\0') || ((B_lamdiag == '\0' && (B_lamdiag2 == '\0')))) {
      lamlgfmn = (&DAT_001d092c)[esst_stm12esub >> 0x10] +
                 (char)((esst_stm12esub & 0xffff) *
                        ((uint)*(byte *)((esst_stm12esub >> 0x10) + 0x1d092d) -
                        (uint)(byte)(&DAT_001d092c)[esst_stm12esub >> 0x10]) >> 0x10);
    }
    else {
      lamlgfmn = DAT_001d0929;
    }
  }
  else {
    lamlgfmn = func_0xff2187cc(&DAT_001d091c,imlatm);
  }
  if (B_evloc == '\0') {
    lasoabv = func_0xff2187cc(&DAT_001c69fc,ml);
  }
  if ((((B_lamnse != 0) && (B_lamkhe != '\0')) && ((B_lamka & B_lamka) == 0)) &&
     ((B_lamka & B_lamka2) == 0)) {
    func_0xff21c328();
  }
  return;
}

