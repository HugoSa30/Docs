/*
 * Program: n42.bin
 * Function: FUN_000d84d8
 * Entry: 000d84d8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d84d8(void)

{
  if ((fktns != 0) || (B_stend == '\0')) {
    DAT_005b8271 = calc_value_from_x_y_2(&KFNSWRL,tmst,rl);
    DAT_005b8272 = calc_value_from_x_y_2(&KFNSWRLVT,tmst,rl);
  }
  if (B_st == '\0') {
    if (_ANZTIBMX <= anzti_w) {
      B_lamnse = 1;
    }
  }
  else {
    B_lamnse = 0;
  }
  if (B_lamnse == 0) {
    anztib_w = anzti_w;
    lamns_w = FUN_000aafb0(&KFLANS,_DAT_001c10aa,esst_sts12esub,esst_san12esuw);
  }
  else {
    anztib_w = _ANZTIBMX;
    lamns_w = 0x1000;
  }
  return;
}

