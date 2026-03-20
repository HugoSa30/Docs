/*
 * Program: n42.bin
 * Function: FUN_00114df8
 * Entry: 00114df8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00114df8(void)

{
  if ((raster_um & 3) == 1) {
    func_0xff221184(0x40000);
    if (_DAT_003fa0d0 != ~(uint)_DAT_003fa0cc) {
      wri_c_um = wri_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
    if (_DAT_003fa0c0 != ~_DAT_003fa0bc) {
      wri_c_um = wri_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
    if (_DAT_003fa0c8 != ~_DAT_003fa0c4) {
      wri_c_um = wri_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
    _DAT_003f98dc = _DAT_003fa0c4;
    _DAT_003f98e0 = _DAT_003fa0cc[1];
    if (_DAT_003fa0c4 + 1000 <= _DAT_003fa0cc[1]) {
      _DAT_003f98e0 = _DAT_003fa0c4 + 1000;
    }
    _DAT_003f98d4 = FUN_0011586c(_DAT_003fa0c4,_DAT_003f98e0);
    _DAT_003fa0bc = _DAT_003fa0bc + _DAT_003f98d4;
    _DAT_003fa0c0 = ~_DAT_003fa0bc;
    if (_DAT_003f98e0 < _DAT_003fa0cc[1]) {
      _DAT_003fa0c4 = _DAT_003f98e0;
    }
    else {
      *_DAT_003fa0d4 = (short)_DAT_003fa0bc;
      _DAT_003fa0d4[1] = (short)(_DAT_003fa0bc >> 0x10);
      if (_DAT_003fa0cc[2] != _DAT_003fa0bc) {
        romz_c_um = romz_c_um + '\x01';
        B_reaci_um = B_reaci_um | 0x80;
        DAT_003fa02f = 0x66;
      }
      _DAT_003fa0bc = 0;
      _DAT_003fa0c0 = 0xffffffff;
      if (*_DAT_003fa0cc == _DAT_00fe0000) {
        _DAT_003fa0cc = (uint *)&DAT_001ce7b0;
        _DAT_003fa0d0 = 0xffe3184f;
        _DAT_003fa0d4 = (undefined2 *)&UNK_003fd7d6;
      }
      else {
        _DAT_003fa0cc = (uint *)&DAT_00fe0000;
        _DAT_003fa0d0 = 0xff01ffff;
        _DAT_003fa0d4 = (undefined2 *)&UNK_003fd7d2;
      }
      _DAT_003fa0c4 = *_DAT_003fa0cc;
    }
    _DAT_003fa0c8 = ~_DAT_003fa0c4;
    func_0xff2211ac(_DAT_003fa0d8);
  }
  return;
}

