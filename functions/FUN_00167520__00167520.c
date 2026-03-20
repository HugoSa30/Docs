/*
 * Program: n42.bin
 * Function: FUN_00167520
 * Entry: 00167520
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00167520(void)

{
  word wVar1;
  word wVar2;
  ushort local_20;
  ushort local_1c [2];
  ushort local_18 [2];
  ushort *local_14;
  
  local_20 = _sfpswe;
  if ((B_cdswe & B_cdhsh) == 0) {
    local_20 = _sfpswe & 0xd0fc | 0x2002;
  }
  else {
    if (((vrad_rh == 0x1fff) || (vrad_lh == 0x1fff)) && (B_dsc1cok != '\0')) {
      DAT_003fab28 = DAT_003fab28 & 0xfe | 1;
    }
    else {
      DAT_003fab28 = DAT_003fab28 & 0xfe;
    }
    wVar1 = vrad_lv;
    if (vrad_lv < vrad_rv) {
      wVar1 = vrad_rv;
    }
    wVar2 = vrad_lh;
    if (vrad_lh < vrad_rh) {
      wVar2 = vrad_rh;
    }
    if (wVar2 < wVar1) {
      wVar2 = wVar1;
    }
    if (((_DAT_001c1cc2 < wVar2) && ((DAT_003fab28 & 1) == 0)) && (B_dsc1cok != '\0')) {
      DAT_003fab28 = DAT_003fab28 & 0xfd | 2;
    }
    else {
      DAT_003fab28 = DAT_003fab28 & 0xfd;
    }
    if (((DAT_003fab28 & 1) == 0) && ((DAT_003fab28 >> 1 & 1) == 0)) {
      DAT_003fab25 = DAT_001c1cc0;
      if (DAT_003fab24 == '\0') {
        local_20 = _sfpswe & 0xd0fc | 0x2002;
      }
      else {
        DAT_003fab24 = DAT_003fab24 + -1;
      }
    }
    else {
      DAT_003fab24 = DAT_001c1cc0;
      if (DAT_003fab25 == '\0') {
        if ((DAT_003fab28 & 1) == 0) {
          if ((DAT_003fab28 >> 1 & 1) != 0) {
            local_20 = _sfpswe & 0xf0fe | 0x101;
          }
        }
        else {
          local_20 = _sfpswe & 0xf0fe | 0x401;
        }
        local_20 = local_20 & 0xdffd | 0x2002;
      }
      else {
        DAT_003fab25 = DAT_003fab25 + -1;
      }
    }
  }
  local_1c[0] = local_20;
  local_14 = local_1c;
  local_18[0] = local_20;
  func_0xff222958(0xa9,local_18);
  return;
}

