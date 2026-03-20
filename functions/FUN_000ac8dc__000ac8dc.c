/*
 * Program: n42.bin
 * Function: FUN_000ac8dc
 * Entry: 000ac8dc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ac8dc(void)

{
  if (_DLRPID2T < dlrpidc) {
    B_dlrpide = 1;
    if (ES_sfmdk == '\0') {
      B_dveese = 1;
    }
  }
  else {
    if (_DLRPID1T < dlrpidc) {
      B_dlrbe = 1;
    }
    else if (((DAT_003fb0a4 == '\0') && (_DLRPID0T < dlrpidc)) && (nmot == 0)) {
      B_dvete = 1;
    }
    dlrpidc = dlrpidc + 1;
    if (ES_sfmdk == '\0') {
      if (dveesc < DVEEST) {
        dveesc = dveesc + 1;
        if (DVEEST <= dveesc) {
          B_dveesh = 1;
        }
      }
      else {
        B_dveesh = 0;
      }
    }
    else {
      dveesc = 0;
    }
  }
  return;
}

