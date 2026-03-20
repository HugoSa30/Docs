/*
 * Program: n42.bin
 * Function: FUN_00111b8c
 * Entry: 00111b8c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00111b8c(void)

{
  if ((raster_um & 3) == 2) {
    func_0xff221184(0x1000);
    if ((mz_ur != (byte)~mz_um) || (mzo_ur != (byte)~mzo_um)) {
      ram_c_um = ram_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
    if (_mdst08_ur != ~_mdst08_um) {
      ram_c_um = ram_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
    if ((n_flags_um & 2) == 0) {
      DAT_003f98b5 = FUN_00110b18(&DAT_001ce2f8,DAT_001ce388,_spnst08_um,_nmst08_um);
    }
    else {
      DAT_003f98b5 = FUN_00110b18(&KFMPNS_UM,DAT_001ce388,_spnst08_um,_nmst08_um);
    }
    mped_um = DAT_003f98b5;
    if (mmsr_um < mfgr_um) {
      DAT_003f98b4 = mfgr_um;
    }
    else {
      DAT_003f98b4 = mmsr_um;
    }
    if (DAT_003f98b4 < msgs_um) {
      DAT_003f98b4 = msgs_um;
    }
    if (DAT_003f98b4 < DAT_003f98b5) {
      DAT_003f98b4 = DAT_003f98b5;
    }
    mz_um = DAT_003f98b4;
    mz_ur = ~DAT_003f98b4;
    _mdst08_um = FUN_00110958(&DAT_001ce378,DAT_003f98b4);
    _mdst08_ur = ~_mdst08_um;
    mzo_um = FUN_00110b18(&DAT_001ce2b8,DAT_001ce388,_mdst08_um,_nmst08_um);
    mzo_ur = ~mzo_um;
    func_0xff2211ac(_DAT_003fa0d8);
  }
  return;
}

