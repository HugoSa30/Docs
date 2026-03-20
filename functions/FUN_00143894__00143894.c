/*
 * Program: n42.bin
 * Function: FUN_00143894
 * Entry: 00143894
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00143894(void)

{
  if ((DIMCTESausbitsNOV1 & 1) == 0) {
    if ((((B_cdswe & 0x200) != 0) && ((B_drvddmtl & 1) == 0)) && ((DAT_003fdfb9 >> 1 & 1) != 0)) {
      crydtev = crydtev + 1;
      B_drvddmtl = B_drvddmtl | 1;
    }
    if ((DAT_005b961a & 4) == 0) {
      if ((B_cdswe & 0x200) == 0) {
        DIMCTESausbitsNOV1 = DIMCTESausbitsNOV1 | 1;
      }
      else if ((DAT_003fdfb9 & 1) == 0) {
        if (crydtev != 0) {
          DIMCTESausbitsNOV1 = DIMCTESausbitsNOV1 | 1;
        }
      }
      else if (SRYTES <= crydtev) {
        DIMCTESausbitsNOV1 = DIMCTESausbitsNOV1 | 1;
      }
    }
    else {
      if (((B_drvddmtl & 4) == 0) &&
         (((DAT_003fde8f >> 1 & 1) != 0 ||
          (((DAT_003fde91 >> 1 & 1) != 0 && ((DAT_003fde91 & 1) != 0)))))) {
        cryddmtl = cryddmtl + 1;
        B_drvddmtl = B_drvddmtl | 4;
      }
      if (((DAT_003fde91 & 1) == 0) && ((DAT_003fde8f & 1) == 0)) {
        if ((DAT_003fdfb9 & 1) == 0) {
          if ((crydtev != 0) && (cryddmtl != 0)) {
            DIMCTESausbitsNOV1 = DIMCTESausbitsNOV1 | 1;
          }
        }
        else if (SRYTES <= crydtev) {
          DIMCTESausbitsNOV1 = DIMCTESausbitsNOV1 | 1;
        }
      }
      else if ((DAT_003fdfb9 & 1) == 0) {
        if (SRYTES <= cryddmtl) {
          DIMCTESausbitsNOV1 = DIMCTESausbitsNOV1 | 1;
        }
      }
      else if (((SRYTES <= crydtev) && (cryddmtl != 0)) || ((SRYTES <= cryddmtl && (crydtev != 0))))
      {
        DIMCTESausbitsNOV1 = DIMCTESausbitsNOV1 | 1;
      }
    }
  }
  return;
}

