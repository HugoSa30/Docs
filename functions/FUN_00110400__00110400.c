/*
 * Program: n42.bin
 * Function: FUN_00110400
 * Entry: 00110400
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00110400(void)

{
  if ((raster_um & 3) != 0) {
    return;
  }
  func_0xff221184(4);
  if ((DAT_003f9931 != (byte)~DAT_003f9819) || (DAT_003f9930 != (byte)~B_accen_um)) {
    ram_c_um = ram_c_um + '\x01';
    B_reaci_um = B_reaci_um | 0x40;
    DAT_003fa02e = 0x66;
  }
  if ((B_brems_um & 1) == 0) {
    if (DAT_003fa030 != '3') {
LAB_001104f0:
      ram_c_um = ram_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
  }
  else if (((B_brems_um & 1) != 1) || (DAT_003fa030 != -0x34)) goto LAB_001104f0;
  if ((B_brems_um & 0x80) == 0) {
    if (DAT_003fa033 != '3') {
LAB_0011055c:
      ram_c_um = ram_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
  }
  else if (((B_brems_um & 0x80) != 0x80) || (DAT_003fa033 != -0x34)) goto LAB_0011055c;
  if ((DAT_003f98a5 & 0x80) == 0) {
    if (DAT_003fa03e != -0x37) {
LAB_001105d4:
      ram_c_um = ram_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
  }
  else if (((DAT_003f98a5 & 0x80) != 0x80) || (DAT_003fa03e != 'c')) goto LAB_001105d4;
  if ((DAT_005b8d0d != '\0') || (DAT_005b8d0b != '\0')) goto LAB_00110680;
  if (DAT_005b8d0e == '\0') {
    if (DAT_005b8d10 == '\0') {
LAB_0011065c:
      if (DAT_005b8d11 == '\0') goto LAB_00110680;
    }
  }
  else if (DAT_005b8d10 != '\0') goto LAB_0011065c;
  B_brems_um = B_brems_um | 0x80;
  DAT_003fa033 = -0x34;
LAB_00110680:
  if (((DAT_003fbf62 != '\0') || (DAT_001ce21c <= B_accen_um)) || (DAT_001ce21d <= DAT_003f9819)) {
    B_brems_um = B_brems_um & 0x7f;
    DAT_003fa033 = '3';
  }
  if ((DAT_003fbe99 == '\0') && (DAT_003fbe9a == '\0')) {
    B_brems_um = B_brems_um & 0xfe;
    DAT_003fa030 = 0x33;
    B_accen_um = 0;
    DAT_003f9930 = 0xff;
  }
  else {
    B_brems_um = B_brems_um | 1;
    DAT_003fa030 = 0xcc;
    if (B_accen_um < DAT_001ce21c) {
      B_accen_um = B_accen_um + 1;
      DAT_003f9930 = ~B_accen_um;
    }
  }
  if ((B_brems_um & 0x80) == 0x80) {
    if (DAT_003fbf6d != '\0') {
      DAT_003f98a5 = DAT_003f98a5 & 0x7f;
      DAT_003fa03e = -0x37;
    }
  }
  else {
    DAT_003f98a5 = DAT_003f98a5 | 0x80;
    DAT_003fa03e = 'c';
  }
  if (((B_brems_um & 0x80) == 0x80) && ((DAT_003f98a5 & 0x80) == 0x80)) {
    if (DAT_003f9819 < DAT_001ce21d) {
      DAT_003f9819 = DAT_003f9819 + 1;
      DAT_003f9931 = ~DAT_003f9819;
    }
  }
  else {
    DAT_003f9819 = 0;
    DAT_003f9931 = 0xff;
  }
  func_0xff2211ac(_DAT_003fa0d8);
  return;
}

