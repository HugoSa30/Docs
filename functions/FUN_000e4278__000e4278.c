/*
 * Program: n42.bin
 * Function: FUN_000e4278
 * Entry: 000e4278
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000e4278(void)

{
  if (B_dtefrr == '\0') {
    frini_w = 0x8000;
  }
  else {
    frini_w = frdter_w;
  }
  B_frini = B_dtefrr != '\0';
  frini2_w = frini_w;
  B_frini2 = B_dtefrr != '\0';
  return;
}

