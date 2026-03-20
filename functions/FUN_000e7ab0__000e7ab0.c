/*
 * Program: n42.bin
 * Function: FUN_000e7ab0
 * Entry: 000e7ab0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000e7ab0(void)

{
  if ((B_st == '\0') && (B_stend == '\0')) {
    B_stoe = false;
  }
  else {
    B_stoe = true;
  }
  if (B_stoe) {
    if (DAT_003faae8 == 0) {
      DAT_003faae6 = DAT_003faae6 & 0xfe;
      if (DAT_003faae9 == '\0') {
        DAT_003faae9 = '2' - tedub;
        DAT_003faae8 = tedub;
      }
      else {
        DAT_003faae9 = DAT_003faae9 + -1;
      }
    }
    else {
      DAT_003faae6 = DAT_003faae6 | 1;
      DAT_003faae8 = DAT_003faae8 - 1;
    }
    if (((((DAT_003faae6 & 1) == 0) && (B_hmx == '\0')) || (UBHS < ub)) || (B_nmot == '\0')) {
      B_hsve = 0;
    }
    else {
      B_hsve = 1;
    }
    if (DAT_003faaee == 0) {
      DAT_003faae7 = DAT_003faae7 & 0xfb;
      if (DAT_003faaef == '\0') {
        DAT_003faaef = '2' - tedub2;
        DAT_003faaee = tedub2;
      }
      else {
        DAT_003faaef = DAT_003faaef + -1;
      }
    }
    else {
      DAT_003faae7 = DAT_003faae7 | 4;
      DAT_003faaee = DAT_003faaee - 1;
    }
    if ((((DAT_003faae7 & 4) == 0) && (B_hmx2 == '\0')) || ((UBHS < ub || (B_nmot == '\0')))) {
      B_hsve2 = 0;
    }
    else {
      B_hsve2 = 1;
    }
  }
  return;
}

