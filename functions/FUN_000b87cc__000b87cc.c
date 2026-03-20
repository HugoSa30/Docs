/*
 * Program: n42.bin
 * Function: FUN_000b87cc
 * Entry: 000b87cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b87cc(void)

{
  short sVar1;
  ushort uVar2;
  
  if (B_mdzgstp == 0) {
    if (DAT_001c183b == '\x01') {
      DAT_005b8c98 = B_st;
    }
    else if (DAT_001c183f < nmot) {
      DAT_005b8c98 = '\0';
    }
    if (DAT_005b8c98 == '\0') {
      FUN_000b1cc0(&DAT_003fa990);
    }
    else {
      DAT_003fa990 = DAT_001c183a;
    }
    B_stpon = DAT_003fa990 != '\0';
    if ((DAT_005b8c98 != '\0') || ((bool)B_stpon)) {
      uVar2 = (ushort)DAT_001c1839;
    }
    else {
      uVar2 = (ushort)DAT_001c1838 << 2;
    }
    DAT_005b9782 = uVar2 + 1;
    DAT_005b8c86 = DAT_005b8c9d;
    if ((((B_swe == 0) && (B_tsbready != 0)) && (B_readap == 0)) &&
       ((B_fbm == '\0' && (DAT_005b8c98 == '\0')))) {
      DAT_005b8c9f = false;
    }
    else {
      DAT_005b8c9f = true;
    }
    if (((bool)DAT_005b8c9f) || (DAT_005b8c9e != '\0')) {
      DAT_005b8c87 = true;
    }
    else {
      DAT_005b8c87 = false;
    }
    if (((DAT_005b8c9d != '\0') || ((bool)DAT_005b8c87)) || (DAT_005b8cab != '\0')) {
      DAT_005b8cac = '\x01';
    }
    else {
      DAT_005b8cac = '\0';
    }
    sVar1 = DAT_005b9782;
    if (DAT_005b8cac == '\0') {
      FUN_000b1ce0();
      sVar1 = _DAT_003fa98a;
    }
    _DAT_003fa98a = sVar1;
    DAT_005b8c8d = _DAT_003fa98a != 0;
    if ((bool)DAT_005b8c8d) {
      DAT_005b977e = DAT_005b977e | 1;
    }
    DAT_005b977e = DAT_005b977e * 2;
    B_lustop = (byte)((int)(uint)DAT_005b977e >> (tskdelay & 0x3f)) & 1;
    if (((DAT_005b8c86 == '\0') && (DAT_005b8c87 == '\0')) &&
       ((B_mdarv == 0 && ((B_mderk == 0 && (DAT_005b8ca8 == '\0')))))) {
      DAT_005b8c8b = 0;
    }
    else {
      DAT_005b8c8b = 1;
    }
    if ((DAT_005b8c87 == '\0') && (DAT_005b8ca1 == '\0')) {
      B_fofstp = 0;
    }
    else {
      B_fofstp = B_fofstp;
    }
    if (((B_phsnl == '\0') && (B_range == 0)) && (DAT_005b8cad == '\0')) {
      DAT_005b8cae = '\0';
    }
    else {
      DAT_005b8cae = '\x01';
    }
    DAT_005b8ca3 = B_fofstp;
    DAT_005b8ca9 = DAT_005b8c8b;
    if (DAT_005b8cae == '\0') {
      FUN_000b1ce0(&DAT_003fa984);
    }
    else {
      _DAT_003fa984 = DAT_005b9782;
    }
    DAT_005b8c96 = _DAT_003fa984 != 0;
    if ((bool)DAT_005b8c96) {
      DAT_005b9780 = DAT_005b9780 | 1;
    }
    DAT_005b9780 = DAT_005b9780 * 2;
    if (((B_lustop == 0) && (B_mdstop == 0)) &&
       (((int)(uint)DAT_005b9780 >> (tskdelay & 0x3f) & 1U) == 0)) {
      B_milstp = 0;
    }
    else {
      B_milstp = B_milstp;
    }
    B_fokstp = DAT_005b8ca5;
  }
  return;
}

