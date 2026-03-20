/*
 * Program: n42.bin
 * Function: FUN_00110828
 * Entry: 00110828
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00110828(void)

{
  if ((raster_um & 3) == 0) {
    func_0xff221184(0x100);
    if (DAT_003f9932 != (byte)~mfgr_um) {
      ram_c_um = ram_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
    DAT_003f98ab = 0;
    if (((_DAT_001ce21e < DAT_005b930a) && ((B_brems_um & 0x80) != 0)) && ((B_brems_um & 1) == 0)) {
      B_fgr_um = 1;
      if (B_fgr != '\0') {
        DAT_003f98ab = mifa;
      }
    }
    else {
      B_fgr_um = 0;
    }
    mfgr_um = DAT_003f98ab;
    DAT_003f9932 = ~DAT_003f98ab;
    func_0xff2211ac(_DAT_003fa0d8);
  }
  return;
}

