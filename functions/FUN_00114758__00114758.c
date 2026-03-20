/*
 * Program: n42.bin
 * Function: FUN_00114758
 * Entry: 00114758
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00114758(void)

{
  if ((raster_um & 3) == 0) {
    func_0xff221184(0x40);
    if ((DAT_003f99cc != (byte)~DAT_003f98e5) || (DAT_003f99cd != (byte)~zwout_um)) {
      ram_c_um = ram_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
    _5();
    DAT_003f98ad = zwout;
    DAT_003f98ac = DAT_005b9218;
    _6();
    if (DAT_003f98ad == (byte)~DAT_003f98ac) {
      if (DAT_003f98e5 != 0) {
        DAT_003f98e5 = DAT_003f98e5 - 1;
        DAT_003f99cc = ~DAT_003f98e5;
      }
      zwout_um = DAT_003f98ad;
      DAT_003f99cd = ~DAT_003f98ad;
    }
    else if (DAT_003f98e5 < DAT_001ce6cf) {
      if ((uint)DAT_003f98e5 + (uint)DAT_001ce6d0 < (uint)DAT_001ce6cf) {
        DAT_003f98e5 = DAT_003f98e5 + DAT_001ce6d0;
        DAT_003f99cc = ~DAT_003f98e5;
      }
      else {
        DAT_003f98e5 = DAT_001ce6cf;
        DAT_003f99cc = ~DAT_001ce6cf;
      }
    }
    else {
      ei_zwc_um = 1;
      B_i_ska_um = 1;
      B_reaci_um = B_reaci_um | 1;
      DAT_003fa028 = 0x66;
    }
    func_0xff2211ac(_DAT_003fa0d8);
  }
  return;
}

