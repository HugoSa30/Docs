/*
 * Program: n42.bin
 * Function: FUN_00111614
 * Entry: 00111614
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00111614(void)

{
  if ((raster_um & 3) != 2) {
    return;
  }
  func_0xff221184(0x4000);
  if (mver_c_ur != (byte)~mver_c_um) {
    ram_c_um = ram_c_um + '\x01';
    B_reaci_um = B_reaci_um | 0x40;
    DAT_003fa02e = 0x66;
  }
  if ((B_reaci_um & 1) == 0) {
    if (DAT_003fa028 == -0x67) goto LAB_00111700;
  }
  else if (((B_reaci_um & 1) == 1) && (DAT_003fa028 == 'f')) goto LAB_00111700;
  ram_c_um = ram_c_um + '\x01';
  B_reaci_um = B_reaci_um | 0x40;
  DAT_003fa02e = 0x66;
LAB_00111700:
  _DAT_003f98ba = (ushort)mzf_um + (ushort)mzo_um;
  if (0xff < _DAT_003f98ba) {
    _DAT_003f98ba = 0xff;
  }
  mzfo_um = DAT_003f98bb;
  if ((B_reaci_um & 0xf) == 0) {
    _mdif_w_um = (_DAT_003f98ba & 0xff) - (ushort)mi_um;
    if (DAT_003f98bb < mi_um) {
      if (mver_c_um < DAT_001ce2b4) {
        mver_c_um = mver_c_um + 1;
        mver_c_ur = ~mver_c_um;
      }
      else {
        ei_mver_um = 1;
        B_i_ska_um = 1;
        B_reaci_um = B_reaci_um | 1;
        DAT_003fa028 = 'f';
      }
    }
    else {
      mver_c_um = 0;
      mver_c_ur = 0xff;
    }
  }
  func_0xff2211ac(_DAT_003fa0d8);
  return;
}

