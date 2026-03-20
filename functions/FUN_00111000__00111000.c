/*
 * Program: n42.bin
 * Function: FUN_00111000
 * Entry: 00111000
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00111000(void)

{
  uint uVar1;
  
  if ((raster_um & 3) == 2) {
    func_0xff221184(0x800);
    if ((dzw_ur != (byte)~B_fgrsd_um) || (mi_ur != (byte)~mi_um)) {
      ram_c_um = ram_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
    DAT_003f98af = FUN_00110b18(&DAT_001ce220,DAT_001ce388,_rlst08_um,_nmst08_um);
    miopt_um = DAT_003f98af;
    DAT_003f98ae = FUN_00110c30(&DAT_001ce260,DAT_001ce388,_rlst08_um,_nmst08_um);
    DAT_003f98b1 = DAT_003f98ae - zwout_um;
    if ((char)DAT_003f98b1 < '\0') {
      DAT_003f98b1 = 0;
    }
    B_fgrsd_um = DAT_003f98b1;
    dzw_ur = ~DAT_003f98b1;
    zwopt_um = DAT_003f98ae;
    DAT_003f98b0 = FUN_00110aa8(&DAT_001ce2a0,DAT_003f98b1);
    uVar1 = ((uint)DAT_003f98af * (uint)DAT_003f98b0) / 200;
    DAT_003f98b3 = (byte)uVar1;
    mi_um = DAT_003f98b3;
    mi_ur = ~DAT_003f98b3;
    _DAT_003f98b2 = (short)uVar1;
    etazw_um = DAT_003f98b0;
    func_0xff2211ac(_DAT_003fa0d8);
  }
  return;
}

