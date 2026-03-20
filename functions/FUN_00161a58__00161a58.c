/*
 * Program: n42.bin
 * Function: FUN_00161a58
 * Entry: 00161a58
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00161a58(void)

{
  ENUM_005b908a EVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  word wVar7;
  word wVar10;
  int iVar8;
  uint uVar9;
  ushort local_198;
  ushort local_194;
  ushort local_190 [6];
  uint local_184;
  uint local_160;
  byte local_141;
  byte local_fe;
  byte *local_d0;
  ushort *local_a8;
  ENUM_005b908a *local_a0;
  int local_60;
  ushort local_58 [2];
  ushort *local_54;
  ushort local_50 [2];
  ushort *local_4c;
  
  uVar5 = _DAT_003fdf60;
  uVar4 = _DAT_003fdf5e;
  local_198 = _DAT_003fdf5e;
  local_194 = _DAT_003fdf60;
  local_198._0_1_ = (byte)(_DAT_003fdf5e >> 8);
  local_194._0_1_ = (byte)(_DAT_003fdf60 >> 8);
  if ((B_cdswe & B_cdlsv) == 0) {
    local_198 = _DAT_003fdf5e & 0xd0fc | 0x2002;
    local_194 = _DAT_003fdf60 & 0xd0fc | 0x2002;
    goto LAB_00166288;
  }
  wVar7 = dlahi_w;
  if ((short)dlahi_w < 0) {
    if (dlahi_w == 0x8000) {
      wVar7 = 0x7fff;
    }
    else {
      wVar7 = -dlahi_w;
    }
  }
  B_elaof = _DAT_001cf0b4 <= (short)wVar7;
  if (((B_stend == '\0') || ((DAT_005b81a4 & 4) != 0)) || (!(bool)B_elaof)) {
    DAT_005b81a4 = DAT_005b81a4 & 0xf7;
  }
  else {
    DAT_005b81a4 = DAT_005b81a4 | 8;
  }
  if (((DAT_005b81a4 & 8) == 0) || (DAT_005b81be != 0)) {
    if (((lrshkebAusBits & B_lrhk) != 0) && ((DAT_003fdf49 >> 1 & 1) != 0)) {
      if (DAT_005b81be == 0) {
        DAT_005b81a4 = DAT_005b81a4 & 0xef;
      }
      else {
        DAT_005b81be = DAT_005b81be + -1;
      }
    }
  }
  else {
    DAT_005b81be = _TVLSUEK;
    DAT_005b81a4 = DAT_005b81a4 | 0x10;
  }
  if (((bool)B_elaof) &&
     ((((DAT_005b81a4 & 0x10) == 0 && (B_stend != '\0')) || (((bool)B_elaof && (B_falsu != '\0')))))
     ) {
    if (DAT_005b81c8 == 0) {
      B_luft = B_luft | B_maxflsu;
    }
    else {
      DAT_005b81c8 = DAT_005b81c8 + -1;
      B_luft = B_luft & (B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft);
    }
  }
  else {
    DAT_005b81c8 = _TVLSUOF;
    B_luft = B_luft & (B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft);
  }
  if (_DAT_001cf0cc < ushk_w) {
    B_lsumra = B_lsumra & (B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb);
  }
  else {
    B_lsumra = B_lsumra | B_lshkpmr;
  }
  if (ushk_w < _DAT_001cf0ca) {
    B_dylsu = B_dylsu & (B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf);
  }
  else {
    B_dylsu = B_dylsu | B_lshkpft;
  }
  local_a8 = (ushort *)&DAT_001cf0ae;
  if ((_DAT_001cf0ae < lamsoni_w) && (lamsoni_w < _DAT_001cf0b0)) {
    B_lsumra = B_lsumra | B_lsulone;
  }
  else {
    B_lsumra = B_lsumra & (B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsumr|B_lsumra|B_lsumrb);
  }
  if (lamsoni_w < _DAT_001cf0a4) {
    B_luft = B_luft & (B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsurfc|B_luft|B_maxflsu);
  }
  else {
    B_luft = B_luft | B_lsupmr;
  }
  uVar6 = func_0xff217f20(_DAT_001c1c10,lamsoni_w,DAT_005b81e4,_DAT_005b81e4 & 0xffff);
  DAT_005b81e4 = (ushort)(uVar6 >> 0x10);
  if (_DAT_001cf0a2 < DAT_005b81e4) {
    B_luft = B_luft & (B_lsumx|B_lsuna|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu);
  }
  else {
    B_luft = B_luft | B_lsupft;
  }
  if ((((B_evloc == 0) && (B_stend != '\0')) && (tavvkm_w < _DAT_001cf0be)) &&
     ((_DAT_001cf0ba <= usvkk_w && (B_dvvtobd == 0)))) {
    if (DAT_005b81b2 == '\0') {
      B_lsumra = B_lsumra | B_lsuabgl;
    }
    else {
      DAT_005b81b2 = DAT_005b81b2 + -1;
    }
  }
  else {
    DAT_005b81b2 = TVLSUTRIM;
  }
  if ((((B_evloc == 0) || (_DAT_001cf0ba <= usvkk_w)) ||
      ((usvkk_w <= _DAT_001cf0b8 || (((B_sls != '\0' || (B_atmtpa == '\0')) || (B_stend == '\0')))))
      ) || (B_dvvtobd != 0)) {
    DAT_005b81b3 = TVLSULUFT;
    DAT_005b81a8 = DAT_005b81a8 & 0xdf;
  }
  else if (DAT_005b81b3 == '\0') {
    DAT_005b81a8 = DAT_005b81a8 | 0x20;
  }
  else {
    DAT_005b81b3 = DAT_005b81b3 + -1;
  }
  if ((DAT_003fc1c7 == '\0') && (DAT_003fc1c8 != '\0')) {
    DAT_005b81a8 = DAT_005b81a8 | 1;
  }
  else {
    DAT_005b81a8 = DAT_005b81a8 & 0xfe;
  }
  if ((DAT_003fc1c7 == '\0') || (DAT_003fc1c8 == '\0')) {
    DAT_005b81a8 = DAT_005b81a8 & 0xfd;
  }
  else {
    DAT_005b81a8 = DAT_005b81a8 | 2;
  }
  if (DAT_003fc1c8 == '\0') {
    DAT_005b81a8 = DAT_005b81a8 | 4;
  }
  else {
    DAT_005b81a8 = DAT_005b81a8 & 0xfb;
  }
  if (((DAT_005b81a8 & 0x20) == 0) || (((DAT_005b81a8 & 2) == 0 && ((DAT_005b81a8 & 4) == 0)))) {
    DAT_005b81a8 = DAT_005b81a8 & 0xf7;
  }
  else {
    DAT_005b81a8 = DAT_005b81a8 | 0x48;
  }
  if (((DAT_005b81a8 & 0x40) != 0) && (DAT_005b81ca != 0)) {
    DAT_005b81ca = DAT_005b81ca + -1;
  }
  if ((((DAT_005b81a8 & 0x20) == 0) || ((DAT_005b81a8 & 1) == 0)) &&
     (((DAT_005b81a8 & 8) == 0 || (DAT_005b81ca != 0)))) {
    B_noflsv = B_noflsv & ~B_lsultk;
  }
  else {
    B_noflsv = B_noflsv | B_lsultk;
  }
  if ((B_noflsv & B_lsultk) != 0) {
    B_luft = B_luft | B_luft;
  }
  if ((((B_stend == '\0') || (B_evloc == 0)) || (uulsuv_w < _DAT_001cf0ba)) || (B_dvvtobd != 0)) {
    DAT_005b81b4 = DAT_001cf073;
    B_luft = B_luft & (B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu);
  }
  else if (DAT_005b81b4 == '\0') {
    B_luft = B_luft | B_lsumx;
  }
  else {
    DAT_005b81b4 = DAT_005b81b4 + -1;
  }
  if ((B_sbbvk == '\0') || (B_sbbhk == '\0')) {
    B_noflsv = B_noflsv & ~B_plenvh;
  }
  else {
    B_noflsv = B_noflsv | B_plenvh;
  }
  if (((B_dylsu & B_lshkpft) ==
       ~(B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft)) &&
     ((B_lsumra & B_lshkpmr) ==
      ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb))) {
    if (DAT_005b81b1 == '\0') {
      DAT_005b81a4 = DAT_005b81a4 & 0xfd;
    }
    else {
      DAT_005b81b1 = DAT_005b81b1 + -1;
      DAT_005b81a4 = DAT_005b81a4 | 2;
    }
  }
  else {
    DAT_005b81a4 = DAT_005b81a4 | 2;
    DAT_005b81b1 = DAT_001cf078;
  }
  if (((((B_lrs == '\0') || (B_lsuab != '\0')) ||
       ((B_lsumra & B_lsulone) ==
        ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb))) ||
      ((_DAT_001cf0a6 < lamsons_w && (lamsons_w < _DAT_001cf0a8)))) || (B_dvvtobd != 0)) {
    B_noflsv = B_noflsv & ~B_npsna;
  }
  else {
    B_noflsv = B_noflsv | B_npsna;
  }
  if ((((B_ehlsu == '\0') &&
       ((B_lsumra & B_lsulone) !=
        ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb))) &&
      ((B_lsuab == '\0' &&
       (((B_sbbvk != '\0' && ((DAT_005b81a4 & 2) != 0)) && (_DAT_001cf0b2 <= msabg_w)))))) &&
     (B_dvvtobd == 0)) {
    B_noflsv = B_noflsv | B_npvshns;
  }
  else {
    B_noflsv = B_noflsv & ~B_npvshns;
  }
  if ((((lrshkebAusBits & B_lrhkp) == 0) || ((DAT_003fdf5b >> 1 & 1) == 0)) ||
     ((DAT_003fdf49 >> 1 & 1) == 0)) {
    B_dylsu = B_dylsu & (B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_lshkpft);
  }
  else {
    B_dylsu = B_dylsu | B_helsuf;
  }
  wVar10 = dlahp_w;
  if ((short)dlahp_w < 0) {
    if (dlahp_w == 0x8000) {
      wVar10 = 0x7fff;
    }
    else {
      wVar10 = -dlahp_w;
    }
  }
  if ((short)dlahp_w < 1) {
    if ((-1 < (short)dlahp_w) || (-1 < (short)dlahi_w)) goto LAB_001624f4;
LAB_001624e8:
    DAT_005b81a8 = DAT_005b81a8 | 0x10;
  }
  else {
    if (0 < (short)dlahi_w) goto LAB_001624e8;
LAB_001624f4:
    DAT_005b81a8 = DAT_005b81a8 & 0xef;
  }
  if (((DAT_005b81a8 & 0x10) == 0) || ((short)wVar10 <= _DAT_001cf07e)) {
    iVar8 = (int)(short)wVar10 - (int)_DAT_001cf07e;
    if (iVar8 < -0x8000) {
      iVar8 = -0x8000;
    }
    else if (0x7fff < iVar8) {
      iVar8 = 0x7fff;
    }
    if ((short)wVar7 < (short)iVar8) goto LAB_00162558;
LAB_00162580:
    DAT_005b81a8 = DAT_005b81a8 & 0x7f;
  }
  else {
LAB_00162558:
    if (((DAT_003fdf5b >> 1 & 1) == 0) || ((lrshkebAusBits & B_lrhkp) == 0)) goto LAB_00162580;
    DAT_005b81a8 = DAT_005b81a8 | 0x80;
  }
  if (((((DAT_005b81a8 & 0x80) == 0) || ((DAT_003fdf49 >> 1 & 1) == 0)) && (B_frmax == '\0')) ||
     ((((B_luft & B_lsupmr) ==
        ~(B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu) ||
       ((B_dylsu & B_lshkpft) ==
        ~(B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft))) ||
      (((B_noflsv & B_plenvh) == 0 || (B_dvvtobd != 0)))))) {
    B_lsumra = B_lsumra & (B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumrb);
  }
  else {
    B_lsumra = B_lsumra | B_lsumra;
  }
  if ((((B_dvvtobd == 0) && ((B_noflsv & B_plenvh) != 0)) &&
      (((B_dylsu & B_lshkpft) !=
        ~(B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft) &&
       (B_frmin == '\0')))) &&
     ((((DAT_005b81a8 & 0x80) != 0 && ((DAT_001cb33e & 4) != 0)) ||
      ((B_lrs != '\0' && (((DAT_003fdf5b >> 1 & 1) != 0 && (_DAT_001cf0ac < lamsons_w)))))))) {
    DAT_005b81a9 = DAT_005b81a9 | 8;
  }
  else {
    DAT_005b81a9 = DAT_005b81a9 & 0xf7;
  }
  if ((DAT_005b81a9 & 8) == 0) {
    DAT_005b81ba = TVLSUPER;
    B_lsumra = B_lsumra & (B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra);
  }
  else if (DAT_005b81ba == '\0') {
    B_lsumra = B_lsumra | B_lsumrb;
  }
  else {
    DAT_005b81ba = DAT_005b81ba + -1;
  }
  if (((((B_dvvtobd == 0) && ((B_noflsv & B_plenvh) != 0)) && (B_frmax == '\0')) &&
      ((B_lsumra & B_lshkpmr) !=
       ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb))) &&
     ((((B_lrs != '\0' && ((DAT_003fdf5b >> 1 & 1) != 0)) && (lamsons_w < _DAT_001cf0aa)) ||
      (((DAT_001cb33e & 4) != 0 && ((DAT_005b81a8 & 0x80) != 0)))))) {
    DAT_005b81a9 = DAT_005b81a9 | 0x10;
  }
  else {
    DAT_005b81a9 = DAT_005b81a9 & 0xef;
  }
  if ((DAT_005b81a9 & 0x10) == 0) {
    DAT_005b81bb = TVLSUPER;
    B_lsumra = B_lsumra & (B_lshkpmr|B_lsuabgl|B_lsufta|B_lsulone|B_lsumr|B_lsumra|B_lsumrb);
  }
  else if (DAT_005b81bb == '\0') {
    B_lsumra = B_lsumra | B_lsuftb;
  }
  else {
    DAT_005b81bb = DAT_005b81bb + -1;
  }
  if (((((B_noflsv & B_plenvh) == 0) ||
       ((B_lsumra & B_lshkpmr) ==
        ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb))) ||
      ((B_luft & B_lsupft) == ~(B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu)
      )) || (((B_frmin == '\0' && (((DAT_003fdf49 >> 1 & 1) == 0 || ((DAT_005b81a8 & 0x80) == 0))))
             || (B_dvvtobd != 0)))) {
    B_lsumra = B_lsumra & (B_lshkpmr|B_lsuabgl|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb);
  }
  else {
    B_lsumra = B_lsumra | B_lsufta;
  }
  if ((DAT_005b81a6 & 8) == 0) {
    DAT_005b81a6 = DAT_005b81a6 & 0xef;
  }
  else {
    DAT_005b81a6 = DAT_005b81a6 | 0x10;
  }
  if (((B_lsumra & B_lsumra) ==
       ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb)) ||
     (_DAT_001cf090 < imlmra_w)) {
    if (DAT_005b81b5 == '\0') {
      DAT_005b81a6 = DAT_005b81a6 & 0xf7;
    }
    else {
      DAT_005b81b5 = DAT_005b81b5 + -1;
      DAT_005b81a6 = DAT_005b81a6 | 8;
    }
  }
  else {
    DAT_005b81a6 = DAT_005b81a6 | 8;
    DAT_005b81b5 = DAT_001cf079;
  }
  _DAT_005b81e4 = uVar6;
  if (((DAT_005b81a6 & 8) == 0) || ((DAT_005b81a6 & 0x10) != 0)) {
    if ((B_lsumra & B_lsumra) !=
        ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb)) {
      uVar6 = func_0xff217da0(0x199a,msabg_w,DAT_005b81f4,_DAT_005b81f4 & 0xffff);
      DAT_005b81f4 = (word)(uVar6 >> 0x10);
      imlmra_w = DAT_005b81f4;
      _DAT_005b81f4 = uVar6;
    }
  }
  else {
    _DAT_005b81f4 = 0;
    imlmra_w = 0;
  }
  if ((DAT_005b81a6 & 0x20) == 0) {
    DAT_005b81a6 = DAT_005b81a6 & 0xbf;
  }
  else {
    DAT_005b81a6 = DAT_005b81a6 | 0x40;
  }
  if (((B_vlsumrb & 1) == 0) &&
     ((B_lsumra & B_lsumrb) !=
      ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb))) {
    DAT_005b81a6 = DAT_005b81a6 | 0x20;
    DAT_005b81b6 = DAT_001cf079;
  }
  else if (DAT_005b81b6 == '\0') {
    DAT_005b81a6 = DAT_005b81a6 & 0xdf;
  }
  else {
    DAT_005b81b6 = DAT_005b81b6 + -1;
    DAT_005b81a6 = DAT_005b81a6 | 0x20;
  }
  if (((((DAT_005b81a6 & 0x20) == 0) || ((DAT_005b81a6 & 0x40) != 0)) ||
      ((DAT_005b81a7 & 0x80) == 0)) &&
     ((((DAT_005b81a5 & 4) == 0 && ((DAT_003fdf5b & 1) == 0)) && ((DAT_003fdf49 & 1) == 0)))) {
    if ((B_lsumra & B_lsumrb) !=
        ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb)) {
      uVar6 = func_0xff217da0(0x199a,msabg_w,DAT_005b81f8._0_2_,DAT_005b81f8 & 0xffff);
      DAT_005b81f8._0_2_ = (word)(uVar6 >> 0x10);
      imlmrb_w = DAT_005b81f8._0_2_;
      DAT_005b81f8 = uVar6;
      goto LAB_00162b80;
    }
LAB_00162b90:
    if ((DAT_005b86f5 & 0x40) != 0) goto LAB_00162bbc;
    DAT_005b81a7 = DAT_005b81a7 | 0x80;
  }
  else {
    DAT_005b81f8 = 0;
    imlmrb_w = 0;
LAB_00162b80:
    if ((B_lsumra & B_lsumrb) ==
        ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb))
    goto LAB_00162b90;
LAB_00162bbc:
    DAT_005b81a7 = DAT_005b81a7 & 0x7f;
  }
  if (_DAT_001cf094 < imlmrb_w) {
    B_vlsumrb = B_vlsumrb | 1;
  }
  else {
    B_vlsumrb = B_vlsumrb & 0xfe;
  }
  if (((B_vlsumrb & 1) != 0) && ((DAT_005b86f0 & 1) != 0)) {
    DAT_005b81a5 = DAT_005b81a5 | 4;
  }
  if (((DAT_005b81a5 & 4) == 0) && (imlmra_w <= _DAT_001cf090)) {
    B_lsumra = B_lsumra & (B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumra|B_lsumrb);
  }
  else {
    B_lsumra = B_lsumra | B_lsumr;
  }
  if ((DAT_005b81a7 & 2) == 0) {
    DAT_005b81a7 = DAT_005b81a7 & 0xfb;
  }
  else {
    DAT_005b81a7 = DAT_005b81a7 | 4;
  }
  if (((B_lsumra & B_lsufta) ==
       ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb)) ||
     (_DAT_001cf090 < imlfta_w)) {
    if (DAT_005b81b7 == '\0') {
      DAT_005b81a7 = DAT_005b81a7 & 0xfd;
    }
    else {
      DAT_005b81b7 = DAT_005b81b7 + -1;
      DAT_005b81a7 = DAT_005b81a7 | 2;
    }
  }
  else {
    DAT_005b81a7 = DAT_005b81a7 | 2;
    DAT_005b81b7 = DAT_001cf079;
  }
  if (((DAT_005b81a7 & 2) == 0) || ((DAT_005b81a7 & 4) != 0)) {
    if ((B_lsumra & B_lsufta) !=
        ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb)) {
      uVar6 = func_0xff217da0(0x199a,msabg_w,DAT_005b81fc,_DAT_005b81fc & 0xffff);
      DAT_005b81fc = (word)(uVar6 >> 0x10);
      imlfta_w = DAT_005b81fc;
      _DAT_005b81fc = uVar6;
    }
  }
  else {
    _DAT_005b81fc = 0;
    imlfta_w = 0;
  }
  if ((DAT_005b81a7 & 8) == 0) {
    DAT_005b81a7 = DAT_005b81a7 & 0xef;
  }
  else {
    DAT_005b81a7 = DAT_005b81a7 | 0x10;
  }
  if (((B_vlsuftb2 & 1) == 0) &&
     ((B_lsumra & B_lsuftb) !=
      ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb))) {
    DAT_005b81a7 = DAT_005b81a7 | 8;
    DAT_005b81b8 = DAT_001cf079;
  }
  else if (DAT_005b81b8 == '\0') {
    DAT_005b81a7 = DAT_005b81a7 & 0xf7;
  }
  else {
    DAT_005b81b8 = DAT_005b81b8 + -1;
    DAT_005b81a7 = DAT_005b81a7 | 8;
  }
  if ((((((DAT_005b81a7 & 8) == 0) || ((DAT_005b81a7 & 0x10) != 0)) || ((DAT_005b81a5 & 0x40) == 0))
      && (((DAT_005b81a7 & 0x20) == 0 && ((DAT_003fdf5b & 1) == 0)))) &&
     (((DAT_003fdf49 & 1) == 0 && ((DAT_005b86f0 & 0x10) == 0)))) {
    if ((B_lsumra & B_lsuftb) !=
        ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb)) {
      uVar6 = func_0xff217da0(0x199a,msabg_w,DAT_005b8200._0_2_,DAT_005b8200 & 0xffff);
      DAT_005b8200._0_2_ = (word)(uVar6 >> 0x10);
      imlftb_w = DAT_005b8200._0_2_;
      DAT_005b8200 = uVar6;
    }
  }
  else {
    DAT_005b8200 = 0;
    imlftb_w = 0;
  }
  if (((DAT_005b86f5 & 0x40) == 0) &&
     ((B_lsumra & B_lsuftb) ==
      ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb))) {
    DAT_005b81a5 = DAT_005b81a5 | 0x40;
  }
  else {
    DAT_005b81a5 = DAT_005b81a5 & 0xbf;
  }
  if (_DAT_001cf094 < imlftb_w) {
    B_vlsuftb2 = B_vlsuftb2 | 1;
  }
  else {
    B_vlsuftb2 = B_vlsuftb2 & 0xfe;
  }
  if (((B_vlsuftb2 & 1) != 0) && ((DAT_005b86f0 & 1) != 0)) {
    DAT_005b81a7 = DAT_005b81a7 | 0x20;
  }
  if (((DAT_005b81a7 & 0x20) == 0) && (imlfta_w <= _DAT_001cf090)) {
    B_luft = B_luft & (B_lsumx|B_lsuna|B_lsupft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu);
  }
  else {
    B_luft = B_luft | B_lsuft;
  }
  local_a0 = &B_luft;
  if (((B_luft & B_lsuft) == ~(B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu))
     && ((B_vlsuftb2 & 1) == 0)) {
    DAT_005b81a7 = DAT_005b81a7 & 0xbf;
  }
  else {
    DAT_005b81a7 = DAT_005b81a7 | 0x40;
  }
  if (((((B_fthsv & 0xf) == 8) && ((local_198._0_1_ & 0xf) == 8)) || ((B_noflsv & B_npsna) != 0)) ||
     ((B_noflsv & B_npvshns) != 0)) {
    DAT_005b81a6 = DAT_005b81a6 | 4;
  }
  else {
    DAT_005b81a6 = DAT_005b81a6 & 0xfb;
  }
  if ((DAT_005b81a6 & 1) == 0) {
    DAT_005b81a6 = DAT_005b81a6 & 0xfd;
  }
  else {
    DAT_005b81a6 = DAT_005b81a6 | 2;
  }
  if (((DAT_005b81a6 & 4) == 0) ||
     ((B_luft & B_lsuna) != ~(B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu)))
  {
    if (DAT_005b81b9 == '\0') {
      DAT_005b81a6 = DAT_005b81a6 & 0xfe;
    }
    else {
      DAT_005b81b9 = DAT_005b81b9 + -1;
      DAT_005b81a6 = DAT_005b81a6 | 1;
    }
  }
  else {
    DAT_005b81a6 = DAT_005b81a6 | 1;
    DAT_005b81b9 = DAT_001cf079;
  }
  if ((((DAT_005b81a6 & 1) == 0) || ((DAT_005b81a6 & 2) != 0)) &&
     ((B_lsumra & B_lsulone) !=
      ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb))) {
    if ((DAT_005b81a6 & 4) != 0) {
      uVar6 = func_0xff217da0(0x199a,msabg_w,DAT_005b81ec._0_2_,DAT_005b81ec & 0xffff);
      DAT_005b81ec._0_2_ = (word)(uVar6 >> 0x10);
      imlna_w = DAT_005b81ec._0_2_;
      DAT_005b81ec = uVar6;
    }
  }
  else {
    DAT_005b81ec = 0;
    imlna_w = 0;
  }
  if (_DAT_001cf090 < imlna_w) {
    *local_a0 = *local_a0 | B_lsuna;
  }
  else {
    *local_a0 = *local_a0 & (B_lsumx|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu);
  }
  bVar2 = B_vlsumrb & 1;
  if (((B_vlsumrb & 1) == 0) && ((DAT_005b81a7 & 0x40) == 0)) {
    B_stcdyn = B_stcdyn & ~B_lrasp;
  }
  else {
    B_stcdyn = B_stcdyn | B_lrasp;
  }
  if ((((((B_lsumra & B_lsuabgl) ==
          ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb)) &&
        (EVar1 = *local_a0,
        (EVar1 & B_luft) == ~(B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu)))
       && ((EVar1 & B_lsumx) ==
           ~(B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu))) &&
      (((B_lsumra & B_lsumr) ==
        ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb) &&
       ((EVar1 & B_lsuft) == ~(B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu))
       ))) && ((EVar1 & B_lsuna) ==
               ~(B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu))) {
    B_stcdyn = B_stcdyn & ~B_nplflsu;
  }
  else if (B_dvvtobd == 0) {
    B_stcdyn = B_stcdyn | B_nplflsu;
  }
  else {
    B_stcdyn = B_stcdyn & ~B_nplflsu;
  }
  if ((B_lsumra & B_lsuabgl) !=
      ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb)) {
    lsunpstat = lsunpstat | 1;
  }
  EVar1 = *local_a0;
  if ((EVar1 & B_luft) != ~(B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu)) {
    lsunpstat = lsunpstat | 2;
  }
  if ((EVar1 & B_lsumx) != ~(B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu)) {
    lsunpstat = lsunpstat | 4;
  }
  if ((B_lsumra & B_lsumr) !=
      ~(B_lshkpmr|B_lsuabgl|B_lsufta|B_lsuftb|B_lsulone|B_lsumr|B_lsumra|B_lsumrb)) {
    lsunpstat = lsunpstat | 8;
  }
  if ((EVar1 & B_lsuft) != ~(B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu)) {
    lsunpstat = lsunpstat | 0x10;
  }
  if ((EVar1 & B_lsuna) != ~(B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu)) {
    lsunpstat = lsunpstat | 0x20;
  }
  if ((((B_dylsu & B_drlmx) ==
        ~(B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft)) ||
      (B_kh != '\0')) ||
     ((B_evloc == 0 || (((tnst_w < _DAT_001cf0c4 || (B_sls != '\0')) || (B_mdarv != 0)))))) {
    B_stcdyn = B_stcdyn & ~B_heatf;
  }
  else {
    B_stcdyn = B_stcdyn | B_heatf;
  }
  if ((((B_stcdyn & B_heatf) == 0) ||
      ((EVar1 & B_lsumx) != ~(B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu)))
     || (tavvkm_w < _DAT_001cf0bc)) {
    DAT_005b81c0 = 0;
    DAT_005b81a4 = DAT_005b81a4 & 0xfe;
  }
  else if (DAT_005b81c0 < _DAT_001cf0c0) {
    DAT_005b81c0 = DAT_005b81c0 + 1;
  }
  else {
    DAT_005b81a4 = DAT_005b81a4 | 1;
  }
  if ((DAT_005b81a4 & 1) == 0) {
    DAT_005b81c2 = 200;
  }
  else if (DAT_005b81c2 == 0) {
    B_dylsu = B_dylsu | B_helsu;
  }
  else {
    DAT_005b81c2 = DAT_005b81c2 + -1;
  }
  if ((EVar1 & B_lsurfc) == ~(B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu))
  {
    if (DAT_005b81c4 == 0) {
      *local_a0 = EVar1 | B_lsurfc;
    }
    else {
      DAT_005b81c4 = DAT_005b81c4 + -1;
    }
  }
  else {
    DAT_005b81c4 = 100;
    *local_a0 = EVar1 & (B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_luft|B_maxflsu);
  }
  if (DAT_001cf07c < zhklsu) {
    DAT_005b81a9 = DAT_005b81a9 | 1;
  }
  else {
    DAT_005b81a9 = DAT_005b81a9 & 0xfe;
  }
  if (((DAT_005b81a9 & 1) == 0) || (((DAT_005b81a8 & 2) == 0 && ((DAT_005b81a8 & 4) == 0)))) {
    DAT_005b81a9 = DAT_005b81a9 & 0xfd;
  }
  else {
    DAT_005b81a9 = DAT_005b81a9 | 6;
  }
  if (((DAT_005b81a9 & 4) != 0) && (DAT_005b81cc != 0)) {
    DAT_005b81cc = DAT_005b81cc + -1;
  }
  if ((((DAT_005b81a9 & 1) != 0) && ((DAT_005b81a8 & 1) != 0)) ||
     ((local_198 = uVar4, (DAT_005b81a9 & 2) != 0 && (DAT_005b81cc == 0)))) {
    B_noflsv = B_noflsv | B_sigflsu;
    local_198 = uVar4 & 0xd0fc | 0x2403;
  }
  uVar4 = local_198;
  if ((B_falsv == '\0') && (B_falsv2 == '\0')) {
    B_falsu = '\0';
  }
  else {
    B_falsu = '\x01';
  }
  uVar9 = (uint)rl;
  uVar6 = uVar9 - DAT_005b81af;
  if ((int)uVar6 < -0x80) {
    uVar6 = 0xffffff80;
  }
  else if (0x7f < (int)uVar6) {
    uVar6 = 0x7f;
  }
  DAT_005b81af = rl;
  if ((char)uVar6 < '\0') {
    uVar6 = -uVar6;
  }
  if ((uint)DAT_001cf06c < (uVar6 & 0xff)) {
    B_dylsu = B_dylsu & (B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft);
  }
  else {
    B_dylsu = B_dylsu | B_drlmx;
  }
  if (((((B_mdarv == 0) && (B_dsls == '\0')) && ((DAT_003fdfbb & 1) == 0)) &&
      (((DAT_003fdfb9 & 1) == 0 && (B_tehb == '\0')))) && (B_dvvtobd == 0)) {
    DAT_005b81a5 = DAT_005b81a5 | 0x20;
  }
  else {
    DAT_005b81a5 = DAT_005b81a5 & 0xdf;
  }
  if (((B_falsu == '\0') && (B_fa != '\0')) ||
     (((DAT_005b81a5 & 0x20) == 0 || (DAT_001cf06e < nmot)))) {
    B_dylsu = B_dylsu & (B_drlmx|B_dylsu|B_dylsuav|B_heallsv|B_helsu|B_helsuf|B_lshkpft);
  }
  else if (B_falsu == '\0') {
    if (((DAT_001cf072 < uVar9) && (uVar9 < DAT_001cf071)) && (DAT_001cf06f <= nmot)) {
      B_dylsu = B_dylsu | B_dylsuf;
    }
    else {
      B_dylsu = B_dylsu & (B_drlmx|B_dylsu|B_dylsuav|B_heallsv|B_helsu|B_helsuf|B_lshkpft);
    }
  }
  else if ((uVar9 < DAT_001cf070) || (nmot < DAT_001cf06d)) {
    B_dylsu = B_dylsu & (B_drlmx|B_dylsu|B_dylsuav|B_heallsv|B_helsu|B_helsuf|B_lshkpft);
  }
  else {
    B_dylsu = B_dylsu | B_dylsuf;
  }
  DAT_005b8730 = _DAT_001cf082;
  if (B_falsu == '\0') {
    DAT_005b8730 = 0;
  }
  local_60 = (int)((short)dlahi_w >> 3);
  uVar6 = (uint)lamsoni_w - local_60;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  else if (0xffff < (int)uVar6) {
    uVar6 = 0xffff;
  }
  if ((((B_frmax == '\0') && (B_frmin == '\0')) &&
      ((B_za != '\0' &&
       ((((B_dylsu & B_dylsuf) !=
          ~(B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft) &&
         ((B_dylsu & B_drlmx) !=
          ~(B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft))) &&
        ((uint)_DAT_001cf0a0 <= (uVar6 & 0xffff))))))) && ((uVar6 & 0xffff) <= (uint)_DAT_001cf09e))
  {
    B_stcdyn = B_stcdyn | B_stcdyn;
  }
  else {
    B_stcdyn = B_stcdyn & ~B_stcdyn;
  }
  if ((B_stcdyn & B_stcdyn) == 0) {
    DAT_005b81b0 = TVDRL;
    B_dylsu = B_dylsu & (B_drlmx|B_dylsu|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft);
  }
  else if (DAT_005b81b0 == '\0') {
    B_dylsu = B_dylsu | B_dylsuav;
  }
  else {
    DAT_005b81b0 = DAT_005b81b0 + -1;
  }
  if ((B_dylsu & B_dylsu) ==
      ~(B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft)) {
    B_noflsv = B_noflsv & ~B_minflsu;
  }
  else {
    if (B_falsu == '\0') {
      if (((DAT_003fdbb4 & 1) == 0) && ((B_noflsv & B_minflsu) == 0)) {
        DAT_005b81ce = _DAT_001cf086;
      }
      else {
        DAT_005b81ce = _DAT_001cf088;
      }
    }
    else {
      DAT_005b81ce = _DAT_001cf084;
    }
    if (DAT_005b81ce < _dynlsu_w) {
      B_noflsv = B_noflsv & ~B_minflsu;
    }
    else {
      B_noflsv = B_noflsv | B_minflsu;
    }
  }
  if ((((*local_a0 & B_maxflsu) ==
        ~(B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu)) &&
      ((B_stcdyn & B_nplflsu) == 0)) && ((B_noflsv & B_sigflsu) == 0)) {
    B_elsu = 0;
  }
  else {
    B_elsu = 1;
  }
  if (((((*local_a0 & B_maxflsu) ==
         ~(B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu)) &&
       ((B_noflsv & B_minflsu) == 0)) && ((B_stcdyn & B_nplflsu) == 0)) &&
     ((B_noflsv & B_sigflsu) == 0)) {
    DAT_005b81a4 = DAT_005b81a4 & 0x7f;
  }
  else {
    DAT_005b81a4 = DAT_005b81a4 | 0x80;
  }
  if ((((((DAT_005b81a4 & 0x80) == 0) && (B_elaof == '\0')) &&
       (((B_vlsuftb2 & 1) == 0 && (bVar2 == 0)))) &&
      (((B_dylsu & B_helsuf) !=
        ~(B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft) ||
       ((local_198._0_1_ & 0xf) != 8)))) && (B_sbbhk != '\0')) {
    B_noflsv = B_noflsv | B_noflsv;
  }
  else {
    B_noflsv = B_noflsv & ~B_noflsv;
  }
  if ((B_noflsv & B_noflsv) == 0) {
    _DAT_005b81f0 = 0;
    DAT_005b873c = 0;
  }
  else {
    uVar6 = func_0xff217da0(0x199a,msabg_w,DAT_005b81f0,_DAT_005b81f0 & 0xffff);
    DAT_005b81f0 = (ushort)(uVar6 >> 0x10);
    DAT_005b873c = DAT_005b81f0;
    _DAT_005b81f0 = uVar6;
  }
  cVar3 = B_falsu;
  if (B_falsu == '\0') {
    if (_DAT_001cf08a < DAT_005b873c) {
      B_dylsu = B_dylsu | B_heallsv;
    }
    else {
      B_dylsu = B_dylsu & (B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_helsu|B_helsuf|B_lshkpft);
    }
  }
  else if (_DAT_001cf08e < DAT_005b873c) {
    B_dylsu = B_dylsu | B_heallsv;
  }
  else {
    B_dylsu = B_dylsu & (B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_helsu|B_helsuf|B_lshkpft);
  }
  if (((((B_dylsu & B_heallsv) ==
         ~(B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft)) ||
       ((B_dylsu & B_helsu) ==
        ~(B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft))) ||
      ((B_dylsu & B_dylsu) ==
       ~(B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft))) ||
     (B_dvvtobd != 0)) {
    if ((DAT_005b81a4 & 0x80) != 0) {
      local_198 = local_198 & 0xdffd | 0x2002;
      if ((B_noflsv & B_minflsu) == 0) {
        if ((B_noflsv & B_sigflsu) == 0) {
          if ((*local_a0 & B_maxflsu) ==
              ~(B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu)) {
            if ((B_stcdyn & B_nplflsu) != 0) {
              local_198 = uVar4 & 0xd0fc | 0x2803;
            }
          }
          else {
            local_198 = uVar4 & 0xd0fc | 0x2103;
          }
        }
        else {
          local_198 = uVar4 & 0xd0fc | 0x2403;
        }
      }
      else {
        local_198 = uVar4 & 0xd0fc | 0x2203;
      }
    }
  }
  else {
    local_198 = local_198 & 0xd0fc | 0x2002;
  }
  if (DAT_003fbf3c != '\0') {
    DAT_005b81b2 = TVLSUTRIM;
    DAT_005b81b1 = '\0';
    DAT_005b81b3 = TVLSULUFT;
    lsunpstat = 0;
    B_stcdyn = B_stcdyn & ~(B_lrasp|B_nplflsu);
    local_141 = DAT_005b81a7 & 0xdf;
    _DAT_005b81f4 = 0;
    _DAT_005b81fc = 0;
    DAT_005b81ec = 0;
    DAT_005b81f8 = 0;
    DAT_005b8200 = 0;
    imlfta_w = 0;
    imlftb_w = 0;
    imlmra_w = 0;
    imlmrb_w = 0;
    imlna_w = 0;
    B_vlsuftb2 = B_vlsuftb2 & 0xfe;
    B_vlsumrb = B_vlsumrb & 0xfe;
    DAT_005b81a5 = DAT_005b81a5 & 0xfb;
    DAT_005b81cc = _TVTKLSU;
    DAT_005b81ca = _TVTKLSU;
    DAT_005b81a8 = DAT_005b81a8 & 0xbf;
    DAT_005b81ba = TVLSUPER;
    DAT_005b81bb = TVLSUPER;
    DAT_005b81a9 = DAT_005b81a9 & 0xe3;
    B_lsumra = B_lsumra & (B_lshkpmr|B_lsufta|B_lsulone|B_lsumr|B_lsumra);
    DAT_005b81c8 = _TVLSUOF;
    B_elaof = '\0';
    DAT_005b81be = _TVLSUEK;
    DAT_005b81c6 = 0;
    DAT_005b81c0 = 0;
    DAT_005b81c2 = 200;
    DAT_005b81a7 = DAT_005b81a7 & 0xde;
    zhklsu = 0;
    *local_a0 = *local_a0 & (B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr);
    DAT_005b81c4 = 100;
    DAT_005b81e8 = _IVDYNLSU;
    DAT_005b81ea = 0;
    _dynlsu_w = _IVDYNLSU;
    B_dylsu = B_dylsu & (B_dylsuav|B_dylsuf|B_heallsv|B_helsuf|B_lshkpft);
    B_noflsv = B_noflsv & ~(B_minflsu|B_sigflsu);
    DAT_005b81a4 = DAT_005b81a4 & 0xbf;
    lamsam_w = 0x1000;
    DAT_005b81b0 = TVDRL;
    anzdyn = 0;
    DAT_005b81d6 = 0;
    DAT_005b81d2 = 0x1000;
    DAT_005b81d0 = 0xf000;
  }
  wVar7 = dlahi2_w;
  if ((short)dlahi2_w < 0) {
    if (dlahi2_w == 0x8000) {
      wVar7 = 0x7fff;
    }
    else {
      wVar7 = -dlahi2_w;
    }
  }
  B_elaof2 = _DAT_001cf0b6 <= (short)wVar7;
  if (((B_stend == '\0') || ((DAT_005b81a4 & 4) != 0)) || (!(bool)B_elaof2)) {
    DAT_005b81ab = DAT_005b81ab & 0xfb;
  }
  else {
    DAT_005b81ab = DAT_005b81ab | 4;
  }
  if (((DAT_005b81ab & 4) == 0) || (DAT_005b8212 != 0)) {
    if (((B_lrhkzp2 & B_lrhk2) != 0) && ((DAT_003fdf4b >> 1 & 1) != 0)) {
      if (DAT_005b8212 == 0) {
        DAT_005b81ab = DAT_005b81ab & 0xf7;
      }
      else {
        DAT_005b8212 = DAT_005b8212 + -1;
      }
    }
  }
  else {
    DAT_005b8212 = _TVLSUEK;
    DAT_005b81ab = DAT_005b81ab | 8;
  }
  if (((bool)B_elaof2) &&
     ((((DAT_005b81ab & 8) == 0 && (B_stend != '\0')) || (((bool)B_elaof2 && (cVar3 != '\0')))))) {
    if (DAT_005b821a == 0) {
      B_noflsv2 = B_noflsv2 | B_maxflsu2;
    }
    else {
      DAT_005b821a = DAT_005b821a + -1;
      B_noflsv2 = B_noflsv2 & (B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_minflsu2|B_noflsv2);
    }
  }
  else {
    DAT_005b821a = _TVLSUOF;
    B_noflsv2 = B_noflsv2 & (B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_minflsu2|B_noflsv2);
  }
  if (_DAT_001cf0cc < ushk2_w) {
    B_lshkpft2 = B_lshkpft2 &
                 (B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2);
  }
  else {
    B_lshkpft2 = B_lshkpft2 | B_lshkpmr2;
  }
  if (ushk2_w < _DAT_001cf0ca) {
    B_lshkpft2 = B_lshkpft2 &
                 (B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpmr2);
  }
  else {
    B_lshkpft2 = B_lshkpft2 | B_lshkpft2;
  }
  if ((*local_a8 < lamsoni2_w) && (lamsoni2_w < _DAT_001cf0b0)) {
    B_lsumx2 = B_lsumx2 | B_lsulone2;
  }
  else {
    B_lsumx2 = B_lsumx2 & (B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2);
  }
  if (lamsoni2_w < _DAT_001cf0a4) {
    B_noflsv2 = B_noflsv2 & (B_lsuna2|B_lsuft2|B_lsupft2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2);
  }
  else {
    B_noflsv2 = B_noflsv2 | B_lsupmr2;
  }
  uVar6 = func_0xff217f20(_DAT_001c1c10,lamsoni2_w,DAT_005b8230,_DAT_005b8230 & 0xffff);
  DAT_005b8230 = (ushort)(uVar6 >> 0x10);
  if (_DAT_001cf0a2 < DAT_005b8230) {
    B_noflsv2 = B_noflsv2 & (B_lsuna2|B_lsuft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2);
  }
  else {
    B_noflsv2 = B_noflsv2 | B_lsupft2;
  }
  local_160 = (uint)B_evloc;
  if ((((local_160 == 0) && (B_stend != '\0')) && (tavvkm2_w < _DAT_001cf0be)) &&
     ((_DAT_001cf0ba <= usvkk2_w && (B_dvvtobd == 0)))) {
    if (DAT_005b8206 == '\0') {
      B_lsumx2 = B_lsumx2 | B_lsuabgl2;
    }
    else {
      DAT_005b8206 = DAT_005b8206 + -1;
    }
  }
  else {
    DAT_005b8206 = TVLSUTRIM;
  }
  if (((local_160 == 0) || (_DAT_001cf0ba <= usvkk2_w)) ||
     ((usvkk2_w <= _DAT_001cf0b8 ||
      ((((B_sls != '\0' || (B_atmtpa2 == '\0')) || (B_stend == '\0')) || (B_dvvtobd != 0)))))) {
    DAT_005b8207 = TVLSULUFT;
    DAT_005b81ad = DAT_005b81ad & 0xef;
  }
  else if (DAT_005b8207 == '\0') {
    DAT_005b81ad = DAT_005b81ad | 0x10;
  }
  else {
    DAT_005b8207 = DAT_005b8207 + -1;
  }
  if (((DAT_005b81ad & 0x10) == 0) || (((DAT_005b81a8 & 2) == 0 && ((DAT_005b81a8 & 4) == 0)))) {
    DAT_005b81a8 = DAT_005b81a8 & 0xf7;
  }
  else {
    DAT_005b81a8 = DAT_005b81a8 | 8;
    DAT_005b81ad = DAT_005b81ad | 0x20;
  }
  if (((DAT_005b81ad & 0x20) != 0) && (DAT_005b821c != 0)) {
    DAT_005b821c = DAT_005b821c + -1;
  }
  if ((((DAT_005b81ad & 0x10) == 0) || ((DAT_005b81a8 & 1) == 0)) &&
     (((DAT_005b81a8 & 8) == 0 || (DAT_005b821c != 0)))) {
    DAT_005b908d = DAT_005b908d & 0xf7;
  }
  else {
    DAT_005b908d = DAT_005b908d | 8;
  }
  if ((DAT_005b908d & 8) != 0) {
    B_noflsv2 = B_noflsv2 | B_luft2;
  }
  if ((((B_stend == '\0') || (local_160 == 0)) || (uulsuv2_w < _DAT_001cf0ba)) || (B_dvvtobd != 0))
  {
    DAT_005b8208 = DAT_001cf073;
    B_lsumx2 = B_lsumx2 & (B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2);
  }
  else if (DAT_005b8208 == '\0') {
    B_lsumx2 = B_lsumx2 | B_lsumx2;
  }
  else {
    DAT_005b8208 = DAT_005b8208 + -1;
  }
  if ((B_sbbvk2 == '\0') || (B_sbbhk2 == '\0')) {
    DAT_005b908d = DAT_005b908d & 0xfb;
  }
  else {
    DAT_005b908d = DAT_005b908d | 4;
  }
  if (((B_lshkpft2 & B_lshkpft2) ==
       ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2)) &&
     ((B_lshkpft2 & B_lshkpmr2) ==
      ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2))) {
    if (DAT_005b8205 == '\0') {
      DAT_005b81ab = DAT_005b81ab & 0xef;
    }
    else {
      DAT_005b8205 = DAT_005b8205 + -1;
      DAT_005b81ab = DAT_005b81ab | 0x10;
    }
  }
  else {
    DAT_005b81ab = DAT_005b81ab | 0x10;
    DAT_005b8205 = DAT_001cf078;
  }
  if ((((B_lrs2 == '\0') || (B_lsuab2 != '\0')) ||
      ((B_lsumx2 & B_lsulone2) ==
       ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2))) ||
     (((_DAT_001cf0a6 < lamsons2_w && (lamsons2_w < _DAT_001cf0a8)) || (B_dvvtobd != 0)))) {
    DAT_005b908d = DAT_005b908d & 0xfe;
  }
  else {
    DAT_005b908d = DAT_005b908d | 1;
  }
  if (((B_ehlsu2 == '\0') &&
      ((B_lsumx2 & B_lsulone2) !=
       ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2))) &&
     ((B_lsuab2 == '\0' &&
      ((((B_sbbvk2 != '\0' && ((DAT_005b81ab & 0x10) != 0)) && (_DAT_001cf0b2 <= msabg2_w)) &&
       (B_dvvtobd == 0)))))) {
    DAT_005b908d = DAT_005b908d | 2;
  }
  else {
    DAT_005b908d = DAT_005b908d & 0xfd;
  }
  if ((((B_lrhkzp2 & B_lrhkp2) == 0) || ((DAT_003fdf5d >> 1 & 1) == 0)) ||
     ((DAT_003fdf4b >> 1 & 1) == 0)) {
    B_lshkpft2 = B_lshkpft2 &
                 (B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_lshkpft2|B_lshkpmr2);
  }
  else {
    B_lshkpft2 = B_lshkpft2 | B_helsuf2;
  }
  wVar10 = dlahp2_w;
  if ((short)dlahp2_w < 0) {
    if (dlahp2_w == 0x8000) {
      wVar10 = 0x7fff;
    }
    else {
      wVar10 = -dlahp2_w;
    }
  }
  if ((short)dlahp2_w < 1) {
    if ((-1 < (short)dlahp2_w) || (-1 < (short)dlahi2_w)) goto LAB_001649b0;
LAB_001649a0:
    DAT_005b81a8 = DAT_005b81a8 | 0x10;
  }
  else {
    if (0 < (short)dlahi2_w) goto LAB_001649a0;
LAB_001649b0:
    DAT_005b81a8 = DAT_005b81a8 & 0xef;
  }
  if (((DAT_005b81a8 & 0x10) == 0) || ((short)wVar10 <= _DAT_001cf080)) {
    iVar8 = (int)(short)wVar10 - (int)_DAT_001cf080;
    if (iVar8 < -0x8000) {
      iVar8 = -0x8000;
    }
    else if (0x7fff < iVar8) {
      iVar8 = 0x7fff;
    }
    if ((short)wVar7 < (short)iVar8) goto LAB_00164a18;
LAB_00164a40:
    DAT_005b81a8 = DAT_005b81a8 & 0x7f;
  }
  else {
LAB_00164a18:
    if (((DAT_003fdf5d >> 1 & 1) == 0) || ((B_lrhkzp2 & B_lrhkp2) == 0)) goto LAB_00164a40;
    DAT_005b81a8 = DAT_005b81a8 | 0x80;
  }
  if (((((DAT_005b81a8 & 0x80) == 0) || ((DAT_003fdf4b >> 1 & 1) == 0)) && (B_frmax2 == '\0')) ||
     ((((B_noflsv2 & B_lsupmr2) ==
        ~(B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2) ||
       ((B_lshkpft2 & B_lshkpft2) ==
        ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2))) ||
      (((DAT_005b908d & 4) == 0 || (B_dvvtobd != 0)))))) {
    B_lsumx2 = B_lsumx2 & (B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumrb2|B_lsumx2);
  }
  else {
    B_lsumx2 = B_lsumx2 | B_lsumra2;
  }
  if ((((B_dvvtobd == 0) && ((DAT_005b908d & 4) != 0)) &&
      ((B_frmin2 == '\0' &&
       ((B_lshkpft2 & B_lshkpft2) !=
        ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2))))) &&
     ((((DAT_005b81a8 & 0x80) != 0 && ((DAT_001cb33e & 4) != 0)) ||
      ((B_lrs2 != '\0' && (((DAT_003fdf5d >> 1 & 1) != 0 && (_DAT_001cf0ac < lamsons2_w)))))))) {
    DAT_005b81ae = DAT_005b81ae | 1;
  }
  else {
    DAT_005b81ae = DAT_005b81ae & 0xfe;
  }
  local_d0 = &DAT_005b81ae;
  if ((DAT_005b81ae & 1) == 0) {
    DAT_005b820e = TVLSUPER;
    B_lsumx2 = B_lsumx2 & (B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumx2);
  }
  else if (DAT_005b820e == '\0') {
    B_lsumx2 = B_lsumx2 | B_lsumrb2;
  }
  else {
    DAT_005b820e = DAT_005b820e + -1;
  }
  if ((((B_dvvtobd == 0) && ((DAT_005b908d & 4) != 0)) && (B_frmax2 == '\0')) &&
     (((B_lshkpft2 & B_lshkpmr2) !=
       ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2) &&
      ((((B_lrs2 != '\0' && ((DAT_003fdf5d >> 1 & 1) != 0)) && (lamsons2_w < _DAT_001cf0aa)) ||
       (((DAT_001cb33e & 4) != 0 && ((DAT_005b81a8 & 0x80) != 0)))))))) {
    DAT_005b81ae = DAT_005b81ae | 2;
  }
  else {
    DAT_005b81ae = DAT_005b81ae & 0xfd;
  }
  if ((DAT_005b81ae & 2) == 0) {
    DAT_005b820f = TVLSUPER;
    B_lsumx2 = B_lsumx2 & (B_lsuabgl2|B_lsufta2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2);
  }
  else if (DAT_005b820f == '\0') {
    B_lsumx2 = B_lsumx2 | B_lsuftb2;
  }
  else {
    DAT_005b820f = DAT_005b820f + -1;
  }
  if ((((((DAT_005b908d & 4) == 0) ||
        ((B_lshkpft2 & B_lshkpmr2) ==
         ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2))) ||
       ((B_noflsv2 & B_lsupft2) ==
        ~(B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2))) ||
      ((B_frmin2 == '\0' && (((DAT_005b81a8 & 0x80) == 0 || ((DAT_003fdf4b >> 1 & 1) == 0)))))) ||
     (B_dvvtobd != 0)) {
    B_lsumx2 = B_lsumx2 & (B_lsuabgl2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2);
  }
  else {
    B_lsumx2 = B_lsumx2 | B_lsufta2;
  }
  if ((DAT_005b81ab & 0x20) == 0) {
    DAT_005b81ab = DAT_005b81ab & 0xbf;
  }
  else {
    DAT_005b81ab = DAT_005b81ab | 0x40;
  }
  if (((B_lsumx2 & B_lsumra2) ==
       ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2)) ||
     (_DAT_001cf092 < imlmra2_w)) {
    if (DAT_005b8209 == '\0') {
      DAT_005b81ab = DAT_005b81ab & 0xdf;
    }
    else {
      DAT_005b8209 = DAT_005b8209 + -1;
      DAT_005b81ab = DAT_005b81ab | 0x20;
    }
  }
  else {
    DAT_005b81ab = DAT_005b81ab | 0x20;
    DAT_005b8209 = DAT_001cf079;
  }
  _DAT_005b8230 = uVar6;
  if (((DAT_005b81ab & 0x20) == 0) || ((DAT_005b81ab & 0x40) != 0)) {
    if ((B_lsumx2 & B_lsumra2) !=
        ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2)) {
      uVar6 = func_0xff217da0(0x199a,msabg2_w,DAT_005b8240,_DAT_005b8240 & 0xffff);
      DAT_005b8240 = (word)(uVar6 >> 0x10);
      imlmra2_w = DAT_005b8240;
      _DAT_005b8240 = uVar6;
    }
  }
  else {
    _DAT_005b8240 = 0;
    imlmra2_w = 0;
  }
  if ((DAT_005b81ac & 8) == 0) {
    DAT_005b81ac = DAT_005b81ac & 0xef;
  }
  else {
    DAT_005b81ac = DAT_005b81ac | 0x10;
  }
  if (((B_vlsumrb & 2) == 0) &&
     ((B_lsumx2 & B_lsumrb2) !=
      ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2))) {
    DAT_005b81ac = DAT_005b81ac | 8;
    DAT_005b820a = DAT_001cf079;
  }
  else if (DAT_005b820a == '\0') {
    DAT_005b81ac = DAT_005b81ac & 0xf7;
  }
  else {
    DAT_005b820a = DAT_005b820a + -1;
    DAT_005b81ac = DAT_005b81ac | 8;
  }
  if ((((((DAT_005b81ac & 8) == 0) || ((DAT_005b81ac & 0x10) != 0)) || ((DAT_005b81ad & 8) == 0)) &&
      (((DAT_005b81aa & 0x10) == 0 && ((DAT_003fdf5d & 1) == 0)))) && ((DAT_003fdf4b & 1) == 0)) {
    if ((B_lsumx2 & B_lsumrb2) !=
        ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2)) {
      uVar6 = func_0xff217da0(0x199a,msabg2_w,DAT_005b8244._0_2_,DAT_005b8244 & 0xffff);
      DAT_005b8244._0_2_ = (word)(uVar6 >> 0x10);
      imlmrb2_w = DAT_005b8244._0_2_;
      DAT_005b8244 = uVar6;
      goto LAB_00165078;
    }
LAB_00165088:
    if ((DAT_005b86f7 & 0x40) != 0) goto LAB_001650ac;
    DAT_005b81ad = DAT_005b81ad | 8;
  }
  else {
    DAT_005b8244 = 0;
    imlmrb2_w = 0;
LAB_00165078:
    if ((B_lsumx2 & B_lsumrb2) ==
        ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2))
    goto LAB_00165088;
LAB_001650ac:
    DAT_005b81ad = DAT_005b81ad & 0xf7;
  }
  if (_DAT_001cf096 < imlmrb2_w) {
    B_vlsumrb = B_vlsumrb | 2;
  }
  else {
    B_vlsumrb = B_vlsumrb & 0xfd;
  }
  if (((B_vlsumrb & 2) != 0) && ((DAT_005b86f0 & 2) != 0)) {
    DAT_005b81aa = DAT_005b81aa | 0x10;
  }
  if (((DAT_005b81aa & 0x10) == 0) && (imlmra2_w <= _DAT_001cf092)) {
    B_lsumx2 = B_lsumx2 & (B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumra2|B_lsumrb2|B_lsumx2);
  }
  else {
    B_lsumx2 = B_lsumx2 | B_lsumr2;
  }
  if ((DAT_005b81ac & 0x20) == 0) {
    DAT_005b81ac = DAT_005b81ac & 0xbf;
  }
  else {
    DAT_005b81ac = DAT_005b81ac | 0x40;
  }
  if (((B_lsumx2 & B_lsufta2) ==
       ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2)) ||
     (_DAT_001cf092 < imlfta2_w)) {
    if (DAT_005b820b == '\0') {
      DAT_005b81ac = DAT_005b81ac & 0xdf;
    }
    else {
      DAT_005b820b = DAT_005b820b + -1;
      DAT_005b81ac = DAT_005b81ac | 0x20;
    }
  }
  else {
    DAT_005b81ac = DAT_005b81ac | 0x20;
    DAT_005b820b = DAT_001cf079;
  }
  if (((DAT_005b81ac & 0x20) == 0) || ((DAT_005b81ac & 0x40) != 0)) {
    if ((B_lsumx2 & B_lsufta2) !=
        ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2)) {
      uVar6 = func_0xff217da0(0x199a,msabg2_w,DAT_005b8248,_DAT_005b8248 & 0xffff);
      DAT_005b8248 = (word)(uVar6 >> 0x10);
      imlfta2_w = DAT_005b8248;
      _DAT_005b8248 = uVar6;
    }
  }
  else {
    _DAT_005b8248 = 0;
    imlfta2_w = 0;
  }
  local_fe = DAT_005b81ac;
  if ((DAT_005b81ac & 0x80) == 0) {
    DAT_005b81ad = DAT_005b81ad & 0xfe;
  }
  else {
    DAT_005b81ad = DAT_005b81ad | 1;
  }
  if (((B_vlsuftb2 & 2) == 0) &&
     ((B_lsumx2 & B_lsuftb2) !=
      ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2))) {
    DAT_005b81ac = DAT_005b81ac | 0x80;
    DAT_005b820c = DAT_001cf079;
  }
  else if (DAT_005b820c == '\0') {
    DAT_005b81ac = DAT_005b81ac & 0x7f;
  }
  else {
    DAT_005b820c = DAT_005b820c + -1;
    DAT_005b81ac = DAT_005b81ac | 0x80;
  }
  if (((((DAT_005b81ac & 0x80) == 0) || ((DAT_005b81ad & 1) != 0)) || ((DAT_005b81ab & 2) == 0)) &&
     ((((DAT_005b81ad & 2) == 0 && ((DAT_003fdf5d & 1) == 0)) &&
      (((DAT_003fdf4b & 1) == 0 && ((DAT_005b86f0 & 0x20) == 0)))))) {
    if ((B_lsumx2 & B_lsuftb2) !=
        ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2)) {
      uVar6 = func_0xff217da0(0x199a,msabg2_w,DAT_005b824c._0_2_,DAT_005b824c & 0xffff);
      DAT_005b824c._0_2_ = (word)(uVar6 >> 0x10);
      imlftb2_w = DAT_005b824c._0_2_;
      DAT_005b824c = uVar6;
      goto LAB_0016544c;
    }
LAB_0016545c:
    if ((DAT_005b86f7 & 0x40) != 0) goto LAB_00165480;
    DAT_005b81ab = DAT_005b81ab | 2;
  }
  else {
    DAT_005b824c = 0;
    imlftb2_w = 0;
LAB_0016544c:
    if ((B_lsumx2 & B_lsuftb2) ==
        ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2))
    goto LAB_0016545c;
LAB_00165480:
    DAT_005b81ab = DAT_005b81ab & 0xfd;
  }
  if (_DAT_001cf096 < imlftb2_w) {
    B_vlsuftb2 = B_vlsuftb2 | 2;
  }
  else {
    B_vlsuftb2 = B_vlsuftb2 & 0xfd;
  }
  if (((B_vlsuftb2 & 2) != 0) && ((DAT_005b86f0 & 2) != 0)) {
    DAT_005b81ad = DAT_005b81ad | 2;
  }
  if ((_DAT_001cf092 < imlfta2_w) || ((DAT_005b81ad & 2) != 0)) {
    B_noflsv2 = B_noflsv2 | B_lsuft2;
  }
  else {
    B_noflsv2 = B_noflsv2 & (B_lsuna2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2);
  }
  if (((B_noflsv2 & B_lsuft2) ==
       ~(B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2)) &&
     ((B_vlsuftb2 & 2) == 0)) {
    DAT_005b81ad = DAT_005b81ad & 0xfb;
  }
  else {
    DAT_005b81ad = DAT_005b81ad | 4;
  }
  if ((DAT_005b81ac & 2) == 0) {
    DAT_005b81ac = DAT_005b81ac & 0xfb;
  }
  else {
    DAT_005b81ac = DAT_005b81ac | 4;
  }
  if (((((B_clhsv2 & 0xf) == 8) && ((local_194._0_1_ & 0xf) == 8)) || ((DAT_005b908d & 1) != 0)) ||
     ((DAT_005b908d & 2) != 0)) {
    DAT_005b81ac = DAT_005b81ac | 1;
  }
  else {
    DAT_005b81ac = DAT_005b81ac & 0xfe;
  }
  if (((DAT_005b81ac & 1) == 0) ||
     ((B_noflsv2 & B_lsuna2) !=
      ~(B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2))) {
    if (DAT_005b820d == '\0') {
      DAT_005b81ac = DAT_005b81ac & 0xfd;
    }
    else {
      DAT_005b820d = DAT_005b820d + -1;
      DAT_005b81ac = DAT_005b81ac | 2;
    }
  }
  else {
    DAT_005b81ac = DAT_005b81ac | 2;
    DAT_005b820d = DAT_001cf079;
  }
  if ((((DAT_005b81ac & 2) == 0) || ((DAT_005b81ac & 4) != 0)) &&
     ((B_lsumx2 & B_lsulone2) !=
      ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2))) {
    if ((DAT_005b81ac & 1) != 0) {
      uVar6 = func_0xff217da0(0x199a,msabg2_w,DAT_005b8238._0_2_,DAT_005b8238 & 0xffff);
      DAT_005b8238._0_2_ = (word)(uVar6 >> 0x10);
      imlna2_w = DAT_005b8238._0_2_;
      DAT_005b8238 = uVar6;
    }
  }
  else {
    DAT_005b8238 = 0;
    imlna2_w = 0;
  }
  if (_DAT_001cf092 < imlna2_w) {
    B_noflsv2 = B_noflsv2 | B_lsuna2;
  }
  else {
    B_noflsv2 = B_noflsv2 & (B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2);
  }
  local_184 = B_vlsumrb & 2;
  if (((B_vlsumrb & 2) == 0) && ((DAT_005b81ad & 4) == 0)) {
    B_stcdyn = B_stcdyn & ~B_lrasp2;
  }
  else {
    B_stcdyn = B_stcdyn | B_lrasp2;
  }
  if ((((((B_lsumx2 & B_lsuabgl2) ==
          ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2)) &&
        ((B_noflsv2 & B_luft2) ==
         ~(B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2))) &&
       ((B_lsumx2 & B_lsumx2) ==
        ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2))) &&
      (((B_lsumx2 & B_lsumr2) ==
        ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2) &&
       ((B_noflsv2 & B_lsuft2) ==
        ~(B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2))))) &&
     ((B_noflsv2 & B_lsuna2) ==
      ~(B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2))) {
    B_stcdyn = B_stcdyn & ~B_nplflsu2;
  }
  else if (B_dvvtobd == 0) {
    B_stcdyn = B_stcdyn | B_nplflsu2;
  }
  else {
    B_stcdyn = B_stcdyn & ~B_nplflsu2;
  }
  if ((B_lsumx2 & B_lsuabgl2) !=
      ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2)) {
    lsunpstat2 = lsunpstat2 | 1;
  }
  if ((B_noflsv2 & B_luft2) !=
      ~(B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2)) {
    lsunpstat2 = lsunpstat2 | 2;
  }
  if ((B_lsumx2 & B_lsumx2) !=
      ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2)) {
    lsunpstat2 = lsunpstat2 | 4;
  }
  if ((B_lsumx2 & B_lsumr2) !=
      ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2)) {
    lsunpstat2 = lsunpstat2 | 8;
  }
  if ((B_noflsv2 & B_lsuft2) !=
      ~(B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2)) {
    lsunpstat2 = lsunpstat2 | 0x10;
  }
  if ((B_noflsv2 & B_lsuna2) !=
      ~(B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2)) {
    lsunpstat2 = lsunpstat2 | 0x20;
  }
  if ((((B_stcdyn & B_heatf) == 0) ||
      ((B_lsumx2 & B_lsumx2) !=
       ~(B_lsuabgl2|B_lsufta2|B_lsuftb2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumrb2|B_lsumx2))) ||
     (tavvkm2_w < _DAT_001cf0bc)) {
    DAT_005b8214 = 0;
    DAT_005b81aa = DAT_005b81aa & 0xf7;
  }
  else if (DAT_005b8214 < _DAT_001cf0c0) {
    DAT_005b8214 = DAT_005b8214 + 1;
  }
  else {
    DAT_005b81aa = DAT_005b81aa | 8;
  }
  if ((DAT_005b81aa & 8) == 0) {
    DAT_005b8216 = 200;
  }
  else if (DAT_005b8216 == 0) {
    B_lshkpft2 = B_lshkpft2 | B_helsu2;
  }
  else {
    DAT_005b8216 = DAT_005b8216 + -1;
  }
  if (DAT_001cf07c < zhklsu2) {
    DAT_005b81ad = DAT_005b81ad | 0x40;
  }
  else {
    DAT_005b81ad = DAT_005b81ad & 0xbf;
  }
  if (((DAT_005b81ad & 0x40) == 0) || (((DAT_005b81a8 & 2) == 0 && ((DAT_005b81a8 & 4) == 0)))) {
    DAT_005b81a9 = DAT_005b81a9 & 0xfd;
  }
  else {
    DAT_005b81a9 = DAT_005b81a9 | 2;
    DAT_005b81ad = DAT_005b81ad | 0x80;
  }
  if (((DAT_005b81ad & 0x80) != 0) && (DAT_005b821e != 0)) {
    DAT_005b821e = DAT_005b821e + -1;
  }
  if ((((DAT_005b81ad & 0x40) != 0) && ((DAT_005b81a8 & 1) != 0)) ||
     ((local_194 = uVar5, (DAT_005b81a9 & 2) != 0 && (DAT_005b821e == 0)))) {
    B_lshkpft2 = B_lshkpft2 | B_sigflsu2;
    local_194 = uVar5 & 0xd0fc | 0x2403;
  }
  uVar4 = local_194;
  uVar6 = (uint)lamsoni2_w - (int)((short)dlahi2_w >> 3);
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  else if (0xffff < (int)uVar6) {
    uVar6 = 0xffff;
  }
  if ((((B_frmax2 == '\0') && (B_frmin2 == '\0')) && (B_za2 != '\0')) &&
     ((((B_dylsu & B_dylsuf) !=
        ~(B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft) &&
       ((B_dylsu & B_drlmx) !=
        ~(B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft))) &&
      (((uint)_DAT_001cf0a0 <= (uVar6 & 0xffff) && ((uVar6 & 0xffff) <= (uint)_DAT_001cf09e)))))) {
    B_stcdyn = B_stcdyn | B_stcdyn2;
  }
  else {
    B_stcdyn = B_stcdyn & ~B_stcdyn2;
  }
  if ((B_stcdyn & B_stcdyn2) == 0) {
    DAT_005b8204 = TVDRL;
    B_lshkpft2 = B_lshkpft2 &
                 (B_sigflsu2|B_dylsu2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2);
  }
  else if (DAT_005b8204 == '\0') {
    B_lshkpft2 = B_lshkpft2 | B_dylsuav2;
  }
  else {
    DAT_005b8204 = DAT_005b8204 + -1;
  }
  if ((B_lshkpft2 & B_dylsu2) ==
      ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2)) {
    B_noflsv2 = B_noflsv2 & (B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_noflsv2);
  }
  else {
    if (B_falsu == '\0') {
      if (((DAT_003fdbb4 & 2) == 0) &&
         ((B_noflsv2 & B_minflsu2) ==
          ~(B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2))) {
        DAT_005b81ce = _DAT_001cf086;
      }
      else {
        DAT_005b81ce = _DAT_001cf088;
      }
    }
    else {
      DAT_005b81ce = _DAT_001cf084;
    }
    if (DAT_005b81ce < _dynlsu2_w) {
      B_noflsv2 = B_noflsv2 & (B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_noflsv2);
    }
    else {
      B_noflsv2 = B_noflsv2 | B_minflsu2;
    }
  }
  if ((((B_noflsv2 & B_maxflsu2) ==
        ~(B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2)) &&
      ((B_stcdyn & B_nplflsu2) == 0)) &&
     ((B_lshkpft2 & B_sigflsu2) ==
      ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2))) {
    B_elsu2 = 0;
  }
  else {
    B_elsu2 = 1;
  }
  if ((((B_noflsv2 & B_maxflsu2) ==
        ~(B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2)) &&
      ((B_noflsv2 & B_minflsu2) ==
       ~(B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2))) &&
     (((B_stcdyn & B_nplflsu2) == 0 &&
      ((B_lshkpft2 & B_sigflsu2) ==
       ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2))))) {
    DAT_005b81ab = DAT_005b81ab & 0x7f;
  }
  else {
    DAT_005b81ab = DAT_005b81ab | 0x80;
  }
  if ((((DAT_005b81ab & 0x80) == 0) && (B_elaof2 == '\0')) &&
     ((((B_vlsuftb2 & 2) == 0 && ((B_vlsumrb & 2) == 0)) &&
      ((((B_lshkpft2 & B_helsuf2) !=
         ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2) ||
        ((local_194._0_1_ & 0xf) != 8)) && (B_sbbhk2 != '\0')))))) {
    B_noflsv2 = B_noflsv2 | B_noflsv2;
  }
  else {
    B_noflsv2 = B_noflsv2 & (B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2);
  }
  if ((B_noflsv2 & B_noflsv2) ==
      ~(B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2)) {
    _DAT_005b823c = 0;
    DAT_005b873a = 0;
  }
  else {
    uVar6 = func_0xff217da0(0x199a,msabg2_w,DAT_005b823c,_DAT_005b823c & 0xffff);
    DAT_005b823c = (ushort)(uVar6 >> 0x10);
    DAT_005b873a = DAT_005b823c;
    _DAT_005b823c = uVar6;
  }
  if (B_falsu == '\0') {
    if (_DAT_001cf08c < DAT_005b873a) {
      B_lshkpft2 = B_lshkpft2 | B_heallsv2;
    }
    else {
      B_lshkpft2 = B_lshkpft2 &
                   (B_sigflsu2|B_dylsu2|B_dylsuav2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2);
    }
  }
  else if (_DAT_001cf08e < DAT_005b873a) {
    B_lshkpft2 = B_lshkpft2 | B_heallsv2;
  }
  else {
    B_lshkpft2 = B_lshkpft2 &
                 (B_sigflsu2|B_dylsu2|B_dylsuav2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2);
  }
  if ((((B_lshkpft2 & B_heallsv2) ==
        ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2)) ||
      ((B_lshkpft2 & B_helsu2) ==
       ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2))) ||
     (((B_lshkpft2 & B_dylsu2) ==
       ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2) ||
      (B_dvvtobd != 0)))) {
    if ((DAT_005b81ab & 0x80) != 0) {
      local_194 = local_194 & 0xdffd | 0x2002;
      if ((B_noflsv2 & B_minflsu2) ==
          ~(B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2)) {
        if ((B_lshkpft2 & B_sigflsu2) ==
            ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2)) {
          if ((B_noflsv2 & B_maxflsu2) ==
              ~(B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_luft2|B_maxflsu2|B_minflsu2|B_noflsv2)) {
            if ((B_stcdyn & B_nplflsu2) != 0) {
              local_194 = uVar4 & 0xd0fc | 0x2803;
            }
          }
          else {
            local_194 = uVar4 & 0xd0fc | 0x2103;
          }
        }
        else {
          local_194 = uVar4 & 0xd0fc | 0x2403;
        }
      }
      else {
        local_194 = uVar4 & 0xd0fc | 0x2203;
      }
    }
  }
  else {
    local_194 = local_194 & 0xd0fc | 0x2002;
  }
  if (DAT_003fbf3c != '\0') {
    DAT_005b8206 = TVLSUTRIM;
    DAT_005b8205 = '\0';
    DAT_005b8207 = TVLSULUFT;
    lsunpstat2 = 0;
    B_stcdyn = B_stcdyn & ~(B_lrasp2|B_nplflsu2);
    _DAT_005b8240 = 0;
    _DAT_005b8248 = 0;
    DAT_005b8238 = 0;
    DAT_005b8244 = 0;
    DAT_005b824c = 0;
    imlfta2_w = 0;
    imlftb2_w = 0;
    imlmra2_w = 0;
    imlmrb2_w = 0;
    imlna2_w = 0;
    B_vlsuftb2 = B_vlsuftb2 & 0xfd;
    B_vlsumrb = B_vlsumrb & 0xfd;
    DAT_005b821e = _TVTKLSU;
    DAT_005b821c = _TVTKLSU;
    DAT_005b81ad = DAT_005b81ad & 0x5d;
    DAT_005b820e = TVLSUPER;
    DAT_005b820f = TVLSUPER;
    *local_d0 = *local_d0 & 0xfc;
    B_lsumx2 = B_lsumx2 & (B_lsufta2|B_lsulone2|B_lsumr2|B_lsumra2|B_lsumx2);
    DAT_005b821a = _TVLSUOF;
    B_elaof2 = '\0';
    DAT_005b8212 = _TVLSUEK;
    DAT_005b8218 = 0;
    DAT_005b8214 = 0;
    DAT_005b8216 = 200;
    zhklsu2 = 0;
    DAT_005b8234 = _IVDYNLSU;
    DAT_005b8236 = 0;
    _dynlsu2_w = _IVDYNLSU;
    B_lshkpft2 = B_lshkpft2 & (B_dylsuav2|B_heallsv2|B_helsuf2|B_lshkpft2|B_lshkpmr2);
    B_noflsv2 = B_noflsv2 & (B_lsuna2|B_lsuft2|B_lsupft2|B_lsupmr2|B_noflsv2);
    DAT_005b81aa = DAT_005b81aa & 0x6d;
    lamsam2_w = 0x1000;
    DAT_005b8204 = TVDRL;
    anzdyn2 = 0;
    DAT_005b8224 = 0;
    DAT_005b8222 = 0x1000;
    DAT_005b8220 = 0xf000;
    DAT_003fbf3c = '\0';
  }
  if (B_stend == '\0') {
    DAT_005b81a4 = DAT_005b81a4 & 0xfb;
  }
  else {
    DAT_005b81a4 = DAT_005b81a4 | 4;
  }
LAB_00166288:
  local_190[0] = local_198;
  local_54 = local_190;
  local_58[0] = local_198;
  func_0xff222958(0x7e,local_58);
  local_190[0] = local_194;
  local_4c = local_190;
  local_50[0] = local_194;
  func_0xff222958(0x7f,local_50);
  return;
}

