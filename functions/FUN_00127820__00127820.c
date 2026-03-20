/*
 * Program: n42.bin
 * Function: FUN_00127820
 * Entry: 00127820
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00127820(void)

{
  ushort local_48;
  ushort local_44;
  ushort local_40;
  ushort local_3c [2];
  ushort local_38 [2];
  ushort *local_34;
  ushort local_30 [2];
  ushort *local_2c;
  ushort local_28 [2];
  ushort *local_24;
  ushort local_20 [2];
  ushort *local_1c;
  ushort local_18 [2];
  ushort *local_14;
  ushort local_10 [2];
  ushort *local_c;
  
  if (((B_timerr == '\0') && (B_recerr == '\0')) && (B_ptyerr == '\0')) {
    if ((_Z_dwa & 1) != 0) {
      local_48 = _Z_dwa & 0xf0fe;
      local_3c[0] = local_48;
      local_2c = local_3c;
      local_30[0] = local_48;
      func_0xff222958(0x3d,local_30);
    }
  }
  else if ((_Z_dwa & 1) == 0) {
    if (B_timerr == '\0') {
      if (B_recerr == '\0') {
        local_48 = _Z_dwa & 0xf0fe | 0x801;
      }
      else {
        local_48 = _Z_dwa & 0xf0fe | 0x201;
      }
    }
    else {
      local_48 = _Z_dwa & 0xf0fe | 0x401;
    }
    local_48 = local_48 & 0xdffd | 0x2002;
    local_3c[0] = local_48;
    local_34 = local_3c;
    local_38[0] = local_48;
    func_0xff222958(0x3d,local_38);
  }
  if (B_wcerr == '\0') {
    if (B_kwperr == '\0') {
      if ((_Z_wfs & 1) != 0) {
        local_44 = _Z_wfs & 0xf0fe;
        local_3c[0] = local_44;
        local_1c = local_3c;
        local_20[0] = local_44;
        func_0xff222958(0xc1,local_20);
      }
      goto LAB_00127a98;
    }
    local_44 = _Z_wfs & 0xf0fe | 0x401;
  }
  else {
    local_44 = _Z_wfs & 0xf0fe | 0x801;
  }
  local_44 = local_44 & 0xdffd | 0x2002;
  local_3c[0] = local_44;
  local_24 = local_3c;
  local_28[0] = local_44;
  func_0xff222958(0xc1,local_28);
LAB_00127a98:
  if (B_eeperr == '\0') {
    if (B_eep2err == '\0') {
      if (B_ramerr == '\0') {
        if ((_B_bkwca & 1) == 0) {
          return;
        }
        local_40 = _B_bkwca & 0xf0fe;
        local_3c[0] = local_40;
        local_c = local_3c;
        local_10[0] = local_40;
        func_0xff222958(0xc0,local_10);
        return;
      }
      local_40 = _B_bkwca & 0xf0fe | 0x201;
    }
    else {
      local_40 = _B_bkwca & 0xf0fe | 0x401;
    }
  }
  else {
    local_40 = _B_bkwca & 0xf0fe | 0x101;
  }
  local_40 = local_40 & 0xdffd | 0x2002;
  local_3c[0] = local_40;
  local_14 = local_3c;
  local_18[0] = local_40;
  func_0xff222958(0xc0,local_18);
                    /* WARNING: Read-only address (ram,0x003fdedc) is written */
                    /* WARNING: Read-only address (ram,0x003fdfe2) is written */
                    /* WARNING: Read-only address (ram,0x003fdfe4) is written */
  return;
}

