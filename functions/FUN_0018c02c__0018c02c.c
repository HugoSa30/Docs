/*
 * Program: n42.bin
 * Function: FUN_0018c02c
 * Entry: 0018c02c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018c02c(void)

{
  ushort local_38;
  ushort local_34 [2];
  ushort local_30 [2];
  ushort *local_2c;
  ushort local_28 [2];
  ushort *local_24;
  
  local_38 = _E_hsh;
  if ((DAT_005b961a & 0x20) == 0) {
    local_38 = _E_hsh & 0xf0fe;
LAB_0018c53c:
    local_38 = local_38 & 0xdffd | 0x2002;
  }
  else {
    if ((((B_nmot == '\0') || (B_stend == '\0')) || ((BGBNausbits0 & B_bvhls) == 0)) ||
       ((ubsq_w < _UBDHLSHMN || (_UBDHLSHMX < ubsq_w)))) {
      DAT_003f9cb8 = DAT_003f9cb8 & 0x7f;
    }
    else {
      DAT_003f9cb8 = DAT_003f9cb8 | 0x80;
    }
    if (B_lsh == '\0') {
      local_38 = _E_hsh & 0xd0fc | 0x2002;
    }
    else {
      if (((DAT_003f9cb8 & 0x80) == 0) || (B_atmtpk == '\0')) {
        DAT_005bb8ed = DAT_005bb8ed & 0xfe;
      }
      else {
        DAT_005bb8ed = DAT_005bb8ed | 1;
      }
      if ((((DAT_003f9cb8 & 1) == 0) || (B_hshe == '\0')) || (UHDMNH < uhsh)) {
        B_hsokh = false;
      }
      else {
        B_hsokh = true;
      }
      if ((DAT_003f9cb8 & 0x10) == 0) {
        B_mnfhsh = B_mnfhsh & (B_ehsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh);
      }
      else {
        B_mnfhsh = B_mnfhsh | B_mxfhsh;
      }
      if ((DAT_003f9cb8 & 0x20) == 0) {
        B_mnfhsh = B_mnfhsh & (B_ehsh|B_mxfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh);
      }
      else {
        B_mnfhsh = B_mnfhsh | B_mnfhsh;
      }
      if ((DAT_003f9cb8 & 0x40) == 0) {
        B_mnfhsh = B_mnfhsh & (B_ehsh|B_mxfhsh|B_mnfhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh);
      }
      else {
        B_mnfhsh = B_mnfhsh | B_sifhsh;
      }
      if ((((B_mnfhsh & B_mxfhsh) ==
            ~(B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh)) &&
          ((B_mnfhsh & B_mnfhsh) ==
           ~(B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh))) &&
         ((B_mnfhsh & B_sifhsh) ==
          ~(B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh))) {
        B_mnfhsh = B_mnfhsh & (B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh);
      }
      else {
        B_mnfhsh = B_mnfhsh | B_ehsh;
      }
      if ((B_mnfhsh & B_mxfhsh) ==
          ~(B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh)) {
        DAT_005bb8f3 = TVHSHEE;
        DAT_005bb8ed = DAT_005bb8ed & 0xf7;
      }
      else if (DAT_005bb8f3 == '\0') {
        DAT_005bb8ed = DAT_005bb8ed | 8;
      }
      else {
        DAT_005bb8f3 = DAT_005bb8f3 + -1;
      }
      if ((B_mnfhsh & B_mnfhsh) ==
          ~(B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh)) {
        DAT_005bb8f4 = TVHSHEE;
        DAT_005bb8ed = DAT_005bb8ed & 0xef;
      }
      else if (DAT_005bb8f4 == '\0') {
        DAT_005bb8ed = DAT_005bb8ed | 0x10;
      }
      else {
        DAT_005bb8f4 = DAT_005bb8f4 + -1;
      }
      if ((B_mnfhsh & B_sifhsh) ==
          ~(B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh)) {
        DAT_005bb8f5 = TVHSHEE;
        DAT_005bb8ed = DAT_005bb8ed & 0xdf;
      }
      else if (DAT_005bb8f5 == '\0') {
        DAT_005bb8ed = DAT_005bb8ed | 0x20;
      }
      else {
        DAT_005bb8f5 = DAT_005bb8f5 + -1;
      }
      if ((B_mnfhsh & B_ehsh) ==
          ~(B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh)) {
        if (DAT_005bb8f2 == '\0') {
          DAT_005bb8ed = DAT_005bb8ed | 2;
        }
        else {
          DAT_005bb8f2 = DAT_005bb8f2 + -1;
        }
      }
      else {
        DAT_005bb8f2 = TVHSHEE;
        DAT_005bb8ed = DAT_005bb8ed & 0xfd;
      }
      if ((DAT_005bb8ed & 8) != 0) {
        local_38 = _E_hsh & 0xf0fe | 0x101;
        goto LAB_0018c53c;
      }
      if ((DAT_005bb8ed & 0x10) == 0) {
        if ((DAT_005bb8ed & 0x20) == 0) {
          if ((((B_mnfhsh & B_nphealh) !=
                ~(B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh)) &&
              ((DAT_005bb8ed & 2) != 0)) &&
             (((bool)B_hsokh &&
              ((B_mnfhsh & B_npfhsh) ==
               ~(B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh))))) {
            local_38 = _E_hsh & 0xd0fc | 0x2002;
          }
        }
        else {
          local_38 = _E_hsh & 0xd0fc | 0x2403;
        }
      }
      else {
        local_38 = _E_hsh & 0xd0fc | 0x2203;
      }
    }
  }
  local_34[0] = local_38;
  local_2c = local_34;
  local_30[0] = local_38;
  func_0xff222958(0x5c,local_30);
  local_38 = _Z_hsh2;
  if (((DAT_005b961a & 0x20) == 0) || (B_lsh2 == '\0')) {
    local_38 = _Z_hsh2 & 0xf0fe;
  }
  else {
    if (((DAT_003f9cb8 & 0x80) == 0) || (B_atmtpk2 == '\0')) {
      DAT_005bb8ee = DAT_005bb8ee & 0xf7;
    }
    else {
      DAT_005bb8ee = DAT_005bb8ee | 8;
    }
    if ((((DAT_003f9cb9 & 0x40) == 0) || (B_hshe2 == '\0')) || (UHDMNH < uhsh2)) {
      B_hsokh2 = '\0';
    }
    else {
      B_hsokh2 = '\x01';
    }
    if ((DAT_003f9cb9 & 1) == 0) {
      B_rierrh2 = B_rierrh2 & (B_ehsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2);
    }
    else {
      B_rierrh2 = B_rierrh2 | B_mxfhsh2;
    }
    if ((DAT_003f9cb9 & 2) == 0) {
      B_rierrh2 = B_rierrh2 & (B_ehsh2|B_mxfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2);
    }
    else {
      B_rierrh2 = B_rierrh2 | B_mnfhsh2;
    }
    if ((DAT_003f9cb9 & 4) == 0) {
      B_rierrh2 = B_rierrh2 & (B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2);
    }
    else {
      B_rierrh2 = B_rierrh2 | B_sifhsh2;
    }
    if ((((B_rierrh2 & B_mxfhsh2) ==
          ~(B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2)) &&
        ((B_rierrh2 & B_mnfhsh2) ==
         ~(B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2))) &&
       ((B_rierrh2 & B_sifhsh2) ==
        ~(B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2))) {
      B_rierrh2 = B_rierrh2 & (B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2);
    }
    else {
      B_rierrh2 = B_rierrh2 | B_ehsh2;
    }
    if ((B_rierrh2 & B_mxfhsh2) ==
        ~(B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2)) {
      DAT_005bb8fa = TVHSHEE;
      DAT_005bb8ee = DAT_005bb8ee & 0xfe;
    }
    else if (DAT_005bb8fa == '\0') {
      DAT_005bb8ee = DAT_005bb8ee | 1;
    }
    else {
      DAT_005bb8fa = DAT_005bb8fa + -1;
    }
    if ((B_rierrh2 & B_mnfhsh2) ==
        ~(B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2)) {
      DAT_005bb8fb = TVHSHEE;
      DAT_005bb8ee = DAT_005bb8ee & 0xfd;
    }
    else if (DAT_005bb8fb == '\0') {
      DAT_005bb8ee = DAT_005bb8ee | 2;
    }
    else {
      DAT_005bb8fb = DAT_005bb8fb + -1;
    }
    if ((B_rierrh2 & B_sifhsh2) ==
        ~(B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2)) {
      DAT_005bb8fc = TVHSHEE;
      DAT_005bb8ee = DAT_005bb8ee & 0xfb;
    }
    else if (DAT_005bb8fc == '\0') {
      DAT_005bb8ee = DAT_005bb8ee | 4;
    }
    else {
      DAT_005bb8fc = DAT_005bb8fc + -1;
    }
    if ((B_rierrh2 & B_ehsh2) ==
        ~(B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2)) {
      if (DAT_005bb8f9 == '\0') {
        DAT_005bb8ee = DAT_005bb8ee | 0x20;
      }
      else {
        DAT_005bb8f9 = DAT_005bb8f9 + -1;
      }
    }
    else {
      DAT_005bb8f9 = TVHSHEE;
      DAT_005bb8ee = DAT_005bb8ee & 0xdf;
    }
    if ((DAT_005bb8ee & 1) == 0) {
      if ((DAT_005bb8ee & 2) == 0) {
        if ((DAT_005bb8ee & 4) == 0) {
          if ((((B_rierrh2 & B_nphealh2) !=
                ~(B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2)) &&
              ((DAT_005bb8ee & 0x20) != 0)) &&
             ((B_hsokh2 != '\0' &&
              ((B_rierrh2 & B_npfhsh2) ==
               ~(B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2))))) {
            local_38 = _Z_hsh2 & 0xd0fc | 0x2002;
          }
        }
        else {
          local_38 = _Z_hsh2 & 0xd0fc | 0x2403;
        }
      }
      else {
        local_38 = _Z_hsh2 & 0xd0fc | 0x2203;
      }
      goto LAB_0018c9d0;
    }
    local_38 = _Z_hsh2 & 0xf0fe | 0x101;
  }
  local_38 = local_38 & 0xdffd | 0x2002;
LAB_0018c9d0:
  local_34[0] = local_38;
  local_24 = local_34;
  local_28[0] = local_38;
  func_0xff222958(0x5d,local_28);
  return;
}

