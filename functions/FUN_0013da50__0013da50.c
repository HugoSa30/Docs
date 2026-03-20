/*
 * Program: n42.bin
 * Function: FUN_0013da50
 * Entry: 0013da50
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013da50(undefined4 param_1,undefined4 param_2,byte param_3,byte *param_4,byte *param_5)

{
  ENUM_005b869f EVar1;
  ushort *unaff_r31;
  ushort param_11;
  ushort uStack0000000c;
  ushort uStack00000010;
  undefined *puStack00000014;
  ushort uStack00000018;
  undefined *in_stack_0000001c;
  
  if ((param_3 & 0x40) == 0) {
    if (DAT_005bb8f1 == '\0') {
      *param_5 = param_3 | 0x80;
      if ((*param_4 & 2) != 0) {
        *param_5 = param_3 & 0xef | 0x80;
      }
    }
    else {
      DAT_005bb8f1 = DAT_005bb8f1 + -1;
    }
  }
  else {
    *param_5 = param_3 & 0x7f;
    DAT_005bb8f1 = TVHSHRIZ;
    if ((param_3 & 0x10) != 0) {
      DAT_005bb8f1 = TVHSHRIHEL;
    }
  }
  if ((*param_5 & 0x10) != 0) {
    param_11 = param_11 & 0xd0fc | 0x2803;
  }
  uStack0000000c = param_11;
  puStack00000014 = (undefined *)&stack0x0000000c;
  uStack00000010 = param_11;
  func_0xff222958(0x5c,&stack0x00000010);
  if ((((*unaff_r31 & 0x20) == 0) || (B_lsh2 == '\0')) || ((CWDHLSH & 1) == 0)) {
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
      if ((CWDHLSH & 2) != 0) {
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
    in_stack_0000001c = (undefined *)&stack0x0000000c;
    uStack00000018 = param_11;
    func_0xff222958(0x5d,&stack0x00000018);
  }
  return;
}

