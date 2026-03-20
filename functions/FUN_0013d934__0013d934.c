/*
 * Program: n42.bin
 * Function: FUN_0013d934
 * Entry: 0013d934
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013d934(void)

{
  ENUM_005b869e EVar1;
  ENUM_005b869f EVar2;
  ushort local_30;
  ushort local_2c [2];
  ushort local_28 [2];
  ushort *local_24;
  ushort local_20 [2];
  ushort *local_1c;
  
  if ((((DAT_005b961a & 0x20) == 0) || (B_lsh == '\0')) || ((CWDHLSH & 1) == 0)) {
    B_mnfhsh = B_mnfhsh & (B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_enh|B_rierrh|B_nphealh) | B_nphealh;
  }
  else {
    local_30 = _E_hsh;
    if ((B_mnfhsh & B_ehsh) ==
        ~(B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh)) {
      if (DAT_005bb8f0 == '\0') {
        if (((B_mnfhsh & B_rierrh) ==
             ~(B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh)) ||
           ((B_mnfhsh & B_enh) ==
            ~(B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh))) {
          DAT_005bb8ef = TVHSHRI;
        }
        else if (DAT_005bb8ef == '\0') {
          B_mnfhsh = B_mnfhsh | B_npfhsh;
        }
        else {
          DAT_005bb8ef = DAT_005bb8ef + -1;
        }
      }
      else {
        DAT_005bb8f0 = DAT_005bb8f0 + -1;
      }
    }
    else {
      DAT_005bb8f0 = TVRIHEE;
      DAT_005bb8ef = TVHSHRI;
    }
    if (((B_mnfhsh & B_enh) ==
         ~(B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh)) ||
       ((B_mnfhsh & B_rierrh) !=
        ~(B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh))) {
      EVar1 = B_mnfhsh & (B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh);
      DAT_005bb8f1 = TVHSHRIZ;
      if ((B_mnfhsh & B_npfhsh) !=
          ~(B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh)) {
        DAT_005bb8f1 = TVHSHRIHEL;
      }
    }
    else if (DAT_005bb8f1 == '\0') {
      EVar1 = B_mnfhsh | B_nphealh;
      if ((CWDHLSH & 2) != 0) {
        EVar1 = B_mnfhsh & (B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_enh|B_rierrh|B_nphealh) | B_nphealh;
      }
    }
    else {
      DAT_005bb8f1 = DAT_005bb8f1 + -1;
      EVar1 = B_mnfhsh;
    }
    B_mnfhsh = EVar1;
    if ((B_mnfhsh & B_npfhsh) !=
        ~(B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_rierrh|B_nphealh)) {
      local_30 = _E_hsh & 0xd0fc | 0x2803;
    }
    local_2c[0] = local_30;
    local_24 = local_2c;
    local_28[0] = local_30;
    func_0xff222958(0x5c,local_28);
  }
  if ((((DAT_005b961a & 0x20) == 0) || (B_lsh2 == '\0')) || ((CWDHLSH & 1) == 0)) {
    B_rierrh2 = B_rierrh2 & (B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_enh2|B_rierrh2|B_nphealh2) |
                B_nphealh2;
  }
  else {
    local_30 = _Z_hsh2;
    if ((B_rierrh2 & B_ehsh2) ==
        ~(B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2)) {
      if (DAT_005bb8f7 == '\0') {
        if (((B_rierrh2 & B_rierrh2) ==
             ~(B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2)) ||
           ((B_rierrh2 & B_enh2) ==
            ~(B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2))) {
          DAT_005bb8f6 = TVHSHRI;
        }
        else if (DAT_005bb8f6 == '\0') {
          B_rierrh2 = B_rierrh2 | B_npfhsh2;
        }
        else {
          DAT_005bb8f6 = DAT_005bb8f6 + -1;
        }
      }
      else {
        DAT_005bb8f7 = DAT_005bb8f7 + -1;
      }
    }
    else {
      DAT_005bb8f7 = TVRIHEE;
      DAT_005bb8f6 = TVHSHRI;
    }
    if (((B_rierrh2 & B_enh2) ==
         ~(B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2)) ||
       ((B_rierrh2 & B_rierrh2) !=
        ~(B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2))) {
      EVar2 = B_rierrh2 & (B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2);
      DAT_005bb8f8 = TVHSHRIZ;
      if ((B_rierrh2 & B_npfhsh2) !=
          ~(B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2)) {
        DAT_005bb8f8 = TVHSHRIHEL;
      }
    }
    else if (DAT_005bb8f8 == '\0') {
      EVar2 = B_rierrh2 | B_nphealh2;
      if ((CWDHLSH & 2) != 0) {
        EVar2 = B_rierrh2 & (B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_enh2|B_rierrh2|B_nphealh2) |
                B_nphealh2;
      }
    }
    else {
      DAT_005bb8f8 = DAT_005bb8f8 + -1;
      EVar2 = B_rierrh2;
    }
    B_rierrh2 = EVar2;
    if ((B_rierrh2 & B_npfhsh2) !=
        ~(B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2)) {
      local_30 = _Z_hsh2 & 0xd0fc | 0x2803;
    }
    local_2c[0] = local_30;
    local_1c = local_2c;
    local_20[0] = local_30;
    func_0xff222958(0x5d,local_20);
  }
  return;
}

