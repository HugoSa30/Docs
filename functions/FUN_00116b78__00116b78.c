/*
 * Program: n42.bin
 * Function: FUN_00116b78
 * Entry: 00116b78
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00116b78(void)

{
  int iVar1;
  uint uVar2;
  
  if ((raster_um & 3) == 3) {
    uVar2 = (uint)aktqu_uc;
    r_flags_uc = (&DAT_001c0de8)[uVar2];
    nmot_uc = (&DAT_001c0dd8)[uVar2];
    spsn_uc = (&DAT_001c0df8)[uVar2];
    evzaust_bt = (&DAT_001c0dc8)[uVar2];
    iVar1 = uVar2 * 2;
    _DAT_003f98d4 =
         (uint)*(ushort *)(&DAT_001c0e4c + iVar1) * 0x10000 +
         (uint)*(ushort *)(&REAC_FUEL_DATL_UC + iVar1);
    fuel_co_uc = (uint)*(ushort *)(&DAT_001c0e0c + iVar1) * 0x10000 +
                 (uint)*(ushort *)(&DAT_001c0e2c + iVar1);
    reac_c1_uc = (&DAT_001c0da8)[uVar2];
    reac_c2_uc = (&DAT_001c0db8)[uVar2];
    fuel_co_bt = _DAT_003f98d4;
    if ((r_flags_uc & 8) == 0) {
      DAT_003f98bc = DAT_001c0e0a;
    }
    else {
      DAT_003f98bc = FUN_00110aa8(&DAT_001c0d94);
    }
    nska_uc = DAT_003f98bc;
    if ((r_flags_uc & 1) == 0) {
      if ((r_flags_uc & 0xe) != 0) {
        if ((DAT_003f98bc < nmot_uc) && ((evzaust_bt != 0xff || (_DAT_003f98d4 != fuel_co_uc)))) {
          if (reac_c1_uc < DAT_001c0e08) {
            reac_c1_uc = reac_c1_uc + 1;
          }
          else {
            B_i_ska_uc = '\x01';
            r_flags_uc = r_flags_uc | 1;
          }
        }
        else {
          reac_c1_uc = 0;
        }
      }
    }
    else if ((DAT_003f98bc < nmot_uc) && ((evzaust_bt != 0xff || (_DAT_003f98d4 != fuel_co_uc)))) {
      if (reac_c2_uc < DAT_001c0e09) {
        reac_c2_uc = reac_c2_uc + 1;
      }
      else {
        r_flags_uc = r_flags_uc | 0x10;
      }
    }
    else {
      reac_c2_uc = 0;
    }
    fuel_co_uc = _DAT_003f98d4;
    abreac_uc = (ushort)reac_c1_uc | (ushort)reac_c2_uc << 6;
    if (B_i_ska_uc != '\0') {
      abreac_uc = abreac_uc | 0x3000;
    }
    if ((r_flags_uc & 0x10) != 0) {
      abreac_uc = abreac_uc | 0xc000;
    }
    ei_reac_uc = 0;
    B_i_ska_uc = '\0';
  }
  return;
}

