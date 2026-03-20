/*
 * Program: n42.bin
 * Function: FUN_000ed110
 * Entry: 000ed110
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000ed110(void)

{
  if ((B_mdstop == 0) && (fanalun = ANALUST, B_stpon == 0)) {
    fanalun = (&DAT_001c111c)[esst_snm08dmub >> 0x10] +
              (char)((esst_snm08dmub & 0xffff) *
                     ((uint)(byte)(&DAT_001c111d)[esst_snm08dmub >> 0x10] -
                     (uint)(byte)(&DAT_001c111c)[esst_snm08dmub >> 0x10]) >> 0x10);
  }
  return;
}

