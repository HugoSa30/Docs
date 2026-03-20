/*
 * Program: n42.bin
 * Function: FUN_00111868
 * Entry: 00111868
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00111868(void)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  if ((raster_um & 3) == 2) {
    func_0xff221184(0x2000);
    bVar1 = mz_um;
    if (((mzf_ur != (byte)~mzf_um) || (mzf_l_ur != (byte)~mzf_l_um)) ||
       (mzf_p_ur != (byte)~mzf_p_um)) {
      ram_c_um = ram_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
    _DAT_003f98aa = 0;
    if (DAT_001ce2b6 != 0) {
      do {
        if ((&UNK_003f9944)[DAT_003f98ab] != (undefined)~(&UNK_003f982c)[DAT_003f98ab]) {
          ram_c_um = ram_c_um + '\x01';
          B_reaci_um = B_reaci_um | 0x40;
          DAT_003fa02e = 0x66;
        }
        _DAT_003f98aa = _DAT_003f98aa + 1;
      } while (DAT_003f98ab < DAT_001ce2b6);
    }
    if (mz_um < mzf_um) {
      if ((int)(uint)mzf_p_um < (int)(DAT_001ce2b6 - 1)) {
        mzf_p_um = mzf_p_um + 1;
        mzf_p_ur = ~mzf_p_um;
      }
      else {
        mzf_p_um = 0;
        mzf_p_ur = 0xff;
      }
      uVar2 = (uint)mzf_p_um;
      _DAT_003f98b6 =
           (ushort)mzf_l_um + (ushort)mzf_um * 0x100 +
           ((ushort)(byte)(&UNK_003f982c)[uVar2] - (ushort)mzf_um) * (ushort)DAT_001ce2b5;
      (&UNK_003f982c)[uVar2] = mz_um;
      (&UNK_003f9944)[uVar2] = ~bVar1;
    }
    else {
      _DAT_003f98b6 = (ushort)mz_um << 8;
      _DAT_003f98b8 = 0;
      if (DAT_001ce2b6 != 0) {
        bVar3 = ~mz_um;
        do {
          (&UNK_003f982c)[DAT_003f98b9] = bVar1;
          (&UNK_003f9944)[DAT_003f98b9] = bVar3;
          _DAT_003f98b8 = _DAT_003f98b8 + 1;
        } while (DAT_003f98b9 < DAT_001ce2b6);
      }
    }
    mzf_um = DAT_003f98b6;
    mzf_l_um = DAT_003f98b7;
    mzf_ur = ~DAT_003f98b6;
    mzf_l_ur = ~DAT_003f98b7;
    func_0xff2211ac(_DAT_003fa0d8);
  }
  return;
}

