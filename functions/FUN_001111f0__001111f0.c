/*
 * Program: n42.bin
 * Function: FUN_001111f0
 * Entry: 001111f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001111f0(void)

{
  if ((raster_um & 3) == 0) {
    func_0xff221184(0x80);
    if (((DAT_003f9939 != (byte)~mmsr_um) || (DAT_003f993a != (byte)~DAT_003f9822)) ||
       (DAT_003f9938 != (byte)~B_npszl_um)) {
      ram_c_um = ram_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
    if (DAT_003f9822 < DAT_001ce2b3) {
      DAT_003f98ad = *_DAT_003fae80;
      DAT_003f98ac = _DAT_003fae80[6];
      DAT_003f98af = _DAT_003fae80[3];
      DAT_003f98ae = _DAT_003fae80[4];
      DAT_003f98b3 = _DAT_003fae80[7] & 0xf;
      _DAT_003f98b0 = 0;
      if (((DAT_003f98ad & 1) == 1) && ((DAT_003f98ad & 2) == 2)) {
        _DAT_003f98b0 = 0xc3;
      }
      else if ((DAT_003f98ad & 1) == 1) {
        if ((DAT_001ce2b2 & 1) == 1) {
          DAT_003f98b2 = 0;
        }
        else {
          DAT_003f98b2 = ~(DAT_003f98af + DAT_003f98b3);
        }
        if ((DAT_003f98af == 0xff) || (DAT_003f98ae != DAT_003f98b2)) {
          _DAT_003f98b0 = 0xc3;
        }
      }
      else if ((DAT_003f98ad & 2) == 2) {
        DAT_003f98b2 = DAT_003f98ae;
        if ((DAT_001ce2b2 & 1) != 1) {
          DAT_003f98b2 = DAT_003f98ae - DAT_003f98b3;
        }
        if ((DAT_003f98ae == 0) || (DAT_003f98af != (byte)~DAT_003f98b2)) {
          _DAT_003f98b0 = 0xc3;
        }
      }
      else if (((DAT_003f98ac != 0xff) || (DAT_003f98af != 0xff)) || (DAT_003f98ae != 0)) {
        _DAT_003f98b0 = 0xc3;
      }
      DAT_003f98b5 = DAT_001ce2b1 & DAT_003f98b3 - B_npszl_um;
      DAT_003f9938 = ~DAT_003f98b3;
      B_npszl_um = DAT_003f98b3;
      if (_DAT_003f98b0 == 0) {
        DAT_003f9822 = 0;
        DAT_003f993a = 0xff;
        if ((DAT_003f98b5 == 0) && ((DAT_001ce2b2 & 1) == 0)) {
          B_nomsr_um = 1;
          mmsr_um = 0;
          DAT_003f9939 = 0xff;
        }
        else {
          B_nomsr_um = 0;
          if (((DAT_003f98ad & 1) == 1) ||
             ((((DAT_003f98ad & 2) != 2 || (DAT_003f98ae == 0)) ||
              (DAT_003f98af != (byte)~DAT_003f98b2)))) {
            mmsr_um = 0;
            DAT_003f9939 = 0xff;
          }
          else {
            DAT_003f9939 = ~DAT_003f98ae;
            mmsr_um = DAT_003f98ae;
          }
        }
      }
      else {
        DAT_003f9822 = DAT_003f9822 + 1;
        DAT_003f993a = ~DAT_003f9822;
        B_nomsr_um = 1;
        mmsr_um = 0;
        DAT_003f9939 = 0xff;
      }
    }
    else {
      DAT_003f981f = 1;
      B_nomsr_um = 1;
      mmsr_um = 0;
      DAT_003f9939 = 0xff;
    }
    func_0xff2211ac(_DAT_003fa0d8);
  }
  return;
}

