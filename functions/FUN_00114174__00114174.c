/*
 * Program: n42.bin
 * Function: FUN_00114174
 * Entry: 00114174
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00114174(void)

{
  if ((raster_um & 3) == 0) {
    func_0xff221184(0x200);
    if (DAT_003f99c0 != (byte)~msgs_um) {
      ram_c_um = ram_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
    B_nosgs_um = 1;
    DAT_003f9895 = 0;
    msgs_um = 0;
    DAT_003f99c0 = 0xff;
    func_0xff2211ac(_DAT_003fa0d8);
  }
  return;
}

