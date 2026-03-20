/*
 * Program: n42.bin
 * Function: FUN_00114c5c
 * Entry: 00114c5c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00114c5c(void)

{
  int iVar1;
  
  if ((raster_um & 3) == 1) {
    func_0xff221184(0x20000);
    if (_DAT_003fa0b8 != ~_DAT_003fa0b4) {
      wri_c_um = wri_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
    iVar1 = FUN_00115784(&DAT_003fa0b4);
    if (iVar1 != 0) {
      wri_c_um = wri_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
    _DAT_003f98e0 = _DAT_001ce728;
    _DAT_003f98dc = _DAT_003fa0b4;
    if (_DAT_003fa0b4 + 0x20 <= _DAT_001ce728) {
      _DAT_003f98e0 = _DAT_003fa0b4 + 0x20;
    }
    _DAT_003f98dc = FUN_00115710(_DAT_003fa0b4,_DAT_003f98e0);
    if (_DAT_003f98dc != 0) {
      wri_c_um = wri_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
      _DAT_003f98dc = _DAT_003f98dc + 4;
      _DAT_003f98e0 = _DAT_003f98dc;
    }
    if (_DAT_001ce728 <= _DAT_003f98e0) {
      _DAT_003f98e0 = _DAT_001ce724;
    }
    _DAT_003fa0b4 = _DAT_003f98e0;
    _DAT_003fa0b8 = ~_DAT_003f98e0;
    func_0xff2211ac(_DAT_003fa0d8);
  }
  return;
}

