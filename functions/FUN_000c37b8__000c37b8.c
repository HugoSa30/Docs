/*
 * Program: n42.bin
 * Function: FUN_000c37b8
 * Entry: 000c37b8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c37b8(void)

{
  B_dzen = ignchan != ignbuf;
  ignbuf = ignchan;
  if ((!(bool)B_dzen) && (B_dzbuf == 0)) {
    ignchan = 0;
  }
  return;
}

