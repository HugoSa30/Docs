/*
 * Program: n42.bin
 * Function: DHFM_3
 * Entry: 0016a218
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DHFM_3(void)

{
  ushort local_18;
  ushort local_14 [2];
  ushort local_10 [2];
  ushort *local_c;
  
  if (ub < UBHFM) {
    if (DAT_003fac0c < TDUBHFM) {
      DAT_003fac0c = DAT_003fac0c + 1;
    }
    else {
      DAT_003fac00 = DAT_003fac00 | 0x20;
    }
  }
  else {
    DAT_003fac00 = DAT_003fac00 & 0xdf;
    DAT_003fac0c = 0;
  }
  if (B_stend == '\0') {
    DAT_003fac08 = 0;
  }
  else if (DAT_003fac08 < TDMLST) {
    DAT_003fac08 = DAT_003fac08 + 1;
  }
  else {
    local_18 = _B_mnlm;
    if (UNWDHFM < uzkw_w) {
      DAT_003fac00 = DAT_003fac00 | 0x10;
    }
    else {
      DAT_003fac00 = DAT_003fac00 & 0xef;
    }
    if (B_mnhfm == '\0') {
      DAT_003fac0a = 0;
    }
    else if (DAT_003fac0a < TDMLMN) {
      DAT_003fac0a = DAT_003fac0a + 1;
    }
    else if ((DAT_003fac00 & 0x10) != 0) {
      local_18 = _B_mnlm & 0xd0fc | 0x2203;
    }
    if (B_mxhfm == '\0') {
      DAT_003fac09 = 0;
    }
    else if (DAT_003fac09 < TDMLMX) {
      DAT_003fac09 = DAT_003fac09 + 1;
    }
    else if ((DAT_003fac00 & 0x10) != 0) {
      local_18 = local_18 & 0xd0fc | 0x2103;
    }
    if (B_hfm == '\0') {
      DAT_003fac0b = 0;
    }
    else if (DAT_003fac0b < TDMLNF) {
      DAT_003fac0b = DAT_003fac0b + 1;
    }
    else if ((DAT_003fac00 & 0x10) != 0) {
      local_18 = local_18 & 0xd0fc | 0x2002;
    }
    local_14[0] = local_18;
    local_c = local_14;
    local_10[0] = local_18;
    func_0xff222958(0x7b,local_10);
    DAT_003fac00 = DAT_003fac00 | 8;
  }
  return;
}

