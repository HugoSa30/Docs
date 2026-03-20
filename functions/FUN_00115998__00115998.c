/*
 * Program: n42.bin
 * Function: FUN_00115998
 * Entry: 00115998
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00115998(void)

{
  uint local_10 [4];
  
  zsytp1_um = 0;
  zsytp2_um = 0xff;
  (*(code *)&SUB_0006466c)(local_10);
  _tdifs1_um = _tdifs1_um + ((_tsm_um - _tsm_alt_um) - (local_10[0] >> 2));
  _tdifs1_ur = ~_tdifs1_um;
  return;
}

