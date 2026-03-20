/*
 * Program: n42.bin
 * Function: FUN_0013daf8
 * Entry: 0013daf8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013daf8(void)

{
  ENUM_005b869f EVar1;
  byte in_r0;
  int in_r7;
  byte in_r11;
  ushort *unaff_r31;
  ushort param_11;
  ushort param_12;
  undefined2 param_13;
  undefined *param_14;
  ushort uStack00000018;
  undefined *in_stack_0000001c;
  
  param_11 = CONCAT11((byte)(in_r7 << 5) & 0x20 | in_r11 & 0xf | in_r0 & 0xd0,
                      (byte)(in_r7 << 1) & 2 | (byte)param_11 & 0xfd);
  param_12 = param_11;
  param_14 = (undefined *)&stack0x0000000c;
  param_13 = param_11;
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
    param_12 = param_11;
    in_stack_0000001c = (undefined *)&stack0x0000000c;
    uStack00000018 = param_11;
    func_0xff222958(0x5d,&stack0x00000018);
  }
  return;
}

