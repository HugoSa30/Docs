/*
 * Program: n42.bin
 * Function: FUN_000ac328
 * Entry: 000ac328
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000ac328(void)

{
  word wVar1;
  
  lamvoa_w = lamatb_w;
  if (lamfa_w < lamatb_w) {
    lamvoa_w = lamfa_w;
  }
  B_lamnswl = lamnswl_w != 0x1000;
  if ((B_lamka & B_lamka) == 0) {
    if (B_lamkh == '\0') {
      wVar1 = lamdiag_w;
      if (B_lamnswl) {
        wVar1 = lamnswl_w;
      }
    }
    else {
      wVar1 = lamkhe_w;
      if (((CWLAMKH & 1) != 0) && (wVar1 = lamnswl_w, lamkhe_w < lamnswl_w)) {
        wVar1 = lamkhe_w;
      }
    }
  }
  else {
    wVar1 = lamnswl_w;
    if (lamka_w <= lamnswl_w) {
      wVar1 = lamka_w;
    }
  }
  lams_w = wVar1;
  if ((lamvoa_w != 0x1000) && (lamvoa_w < wVar1)) {
    lams_w = lamvoa_w;
  }
  if (wVar1 < lamvoa_w) {
    lamvoa_w = wVar1;
  }
  if ((((B_lamkh != '\0') || (B_lamnswl)) || ((B_lamka & B_lamka) != 0)) ||
     ((B_lamdiag != '\0' || (B_ldeffw != '\0')))) {
    B_ldef = 1;
  }
  else {
    B_ldef = 0;
  }
  lamvoa2_w = lamatb2_w;
  if (lamfa_w < lamatb2_w) {
    lamvoa2_w = lamfa_w;
  }
  if ((B_lamka & B_lamka2) == 0) {
    if (B_lamkh == '\0') {
      wVar1 = lamdiag2_w;
      if (B_lamnswl) {
        wVar1 = lamnswl_w;
      }
    }
    else {
      wVar1 = lamkhe2_w;
      if (((CWLAMKH & 1) != 0) && (wVar1 = lamnswl_w, lamkhe2_w < lamnswl_w)) {
        wVar1 = lamkhe2_w;
      }
    }
  }
  else {
    wVar1 = lamnswl_w;
    if (lamka2_w <= lamnswl_w) {
      wVar1 = lamka2_w;
    }
  }
  lams2_w = wVar1;
  if ((lamvoa2_w != 0x1000) && (lamvoa2_w < wVar1)) {
    lams2_w = lamvoa2_w;
  }
  if (wVar1 < lamvoa2_w) {
    lamvoa2_w = wVar1;
  }
  if ((((B_lamkh != '\0') || (B_lamnswl)) || ((B_lamka & B_lamka2) != 0)) ||
     ((B_lamdiag2 != '\0' || (B_ldeffw != '\0')))) {
    B_ldef2 = 1;
  }
  else {
    B_ldef2 = 0;
  }
  return;
}

