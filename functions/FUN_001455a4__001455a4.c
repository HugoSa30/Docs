/*
 * Program: n42.bin
 * Function: FUN_001455a4
 * Entry: 001455a4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001455a4(void)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort local_90;
  ushort local_8c;
  ushort local_88;
  ushort local_84;
  ushort local_80;
  ushort local_7c;
  ushort local_78;
  ushort local_74;
  ushort local_70;
  ushort local_6c;
  ushort local_68 [2];
  ushort local_64 [2];
  ushort *local_60;
  ushort local_5c [2];
  ushort *local_58;
  ushort local_54 [2];
  ushort *local_50;
  ushort local_4c [2];
  ushort *local_48;
  ushort local_44 [2];
  ushort *local_40;
  ushort local_3c [2];
  ushort *local_38;
  ushort local_34 [2];
  ushort *local_30;
  ushort local_2c [2];
  ushort *local_28;
  ushort local_24 [2];
  ushort *local_20;
  ushort local_1c [2];
  ushort *local_18;
  
  uVar3 = _B_ftdver;
  local_90 = _B_ftdvel;
  local_88 = _B_ftdvee;
  local_8c = _B_ftdver;
  local_84 = _B_ftdvef;
  local_7c = _B_ftdvev;
  local_78 = _B_ftdveu;
  local_70 = _B_bedveub;
  if (B_fprzab == '\0') {
    if (B_fprze != '\0') {
      local_84 = _B_ftdvef & 0xf0fe | 0x201;
      goto LAB_0014566c;
    }
  }
  else {
    local_84 = _B_ftdvef & 0xf0fe | 0x101;
LAB_0014566c:
    local_84 = local_84 & 0xdffd | 0x2002;
  }
  if ((B_fprrdy != '\0') && (2 < fprstep_c)) {
    uVar2 = local_84 & 0xdffd;
    local_84 = uVar2 | 0x2002;
    if ((B_fprzab == '\0') && (B_fprze == '\0')) {
      local_84 = CONCAT11(local_84._0_1_,(char)uVar2) & 0xf0fe | 2;
    }
  }
  if (B_nlpe == '\0') {
    local_80 = _B_ftdven & 0xf0fe;
  }
  else {
    local_80 = _B_ftdven & 0xd0fc | 0x2803;
  }
  if ((B_lrnrdy != '\0') || (5 < lrnstep_c)) {
    local_80 = local_80 & 0xdffd | 0x2002;
  }
  if (B_lrnakt == '\0') {
    if (B_lrnrdy == '\0') goto LAB_001457e8;
    if (B_abgle != '\0') {
      local_7c = _B_ftdvev & 0xffbf | 0x40;
      goto LAB_001457e8;
    }
LAB_00145834:
    local_7c = local_7c & 0xf0fe;
  }
  else {
    local_7c = _B_ftdvev & 0xffbf;
LAB_001457e8:
    if (B_abgle == '\0') goto LAB_00145834;
    local_7c = local_7c & 0xd0fc | 0x2803;
  }
  if (((B_lrnvb == '\0') && (8 < lrnstep_c)) && (B_lrnrdy != '\0')) {
    local_7c = local_7c & 0xdffd | 0x2002;
  }
  if (B_umauab != '\0') {
    local_78 = _B_ftdveu & 0xd0fc | 0x2803;
  }
  if ((B_lrnrdy != '\0') && (3 < lrnstep_c)) {
    uVar2 = local_78 & 0xdffd;
    local_78 = uVar2 | 0x2002;
    if (B_umauab == '\0') {
      local_78 = CONCAT11(local_78._0_1_,(char)uVar2) & 0xf0fe | 2;
    }
  }
  if ((B_lrnvb == '\0') || ((BGDVEintbits & 2) != 0)) {
    local_70 = _B_bedveub & 0xf0fe;
  }
  else {
    if ((dveadchst == 0) || (dveadchst == 0x1b)) {
      if (((B_lrnvb == '\0') || ((BGDVEintbits & 2) != 0)) || (dveadchst != 0x1b))
      goto LAB_001459fc;
      local_70 = _B_bedveub & 0xf0fe | 0x201;
    }
    else {
      local_70 = _B_bedveub & 0xf0fe | 0x101;
    }
    local_70 = local_70 & 0xdffd | 0x2002;
  }
LAB_001459fc:
  if ((B_fprordy != '\0') && (dveadchst == 0)) {
    local_70 = local_70 & 0xdffd | 0x2002;
  }
  if ((B_umae == '\0') || ((BGDVEintbits & 1) == 0)) {
    local_6c = _B_bedveuw & 0xf0fe;
  }
  else {
    local_6c = _B_bedveuw & 0xd0bc | 0x2843;
  }
  if ((B_lrnrdy != '\0') && (3 < lrnstep_c)) {
    local_6c = local_6c & 0xdffd | 0x2002;
  }
  if (B_fproab == '\0') {
    if (B_fproe == '\0') {
      local_74 = _B_npdvefo & 0xf0fe;
    }
    else {
      local_74 = _B_npdvefo & 0xd0fc | 0x2203;
    }
  }
  else {
    local_74 = _B_npdvefo & 0xd0fc | 0x2103;
  }
  if ((B_fprook != '\0') && (B_fprordy != '\0')) {
    local_74 = local_74 & 0xdffd | 0x2002;
  }
  local_68[0] = local_84;
  local_64[0] = local_84;
  local_60 = local_68;
  func_0xff222958(0x1e,local_64);
  local_68[0] = local_80;
  local_5c[0] = local_80;
  local_58 = local_68;
  func_0xff222958(0x21,local_5c);
  local_68[0] = local_7c;
  local_54[0] = local_7c;
  local_50 = local_68;
  func_0xff222958(0x29,local_54);
  local_68[0] = local_78;
  local_4c[0] = local_78;
  local_48 = local_68;
  func_0xff222958(0x26,local_4c);
  local_68[0] = local_74;
  local_44[0] = local_74;
  local_40 = local_68;
  func_0xff222958(0x1f,local_44);
  local_68[0] = local_6c;
  local_3c[0] = local_6c;
  local_38 = local_68;
  func_0xff222958(0x28,local_3c);
  local_68[0] = local_70;
  local_34[0] = local_70;
  local_30 = local_68;
  func_0xff222958(0x27,local_34);
  if ((B_stend == '\0') && (DAT_003faad2 != '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (B_wdksive == '\0') {
    if (bVar1) {
      local_90 = local_90 & 0xf0fe;
      goto LAB_00145d50;
    }
  }
  else if (B_dlrbe == '\0') {
    local_90 = local_90 & 0xf0fe | 0x801;
LAB_00145d50:
    local_90 = local_90 & 0xdffd | 0x2002;
  }
  if (B_dveese == '\0') {
    local_88 = local_88 & 0xf0fe;
  }
  else {
    local_88 = local_88 & 0xd0fc | 0x2803;
  }
  if (B_dlrpide == '\0') {
    if (B_dlrbe != '\0') {
      local_8c = uVar3 & 0xf0fe | 0x201;
      goto LAB_00145e34;
    }
  }
  else {
    local_8c = uVar3 & 0xf0fe | 0x101;
LAB_00145e34:
    local_8c = local_8c & 0xdffd | 0x2002;
  }
  if ((B_dlrpide == '\0') && (B_dlrbe == '\0')) {
    if (!bVar1) goto LAB_00145f00;
    local_8c = local_8c & 0xd0fc;
  }
  else if (!bVar1) goto LAB_00145f00;
  local_90 = local_90 & 0xdffd | 0x2002;
  local_88 = local_88 & 0xdffd | 0x2002;
  local_8c = local_8c & 0xdffd | 0x2002;
LAB_00145f00:
  local_68[0] = local_90;
  local_2c[0] = local_90;
  local_28 = local_68;
  func_0xff222958(0x20,local_2c);
  local_68[0] = local_8c;
  local_24[0] = local_8c;
  local_20 = local_68;
  func_0xff222958(0x22,local_24);
  local_68[0] = local_88;
  local_1c[0] = local_88;
  local_18 = local_68;
  func_0xff222958(0x1d,local_1c);
  return;
}

