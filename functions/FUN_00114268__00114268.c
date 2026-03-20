/*
 * Program: n42.bin
 * Function: FUN_00114268
 * Entry: 00114268
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00114268(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  
  if ((raster_um & 3) != 0) {
    return;
  }
  func_0xff221184(0x10);
  if (((spsn_ur != (byte)~spsn_um) || (spsc_c_ur != (byte)~spsc_c_um)) ||
     (_spnst08_ur != ~_spnst08_um)) {
    ram_c_um = ram_c_um + '\x01';
    B_reaci_um = B_reaci_um | 0x40;
    DAT_003fa02e = 0x66;
  }
  if ((B_msthw_um & 0x40) == 0) {
    if (DAT_003fa044 != -0x54) {
LAB_0011437c:
      ram_c_um = ram_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
  }
  else if (((B_msthw_um & 0x40) != 0x40) || (DAT_003fa044 != 'e')) goto LAB_0011437c;
  uVar3 = FUN_00110eac(4);
  uVar3 = (uVar3 & 0x3ff) >> 2;
  DAT_003f98b1 = (byte)uVar3;
  sp1s_um = DAT_003f98b1;
  _DAT_003f98b0 = (ushort)uVar3;
  uVar3 = FUN_00110eac(5);
  uVar3 = (uVar3 & 0x3ff) >> 1;
  uVar1 = (ushort)uVar3;
  if (uVar1 < 0x100) {
    DAT_003f98b3 = (byte)uVar3;
    sp2s_um = DAT_003f98b3;
  }
  else {
    sp2s_um = 0xff;
  }
  _DAT_003f98b2 = uVar1;
  if ((B_reaci_um & 2) != 0) {
    spsn_um = DAT_001ce6c2;
    spsn_ur = ~DAT_001ce6c2;
    goto LAB_001146dc;
  }
  if (_DAT_003f98b0 < DAT_001ce6c2) {
    _DAT_003f98b4 = (ushort)DAT_001ce6c2;
  }
  else {
    _DAT_003f98b4 = _DAT_003f98b0;
  }
  _DAT_003f98b6 = uVar1;
  if (uVar3 < DAT_001ce6c2) {
    _DAT_003f98b6 = (ushort)DAT_001ce6c2;
  }
  bVar2 = DAT_001ce6c0;
  if ((DAT_001ce6cd < _DAT_003f98b4) && (DAT_001ce6cd < _DAT_003f98b6)) {
    bVar2 = DAT_001ce6c1;
  }
  _DAT_003f98ac = (ushort)bVar2;
  if (_DAT_003f98b6 < _DAT_003f98b4) {
    _DAT_003f98ae = _DAT_003f98b4 - _DAT_003f98b6;
  }
  else {
    _DAT_003f98ae = _DAT_003f98b6 - _DAT_003f98b4;
  }
  if (_DAT_003f98ac < _DAT_003f98ae) {
    if (B_pwgnotfr == '\0') {
      if (spsc_c_um < DAT_001ce6c3) {
        spsc_c_um = spsc_c_um + 1;
        spsc_c_ur = ~spsc_c_um;
      }
      else {
        ei_spsc_um = 1;
        B_i_ska_um = 1;
        B_reaci_um = B_reaci_um | 1;
        DAT_003fa028 = 0x66;
        B_pwgnotum = 1;
        B_msthw_um = B_msthw_um | 0x40;
        DAT_003fa044 = 'e';
        spsn_um = DAT_001ce6c2;
        spsn_ur = ~DAT_001ce6c2;
      }
      goto LAB_001145f0;
    }
  }
  else {
    spsc_c_um = 0;
    spsn_um = DAT_003f98b1;
    spsc_c_ur = 0xff;
    spsn_ur = ~DAT_003f98b1;
LAB_001145f0:
    if (B_pwgnotfr == '\0') goto LAB_001146dc;
  }
  if (((B_brems_um & 1) == 0) && (B_spsmin == '\0')) {
    if (B_sp1s == '\0') {
      if ((B_sp2s == '\0') && (_DAT_003f98b0 <= uVar1)) {
        spsn_um = DAT_003f98b1;
        spsn_ur = ~DAT_003f98b1;
      }
      else {
        if (0xff < uVar1) {
          _DAT_003f98b2 = 0xff;
        }
        spsn_um = DAT_003f98b3;
        spsn_ur = ~DAT_003f98b3;
      }
    }
    else {
      spsn_um = DAT_003f98b1;
      spsn_ur = ~DAT_003f98b1;
    }
  }
  else {
    spsn_um = DAT_001ce6c2;
    spsn_ur = ~DAT_001ce6c2;
  }
LAB_001146dc:
  if ((B_msthw_um & 0x40) != 0) {
    spsn_um = DAT_001ce6c2;
    spsn_ur = ~DAT_001ce6c2;
  }
  _spnst08_um = FUN_00110958(&DAT_001ce6c4,spsn_um);
  _spnst08_ur = ~_spnst08_um;
  func_0xff2211ac(_DAT_003fa0d8);
  return;
}

