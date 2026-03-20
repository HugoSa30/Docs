/*
 * Program: n42.bin
 * Function: DISA
 * Entry: 000e0b1c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void DISA(void)

{
  uint uVar1;
  
  uVar1 = (uint)tans;
  if ((uVar1 < DI_TANS_MN) && ((B_di_ausschalt & 0x10) == 0)) {
    B_di_ausschalt = B_di_ausschalt | 0x10;
  }
  if ((DI_TANS_MN + 2 < uVar1) && ((B_di_ausschalt & 0x10) != 0)) {
    B_di_ausschalt = B_di_ausschalt & 0xef;
  }
  if ((DI_TANS_MX < uVar1) && ((B_di_ausschalt & 0x20) == 0)) {
    B_di_ausschalt = B_di_ausschalt | 0x20;
  }
  if ((int)uVar1 < (int)(DI_TANS_MX - 2)) {
    if ((B_di_ausschalt & 0x20) != 0) {
      B_di_ausschalt = B_di_ausschalt & 0xdf;
    }
  }
  if ((uint)ub < (uint)DI_UB_MN) {
    if ((B_di_ausschalt & 0x40) == 0) {
      B_di_ausschalt = B_di_ausschalt | 0x40;
    }
  }
  if (DI_UB_MN + 0x20 < (uint)ub) {
    if ((B_di_ausschalt & 0x40) != 0) {
      B_di_ausschalt = B_di_ausschalt & 0xbf;
    }
  }
  B_disa_ersatz = '\0';
  if ((((B_di_ausschalt & 0x10) != 0) || ((B_di_ausschalt & 0x20) != 0)) ||
     ((B_di_ausschalt & 0x40) != 0)) {
    B_disa_ersatz = '\x01';
  }
  if (B_btdisa == '\0') {
    if (B_disa_ersatz == '\0') {
      Sollwert = calc_value_from_x_y_2(&WLSU,nmot,rl);
    }
    else {
      Sollwert = DISAERSATZ;
    }
  }
  else {
    Sollwert = disatst;
  }
  return;
}

