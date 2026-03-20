/*
 * Program: n42.bin
 * Function: FUN_00116e78
 * Entry: 00116e78
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00116e78(void)

{
  if ((raster_um & 3) == 3) {
    _DAT_003f98cc = (uint)abfgrc_uc + (uint)abmsrc_uc + (uint)absgsc_uc;
    _DAT_003f98d0 =
         (uint)abmist_uc + (uint)abmver_uc + (uint)abmzf_uc + (uint)abmzul_uc + (uint)abreac_uc;
    _DAT_003f98d4 = _DAT_003f98cc + _DAT_003f98d0 * 0x200;
    _5();
    abtres_um = _DAT_003f98d4;
    _6();
  }
  return;
}

