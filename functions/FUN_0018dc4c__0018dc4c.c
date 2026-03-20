/*
 * Program: n42.bin
 * Function: FUN_0018dc4c
 * Entry: 0018dc4c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018dc4c(void)

{
  ushort local_68;
  ushort local_64;
  ushort local_60;
  ushort local_5c;
  ushort local_58 [2];
  ushort local_54 [2];
  ushort *local_50;
  ushort local_4c [2];
  ushort *local_48;
  ushort local_44 [2];
  ushort *local_40;
  ushort local_3c [2];
  ushort *local_38;
  
  local_68 = _B_behsvsa;
  local_64 = _B_fthsv;
  local_60 = _E_hsvsa2;
  local_5c = _B_clhsv2;
  if ((DAT_005b961a & 0x40) == 0) {
    local_64 = _B_fthsv & 0xd0fc | 0x2002;
    B_ehlsu = 0;
    B_nplsusa = '\0';
    local_5c = _B_clhsv2 & 0xd0fc | 0x2002;
    B_ehlsu2 = 0;
    B_helsusa = B_helsusa | (B_helsusa|B_helsusa2);
    B_nplsusa2 = '\0';
  }
  else {
    if (B_mxhlsu == '\0') {
      DAT_005b817e = TVLSUEE;
      DAT_005b816c = DAT_005b816c & 0xf7;
    }
    else if (DAT_005b817e == '\0') {
      local_64 = _B_fthsv & 0xf0ff | 0x100;
      DAT_005b816c = DAT_005b816c | 8;
    }
    else {
      DAT_005b817e = DAT_005b817e + -1;
    }
    if (B_mnhlsu == '\0') {
      DAT_005b817f = TVLSUEE;
      DAT_005b816c = DAT_005b816c & 0xfb;
    }
    else if (DAT_005b817f == '\0') {
      local_64 = local_64 & 0xf0ff | 0x200;
      DAT_005b816c = DAT_005b816c | 4;
    }
    else {
      DAT_005b817f = DAT_005b817f + -1;
    }
    if (B_sihlsu == '\0') {
      DAT_005b8180 = TVLSUEE;
      DAT_005b816c = DAT_005b816c & 0xdf;
    }
    else if (DAT_005b8180 == '\0') {
      local_64 = local_64 & 0xf0ff | 0x400;
      DAT_005b816c = DAT_005b816c | 0x20;
    }
    else {
      DAT_005b8180 = DAT_005b8180 + -1;
    }
    if ((((DAT_005b816c & 8) == 0) && ((DAT_005b816c & 4) == 0)) && ((DAT_005b816c & 0x20) == 0)) {
      DAT_005b816c = DAT_005b816c & 0xfe;
    }
    else {
      DAT_005b816c = DAT_005b816c | 1;
    }
    if (((B_mxhlsu == '\0') && (B_mnhlsu == '\0')) && (B_sihlsu == '\0')) {
      DAT_005b816d = DAT_005b816d & 0xfb;
    }
    else {
      DAT_005b816d = DAT_005b816d | 4;
    }
    if ((((B_helsunp2 & B_helsunp) == 0) && (B_enheat != '\0')) &&
       ((B_mxhlsu == '\0' && ((B_mnhlsu == '\0' && (B_sihlsu == '\0')))))) {
      if (DAT_005b8176 == 0) {
        DAT_005b816c = DAT_005b816c | 0x40;
      }
      else {
        DAT_005b8176 = DAT_005b8176 + -1;
      }
    }
    else {
      DAT_005b8176 = _TVLSUBM;
      DAT_005b816c = DAT_005b816c & 0xbf;
    }
    if (msabg < DAT_001c1bec) {
      DAT_005b8182 = TVLSUNP;
      DAT_005b816d = DAT_005b816d & 0xfd;
    }
    else if (DAT_005b8182 == '\0') {
      DAT_005b816d = DAT_005b816d | 2;
    }
    else {
      DAT_005b8182 = DAT_005b8182 + -1;
    }
    if ((((_TNLDHLSU <= tabst_w) || ((local_64._0_1_ & 0xf) != 8)) && (B_sbbvk != '\0')) &&
       ((DAT_005b816c & 0x40) != 0)) {
      B_helsunp2 = B_helsunp2 | B_helsunp;
    }
    if ((((DAT_005b816c & 0x10) == 0) && ((DAT_005b816c & 0x40) != 0)) && ((DAT_005b816d & 2) != 0))
    {
      B_nphlsu = '\x01';
      local_64 = local_64 & 0xf0ff | 0x800;
    }
    if (B_sbbvk == '\0') {
      DAT_005b816c = DAT_005b816c & 0xef;
    }
    else {
      DAT_005b816c = DAT_005b816c | 0x10;
    }
    if (((B_nphlsu == '\0') && (B_nplsusa == '\0')) && ((DAT_005b816d & 4) == 0)) {
      B_ehlsu = 0;
    }
    else {
      B_ehlsu = 1;
    }
    if ((B_enswit == '\0') || ((DAT_005b816d & 4) != 0)) {
      DAT_005b8181 = TVLSUEE;
      B_helsunp2 = B_helsunp2 & ~B_helsusw;
    }
    else if (DAT_005b8181 == '\0') {
      B_helsunp2 = B_helsunp2 | B_helsusw;
    }
    else {
      DAT_005b8181 = DAT_005b8181 + -1;
    }
    if (((B_helsunp2 & B_helsusw) == 0) || ((B_helsunp2 & B_helsunp) == 0)) {
      if ((B_nphlsu != '\0') || ((DAT_005b816c & 1) != 0)) {
        local_64 = local_64 & 0xdffc | 0x2003;
      }
    }
    else {
      local_64 = local_64 & 0xd0fc | 0x2002;
    }
    if (B_mxhlsu2 == '\0') {
      DAT_005b8198 = TVLSUEE;
      DAT_005b816f = DAT_005b816f & 0xf7;
    }
    else if (DAT_005b8198 == '\0') {
      local_5c = _B_clhsv2 & 0xf0ff | 0x100;
      DAT_005b816f = DAT_005b816f | 8;
    }
    else {
      DAT_005b8198 = DAT_005b8198 + -1;
    }
    if (B_mnhlsu2 == '\0') {
      DAT_005b8199 = TVLSUEE;
      DAT_005b816f = DAT_005b816f & 0xfb;
    }
    else if (DAT_005b8199 == '\0') {
      local_5c = local_5c & 0xf0ff | 0x200;
      DAT_005b816f = DAT_005b816f | 4;
    }
    else {
      DAT_005b8199 = DAT_005b8199 + -1;
    }
    if (B_sihlsu2 == '\0') {
      DAT_005b819a = TVLSUEE;
      DAT_005b816f = DAT_005b816f & 0xdf;
    }
    else if (DAT_005b819a == '\0') {
      local_5c = local_5c & 0xf0ff | 0x400;
      DAT_005b816f = DAT_005b816f | 0x20;
    }
    else {
      DAT_005b819a = DAT_005b819a + -1;
    }
    if ((((DAT_005b816f & 8) == 0) && ((DAT_005b816f & 4) == 0)) && ((DAT_005b816f & 0x20) == 0)) {
      DAT_005b816f = DAT_005b816f & 0xfe;
    }
    else {
      DAT_005b816f = DAT_005b816f | 1;
    }
    if (((B_mxhlsu2 == '\0') && (B_mnhlsu2 == '\0')) && (B_sihlsu2 == '\0')) {
      DAT_005b8170 = DAT_005b8170 & 0xfd;
    }
    else {
      DAT_005b8170 = DAT_005b8170 | 2;
    }
    if ((((B_helsunp2 & B_helsunp2) == 0) && (B_enheat2 != '\0')) &&
       ((B_mxhlsu2 == '\0' && ((B_mnhlsu2 == '\0' && (B_sihlsu2 == '\0')))))) {
      if (DAT_005b8190 == 0) {
        DAT_005b816f = DAT_005b816f | 0x40;
      }
      else {
        DAT_005b8190 = DAT_005b8190 + -1;
      }
    }
    else {
      DAT_005b8190 = _TVLSUBM;
      DAT_005b816f = DAT_005b816f & 0xbf;
    }
    if (msabg2 < DAT_001c1bec) {
      DAT_005b819c = TVLSUNP;
      DAT_005b8170 = DAT_005b8170 & 0xfe;
    }
    else if (DAT_005b819c == '\0') {
      DAT_005b8170 = DAT_005b8170 | 1;
    }
    else {
      DAT_005b819c = DAT_005b819c + -1;
    }
    if ((((_TNLDHLSU <= tabst_w) || ((local_5c._0_1_ & 0xf) != 8)) && (B_sbbvk2 != '\0')) &&
       ((DAT_005b816f & 0x40) != 0)) {
      B_helsunp2 = B_helsunp2 | B_helsunp2;
    }
    if ((((DAT_005b816f & 0x10) == 0) && ((DAT_005b816f & 0x40) != 0)) && ((DAT_005b8170 & 1) != 0))
    {
      B_nphlsu2 = '\x01';
      local_5c = local_5c & 0xf0ff | 0x800;
    }
    if (B_sbbvk2 == '\0') {
      DAT_005b816f = DAT_005b816f & 0xef;
    }
    else {
      DAT_005b816f = DAT_005b816f | 0x10;
    }
    if (((B_nphlsu2 == '\0') && (B_nplsusa2 == '\0')) && ((DAT_005b8170 & 2) == 0)) {
      B_ehlsu2 = 0;
    }
    else {
      B_ehlsu2 = 1;
    }
    if ((B_enswit2 == '\0') || ((DAT_005b8170 & 2) != 0)) {
      DAT_005b819b = TVLSUEE;
      B_helsunp2 = B_helsunp2 & ~B_helsusw2;
    }
    else if (DAT_005b819b == '\0') {
      B_helsunp2 = B_helsunp2 | B_helsusw2;
    }
    else {
      DAT_005b819b = DAT_005b819b + -1;
    }
    if (((B_helsunp2 & B_helsusw2) == 0) || ((B_helsunp2 & B_helsunp2) == 0)) {
      if ((B_nphlsu2 != '\0') || ((DAT_005b816f & 1) != 0)) {
        local_5c = local_5c & 0xdffc | 0x2003;
      }
    }
    else {
      local_5c = local_5c & 0xd0fc | 0x2002;
    }
  }
  if ((DAT_005b961a & 0x80) == 0) {
    local_68 = _B_behsvsa & 0xd0fc | 0x2002;
    B_helsusa = B_helsusa | B_helsusa;
    B_nplsusa = '\0';
  }
  else if (B_nplsusa == '\0') {
    if ((B_helsusa & B_helsusa) != 0) {
      local_68 = _B_behsvsa & 0xd0fc | 0x2002;
    }
  }
  else {
    local_68 = _B_behsvsa & 0xd0fc | 0x2803;
  }
  if ((DAT_005b961a & 0x80) == 0) {
    local_60 = _E_hsvsa2 & 0xd0fc | 0x2002;
    B_helsusa = B_helsusa | B_helsusa2;
    B_nplsusa2 = '\0';
  }
  else if (B_nplsusa2 == '\0') {
    if ((B_helsusa & B_helsusa2) != 0) {
      local_60 = _E_hsvsa2 & 0xd0fc | 0x2002;
    }
  }
  else {
    local_60 = _E_hsvsa2 & 0xd0fc | 0x2803;
  }
  local_58[0] = local_68;
  local_54[0] = local_68;
  local_50 = local_58;
  func_0xff222958(0x62,local_54);
  local_58[0] = local_64;
  local_4c[0] = local_64;
  local_48 = local_58;
  func_0xff222958(0x60,local_4c);
  local_58[0] = local_60;
  local_44[0] = local_60;
  local_40 = local_58;
  func_0xff222958(99,local_44);
  local_58[0] = local_5c;
  local_3c[0] = local_5c;
  local_38 = local_58;
  func_0xff222958(0x61,local_3c);
  return;
}

