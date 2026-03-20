/*
 * Program: n42.bin
 * Function: FUN_0011225c
 * Entry: 0011225c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011225c(void)

{
  if ((raster_um & 3) != 0) {
    return;
  }
  func_0xff221184(0x400);
  if ((nsof_c_ur != (byte)~nsof_c_um) || (_nsc_c_ur != (ushort)~_nsc_c_um)) {
    ram_c_um = ram_c_um + '\x01';
    B_reaci_um = B_reaci_um | 0x40;
    DAT_003fa02e = 0x66;
  }
  if ((n_flags_um & 1) == 0) {
    if (DAT_003fa034 != 'l') {
LAB_00112344:
      ram_c_um = ram_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
  }
  else if (((n_flags_um & 1) != 1) || (DAT_003fa034 != '9')) goto LAB_00112344;
  if ((n_flags_um & 4) == 0) {
    if (DAT_003fa036 != 'l') {
LAB_001123b0:
      ram_c_um = ram_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
  }
  else if (((n_flags_um & 4) != 4) || (DAT_003fa036 != '9')) goto LAB_001123b0;
  if ((n_flags_um & 2) == 0) {
    if (DAT_003fa035 == 'l') goto LAB_00112450;
  }
  else if (((n_flags_um & 2) == 2) && (DAT_003fa035 == '9')) goto LAB_00112450;
  ram_c_um = ram_c_um + '\x01';
  B_reaci_um = B_reaci_um | 0x40;
  DAT_003fa02e = 0x66;
LAB_00112450:
  if ((DAT_001ce39a < tmot) || (DAT_001ce399 < tans)) {
    if ((n_flags_um & 1) == 0) {
      if (nsof_c_um < DAT_001ce396) {
        nsof_c_um = nsof_c_um + 1;
        nsof_c_ur = ~nsof_c_um;
      }
      else {
        n_flags_um = n_flags_um | 1;
        DAT_003fa034 = '9';
      }
    }
    else {
      nsof_c_um = 0;
      nsof_c_ur = 0xff;
    }
  }
  else {
    nsof_c_um = 0;
    nsof_c_ur = 0xff;
    if ((n_flags_um & 1) == 0) {
      n_flags_um = n_flags_um | 2;
      DAT_003fa035 = '9';
      B_mzns_um = 1;
    }
  }
  if (((n_flags_um & 4) == 4) && ((n_flags_um & 1) == 0)) {
    if (_nsc_c_um < _DAT_001ce39c) {
      _nsc_c_um = _nsc_c_um + 1;
      _nsc_c_ur = ~_nsc_c_um;
    }
    else {
      n_flags_um = n_flags_um | 1;
      DAT_003fa034 = '9';
    }
  }
  if ((((n_flags_um & 4) == 0) && ((n_flags_um & 1) == 0)) && (DAT_001ce398 < nmot_um)) {
    n_flags_um = n_flags_um | 4;
    DAT_003fa036 = '9';
  }
  if (nmot_um < DAT_001ce397) {
    DAT_003fa036 = 'l';
    n_flags_um = n_flags_um & 0xfa;
    DAT_003fa034 = 'l';
    nsof_c_um = 0;
    nsof_c_ur = 0xff;
    _nsc_c_um = 0;
    _nsc_c_ur = 0xffff;
  }
  if ((n_flags_um & 1) == 1) {
    n_flags_um = n_flags_um & 0xfd;
    DAT_003fa035 = 'l';
    B_mzns_um = 0;
  }
  func_0xff2211ac(_DAT_003fa0d8);
  return;
}

