/*
 * Program: n42.bin
 * Function: FUN_0015c604
 * Entry: 0015c604
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015c604(void)

{
  ushort uVar1;
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
  
  uVar1 = _B_ftdvet;
  local_40 = _B_mxdk;
  local_3c = _B_sidk1p;
  local_38 = _B_sidk2p;
  local_34 = _B_ftdvet;
  if (B_stend == '\0') {
    DAT_003faad3 = TPNSE;
  }
  else if (DAT_003faad3 != '\0') {
    DAT_003faad3 = DAT_003faad3 + -1;
  }
  if ((B_dkp1e == '\0') && (B_dkp2e == '\0')) {
    if (DAT_003faad3 == '\0') {
      local_40 = _B_mxdk & 0xf0fe;
      goto LAB_0015c6ec;
    }
  }
  else {
    local_40 = _B_mxdk & 0xf0fe | 0x801;
LAB_0015c6ec:
    local_40 = local_40 & 0xdffd | 0x2002;
  }
  if (B_dkp1e == '\0') {
    if (DAT_003faad3 == '\0') {
      local_3c = _B_sidk1p & 0xf0fe;
      goto LAB_0015c804;
    }
  }
  else if (B_dkp1mx == '\0') {
    if (B_dkp1mn == '\0') {
      if (B_dkp1np != '\0') {
        local_3c = _B_sidk1p & 0xd0fc | 0x2803;
      }
    }
    else {
      local_3c = _B_sidk1p & 0xd0fc | 0x2203;
    }
  }
  else {
    local_3c = _B_sidk1p & 0xf0fe | 0x101;
LAB_0015c804:
    local_3c = local_3c & 0xdffd | 0x2002;
  }
  if (B_dkp2e == '\0') {
    if (DAT_003faad3 == '\0') {
      local_38 = _B_sidk2p & 0xf0fe;
      goto LAB_0015c91c;
    }
  }
  else if (B_dkp2np == '\0') {
    if (B_dkp2mn == '\0') {
      if (B_dkp2mx != '\0') {
        local_38 = _B_sidk2p & 0xd0fc | 0x2103;
      }
    }
    else {
      local_38 = _B_sidk2p & 0xd0fc | 0x2203;
    }
  }
  else {
    local_38 = _B_sidk2p & 0xf0fe | 0x801;
LAB_0015c91c:
    local_38 = local_38 & 0xdffd | 0x2002;
  }
  local_30[0] = local_40;
  local_2c[0] = local_40;
  local_28 = local_30;
  func_0xff222958(0x13,local_2c);
  local_30[0] = local_3c;
  local_24[0] = local_3c;
  local_20 = local_30;
  func_0xff222958(0x14,local_24);
  local_30[0] = local_38;
  local_1c[0] = local_38;
  local_18 = local_30;
  func_0xff222958(0x15,local_1c);
  if (((((DAT_003faad5 & 1) == 0) || ((BGDVEintbits & 4) == 0)) || ((BGDVEintbits & 2) == 0)) ||
     ((B_lrnrdy == '\0' || (B_nlpnew != '\0')))) {
    if ((B_pwf == '\0') && (((BGDVEintbits & 2) == 0 && ((BGDVEintbits & 4) == 0)))) {
      DAT_003faad5 = DAT_003faad5 | 1;
      if (B_lrnrdy == '\0') goto LAB_0015cae4;
      local_34 = uVar1 & 0xd0fc | 0x2803;
    }
  }
  else {
    local_34 = uVar1 & 0xd0fc | 0x2002;
    DAT_003faad5 = DAT_003faad5 & 0xfe;
  }
  if (B_lrnrdy != '\0') {
    local_34 = local_34 & 0xdffd | 0x2002;
  }
LAB_0015cae4:
  local_30[0] = local_34;
  local_10 = local_30;
  local_14[0] = local_34;
  func_0xff222958(0x25,local_14);
  if (B_dkaden == '\0') {
    if (DAT_003faad2 != '\0') {
      DAT_003faad2 = DAT_003faad2 + -1;
    }
  }
  else {
    DAT_003faad2 = '\x05';
  }
  return;
}

