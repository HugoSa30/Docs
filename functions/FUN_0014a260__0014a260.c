/*
 * Program: n42.bin
 * Function: FUN_0014a260
 * Entry: 0014a260
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014a260(void)

{
  if (_DAT_001c1d76 < tnst_w) {
    B_nouetm = B_nouetm & 0xfe;
  }
  FUN_001258b0();
  if ((B_uetm == '\0') || (B_kl15 == 0)) {
    B_uetmc = 0;
  }
  else {
    B_uetmc = 1;
  }
  return;
}

