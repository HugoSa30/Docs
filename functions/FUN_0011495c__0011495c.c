/*
 * Program: n42.bin
 * Function: FUN_0011495c
 * Entry: 0011495c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011495c(void)

{
  uint uVar1;
  
  func_0xff221184(1);
  if ((adcc_c_ur != (byte)~adcc_c_um) || (adcq_c_ur != (byte)~adcq_c_um)) {
    ram_c_um = ram_c_um + '\x01';
    B_reaci_um = B_reaci_um | 0x40;
    DAT_003fa02e = 0x66;
  }
  if ((raster_um & 0x1f) == 0x1d) {
    B_adcc_um = 1;
    adcc_c_um = 1;
    adcc_c_ur = 0xfe;
    func_0xff20ae64(5);
  }
  else if (adcc_c_um != 0) {
    if ((raster_um & 1) == 0) {
      uVar1 = FUN_00110eac(5);
      uVar1 = (uVar1 & 0x3ff) >> 1;
      _DAT_003f98b2 = (undefined2)uVar1;
      if (DAT_001ce714 < uVar1) {
        if (adcc_c_um < DAT_001ce715) {
          adcc_c_um = adcc_c_um + 1;
          adcc_c_ur = ~adcc_c_um;
        }
        else {
          ei_adcc_um = 1;
          B_i_ska_um = 1;
          B_reaci_um = B_reaci_um | 1;
          DAT_003fa028 = 0x66;
          B_pwgnotum = 1;
          B_msthw_um = B_msthw_um | 0x40;
          DAT_003fa044 = 0x65;
        }
      }
      else {
        adcc_c_um = 0;
        adcc_c_ur = 0xff;
      }
      B_adcc_um = 0;
      _upwg2_um = _DAT_003f98b2;
      func_0xff20af20(5);
    }
    else {
      B_adcc_um = 1;
      func_0xff20ae64(5);
    }
  }
  func_0xff209c64(&DAT_003f98ab);
  adcq_um = DAT_003f98ab;
  if ((DAT_003f98ab & 5) == 5) {
    adcq_c_um = 0;
    adcq_c_ur = 0xff;
  }
  else if (adcq_c_um < DAT_001ce716) {
    adcq_c_um = adcq_c_um + 1;
    adcq_c_ur = ~adcq_c_um;
  }
  else {
    ei_adcq_um = 1;
    B_i_ska_um = 1;
    B_reaci_um = B_reaci_um | 1;
    DAT_003fa028 = 0x66;
    B_pwgnotum = 1;
    B_msthw_um = B_msthw_um | 0x40;
    DAT_003fa044 = 0x65;
  }
  func_0xff2211ac(_DAT_003fa0d8);
  return;
}

