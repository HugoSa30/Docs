/*
 * Program: n42.bin
 * Function: FUN_000d5620
 * Entry: 000d5620
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000d5620(void)

{
  if ((B_nopg & B_synph) == 0) {
    if (((DAT_003fdf9b & 1) == 0) || ((B_nopg & B_nopg) == 0)) {
      B_nlph = 0;
    }
    else {
      B_nlph = 1;
    }
  }
  else {
    B_nlph = 0;
  }
  return;
}

