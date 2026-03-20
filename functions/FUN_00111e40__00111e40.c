/*
 * Program: n42.bin
 * Function: FUN_00111e40
 * Entry: 00111e40
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00111e40(void)

{
  if ((raster_um & 3) == 0) {
    func_0xff221184(8);
    if (((nmot_ur != (byte)~nmot_um) || (nc_c_ur != (byte)~nc_c_um)) || (_nmst08_ur != ~_nmst08_um))
    {
      ram_c_um = ram_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
    if ((zsync_ur == -0x5b) && (zsync_um == 'Z')) {
      nc_c_um = 0;
      nmot_um = nmot;
      nc_c_ur = 0xff;
      nmot_ur = ~nmot;
    }
    else {
      _5();
      _DAT_003f98d0 = _tsm_um;
      _DAT_003f98d4 = _tsm_alt_um;
      _6();
      _DAT_003f98d0 = _DAT_003f98d0 - _DAT_003f98d4;
      if (_DAT_003f98d0 < _DAT_001ce394) {
        DAT_003f98af = DAT_001ce391;
      }
      else {
        _DAT_003f98d4 = (7500000 / _DAT_003f98d0) / (uint)DAT_001ce6d0;
        if (_DAT_003f98d4 < 0xff) {
          DAT_003f98af = DAT_003f98d7;
        }
        else {
          DAT_003f98af = DAT_001ce391;
        }
      }
      nseg_um = DAT_003f98af;
      if (nmot < DAT_003f98af) {
        DAT_003f98b1 = DAT_003f98af - nmot;
        DAT_003f98b3 = DAT_003f98af;
      }
      else {
        DAT_003f98b1 = nmot - DAT_003f98af;
        DAT_003f98b3 = nmot;
      }
      if (DAT_001ce392 < DAT_003f98af) {
        DAT_003f98b5 = DAT_001ce385;
      }
      else {
        DAT_003f98b5 = DAT_001ce386;
      }
      _tseg_um = _DAT_003f98d0;
      if (DAT_003f98b5 < DAT_003f98b1) {
        if (DAT_001ce387 < DAT_003f98af) {
          if (nc_c_um < DAT_001ce384) {
            nc_c_um = nc_c_um + 1;
            nc_c_ur = ~nc_c_um;
          }
          else {
            ei_nc_um = 1;
            B_i_ska_um = 1;
            B_reaci_um = B_reaci_um | 1;
            DAT_003fa028 = 0x66;
          }
          nmot_um = DAT_003f98b3;
          nmot_ur = ~DAT_003f98b3;
        }
        else {
          nc_c_um = 0;
          nc_c_ur = 0xff;
          nmot_um = DAT_003f98b3;
          nmot_ur = ~DAT_003f98b3;
        }
      }
      else {
        nc_c_um = 0;
        nc_c_ur = 0xff;
        nmot_um = nmot;
        nmot_ur = ~nmot;
      }
    }
    if ((raster_um & 7) == 4) {
      zsync_um = 'Z';
      zsync_ur = -0x5b;
    }
    _nmst08_um = FUN_00110958(&DAT_001ce388,nmot_um);
    _nmst08_ur = ~_nmst08_um;
    func_0xff2211ac(_DAT_003fa0d8);
  }
  return;
}

