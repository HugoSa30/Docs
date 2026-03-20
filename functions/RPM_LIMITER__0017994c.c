/*
 * Program: n42.bin
 * Function: RPM_LIMITER
 * Entry: 0017994c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RPM_LIMITER(void)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = (esst_sga08mdub >> 0x10) * 2;
  uVar1 = *(ushort *)(iVar2 + 0x1c9b12);
  _DAT_003f9c06 =
       uVar1 + (short)((esst_sga08mdub & 0xffff) *
                       ((uint)*(ushort *)(&rpm_limiter2 + iVar2) - (uint)uVar1) >> 0x10);
  if (B_lowra == '\0') {
    DAT_003f9bd9 = (&DAT_001c9ad8)[esst_sga08mdub >> 0x10] +
                   (char)((esst_sga08mdub & 0xffff) *
                          ((uint)(byte)(&DAT_001c9ad9)[esst_sga08mdub >> 0x10] -
                          (uint)(byte)(&DAT_001c9ad8)[esst_sga08mdub >> 0x10]) >> 0x10);
    DAT_003f9bda = (&cut_slope1)[esst_sga08mdub >> 0x10] +
                   (char)((esst_sga08mdub & 0xffff) *
                          ((uint)(byte)(&cut_slope2)[esst_sga08mdub >> 0x10] -
                          (uint)(byte)(&cut_slope1)[esst_sga08mdub >> 0x10]) >> 0x10);
    DAT_003f9bdb = (&cut_prediction1)[esst_sga08mdub >> 0x10] +
                   (char)((esst_sga08mdub & 0xffff) *
                          ((uint)(byte)(&cut_prediction2)[esst_sga08mdub >> 0x10] -
                          (uint)(byte)(&cut_prediction1)[esst_sga08mdub >> 0x10]) >> 0x10);
    iVar2 = (esst_sga08mdub >> 0x10) * 2;
    _DAT_003f9c00 =
         *(ushort *)(&hard_cut1 + iVar2) +
         (short)((esst_sga08mdub & 0xffff) *
                 ((uint)*(ushort *)(&hard_cut2 + iVar2) - (uint)*(ushort *)(&hard_cut1 + iVar2)) >>
                0x10);
    iVar2 = (esst_sga08mdub >> 0x10) * 2;
    _DAT_003f9c02 =
         *(ushort *)(&DAT_001c9b26 + iVar2) +
         (short)((esst_sga08mdub & 0xffff) *
                 ((uint)*(ushort *)(&DAT_001c9b28 + iVar2) -
                 (uint)*(ushort *)(&DAT_001c9b26 + iVar2)) >> 0x10);
  }
  else {
    DAT_003f9bd9 = DAT_001d2320;
    DAT_003f9bda = ZINMAXLR;
    DAT_003f9bdb = DAT_001d2321;
    _DAT_003f9c00 = _DAT_001d2324;
    _DAT_003f9c02 = _DAT_001d234e;
  }
  mired1 = func_0xff21a1e0(DAT_001d2326,&DAT_001d2328,DAT_001d2327,&DAT_001d2330,&DAT_001d2336,
                           miist_w,gangi);
  return;
}

