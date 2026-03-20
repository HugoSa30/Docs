/*
 * Program: n42.bin
 * Function: FUN_00116614
 * Entry: 00116614
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00116614(void)

{
  uint uVar1;
  
  if ((raster_um & 3) == 3) {
    uVar1 = (uint)aktqu_uc;
    r_flags_uc = (&DAT_001c0b78)[uVar1];
    mi_uc = (&DAT_001c0b48)[uVar1];
    mzo_uc = (&DAT_001c0b68)[uVar1];
    mzf_uc = (&DAT_001c0b58)[uVar1];
    mver_c_uc = (&DAT_001c0b38)[uVar1];
    _DAT_003f98ba = (ushort)mzf_uc + (ushort)mzo_uc;
    if (0xff < _DAT_003f98ba) {
      _DAT_003f98ba = 0xff;
    }
    mzfo_uc = DAT_003f98bb;
    if ((r_flags_uc & 0xf) == 0) {
      mdif_w_uc = (_DAT_003f98ba & 0xff) - (ushort)mi_uc;
      if (DAT_003f98bb < mi_uc) {
        if (mver_c_uc < DAT_001c0b88) {
          mver_c_uc = mver_c_uc + 1;
        }
        else {
          B_i_ska_uc = '\x01';
          r_flags_uc = r_flags_uc | 1;
        }
      }
      else {
        mver_c_uc = 0;
      }
    }
    abmver_uc = (_DAT_003f98ba & 0xff) - (ushort)mi_uc & 0x80ff | (ushort)mver_c_uc << 8;
    if (B_i_ska_uc != '\0') {
      abmver_uc = abmver_uc | 0x4000;
    }
    ei_mver_uc = 0;
    B_i_ska_uc = '\0';
  }
  return;
}

