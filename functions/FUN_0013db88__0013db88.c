/*
 * Program: n42.bin
 * Function: FUN_0013db88
 * Entry: 0013db88
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013db88(void)

{
  ENUM_005b869f EVar1;
  byte *in_r7;
  int in_r11;
  ushort param_11;
  ushort uStack0000000c;
  ushort uStack00000018;
  undefined *puStack0000001c;
  
  if (in_r11 == 0) {
    B_rierrh2 = B_rierrh2 & (B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_enh2|B_rierrh2|B_nphealh2) |
                B_nphealh2;
  }
  else {
    param_11 = _Z_hsh2;
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
      EVar1 = B_rierrh2 & (B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2);
      DAT_005bb8f8 = TVHSHRIZ;
      if ((B_rierrh2 & B_npfhsh2) !=
          ~(B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2)) {
        DAT_005bb8f8 = TVHSHRIHEL;
      }
    }
    else if (DAT_005bb8f8 == '\0') {
      EVar1 = B_rierrh2 | B_nphealh2;
      if ((*in_r7 & 2) != 0) {
        EVar1 = B_rierrh2 & (B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_enh2|B_rierrh2|B_nphealh2) |
                B_nphealh2;
      }
    }
    else {
      DAT_005bb8f8 = DAT_005bb8f8 + -1;
      EVar1 = B_rierrh2;
    }
    B_rierrh2 = EVar1;
    if ((B_rierrh2 & B_npfhsh2) !=
        ~(B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_rierrh2|B_nphealh2)) {
      param_11 = _Z_hsh2 & 0xd0fc | 0x2803;
    }
    uStack0000000c = param_11;
    puStack0000001c = (undefined *)&stack0x0000000c;
    uStack00000018 = param_11;
    func_0xff222958(0x5d,&stack0x00000018);
  }
  return;
}

