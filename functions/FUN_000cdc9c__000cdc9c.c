/*
 * Program: n42.bin
 * Function: FUN_000cdc9c
 * Entry: 000cdc9c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000cdc9c(void)

{
  canastat = func_0x0103319c(1);
  if (B_fgdcan == '\0') {
    DAT_003f9b87 = TDCANAH;
    DAT_003f9b86 = TDCANA3;
    DAT_003f9b85 = TDCANA1;
  }
  else {
    if ((canastat == 0) && (B_edprcana == 0)) {
      if (DAT_003f9b87 == '\0') {
        DAT_003f9b88 = DAT_003f9b88 | 4;
      }
      else {
        DAT_003f9b87 = DAT_003f9b87 + -1;
      }
    }
    else {
      DAT_003f9b87 = TDCANAH;
    }
    if ((canastat & 1) == 0) {
      DAT_003f9b86 = TDCANA3;
    }
    else if (DAT_003f9b86 == '\0') {
      DAT_003f9b88 = DAT_003f9b88 | 2;
    }
    else {
      DAT_003f9b86 = DAT_003f9b86 + -1;
    }
    if ((canastat & 4) == 0) {
      DAT_003f9b85 = TDCANA1;
    }
    else if (DAT_003f9b85 == '\0') {
      DAT_003f9b88 = DAT_003f9b88 | 1;
    }
    else {
      DAT_003f9b85 = DAT_003f9b85 + -1;
    }
  }
  return;
}

