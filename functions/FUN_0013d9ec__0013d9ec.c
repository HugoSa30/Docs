/*
 * Program: n42.bin
 * Function: FUN_0013d9ec
 * Entry: 0013d9ec
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013d9ec(int param_1,char *param_2,byte param_3,byte *param_4,byte *param_5)

{
  byte bVar1;
  ENUM_005b869f EVar2;
  ushort *unaff_r31;
  ushort uStack00000008;
  ushort uStack0000000c;
  ushort uStack00000010;
  undefined *puStack00000014;
  ushort uStack00000018;
  undefined *in_stack_0000001c;
  
  if (param_1 == 0) {
    *param_5 = param_3 | 0x10;
  }
  else {
    *param_2 = (char)param_1 + -1;
  }
  bVar1 = *param_5;
  if (((bVar1 & 0x20) == 0) || ((bVar1 & 0x40) != 0)) {
    *param_5 = bVar1 & 0x7f;
    DAT_005bb8f1 = TVHSHRIZ;
    if ((bVar1 & 0x10) != 0) {
      DAT_005bb8f1 = TVHSHRIHEL;
    }
  }
  else if (DAT_005bb8f1 == '\0') {
    *param_5 = bVar1 | 0x80;
    if ((*param_4 & 2) != 0) {
      *param_5 = bVar1 & 0xef | 0x80;
    }
  }
  else {
    DAT_005bb8f1 = DAT_005bb8f1 + -1;
  }
  if ((*param_5 & 0x10) != 0) {
    uStack00000008 = uStack00000008 & 0xd0fc | 0x2803;
  }
  uStack0000000c = uStack00000008;
  puStack00000014 = (undefined *)&stack0x0000000c;
  uStack00000010 = uStack00000008;
  func_0xff222958(0x5c,&stack0x00000010);
  if ((((*unaff_r31 & 0x20) == 0) || (B_lsh2 == '\0')) || ((CWDHLSH & 1) == 0)) {
    B_rierrh2 = B_rierrh2 & (B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_enh2|B_rierrh2|B_nphealh2) |
                B_nphealh2;
  }
  else {
    uStack00000008 = _Z_hsh2;
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
      uStack00000008 = _Z_hsh2 & 0xd0fc | 0x2803;
    }
    uStack0000000c = uStack00000008;
    in_stack_0000001c = (undefined *)&stack0x0000000c;
    uStack00000018 = uStack00000008;
    func_0xff222958(0x5d,&stack0x00000018);
  }
  return;
}

