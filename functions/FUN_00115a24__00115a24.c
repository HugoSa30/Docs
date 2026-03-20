/*
 * Program: n42.bin
 * Function: FUN_00115a24
 * Entry: 00115a24
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00115a24(void)

{
  int iVar1;
  
  func_0xff221184(0x800000);
  _5();
  if (_tdifs1_ur != ~_tdifs1_um) {
    ram_c_um = ram_c_um + '\x01';
    B_reaci_um = B_reaci_um | 0x40;
    DAT_003fa02e = 0x66;
  }
  _6();
  if (((((tpust_c_ur != (byte)~tpust_c_um) || (tpu_c_ur != (byte)~tpu_c_um)) ||
       (tpuca_c_ur != (byte)~tpuca_c_um)) ||
      ((tpucr_c_ur != (byte)~tpucr_c_um || (tpura_c_ur != (byte)~tpura_c_um)))) ||
     ((c720alt_ur != (byte)~c720alt_um || (_tc72alt_ur != ~_tc72alt_um)))) {
    ram_c_um = ram_c_um + '\x01';
    B_reaci_um = B_reaci_um | 0x40;
    DAT_003fa02e = 0x66;
  }
  if (synstate < 2) {
    tpust_c_um = 0;
    tpust_c_ur = 0xff;
  }
  else if (tpust_c_um < DAT_001ce7ab) {
    tpust_c_um = tpust_c_um + 1;
    tpust_c_ur = ~tpust_c_um;
    _5();
    _tdifs1_um = 0;
    _tdifs1_ur = 0xffffffff;
    zsytp1_um = '<';
    zsytp2_um = -0x3d;
    _6();
  }
  else {
    _5();
    DAT_003f98ad = FUN_00110d38(1);
    _DAT_003f98d0 = func_0xff2615ac();
    _6();
    if (tpuca_c_um < DAT_001ce7a7) {
      tpuca_c_um = tpuca_c_um + 1;
      tpuca_c_ur = ~tpuca_c_um;
    }
    else {
      tpuca_c_um = 0;
      tpuca_c_ur = 0xff;
      if (tpu_c_um < DAT_001ce7ac) {
        if (((int)(uint)_DAT_001ce7ae < (int)_tdifs1_um) ||
           ((int)_tdifs1_um < (int)-(uint)_DAT_001ce7ae)) {
          tpu_c_um = tpu_c_um + 1;
          tpu_c_ur = ~tpu_c_um;
          if (DAT_001ce7ac <= tpu_c_um) {
            ei_tpu_um = 1;
            e_tpu_um = 1;
          }
        }
        else if ((zsytp1_um == '<') || (zsytp2_um == -0x3d)) {
          _DAT_003f98d4 = (uint)c720alt_um;
          if (DAT_003f98ad < _DAT_003f98d4) {
            _DAT_003f98d4 = (DAT_003f98ad - _DAT_003f98d4) + 0x78;
          }
          else {
            _DAT_003f98d4 = DAT_003f98ad - _DAT_003f98d4;
          }
          _DAT_003f98d4 = (_DAT_003f98d4 * 0xf424) / (_DAT_003f98d0 - _tc72alt_um);
          if (0xff < _DAT_003f98d4) {
            _DAT_003f98d4 = 0xff;
          }
          nz_um = DAT_003f98d7;
          if (_DAT_003f98d4 < DAT_001ce7a6) {
            tpu_c_um = 0;
            tpu_c_ur = 0xff;
          }
          else {
            tpu_c_um = tpu_c_um + 1;
            tpu_c_ur = ~tpu_c_um;
            if (DAT_001ce7ac <= tpu_c_um) {
              ei_tpu_um = 1;
              e_tpu_um = 1;
            }
          }
        }
        else {
          tpu_c_um = 0;
          tpu_c_ur = 0xff;
        }
      }
      else {
        FUN_00110cc4(0x12d);
        FUN_00110efc(0x12d);
      }
      _5();
      _tdifs1_um = 0;
      _tdifs1_ur = 0xffffffff;
      zsytp1_um = '<';
      zsytp2_um = -0x3d;
      _6();
    }
    c720alt_um = DAT_003f98ad;
    c720alt_ur = ~DAT_003f98ad;
    _tc72alt_um = _DAT_003f98d0;
    _tc72alt_ur = ~_DAT_003f98d0;
  }
  if (tpura_c_um < DAT_001ce7a9) {
    tpura_c_um = tpura_c_um + 1;
    tpura_c_ur = ~tpura_c_um;
  }
  else {
    tpura_c_um = 0;
    tpura_c_ur = 0xff;
    iVar1 = (*(code *)&SUB_00faf470)();
    if (iVar1 == 0) {
      tpucr_c_um = 0;
      tpucr_c_ur = 0xff;
    }
    else if (tpucr_c_um < DAT_001ce7a8) {
      tpucr_c_um = tpucr_c_um + 1;
      tpucr_c_ur = ~tpucr_c_um;
    }
    else {
      e_mem_um = 1;
      mem_ur = 0x66;
      FUN_00110cc4(0x12d);
      FUN_00110efc(0x12d);
    }
  }
  func_0xff2211ac(_DAT_003fa0d8);
  return;
}

