/*
 * Program: n42.bin
 * Function: FUN_00112680
 * Entry: 00112680
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00112680(void)

{
  if ((raster_um & 3) != 2) {
    return;
  }
  func_0xff221184(0x8000);
  if (((reac_c1_ur != (byte)~reac_c1_um) || (reac_c2_ur != (byte)~reac_c2_um)) ||
     (_fuel_co_ur != ~_fuel_co_um)) {
    ram_c_um = ram_c_um + '\x01';
    B_reaci_um = B_reaci_um | 0x40;
    DAT_003fa02e = 0x66;
  }
  if ((B_reaci_um & 1) == 0) {
    if (DAT_003fa028 != -0x67) {
LAB_00112790:
      ram_c_um = ram_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
  }
  else if (((B_reaci_um & 1) != 1) || (DAT_003fa028 != 'f')) goto LAB_00112790;
  if ((B_reaci_um & 0x10) == 0) {
    if (DAT_003fa02c == -0x67) goto LAB_0011281c;
  }
  else if (((B_reaci_um & 0x10) == 0x10) && (DAT_003fa02c == 'f')) goto LAB_0011281c;
  ram_c_um = ram_c_um + '\x01';
  B_reaci_um = B_reaci_um | 0x40;
  DAT_003fa02e = 0x66;
LAB_0011281c:
  _DAT_003f98d4 = FUN_00110d74();
  if ((B_reaci_um & 8) == 0) {
    DAT_003f98bc = DAT_001ce3b3;
  }
  else {
    DAT_003f98bc = FUN_00110aa8(&DAT_001ce3a0,spsn_um);
  }
  nska_um = DAT_003f98bc;
  if ((B_reaci_um & 1) == 0) {
    if ((B_reaci_um & 0xe) != 0) {
      if ((DAT_003f98bc < nmot_um) && ((evz_austot != 0xff || (_DAT_003f98d4 != _fuel_co_um)))) {
        if (reac_c1_um < DAT_001ce3b1) {
          reac_c1_um = reac_c1_um + 1;
          reac_c1_ur = ~reac_c1_um;
        }
        else {
          ei_reac_um = 1;
          B_i_ska_um = 1;
          B_reaci_um = B_reaci_um | 1;
          DAT_003fa028 = 'f';
        }
      }
      else {
        reac_c1_um = 0;
        reac_c1_ur = 0xff;
      }
    }
  }
  else if ((DAT_003f98bc < nmot_um) && ((evz_austot != 0xff || (_DAT_003f98d4 != _fuel_co_um)))) {
    if (reac_c2_um < DAT_001ce3b2) {
      reac_c2_um = reac_c2_um + 1;
      reac_c2_ur = ~reac_c2_um;
    }
    else {
      if ((B_reaci_um & 0x10) == 0) {
        reac_c_um = reac_c_um + '\x01';
      }
      B_reaci_um = B_reaci_um | 0x10;
      DAT_003fa02c = 'f';
    }
  }
  else {
    reac_c2_um = 0;
    reac_c2_ur = 0xff;
  }
  _fuel_co_um = _DAT_003f98d4;
  _fuel_co_ur = ~_DAT_003f98d4;
  if ((B_reaci_um & 0x10) == 0) {
    func_0xff2211ac(_DAT_003fa0d8);
  }
  else {
    func_0xff2211ac(_DAT_003fa0d8);
    func_0xff2211ac(_DAT_003fa0d8);
  }
  return;
}

