/*
 * Program: n42.bin
 * Function: possible_thermostat
 * Entry: 0018a0b8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0018b6a4) */
/* WARNING: Removing unreachable block (ram,0x0018b7f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void possible_thermostat(void)

{
  byte extraout_var;
  byte extraout_var_00;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar1;
  uint uVar5;
  ushort local_68;
  
  if (B_slsfz == '\0') {
    FUN_00189e50(1);
    return;
  }
  if (((B_kh == '\0') && ((DAT_005bb7d1 & 1) != 0)) && (DAT_005bb862 == 0)) {
    DAT_005bb862 = _TFASLAMN;
  }
  else if (DAT_005bb862 != 0) {
    DAT_005bb862 = DAT_005bb862 + -1;
  }
  if (B_kh == '\0') {
    DAT_005bb7d1 = DAT_005bb7d1 & 0xfe;
  }
  else {
    DAT_005bb7d1 = DAT_005bb7d1 | 1;
  }
  if ((DAT_005bb7cf & 0x20) == 0) {
    DAT_005bb7cf = DAT_005bb7cf & 0xbf;
  }
  else {
    DAT_005bb7cf = DAT_005bb7cf | 0x40;
  }
  if ((CWFASL & 4) == 0) {
    if ((((((DAT_005bb7d0 & 0x80) == 0) || (B_fa == '\0')) ||
         ((B_fasls == '\0' || ((tmot < TMFASLMN || (_TWSLPFA <= _twslp_w)))))) ||
        (DAT_005bb862 != 0)) || (B_kh != '\0')) {
      DAT_005bb7cf = DAT_005bb7cf & 0xdf;
    }
    else {
      DAT_005bb7cf = DAT_005bb7cf | 0x20;
    }
  }
  else if (((((B_fa == '\0') || (B_fasls == '\0')) || (tmot < TMFASLMN)) ||
           ((_TWSLPFA <= _twslp_w || (DAT_005bb862 != 0)))) || (B_kh != '\0')) {
    DAT_005bb7cf = DAT_005bb7cf & 0xdf;
  }
  else {
    DAT_005bb7cf = DAT_005bb7cf | 0x20;
  }
  if (((DAT_005bb7cf & 0x20) == 0) && ((DAT_005bb7cf & 0x40) != 0)) {
    DAT_005bb7d0 = DAT_005bb7d0 & 0x7f;
  }
  if ((DAT_005bb7d2 & 1) == 0) {
    DAT_005bb7d2 = DAT_005bb7d2 & 0xfd;
  }
  else {
    DAT_005bb7d2 = DAT_005bb7d2 | 2;
  }
  if (((DAT_003fdfa7 >> 1 & 1) == 0) && ((DAT_003fdfa9 >> 1 & 1) == 0)) {
    DAT_005bb7d2 = DAT_005bb7d2 & 0xfe;
  }
  else {
    DAT_005bb7d2 = DAT_005bb7d2 | 1;
  }
  if ((CWDSLSAD & 0x20) == 0) {
    if ((DAT_005bb7d2 & 1) == 0) {
      DAT_005bb7d2 = DAT_005bb7d2 & 0xfb;
    }
    else {
      DAT_005bb7d2 = DAT_005bb7d2 | 4;
    }
  }
  else if (((DAT_005bb7d2 & 1) == 0) || ((DAT_005bb7d2 & 2) != 0)) {
    DAT_005bb7d2 = DAT_005bb7d2 & 0xfb;
  }
  else {
    DAT_005bb7d2 = DAT_005bb7d2 | 4;
  }
  if (((((DAT_005bb7cf & 0x20) == 0) && ((DAT_005bb7cf & 0x40) != 0)) ||
      (((CWFASL & 1) == 0 &&
       (((((CWFASL & 2) == 0 && ((B_brems != '\0' || (B_kuppl != '\0')))) ||
         (((CWFASL & 2) != 0 && ((B_brems == '\0' || (B_kuppl == '\0')))))) ||
        ((B_fs != '\0' || (vfzg != 0)))))))) || ((DAT_005bb7d2 & 4) != 0)) {
    B_fasla = '\0';
    SLSlokBits = SLSlokBits & ~B_slkt;
    DAT_005bb7ce = '\0';
    DAT_005bb7d0 = DAT_005bb7d0 & 0xbf;
  }
  else {
    if (((DAT_005bb7cf & 0x20) != 0) && ((DAT_005bb7cf & 0x40) == 0)) {
      B_fasla = '\x01';
    }
    if ((B_fasla == '\0') || (B_dslfa == '\0')) {
      SLSlokBits = SLSlokBits & ~B_slkt;
      if (DAT_005bb7ce != '\0') {
        DAT_005bb7ce = DAT_005bb7ce + -1;
      }
      DAT_005bb7d0 = DAT_005bb7d0 & 0xbf;
    }
    else {
      if ((DAT_005bb7d0 & 0x40) == 0) {
        DAT_005bb7ce = TDSLKT;
LAB_0018a58c:
        if (DAT_005bb7ce == '\0') goto LAB_0018a5ac;
        SLSlokBits = SLSlokBits | B_slkt;
      }
      else {
        if (DAT_005bb7ce != '\0') {
          DAT_005bb7ce = DAT_005bb7ce + -1;
          goto LAB_0018a58c;
        }
LAB_0018a5ac:
        SLSlokBits = SLSlokBits & ~B_slkt;
      }
      DAT_005bb7d0 = DAT_005bb7d0 | 0x40;
    }
  }
  if (B_dslsp4 == '\0') {
    SLSlokBits = SLSlokBits & ~B_sldsl4;
    if (DAT_005bb7cd != '\0') {
      DAT_005bb7cd = DAT_005bb7cd + -1;
    }
  }
  else {
    if ((DAT_005bb7cf & 0x80) == 0) {
      DAT_005bb7cd = TDDSLA;
LAB_0018a648:
      if (DAT_005bb7cd != '\0') {
        SLSlokBits = SLSlokBits | B_sldsl4;
        goto LAB_0018a6a0;
      }
    }
    else if (DAT_005bb7cd != '\0') {
      DAT_005bb7cd = DAT_005bb7cd + -1;
      goto LAB_0018a648;
    }
    SLSlokBits = SLSlokBits & ~B_sldsl4;
  }
LAB_0018a6a0:
  if (B_dslsp4 == '\0') {
    DAT_005bb7cf = DAT_005bb7cf & 0x7f;
  }
  else {
    DAT_005bb7cf = DAT_005bb7cf | 0x80;
  }
  if ((SLSlokBits & B_dslset) == 0) {
    DAT_005bb7cf = DAT_005bb7cf & 0xef;
  }
  else {
    DAT_005bb7cf = DAT_005bb7cf | 0x10;
  }
  if (((SLSlokBits & B_sldsl4) == 0) && ((SLSlokBits & B_slkt) == 0)) {
    if ((SLSlokBits & B_dslset) == 0) {
      SLSlokBits = SLSlokBits & ~B_dslreset;
    }
    else {
      SLSlokBits = SLSlokBits | B_dslreset;
    }
    SLSlokBits = SLSlokBits & ~B_dslset;
  }
  else {
    SLSlokBits = SLSlokBits & ~B_dslreset | B_dslset;
  }
  if ((DAT_003fdfa5 & 1) == 0) {
    DAT_005bb7d1 = DAT_005bb7d1 & 0xfb;
  }
  else {
    DAT_005bb7d1 = DAT_005bb7d1 | 4;
  }
  if ((DAT_003fdfaf & 1) == 0) {
    DAT_005bb7d1 = DAT_005bb7d1 & 0xf7;
  }
  else {
    DAT_005bb7d1 = DAT_005bb7d1 | 8;
  }
  if ((((DAT_005bb7d1 & 4) == 0) && ((DAT_005bb7d1 & 8) == 0)) && (ubsqf_w <= _UBSLMX)) {
    SLSlokBits = SLSlokBits & ~B_slserr;
  }
  else {
    SLSlokBits = SLSlokBits | B_slserr;
  }
  if ((((SLSlokBits & B_slserr) == 0) && (B_khab == '\0')) && (B_mslmn == '\0')) {
    SLSlokBits = SLSlokBits & ~B_slsdis;
  }
  else {
    SLSlokBits = SLSlokBits | B_slsdis;
  }
  if ((_ps_w >> 7 & 0xff) < (ushort)pu) {
    uVar3 = (ushort)pu - (_ps_w >> 7);
  }
  else {
    uVar3 = 0;
  }
  uVar2 = func_0xff2190c8(KLRLSLSMX,&DAT_001d3677,&DAT_001d367c,nmot);
  if ((((_MLSLMX < _ml_w) || ((uVar3 & 0xff) < (ushort)DPSLV)) ||
      ((ubsqf_w < _UBSLMN || ((uVar2 < rlsol_w && (B_fs != '\0')))))) && (B_stend != '\0')) {
    if (DAT_005bb7c5 == '\0') {
      DAT_005bb7d0 = DAT_005bb7d0 | 1;
    }
    else {
      DAT_005bb7c5 = DAT_005bb7c5 + -1;
    }
  }
  else {
    DAT_005bb7c5 = TSLABB;
    DAT_005bb7d0 = DAT_005bb7d0 & 0xfe;
  }
  if (((SLSlokBits & B_dslset) == 0) &&
     ((uVar3 = func_0xff2190c8(KLTSLMX,0x1d3687,&DAT_001d3690,tmst), uVar3 <= tnst_w ||
      (IMLSLMX <= imlpr)))) {
    B_slkhof = 1;
    SLSlokBits = SLSlokBits | B_slpofst;
  }
  else {
    B_slkhof = 0;
    if ((((SLSlokBits & B_dslreset) == 0) &&
        (((SLSlokBits & B_slsdis) == 0 && ((DAT_005bb7d0 & 1) == 0)))) &&
       ((DAT_005b8c08 != '\x01' || (_twslp_w <= _TWSLPOFF)))) {
      SLSlokBits = SLSlokBits & ~B_slpofst;
    }
    else {
      SLSlokBits = SLSlokBits | B_slpofst;
    }
  }
  if ((((SLSlokBits & B_dslset) == 0) || ((DAT_005bb7cf & 0x10) != 0)) &&
     ((SLSlokBits & B_whslpkh) == 0)) {
    if ((SLSlokBits & B_slpofst) != 0) {
      B_slpoff = '\x01';
    }
  }
  else {
    B_slpoff = '\0';
  }
  if (_UBSLSTMN < ubsqf_w) {
    if (DAT_005bb7c6 == '\0') {
      DAT_005bb7d0 = DAT_005bb7d0 | 2;
    }
    else {
      DAT_005bb7c6 = DAT_005bb7c6 + -1;
    }
  }
  else {
    DAT_005bb7c6 = TSLUBST;
    DAT_005bb7d0 = DAT_005bb7d0 & 0xfd;
  }
  if ((((B_kh == '\0') || (imlpr < IMLSLMN)) &&
      ((((B_kha == '\0' || ((B_st == '\0' || ((DAT_001cb363 & 1) == 0)))) ||
        ((DAT_005bb7d0 & 2) == 0)) || ((tmst <= TMSSLSTU || (TMSSLSTO <= tmst)))))) ||
     (((tmst <= TMSSLU ||
       (((((TMSSLO <= tmst || (tans <= TASLSU)) || (TASLSO <= tans)) ||
         ((SLSlokBits & B_slserr) != 0)) || (((DAT_001cb363 & 2) != 0 && (vfzg < VSLS)))))) ||
      (_TWSLPENA <= _twslp_w)))) {
    SLSlokBits = SLSlokBits & ~B_slpena;
  }
  else {
    SLSlokBits = SLSlokBits | B_slpena;
  }
  if (((DAT_005bb7cf & 2) == 0) && (B_dspe == '\0')) {
    DAT_005bb7cf = DAT_005bb7cf & 0xfb;
  }
  else {
    DAT_005bb7cf = DAT_005bb7cf | 4;
  }
  if ((B_nmot == '\0') || (B_slpoff != '\0')) {
    DAT_005bb7cf = DAT_005bb7cf & 0xfd;
  }
  else if (((SLSlokBits & B_slpena) != 0) || ((SLSlokBits & B_dslset) != 0)) {
    DAT_005bb7cf = DAT_005bb7cf | 2;
  }
  if ((((DAT_005bb7cf & 2) == 0) && (B_dspe == '\0')) || ((DAT_005bb7cf & 4) != 0)) {
    if (DAT_005bb7cc != '\0') {
      DAT_005bb7cc = DAT_005bb7cc + -1;
      goto LAB_0018ad54;
    }
LAB_0018ad74:
    B_slpmn = '\0';
  }
  else {
    DAT_005bb7cc = TSLPMN;
LAB_0018ad54:
    if (DAT_005bb7cc == '\0') goto LAB_0018ad74;
    B_slpmn = '\x01';
  }
  if ((((DAT_005bb7cf & 2) == 0) && (B_dspe == '\0')) && (B_slpmn == '\0')) {
    B_slp = false;
  }
  else {
    B_slp = true;
  }
  if ((SLSlokBits & B_dslset) == 0) {
    if (DAT_005bb7c9 == '\0') {
      DAT_005bb7d0 = DAT_005bb7d0 & 0xf7;
    }
    else {
      DAT_005bb7c9 = DAT_005bb7c9 + -1;
    }
  }
  else {
    DAT_005bb7c9 = TVDSLOFF;
    DAT_005bb7d0 = DAT_005bb7d0 | 8;
  }
  if ((DAT_005bb7cf & 2) == 0) {
    DAT_005bb7c7 = TVSLVON;
    DAT_005bb7d0 = DAT_005bb7d0 & 0xfb;
  }
  else if (DAT_005bb7c7 == '\0') {
    DAT_005bb7d0 = DAT_005bb7d0 | 4;
  }
  else {
    DAT_005bb7c7 = DAT_005bb7c7 + -1;
  }
  if ((DAT_005bb7d0 & 4) == 0) {
    if (DAT_005bb7c8 == '\0') {
      DAT_005bb7cf = DAT_005bb7cf & 0xfe;
    }
    else {
      DAT_005bb7c8 = DAT_005bb7c8 + -1;
    }
  }
  else {
    DAT_005bb7c8 = TVSLVOFF;
    DAT_005bb7cf = DAT_005bb7cf | 1;
  }
  if (((DAT_005bb7cf & 1) == 0) && ((DAT_005bb7d0 & 8) == 0)) {
    B_sls = '\0';
  }
  else {
    B_sls = '\x01';
  }
  B_slv = B_sls != '\0';
  if ((DAT_005bb7d1 & 0x20) == 0) {
    if ((bool)B_slp) {
      anzslp = anzslp + 1;
      goto LAB_0018af5c;
    }
LAB_0018af70:
    DAT_005bb7d1 = DAT_005bb7d1 & 0xdf;
  }
  else {
LAB_0018af5c:
    if (!(bool)B_slp) goto LAB_0018af70;
    DAT_005bb7d1 = DAT_005bb7d1 | 0x20;
  }
  if (anzslp < ANZSLPMX) {
    SLSlokBits = SLSlokBits & ~B_anzslpmx;
  }
  else {
    SLSlokBits = SLSlokBits | B_anzslpmx;
    anzslp = ANZSLPMX;
  }
  if ((((B_kh == '\0') || ((SLSlokBits & B_anzslpmx) != 0)) || ((SLSlokBits & B_slpofst) != 0)) ||
     ((DAT_001cb364 & 1) == 0)) {
    DAT_005bb7cb = TDWHSLPKH;
    SLSlokBits = SLSlokBits & ~B_whslpkh;
    DAT_005bb7d1 = DAT_005bb7d1 & 0xef;
  }
  else if (DAT_005bb7cb == '\0') {
    if ((DAT_005bb7d1 & 0x10) == 0) {
      SLSlokBits = SLSlokBits & ~B_whslpkh;
    }
    else {
      SLSlokBits = SLSlokBits | B_whslpkh;
    }
    DAT_005bb7d1 = DAT_005bb7d1 & 0xef;
  }
  else {
    DAT_005bb7cb = DAT_005bb7cb + -1;
    DAT_005bb7d1 = DAT_005bb7d1 | 0x10;
  }
  if ((((DAT_005bb7d0 & 1) == 0) && ((SLSlokBits & B_slsdis) == 0)) &&
     (((DAT_005bb7d1 & 2) != 0 && (B_sls == '\0')))) {
    SLSlokBits = SLSlokBits | B_slsoab;
  }
  else {
    SLSlokBits = SLSlokBits & ~B_slsoab;
  }
  if (B_sls == '\0') {
    DAT_005bb7d1 = DAT_005bb7d1 & 0xfd;
  }
  else {
    DAT_005bb7d1 = DAT_005bb7d1 | 2;
  }
  B_slsadap = '\x01' - ((DAT_001cb363 & 0x40) == 0);
  if (B_slpoff == '\0') {
    if ((bool)B_slp) {
      _DAT_005bb85c = func_0xff217fe8((uint)ZKSLPON << 8,0xff,_DAT_005bb85c);
    }
  }
  else {
    _DAT_005bb85c = func_0xff217fe8((uint)ZKSLPOFF << 8,0,_DAT_005bb85c);
  }
  fslpdyn = DAT_005bb85c;
  if ((DAT_005bb7cf & 8) == 0) {
    if (((B_fasla != '\0') || (B_dslsp4 != '\0')) || (B_sls != '\0')) {
      imlsle_w = 0;
      imlsla_w = 0;
      DAT_005bb8d4 = 0;
      _DAT_005bb8d8 = 0;
      B_slsoff = '\x01';
      B_msloff = '\0';
      B_mslon = '\0';
      fmsldyn = 0;
      DAT_005bb85e = 0;
      goto LAB_0018b404;
    }
  }
  else if ((B_sls != '\0') && (B_mslon == '\0')) {
    uVar1 = func_0xff217da0(0xa00,_ml_w,DAT_005bb8d8,_DAT_005bb8d8 & 0xffff);
    DAT_005bb8d8 = (ushort)(uVar1 >> 0x10);
    imlsla_w = DAT_005bb8d8;
    if (B_mslon == '\0') {
      DAT_005bb7d0 = DAT_005bb7d0 & 0xdf;
    }
    else {
      DAT_005bb7d0 = DAT_005bb7d0 | 0x20;
    }
    B_mslon = _IMLSLSA <= DAT_005bb8d8;
    _DAT_005bb8d8 = uVar1;
    if (((DAT_005bb7d0 & 0x20) == 0) && ((bool)B_mslon)) {
      B_slsoff = '\0';
    }
  }
  if (B_msloff == '\0') {
    if ((B_mslon != '\0') && (B_sls == '\0')) {
      uVar1 = func_0xff217da0(0xa00,_ml_w,DAT_005bb8d4._0_2_,DAT_005bb8d4 & 0xffff);
      DAT_005bb8d4._0_2_ = (ushort)(uVar1 >> 0x10);
      imlsle_w = DAT_005bb8d4._0_2_;
      B_msloff = _IMLSLSE <= DAT_005bb8d4._0_2_;
      DAT_005bb8d4 = uVar1;
    }
    if ((B_msloff == '\0') && ((B_sls == '\0' || (B_mslon == '\0')))) goto LAB_0018b404;
  }
  if ((B_mslon == '\0') || (B_sls != '\0')) {
    uVar4 = func_0xff2189bc(&ZKSLSONML,_ml_w);
    DAT_005bb85e = func_0xff217fe8(uVar4,0xff,DAT_005bb85e);
  }
  else {
    uVar4 = func_0xff2189bc(&ZKSLSOFML,_ml_w);
    DAT_005bb85e = func_0xff217fe8(uVar4,0,DAT_005bb85e);
  }
  fmsldyn = DAT_005bb85e._0_1_;
  if ((B_msloff != '\0') && (DAT_005bb85e._0_1_ < FMSLOFF)) {
    B_slsoff = '\x01';
  }
LAB_0018b404:
  if (((B_fasla == '\0') && (B_dslsp4 == '\0')) && (B_sls == '\0')) {
    DAT_005bb7cf = DAT_005bb7cf & 0xf7;
  }
  else {
    DAT_005bb7cf = DAT_005bb7cf | 8;
  }
  func_0xff2189bc(&MSLUB,ubsqf_w);
  mslpub = extraout_var;
  fmsagd = func_0xff2196d0(&KFFMSML,nmot,rl);
  func_0xff2189bc(&FMSRHOL,frhol_w);
  fmslrho = extraout_var_00;
  fmsltm = func_0xff2187cc(&FMSTMOT,tmot);
  uVar1 = func_0xff221800((uint)fmsagd * (uint)fmslrho,(uint)mslpub * (uint)fmsltm);
  uVar1 = (uVar1 & 0xffff) >> 7;
  mslstat = (byte)uVar1;
  if (B_slsoff == '\0') {
    if (0xfe < uVar1) {
      mslstat = 0xff;
    }
  }
  else {
    mslstat = 0;
  }
  if ((B_sls != '\0') || (B_slp != '\0')) {
    _DAT_005bb8dc = (uint)mslpub * (uint)fmsagd * (uint)fmslrho * (uint)fslpdyn;
    uVar1 = ((_DAT_005bb8dc >> 0x10) * (uint)FMSL2 * (uint)fmsla2 >> 8) * (uint)fmsltm;
    if (uVar1 < 0x80000000) {
      DAT_005bb8e4 = uVar1 * 2;
    }
    else {
      DAT_005bb8e4 = 0xffffffff;
    }
    DAT_005bb8e8 = DAT_005bb8e4;
  }
  uVar5 = (DAT_005bb8e8 >> 8) * (uint)fmsldyn;
  uVar1 = uVar5 >> 0x10;
  DAT_005b8c5a = (undefined2)((int)uVar1 >> 3);
  if (uVar1 < 0x2000) {
    msl2 = (byte)((int)uVar1 >> 5);
  }
  else {
    msl2 = 0xff;
  }
  DAT_005bb8e4 = DAT_005bb8e8;
  if (mlbb2_w == 0) {
    flamsl2_w = 0x1000;
  }
  else {
    local_68 = (ushort)(uVar5 >> 0x17);
    uVar1 = func_0xff217b40(local_68,uVar5 >> 7 & 0xffff,mlbb2_w);
    uVar1 = (uVar1 & 0xffff) + 0x1000;
    if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
    flamsl2_w = (word)uVar1;
  }
  if ((B_sls != '\0') || (B_slp != '\0')) {
    _DAT_005bb8dc = ((_DAT_005bb8dc >> 0x10) * (uint)FMSL * (uint)fmsla >> 8) * (uint)fmsltm;
    if (_DAT_005bb8dc < 0x80000000) {
      _DAT_005bb8dc = _DAT_005bb8dc * 2;
    }
    else {
      _DAT_005bb8dc = 0xffffffff;
    }
    DAT_005bb8e0 = _DAT_005bb8dc;
  }
  uVar5 = (DAT_005bb8e0 >> 8) * (uint)fmsldyn;
  uVar1 = uVar5 >> 0x10;
  DAT_005b8c5c = (undefined2)((int)uVar1 >> 3);
  if (uVar1 < 0x2000) {
    msl = (byte)((int)uVar1 >> 5);
  }
  else {
    msl = 0xff;
  }
  _DAT_005bb8dc = DAT_005bb8e0;
  if (mlbb_w == 0) {
    flamsl_w = 0x1000;
  }
  else {
    local_68 = (ushort)(uVar5 >> 0x17);
    uVar1 = func_0xff217b40(local_68,uVar5 >> 7 & 0xffff,mlbb_w);
    uVar1 = (uVar1 & 0xffff) + 0x1000;
    if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
    flamsl_w = (word)uVar1;
  }
  if ((((DAT_001cb363 & 0x10) == 0) || (B_ll != '\0')) &&
     (((DAT_001cb363 & 0x20) == 0 || (B_fs == '\0')))) {
    DAT_005bb7ca = TLMSSLAB;
  }
  else if (DAT_005bb7ca == '\0') {
    DAT_005bb7d0 = DAT_005bb7d0 | 0x10;
  }
  else {
    DAT_005bb7ca = DAT_005bb7ca + -1;
  }
  if ((((DAT_005bb7d0 & 0x10) == 0) && (B_slpoff == '\0')) &&
     ((B_ll == '\0' || ((tnst_w < (ushort)((ushort)TLMSSLMX * 100) || ((DAT_001cb363 & 8) == 0))))))
  {
    B_lmsslof = 0;
  }
  else {
    B_lmsslof = 1;
    DAT_005bb860 = func_0xff217fe8(ZFLMSSL,0,DAT_005bb860);
  }
  if ((B_sls == '\0') ||
     ((((ATMbits & 1) == 0 && ((DAT_001cb363 & 0x80) == 0)) || ((DAT_001cb363 & 8) == 0)))) {
    flmssl = 0;
  }
  else {
    flmssl = DAT_005bb860._0_1_;
  }
                    /* WARNING: Read-only address (ram,0x003fdfa5) is written */
                    /* WARNING: Read-only address (ram,0x003fdfa7) is written */
                    /* WARNING: Read-only address (ram,0x003fdfa9) is written */
                    /* WARNING: Read-only address (ram,0x003fdfaf) is written */
  return;
}

