/*
 * Program: n42.bin
 * Function: FUN_000e9dfc
 * Entry: 000e9dfc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000e9dfc(void)

{
  if ((B_dsla == '\0') && (B_fasla == '\0')) {
    B_dslafa = B_dslafa & 0xfe;
  }
  else {
    B_dslafa = B_dslafa | 1;
  }
  if ((B_dslafa & 1) == 0) {
    if (B_kh == '\0') {
      lamkh_w = 0x1000;
      lamkh2_w = 0x1000;
    }
    else {
      DAT_005b8972 = FUN_000aa834(KFLANSKH,&DAT_001d113a,DAT_001d1139,&DAT_001d1140,&DAT_001d1158,
                                  tmst,anztib_w);
      lamkh_w = DAT_005b8972;
      if (lamkhg_w < DAT_005b8972) {
        lamkh_w = lamkhg_w;
      }
      lamkh2_w = DAT_005b8972;
      if (lamkhg2_w < DAT_005b8972) {
        lamkh2_w = lamkhg2_w;
      }
    }
  }
  else {
    lamkh_w = lasdslg_w;
    lamkh2_w = lasdslg2_w;
  }
  return;
}

