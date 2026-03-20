/*
 * Program: n42.bin
 * Function: FUN_0015cb58
 * Entry: 0015cb58
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015cb58(void)

{
  uint uVar1;
  uint uVar2;
  
  if ((DAT_005b961a & 0x20) != 0) {
    if ((B_lsh != '\0') && ((CWDHLSH & 1) != 0)) {
      if (((B_atmst & B_atmst) != 0) && ((DAT_005bb8ed & 4) == 0)) {
                    /* WARNING: Read-only address (ram,0x005bb9b6) is written */
        _DAT_005bb9b4 = CONCAT22(tahsom_w,DAT_005bb9b6);
      }
      uVar1 = func_0xff217f20(_ZKARIH,tahsom_w,DAT_005bb9b4,_DAT_005bb9b4 & 0xffff);
      DAT_005bb9b4 = (word)(uVar1 >> 0x10);
      tahsomf_w = DAT_005bb9b4;
      _DAT_005bb9b4 = uVar1;
      uVar1 = func_0xff217fe8(_ZKPRIH,phlsnh,DAT_005bb950);
      DAT_005bb950 = (undefined2)uVar1;
      phlsnhf = (byte)(uVar1 >> 8);
      rinkfh = func_0xff21a1e0(KFRINH,&DAT_001ceeae,DAT_001ceead,&DAT_001ceeb8,&DAT_001ceebb,
                               tahsomf_w,uVar1 >> 8 & 0xff);
      uVar1 = (uint)rinkfh;
      uVar2 = func_0xff21949c(FRINH1,&DAT_001cee8a,&DAT_001cee94,tahsomf_w);
      uVar1 = (uVar2 & 0xffff) * uVar1;
      if (0xfffe < uVar1) {
        uVar1 = 0xffff;
      }
      rinsh_w = (word)uVar1;
      if ((((B_rinh == '\0') || (tahsomf_w < _TADHMNH)) || (_TADHMXH < tahsomf_w)) ||
         ((((DAT_005bb8ed & 1) == 0 || (tabst_w <= _TABSTHLSH)) || (tans <= TANSDHLSH)))) {
        B_mnfhsh = B_mnfhsh & (B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_rierrh|B_nphealh);
      }
      else {
        B_mnfhsh = B_mnfhsh | B_enh;
      }
      if ((uint)rinh_w < (uVar1 & 0xffff)) {
        B_mnfhsh = B_mnfhsh & (B_ehsh|B_mxfhsh|B_mnfhsh|B_sifhsh|B_npfhsh|B_enh|B_nphealh);
      }
      else {
        B_mnfhsh = B_mnfhsh | B_rierrh;
      }
    }
    if ((((DAT_005b961a & 0x20) != 0) && (B_lsh2 != '\0')) && ((CWDHLSH & 1) != 0)) {
      if (((B_atmst & B_atmst2) != 0) && ((DAT_005bb8ee & 0x10) == 0)) {
                    /* WARNING: Read-only address (ram,0x005bb9ba) is written */
        _DAT_005bb9b8 = CONCAT22(tahsom2_w,DAT_005bb9ba);
      }
      uVar1 = func_0xff217f20(_ZKARIH,tahsom2_w,DAT_005bb9b8,_DAT_005bb9b8 & 0xffff);
      DAT_005bb9b8 = (word)(uVar1 >> 0x10);
      tahsomf2_w = DAT_005bb9b8;
      _DAT_005bb9b8 = uVar1;
      uVar1 = func_0xff217fe8(_ZKPRIH,phlsnh2,DAT_005bb952);
      DAT_005bb952 = (undefined2)uVar1;
      phlsnhf2 = (byte)(uVar1 >> 8);
      rinkfh2 = func_0xff21a1e0(KFRINH2,&DAT_001ceecc,DAT_001ceecb,0x1ceed6,0x1ceed9,tahsomf2_w,
                                uVar1 >> 8 & 0xff);
      uVar1 = (uint)rinkfh2;
      uVar2 = func_0xff21949c(FRINH2,&DAT_001cee9c,0x1ceea6,tahsomf2_w);
      uVar1 = (uVar2 & 0xffff) * uVar1;
      if (0xfffe < uVar1) {
        uVar1 = 0xffff;
      }
      rinsh2_w = (word)uVar1;
      if (((((B_rinh2 == '\0') || (tahsomf2_w < _TADHMNH)) || (_TADHMXH < tahsomf2_w)) ||
          (((DAT_005bb8ee & 8) == 0 || (tabst_w <= _TABSTHLSH)))) || (tans <= TANSDHLSH)) {
        B_rierrh2 = B_rierrh2 &
                    (B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_rierrh2|B_nphealh2);
      }
      else {
        B_rierrh2 = B_rierrh2 | B_enh2;
      }
      if ((uint)rinh2_w < (uVar1 & 0xffff)) {
        B_rierrh2 = B_rierrh2 & (B_ehsh2|B_mxfhsh2|B_mnfhsh2|B_sifhsh2|B_npfhsh2|B_enh2|B_nphealh2);
      }
      else {
        B_rierrh2 = B_rierrh2 | B_rierrh2;
      }
    }
  }
  if ((B_atmst & B_atmst2) == 0) {
    DAT_005bb8ee = DAT_005bb8ee & 0xef;
  }
  else {
    DAT_005bb8ee = DAT_005bb8ee | 0x10;
  }
  if ((B_atmst & B_atmst) == 0) {
    DAT_005bb8ed = DAT_005bb8ed & 0xfb;
  }
  else {
    DAT_005bb8ed = DAT_005bb8ed | 4;
  }
  return;
}

