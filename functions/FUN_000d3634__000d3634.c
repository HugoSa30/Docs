/*
 * Program: n42.bin
 * Function: FUN_000d3634
 * Entry: 000d3634
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d3634(void)

{
  if ((int)((uint)_SPRZG_AN - (uint)Vse_spri) < 1) {
    wnwi_w = 0;
  }
  else {
    wnwi_w = (word)((int)(((uint)_SPRZG_AN - (uint)Vse_spri) * 0x6666) >> 10);
    if ((short)wnwi_w < 0) {
      wnwi_w = 0;
    }
  }
  return;
}

