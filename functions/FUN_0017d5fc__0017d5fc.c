/*
 * Program: n42.bin
 * Function: FUN_0017d5fc
 * Entry: 0017d5fc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017d5fc(void)

{
  short sVar1;
  ushort uVar2;
  word wVar3;
  int iVar4;
  
  if ((CLRSHK >> 4 & 1) == 0) {
    dlahini_w = 0;
  }
  else {
    dlahini_w = _DLAHINI;
  }
  if ((B_st == '\0') || ((CLRSHK >> 3 & 1) == 0)) {
    B_dlahini = B_dlahini & ~B_dlahini;
  }
  else {
    B_dlahini = B_dlahini | B_dlahini;
  }
  if ((CLRSHK >> 4 & 1) == 0) {
    dlahini2_w = 0;
  }
  else {
    dlahini2_w = _DLAHINI2;
  }
  if ((B_dlahini & B_dlahini) == 0) {
    B_dlahini = B_dlahini & ~B_dlahini2;
  }
  else {
    B_dlahini = B_dlahini | B_dlahini2;
  }
  if (B_clradlrh != '\0') {
    _DAT_003fb670 = (int)(short)dlahini_w << 0x10;
    _dlahico_w = dlahini_w;
    _DAT_003fb674 = (int)(short)dlahini2_w << 0x10;
    _dlahico2_w = dlahini2_w;
  }
  B_clradlrh = 0;
  usrhk = func_0xff2196d0(&DAT_001d2718,nmot,rl);
  usrhk_w = (short)(((uint)usrhk * 0x2c00) / 0x2931) + 0xa4;
  zlasohf_w = func_0xff2189bc(0x1d274a,_ml_w);
  lasolhk_w = func_0xff2189bc(&LALIUSHK,usrhk_w);
  uVar2 = lahkf_w;
  if (((CLRSHK >> 5 & 1) == 0) && (uVar2 = lasonhk_w, (CLRSHK >> 6 & 1) != 0)) {
    uVar2 = lahkm_w;
  }
  iVar4 = ((uint)lasolhk_w - (int)(short)dlahkab_w) - (uint)uVar2;
  if (iVar4 < -0x8000) {
    iVar4 = -0x8000;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  dlashkm_w = (word)iVar4;
  esst_sm109lhsw = func_0xff21b2fc(&DAT_001d27be,(int)(short)dlashkm_w);
  iVar4 = (esst_sm109lhsw >> 0x10) * 2;
  dlashki_w = *(short *)(&DAT_001d26b8 + iVar4) +
              (short)((esst_sm109lhsw & 0xffff) *
                      ((int)*(short *)(iVar4 + 0x1d26ba) - (int)*(short *)(&DAT_001d26b8 + iVar4))
                     >> 0x10);
  iVar4 = (esst_sm109lhsw >> 0x10) * 2;
  dlashkp_w = *(short *)(&DAT_001d26dc + iVar4) +
              (short)((esst_sm109lhsw & 0xffff) *
                      ((int)*(short *)(iVar4 + 0x1d26de) - (int)*(short *)(&DAT_001d26dc + iVar4))
                     >> 0x10);
  if ((lrshkebAusBits & B_lrhkp) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)(short)dlashkp_w;
  }
  wVar3 = (word)((uint)(iVar4 * (short)((ushort)(byte)(&DAT_001d2710)[esst_sml08lhub >> 0x10] +
                                        (short)((esst_sml08lhub & 0xffff) *
                                                ((uint)(byte)(&DAT_001d2711)[esst_sml08lhub >> 0x10]
                                                - (uint)(byte)(&DAT_001d2710)
                                                              [esst_sml08lhub >> 0x10]) >> 0x10) &
                                       0xff)) >> 8);
  dlhkpml_w = wVar3;
  uVar2 = func_0xff2187cc(&DAT_001d2790,avkatf);
  iVar4 = (int)(short)wVar3 * (int)(short)(uVar2 & 0xff) >> 6;
  if (iVar4 < -0x8000) {
    iVar4 = -0x8000;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  dlahpco_w = (word)iVar4;
  if ((B_dlahini & B_dlahini) == 0) {
    if ((lrshkebAusBits & B_lrhk) != 0) {
      iVar4 = (esst_sml08lhub >> 0x10) * 2;
      func_0xff2222f0(&DAT_003fb670,(int)(short)dlashki_w,
                      (uint)*(ushort *)(&DAT_001d2700 + iVar4) +
                      ((int)((esst_sml08lhub & 0xffff) *
                            ((uint)*(ushort *)(&DAT_001d2702 + iVar4) -
                            (uint)*(ushort *)(&DAT_001d2700 + iVar4))) >> 0x10) & 0xffff,
                      (int)_LRHIMN,(int)_LRHIMX);
    }
  }
  else {
    _DAT_003fb670 = (int)(short)dlahini_w << 0x10;
  }
  _dlahico_w = (word)((uint)_DAT_003fb670 >> 0x10);
  usrhk2 = usrhk;
  usrhk2_w = usrhk_w;
  lasolhk2_w = func_0xff2189bc(&LALIUSHK2,usrhk_w);
  zlasohf2_w = func_0xff2189bc(&DAT_001d276c,_ml_w);
  uVar2 = lahkf2_w;
  if (((CLRSHK >> 5 & 1) == 0) && (uVar2 = lasonhk2_w, (CLRSHK >> 6 & 1) != 0)) {
    uVar2 = lahkm2_w;
  }
  iVar4 = ((uint)lasolhk2_w - (int)(short)dlahkab2_w) - (uint)uVar2;
  if (iVar4 < -0x8000) {
    iVar4 = -0x8000;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  dlashkm2_w = (word)iVar4;
  esst_sm209lhsw = func_0xff21b2fc(&DAT_001d27d2,(int)(short)dlashkm2_w);
  iVar4 = (esst_sm209lhsw >> 0x10) * 2;
  dlashki2_w = *(short *)(&DAT_001d26ca + iVar4) +
               (short)((esst_sm209lhsw & 0xffff) *
                       ((int)*(short *)(&DAT_001d26cc + iVar4) -
                       (int)*(short *)(&DAT_001d26ca + iVar4)) >> 0x10);
  iVar4 = (esst_sm209lhsw >> 0x10) * 2;
  sVar1 = *(short *)(iVar4 + 0x1d26ee);
  dlashkp2_w = sVar1 + (short)((esst_sm209lhsw & 0xffff) *
                               ((int)*(short *)(&DAT_001d26f0 + iVar4) - (int)sVar1) >> 0x10);
  if ((B_lrhkzp2 & B_lrhkp2) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)(short)dlashkp2_w;
  }
  wVar3 = (word)((uint)(iVar4 * (short)((ushort)(byte)(&DAT_001d2710)[esst_sml08lhub >> 0x10] +
                                        (short)((esst_sml08lhub & 0xffff) *
                                                ((uint)(byte)(&DAT_001d2711)[esst_sml08lhub >> 0x10]
                                                - (uint)(byte)(&DAT_001d2710)
                                                              [esst_sml08lhub >> 0x10]) >> 0x10) &
                                       0xff)) >> 8);
  dlhkpml2_w = wVar3;
  uVar2 = func_0xff2187cc(&DAT_001d27a4,avkatf2);
  iVar4 = (int)(short)wVar3 * (int)(short)(uVar2 & 0xff) >> 6;
  if (iVar4 < -0x8000) {
    iVar4 = -0x8000;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  dlahpco2_w = (word)iVar4;
  if ((B_dlahini & B_dlahini2) == 0) {
    if ((B_lrhkzp2 & B_lrhk2) != 0) {
      iVar4 = (esst_sml08lhub >> 0x10) * 2;
      func_0xff2222f0(&DAT_003fb674,(int)(short)dlashki2_w,
                      (uint)*(ushort *)(&DAT_001d2700 + iVar4) +
                      ((int)((esst_sml08lhub & 0xffff) *
                            ((uint)*(ushort *)(&DAT_001d2702 + iVar4) -
                            (uint)*(ushort *)(&DAT_001d2700 + iVar4))) >> 0x10) & 0xffff,
                      (int)_LRHIMN,(int)_LRHIMX);
    }
  }
  else {
    _DAT_003fb674 = (int)(short)dlahini2_w << 0x10;
  }
  _dlahico2_w = (short)((uint)_DAT_003fb674 >> 0x10);
  return;
}

