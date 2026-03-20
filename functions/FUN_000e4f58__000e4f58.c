/*
 * Program: n42.bin
 * Function: FUN_000e4f58
 * Entry: 000e4f58
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e4f58(void)

{
  dword dVar1;
  
  if ((raster_um & 3) != 3) {
    return;
  }
  func_0x00f97e9c();
  if (B_newqr_um == '\0') {
    if (newqr_ur == -0x67) goto LAB_000e4ff0;
  }
  else if (newqr_ur == 'f') goto LAB_000e4ff0;
  ram_c_um = ram_c_um + '\x01';
  B_reaci_um = B_reaci_um | 0x40;
  DAT_003fa02e = 0x66;
LAB_000e4ff0:
  func_0x00f97edc();
  if (B_newqr_um == '\0') {
    FUN_000b11ac(0x5b4e6433);
  }
  else {
    func_0x00f97e9c();
    dVar1 = newque_um;
    FUN_000b11ac(newque_um);
    apakres_um = _DAT_003fa0dc;
    aktqu_uc = (byte)dVar1 & 0xf;
    B_newqr_um = '\0';
    newqr_ur = -0x67;
    func_0x00f97edc();
    _DAT_003fa0dc = 0x10c37198;
  }
  modul_c_um = 0;
  return;
}

