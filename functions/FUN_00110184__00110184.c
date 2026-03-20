/*
 * Program: n42.bin
 * Function: FUN_00110184
 * Entry: 00110184
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00110184(void)

{
  if ((raster_um & 3) != 0) {
    return;
  }
  func_0xff221184(2);
  if ((B_reaci_um & 4) == 0) {
    if (DAT_003fa02a != -0x67) {
LAB_001101f0:
      ram_c_um = ram_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
  }
  else if (((B_reaci_um & 4) != 4) || (DAT_003fa02a != 'f')) goto LAB_001101f0;
  if ((B_reaci_um & 2) == 0) {
    if (DAT_003fa029 != -0x67) {
LAB_00110254:
      ram_c_um = ram_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
  }
  else if (((B_reaci_um & 2) != 2) || (DAT_003fa029 != 'f')) goto LAB_00110254;
  if ((B_reaci_um & 8) == 0) {
    if (DAT_003fa02b == -0x67) goto LAB_001102e0;
  }
  else if (((B_reaci_um & 8) == 8) && (DAT_003fa02b == 'f')) goto LAB_001102e0;
  ram_c_um = ram_c_um + '\x01';
  B_reaci_um = B_reaci_um | 0x40;
  DAT_003fa02e = 0x66;
LAB_001102e0:
  if (B_ub_ok == '\0') {
    B_reaci_um = B_reaci_um | 2;
    DAT_003fa029 = 0x66;
  }
  else {
    B_reaci_um = B_reaci_um & 0xfd;
    DAT_003fa029 = 0x99;
  }
  if (B_i_ska_fr == '\0') {
    B_reaci_um = B_reaci_um & 0xfb;
    DAT_003fa02a = 0x99;
  }
  else {
    B_reaci_um = B_reaci_um | 4;
    DAT_003fa02a = 0x66;
  }
  if (B_notlu_fr == '\0') {
    B_reaci_um = B_reaci_um & 0xf7;
    DAT_003fa02b = 0x99;
  }
  else {
    B_reaci_um = B_reaci_um | 8;
    DAT_003fa02b = 0x66;
  }
  func_0xff2211ac(_DAT_003fa0d8);
  return;
}

