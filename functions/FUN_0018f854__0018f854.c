/*
 * Program: n42.bin
 * Function: FUN_0018f854
 * Entry: 0018f854
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018f854(void)

{
  ushort local_40;
  ushort local_3c;
  ushort local_38;
  ushort local_34;
  ushort local_30 [2];
  ushort local_2c [2];
  ushort *local_28;
  ushort local_24 [2];
  ushort *local_20;
  ushort local_1c [2];
  ushort *local_18;
  ushort local_14 [2];
  ushort *local_10;
  
  local_40 = _Z_fpp;
  local_3c = _B_clfp1p;
  local_38 = _B_clfp2p;
  local_34 = _sfpbwf;
  if (B_stend == '\0') {
    DAT_003fae27 = TPNSE1;
  }
  else if (DAT_003fae27 != '\0') {
    DAT_003fae27 = DAT_003fae27 + -1;
  }
  if (B_pwgnotfr == '\0') {
    if (DAT_003fae27 == '\0') {
      local_40 = _Z_fpp & 0xf0fe;
      goto LAB_0018f92c;
    }
  }
  else {
    local_40 = _Z_fpp & 0xf0fe | 0x801;
LAB_0018f92c:
    local_40 = local_40 & 0xdffd | 0x2002;
  }
  if ((B_pwgbwf & B_pwgbwf) ==
      ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf)) {
    if (DAT_003fae27 == '\0') {
      local_34 = _sfpbwf & 0xf0fe;
      goto LAB_0018f9ac;
    }
  }
  else {
    local_34 = _sfpbwf & 0xf0fe | 0x801;
LAB_0018f9ac:
    local_34 = local_34 & 0xdffd | 0x2002;
  }
  if ((B_pwgbwf & B_upw1mx) ==
      ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf)) {
    if ((B_pwgbwf & B_upw1mn) ==
        ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf)) {
      if ((B_pwgbwf & B_upw12e) ==
          ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf)) {
        if (DAT_003fae27 == '\0') {
          local_3c = _B_clfp1p & 0xf0fe;
          goto LAB_0018fab0;
        }
      }
      else {
        local_3c = _B_clfp1p & 0xd0fc | 0x2803;
      }
    }
    else {
      local_3c = _B_clfp1p & 0xd0fc | 0x2203;
    }
  }
  else {
    local_3c = _B_clfp1p & 0xf0fe | 0x101;
LAB_0018fab0:
    local_3c = local_3c & 0xdffd | 0x2002;
  }
  if ((B_pwgbwf & B_upw2mx) ==
      ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf)) {
    if ((B_pwgbwf & B_upw2mn) !=
        ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf)) {
      local_38 = _B_clfp2p & 0xd0fc | 0x2203;
      goto LAB_0018fb88;
    }
    if (DAT_003fae27 != '\0') goto LAB_0018fb88;
    local_38 = _B_clfp2p & 0xf0fe;
  }
  else {
    local_38 = _B_clfp2p & 0xf0fe | 0x101;
  }
  local_38 = local_38 & 0xdffd | 0x2002;
LAB_0018fb88:
  local_30[0] = local_34;
  local_2c[0] = local_34;
  local_28 = local_30;
  func_0xff222958(8,local_2c);
  local_30[0] = local_40;
  local_24[0] = local_40;
  local_20 = local_30;
  func_0xff222958(0x55,local_24);
  local_30[0] = local_3c;
  local_1c[0] = local_3c;
  local_18 = local_30;
  func_0xff222958(0x53,local_1c);
  local_30[0] = local_38;
  local_14[0] = local_38;
  local_10 = local_30;
  func_0xff222958(0x54,local_14);
  return;
}

