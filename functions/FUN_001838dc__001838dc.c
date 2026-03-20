/*
 * Program: n42.bin
 * Function: FUN_001838dc
 * Entry: 001838dc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00187128) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001838dc(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ENUM_005b8c0a EVar6;
  char cVar7;
  byte bVar8;
  short sVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ENUM_005b8c0a EVar14;
  ushort uVar15;
  undefined2 uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  word wVar20;
  undefined2 local_110;
  undefined2 local_10c;
  undefined2 local_108;
  undefined2 local_104;
  ushort local_100 [12];
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d0;
  byte local_c2;
  ENUM_005b8c0d local_b6;
  byte local_ac;
  byte *local_a0;
  ushort local_6c [2];
  ushort *local_68;
  ushort local_64 [2];
  ushort *local_60;
  ushort local_5c [2];
  ushort *local_58;
  ushort local_54 [2];
  ushort *local_50;
  
  uVar13 = _B_sislv2;
  uVar12 = _B_clslv;
  uVar11 = _B_sisls2;
  uVar10 = _B_clsls;
  local_110 = _B_clsls;
  local_10c = _B_clslv;
  local_108 = _B_sisls2;
  local_104 = _B_sislv2;
  local_108._1_1_ = (byte)_B_sisls2;
  local_104._1_1_ = (byte)_B_sislv2;
  local_104._0_1_ = (byte)(_B_sislv2 >> 8);
  local_10c._1_1_ = (byte)_B_clslv;
  local_10c._0_1_ = (byte)(_B_clslv >> 8);
  local_110._1_1_ = (byte)_B_clsls;
  if ((B_cdswe & B_cdhsv) == 0) {
    local_110 = _B_clsls & 0xd0fc | 0x2002;
    local_10c = _B_clslv & 0xd0fc | 0x2002;
    _m6wmsl_w = 0;
    _m6smsl_w = 0;
    _m6wmslv_w = 0;
    _m6smslv_w = 0;
    m6amsl = 0;
    m6cmsl = '\0';
    m6cmslv = 0;
    local_108 = _B_sisls2 & 0xd0fc | 0x2002;
    local_104 = _B_sislv2 & 0xd0fc | 0x2002;
    _m6wmsl2_w = 0;
    _m6smsl2_w = 0;
    _m6wmslv2_w = 0;
    _m6smslv2_w = 0;
    m6cmsl2 = '\0';
    m6cmslv2 = 0;
    goto LAB_00188ec4;
  }
  B_cwdslty = (CWDSLSY & 0x80) != 0;
  if ((B_sislve & 0xf) == 2) {
    B_awmslsum = B_awmslsum | B_emnslve;
  }
  else {
    B_awmslsum = B_awmslsum & ~B_emnslve;
  }
  if ((DAT_005bb944 & 0x40) == 0) {
    DAT_005bb944 = DAT_005bb944 & 0x7f;
  }
  else {
    DAT_005bb944 = DAT_005bb944 | 0x80;
  }
  if (((DSLSLRSlokBits3a & B_dsl45) ==
       ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper)) &&
     (B_fasla != '\0')) {
    DAT_005bb944 = DAT_005bb944 | 0x40;
  }
  else {
    DAT_005bb944 = DAT_005bb944 & 0xbf;
  }
  if (((B_sls == '\0') && ((DAT_005bb940 & 4) != 0)) ||
     ((B_fasla == '\0' && ((DAT_005bb947 & 0x40) != 0)))) {
    B_dsl5ab = B_dsl5ab & 0xbf;
  }
  else if (((DAT_005bb944 & 0x40) != 0) && ((DAT_005bb944 & 0x80) == 0)) {
    B_dsl5ab = B_dsl5ab | 0x40;
  }
  if (((DAT_005bb946 & 0x10) == 0) || (B_fa != '\0')) {
    if (((CWDSLSA & 2) != 0) && (B_fasla != '\0')) {
      DAT_005bb946 = DAT_005bb946 | 4;
    }
  }
  else {
    DAT_005bb946 = DAT_005bb946 & 0xfb;
  }
  if (B_fa == '\0') {
    DAT_005bb946 = DAT_005bb946 & 0xef;
  }
  else {
    DAT_005bb946 = DAT_005bb946 | 0x10;
  }
  if ((B_mslmin & B_cwdslt) ==
      ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) {
    DAT_005bb946 = DAT_005bb946 & 0xf7;
  }
  else {
    DAT_005bb946 = DAT_005bb946 | 8;
  }
  if (((CWDSLSY & 1) == 0) && ((DAT_005bb946 & 4) == 0)) {
    B_mslmin = B_mslmin & (B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes);
  }
  else {
    B_mslmin = B_mslmin | B_cwdslt;
  }
  if ((CWDSLSY & 2) == 0) {
    B_cwsla = B_cwsla & (B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2);
  }
  else {
    B_cwsla = B_cwsla | B_cwsla;
  }
  if ((DAT_003fdfa5 & 1) == 0) {
    B_awmslsum = B_awmslsum & ~B_eslpe;
  }
  else {
    B_awmslsum = B_awmslsum | B_eslpe;
  }
  if ((DAT_003fdfaf & 1) == 0) {
    B_awmslsum = B_awmslsum & ~B_eslve;
  }
  else {
    B_awmslsum = B_awmslsum | B_eslve;
  }
  if (((((B_edkvs == '\0') &&
        ((((B_dvvtobd == 0 || ((DAT_001cb364 & 2) == 0)) && ((DAT_003fdfc1 & 1) == 0)) &&
         (((B_silm & 1) == 0 && ((DAT_003fdfb7 & 1) == 0)))))) && ((DAT_003fdfb9 & 1) == 0)) &&
      (((((DAT_003fdfbb & 1) == 0 && ((DAT_003fdf5f & 1) == 0)) &&
        ((B_mdarv == 0 &&
         ((((DAT_003fdfc9 & 1) == 0 && ((DAT_003fdf27 & 1) == 0)) && ((DAT_003fdf23 & 1) == 0))))))
       && (((B_awmslsum & B_eslpe) == 0 && ((B_awmslsum & B_eslve) == 0)))))) &&
     ((B_edkvs2 == '\0' &&
      ((((DAT_003fdf61 & 1) == 0 && ((DAT_003fdf25 & 1) == 0)) && ((DAT_003fdf29 & 1) == 0)))))) {
    B_mslmin = B_mslmin & (B_cwdslt|B_mslmin|B_zslvp|B_dslm|B_dslmab|B_dslme|B_dslmes);
  }
  else {
    B_mslmin = B_mslmin | B_dslerr;
  }
  if ((DSLSLRSlokBits1a & B_dsl) ==
      ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) {
    DAT_005bb941 = DAT_005bb941 & 0xdf;
  }
  else {
    DAT_005bb941 = DAT_005bb941 | 0x20;
  }
  if (((((((B_nmot == '\0') ||
          ((B_mslmin & B_dslerr) !=
           ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes))) ||
         (B_slsfz == '\0')) ||
        ((B_sla == '\0' &&
         ((DSLSLRSlokBits1a & B_szsls) !=
          ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab))))) ||
       ((tmot <= TMDSLMN || ((TMDSLMX <= tmot || (tans <= TANDSLMN)))))) || (TANDSLMX <= tans)) ||
     (((B_hag == '\0' || (((imlpr < IMLDSL && (B_fasla == '\0')) || (fho_w <= _FHODSL)))) ||
      ((((CWDSLSA & 0x40) != 0 || (TKATDSL <= tkatm)) &&
       (((CWDSLSA & 0x40) == 0 || (TKATDSL <= tikatm)))))))) {
    DSLSLRSlokBits1a = DSLSLRSlokBits1a & (B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_slarq|B_dsltab)
    ;
  }
  else {
    DSLSLRSlokBits1a = DSLSLRSlokBits1a | B_dsl;
  }
  if (B_st == '\0') {
LAB_00184008:
    DAT_005bb941 = DAT_005bb941 & 0xbf;
  }
  else {
    if ((DAT_005bb941 & 0x40) == 0) {
      DAT_005bb937 = tmotab;
    }
    if (B_st == '\0') goto LAB_00184008;
    DAT_005bb941 = DAT_005bb941 | 0x40;
  }
  if (TMDSLAMN < tmot) {
    if (DAT_005bb934 < TWDSLTM) {
      DAT_005bb934 = DAT_005bb934 + 1;
    }
  }
  else {
    DAT_005bb934 = 0;
  }
  if (((B_dsl5ab & 2) == 0) && ((DAT_005bb942 & 8) != 0)) {
    if ((CWDSLSY & 4) != 0) {
      DAT_005bb944 = DAT_005bb944 | 8;
    }
    if (DAT_005bb938 < ZDSLAMX) {
      DAT_005bb938 = DAT_005bb938 + 1;
    }
  }
  if (((B_mslmin & B_dslerr) ==
       ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) &&
     ((((((B_dsl5ab & 2) != 0 || ((DAT_005bb942 & 8) == 0)) && ((DAT_005bb944 & 8) == 0)) &&
       (DAT_005bb938 != ZDSLAMX)) &&
      ((B_fasla == '\0' ||
       ((DSLSLRSlokBits3a & B_dsl45) !=
        ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper))))))) {
    B_dsl5ab = B_dsl5ab & 0xdf;
  }
  else {
    B_dsl5ab = B_dsl5ab | 0x20;
  }
  if (B_slp != '\0') {
    DAT_005bb943 = DAT_005bb943 | 8;
  }
  if ((DAT_005bb943 & 0x10) == 0) {
    DAT_005bb943 = DAT_005bb943 & 0xdf;
  }
  else {
    DAT_005bb943 = DAT_005bb943 | 0x20;
  }
  if (((_twslp_w < _TWSLPSLA) && (_FHODSL < fho_w)) &&
     ((B_hag != '\0' &&
      (((B_cwsla & B_cwsla) != ~(B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2)
       && (DAT_005bb934 == TWDSLTM)))))) {
    uVar17 = (uint)DAT_005bb937 - (uint)tmst;
    if ((int)uVar17 < 0) {
      uVar17 = 0;
    }
    else if (0xff < (int)uVar17) {
      uVar17 = 0xff;
    }
    if (((((uVar17 & 0xff) <= (uint)DTMDSLA) && ((CWDSLSY & 8) == 0)) || (B_kha != '\0')) ||
       (((B_fasla != '\0' || ((DAT_005bb942 & 4) != 0)) ||
        ((((DSLSLRSlokBits1a & B_szsls) !=
           ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab) || (B_stend == '\0'))
         || ((((DAT_003fdfb9 >> 1 & 1) == 0 && ((CWDSLSA & 0x20) != 0)) ||
             ((SLSlokBits & B_anzslpmx) != 0)))))))) goto LAB_00184300;
    DAT_005bb943 = DAT_005bb943 | 0x10;
  }
  else {
LAB_00184300:
    DAT_005bb943 = DAT_005bb943 & 0xef;
  }
  if ((B_sls == '\0') && ((DAT_005bb940 & 4) != 0)) {
    DSLSLRSlokBits1a = DSLSLRSlokBits1a & (B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_dsltab);
  }
  else if (((DAT_005bb943 & 0x10) != 0) && ((DAT_005bb943 & 0x20) == 0)) {
    DSLSLRSlokBits1a = DSLSLRSlokBits1a | B_slarq;
  }
  if (B_sls == '\0') {
    DAT_005bb940 = DAT_005bb940 & 0xfb;
  }
  else {
    DAT_005bb940 = DAT_005bb940 | 4;
  }
  if (((DAT_005bb943 & 0x10) == 0) || (((DAT_005bb943 & 8) == 0 && ((CWDSLSY & 8) != 0)))) {
    B_dsl5ab = B_dsl5ab & 0xef;
  }
  else {
    B_dsl5ab = B_dsl5ab | 0x10;
  }
  if (B_sla == '\0') {
    DAT_005bb945 = DAT_005bb945 & 0x7f;
  }
  else {
    DAT_005bb945 = DAT_005bb945 | 0x80;
  }
  if ((B_dsl5ab & 0x20) == 0) {
    if ((B_dsl5ab & 0x10) != 0) {
      B_sla = '\x01';
    }
  }
  else {
    B_sla = '\0';
  }
  if ((B_vag == '\0') && (B_bag == '\0')) {
    if (DAT_005bb93a < TDSLMVBA) {
      DAT_005bb93a = DAT_005bb93a + 1;
    }
    else {
      DAT_005bb940 = DAT_005bb940 & 0xfe;
    }
  }
  else {
    DAT_005bb940 = DAT_005bb940 | 1;
    DAT_005bb93a = 0;
  }
  if (((B_dsl1 == '\0') || (B_bkvleer == '\0')) || ((CWDSLSA & 1) == 0)) {
    if (B_fasla == '\0') {
      if ((DSLSLRSlokBits1a & B_dslo) ==
          ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) {
        if (B_sla == '\0') {
          if ((_MLWDSLMN < _ml_w) && (_ml_w < _MLWDSLMX)) {
            DSLSLRSlokBits3a = DSLSLRSlokBits3a | B_meaoper;
          }
          else {
            DSLSLRSlokBits3a =
                 DSLSLRSlokBits3a &
                 (B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr);
          }
        }
        else if ((_MLWDSLAMN < _ml_w) && (_ml_w < _MLWDSLAMX)) {
          DSLSLRSlokBits3a = DSLSLRSlokBits3a | B_meaoper;
        }
        else {
          DSLSLRSlokBits3a =
               DSLSLRSlokBits3a & (B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr)
          ;
        }
      }
      else if ((_MLWDSLOMN < _ml_w) && (_ml_w < _MLWDSLOMX)) {
        DSLSLRSlokBits3a = DSLSLRSlokBits3a | B_meaoper;
      }
      else {
        DSLSLRSlokBits3a =
             DSLSLRSlokBits3a & (B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr);
      }
    }
    else if ((_MLWDSLKMN < _ml_w) && (_ml_w < _MLWDSLKMX)) {
      DSLSLRSlokBits3a = DSLSLRSlokBits3a | B_meaoper;
    }
    else {
      DSLSLRSlokBits3a =
           DSLSLRSlokBits3a & (B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr);
    }
  }
  else {
    DSLSLRSlokBits3a =
         DSLSLRSlokBits3a & (B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr);
  }
  if ((DSLSLRSlokBits3a & B_meaoper) ==
      ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper)) {
    DAT_005bb940 = DAT_005bb940 & 0xef;
    DAT_005bb933 = 0;
  }
  else if (DAT_005bb933 < TWMLFE) {
    DAT_005bb933 = DAT_005bb933 + 1;
  }
  else {
    DAT_005bb940 = DAT_005bb940 | 0x10;
  }
  iVar18 = (uint)_rl_w - (uint)DAT_005bb99c;
  if (iVar18 < -0x8000) {
    iVar18 = -0x8000;
  }
  else if (0x7fff < iVar18) {
    iVar18 = 0x7fff;
  }
  dmsldrl_w = (word)iVar18;
  if ((short)dmsldrl_w < 0) {
    if (dmsldrl_w == 0x8000) {
      dmsldrl_w = 0x7fff;
    }
    else {
      dmsldrl_w = -dmsldrl_w;
    }
  }
  uVar15 = func_0xff2190c8(DMSDRLTM,0x1d34d7,&DAT_001d34dc,tmot);
  if (uVar15 < dmsldrl_w) {
    DAT_005bb939 = '\0';
    DAT_005bb940 = DAT_005bb940 & 0x7f;
  }
  else if (TDSLMDRL == DAT_005bb939) {
    DAT_005bb940 = DAT_005bb940 | 0x80;
  }
  else {
    DAT_005bb939 = DAT_005bb939 + '\x01';
  }
  DAT_005bb99c = _rl_w;
  if ((B_sbblsu == '\0') || (B_sbblsu2 == '\0')) {
    DAT_005bb99e = 0;
LAB_00184878:
    DAT_005bb943 = DAT_005bb943 & 0xbf;
  }
  else {
    uVar15 = func_0xff2190c8(TSBVDSLTMS,&DAT_001d3509,&DAT_001d3510,tmst);
    if (DAT_005bb99e < uVar15) {
      DAT_005bb99e = DAT_005bb99e + 1;
      goto LAB_00184878;
    }
    DAT_005bb943 = DAT_005bb943 | 0x40;
  }
  local_a0 = &DAT_005bb948;
  if ((DAT_001cb364 & 4) == 0) {
    DAT_005bb948 = DAT_005bb948 | 0x40;
  }
  else {
    if ((B_gdst == 0) && ((DAT_005bb948 & 0x80) != 0)) {
      DAT_005bb93d = TDGDST;
    }
    if (DAT_005bb93d != '\0') {
      DAT_005bb93d = DAT_005bb93d + -1;
    }
    if (DAT_005bb93d == '\0') {
      DAT_005bb948 = DAT_005bb948 | 0x40;
    }
    else {
      DAT_005bb948 = DAT_005bb948 & 0xbf;
    }
  }
  if (B_gdst == 0) {
    DAT_005bb948 = DAT_005bb948 & 0x7f;
  }
  else {
    DAT_005bb948 = DAT_005bb948 | 0x80;
  }
  if ((((((DSLSLRSlokBits1a & B_dsl) ==
          ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) ||
        ((DAT_005bb940 & 0x10) == 0)) || (B_evloc == '\0')) ||
      (((DAT_005bb940 & 1) != 0 || ((DAT_005bb940 & 0x80) == 0)))) ||
     (((DAT_005bb943 & 0x40) == 0 || ((DAT_005bb948 & 0x40) == 0)))) {
    B_mslmin = B_mslmin & (B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme);
  }
  else {
    B_mslmin = B_mslmin | B_dslmes;
  }
  if ((DSLSLRSlokBits2a & B_slsofw) ==
      ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab)) {
    DAT_005bb944 = DAT_005bb944 & 0xfd;
  }
  else {
    DAT_005bb944 = DAT_005bb944 | 2;
  }
  if ((B_slsoff == '\0') || ((B_kha == '\0' && (B_stend == '\0')))) {
    DAT_005bb93b = 0;
    DSLSLRSlokBits2a =
         DSLSLRSlokBits2a & (B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_dsl4ab);
  }
  else {
    bVar1 = TDPHSLOF;
    if (B_fasla != '\0') {
      bVar1 = TDPHSLOFK;
    }
    if (DAT_005bb93b < bVar1) {
      DAT_005bb93b = DAT_005bb93b + 1;
    }
    else {
      DSLSLRSlokBits2a = DSLSLRSlokBits2a | B_slsofw;
    }
  }
  if (((DSLSLRSlokBits2a & B_slsofw) ==
       ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab)) ||
     ((DAT_005bb944 & 2) != 0)) {
    DAT_005bb940 = DAT_005bb940 & 0xbf;
  }
  else {
    DAT_005bb940 = DAT_005bb940 | 0x40;
  }
  if (((B_dsls == '\0') || ((B_dsl5ab & 0x40) == 0)) || (B_te != '\0')) {
    B_dslfa = 0;
  }
  else {
    B_dslfa = 1;
  }
  if (((B_dsls == '\0') || (B_sls == '\0')) ||
     (((B_kh == '\0' || (1 < anzslp)) && ((B_dsl5ab & 0x40) == 0)))) {
    B_dsl1 = '\0';
    B_cwsla = B_cwsla & (B_cwsla|B_dslte|B_dsper|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2);
  }
  else {
    B_dsl1 = '\x01';
    if ((B_mslmin & B_cwdslt) ==
        ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) {
      B_cwsla = B_cwsla & (B_cwsla|B_dslte|B_dsper|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2);
    }
    else {
      B_cwsla = B_cwsla | B_dspes;
    }
  }
  if (B_slp == '\0') {
    DAT_005bb936 = 0;
  }
  else if (DAT_005bb936 < TWHLSLP) {
    DAT_005bb936 = DAT_005bb936 + 1;
  }
  if (B_dsl1 == '\0') {
    B_cwsla = B_cwsla & (B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl2);
    if (((DAT_005bb93f & 1) != 0) && ((B_dsl5ab & 0x40) == 0)) {
      bVar1 = TDMSLMN1;
      if (B_fasla != '\0') {
        bVar1 = TDMSLMNK;
      }
      if (DAT_005bb92e <= bVar1) {
        B_cwsla = B_cwsla | B_dsl1ab;
      }
    }
  }
  else if (((B_mslmin & B_dslmes) ==
            ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) ||
          (DAT_005bb936 < TWHLSLP)) {
    B_cwsla = B_cwsla & (B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl2);
  }
  else {
    B_cwsla = B_cwsla | B_dsl1e;
    if (DAT_005bb92e != 0xff) {
      DAT_005bb92e = DAT_005bb92e + 1;
    }
  }
  if ((B_dsls != '\0') && ((DAT_005bb942 & 4) == 0)) {
    DAT_005bb92e = 0;
    B_cwsla = B_cwsla & (B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1e|B_dsl2);
  }
  if (((B_mslmin & B_dslmes) ==
       ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) ||
     ((B_cwsla & B_dsl2) == ~(B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2))) {
    DSLSLRSlokBits2a =
         DSLSLRSlokBits2a & (B_dsl2ab|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab);
  }
  else {
    DSLSLRSlokBits2a = DSLSLRSlokBits2a | B_dsl2e;
  }
  if ((B_cwsla & B_dsper) == ~(B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2)) {
    if ((((B_mslmin & B_cwdslt) !=
          ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) &&
        (B_dsl1 == '\0')) && ((DAT_005bb93f & 1) != 0)) {
      DAT_005bb946 = DAT_005bb946 | 2;
    }
  }
  else {
    DAT_005bb946 = DAT_005bb946 & 0xfd;
  }
  if (((B_slp == '\0') || ((DAT_005bb948 & 0x10) != 0)) &&
     (((DAT_005bb93f & 4) == 0 ||
      ((B_cwsla & B_dsl2) != ~(B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2)))))
  {
    if ((DAT_005bb940 & 0x40) != 0) {
      DAT_005bb948 = DAT_005bb948 | 4;
    }
  }
  else {
    DAT_005bb948 = DAT_005bb948 & 0xfb;
  }
  local_b6 = DSLSLRSlokBits2a;
  if ((DSLSLRSlokBits2a & B_dsl2e) !=
      ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab)) {
    if (DAT_005bb92f == 0) {
      DAT_005bb941 = DAT_005bb941 & 0xfe;
    }
    else {
      DAT_005bb92f = DAT_005bb92f - 1;
    }
  }
  if ((((B_dsls != '\0') && ((DAT_005bb946 & 2) != 0)) &&
      ((B_mslmn == '\0' && ((DAT_005bb948 & 4) != 0)))) &&
     (((B_kh == '\0' || ((DAT_001cb364 & 1) == 0)) && ((DAT_005bb941 & 1) == 0)))) {
    DAT_005bb92f = TDMSLV;
    if (B_fasla != '\0') {
      DAT_005bb92f = TDMSLVK;
    }
    DAT_005bb941 = DAT_005bb941 | 1;
  }
  if ((((DAT_005bb940 & 0x40) == 0) && ((B_dsl5ab & 0x40) == 0)) || ((DAT_005bb946 & 2) == 0)) {
    DAT_005bb947 = DAT_005bb947 | 0x10;
  }
  else {
    DAT_005bb947 = DAT_005bb947 & 0xef;
  }
  local_c2 = DAT_005bb941;
  local_dc = DAT_005bb941 & 1;
  if (((DAT_005bb941 & 1) == 0) || ((DAT_005bb947 & 0x10) == 0)) {
    DAT_005bb947 = DAT_005bb947 & 0xdf;
    DAT_005bb996 = 0;
  }
  else {
    if (B_fasla == '\0') {
      uVar15 = (ushort)TDMSLV + (ushort)TNOMF2;
    }
    else {
      uVar15 = (ushort)TDMSLVK + (ushort)TNOMF2;
    }
    if (DAT_005bb996 < uVar15) {
      DAT_005bb996 = DAT_005bb996 + 1;
    }
    else {
      DAT_005bb947 = DAT_005bb947 | 0x20;
    }
  }
  local_d0 = B_mslmin & 8;
  if (((DAT_005bb947 & 0x20) == 0) &&
     ((B_mslmin & B_dslerr) ==
      ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes))) {
    DSLSLRSlokBits2a =
         DSLSLRSlokBits2a & (B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab);
  }
  else {
    DSLSLRSlokBits2a = DSLSLRSlokBits2a | B_dsl2ab;
  }
  if ((B_cwsla & B_dsl2) == ~(B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2)) {
    DAT_005bb93f = DAT_005bb93f & 0xfb;
  }
  else {
    DAT_005bb93f = DAT_005bb93f | 4;
  }
  if ((((DSLSLRSlokBits2a & B_dsl2ab) ==
        ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab)) &&
      ((DAT_005bb941 & 1) != 0)) && ((DAT_005bb947 & 0x10) != 0)) {
    B_cwsla = B_cwsla | B_dsl2;
  }
  else {
    B_cwsla = B_cwsla & (B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl1e);
  }
  if (((DAT_005bb93f & 4) == 0) ||
     ((B_cwsla & B_dsl2) != ~(B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2))) {
    B_cwsla = B_cwsla & (B_cwsla|B_dslte|B_dspes|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2);
  }
  else {
    B_cwsla = B_cwsla | B_dsper;
  }
  local_e0 = B_cwsla & 0x80;
  if ((B_cwsla & B_dsl2) == ~(B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2)) {
    if (DAT_005bb93c < TDPH2SLOF) {
      DAT_005bb93c = DAT_005bb93c + 1;
    }
    else if ((DAT_005bb943 & 2) == 0) {
      DAT_005bb940 = DAT_005bb940 & 0xdf;
    }
    else {
      DAT_005bb940 = DAT_005bb940 | 0x20;
      DAT_005bb943 = DAT_005bb943 & 0xfd;
    }
  }
  else {
    DAT_005bb93c = 0;
    DAT_005bb940 = DAT_005bb940 & 0xdf;
    DAT_005bb943 = DAT_005bb943 | 2;
  }
  if ((((B_mslmin & B_dslmes) ==
        ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) ||
      ((DSLSLRSlokBits2a & B_dsl3) ==
       ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab))) || (B_lrs == '\0')) {
    DSLSLRSlokBits2a =
         DSLSLRSlokBits2a & (B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_eslvp|B_slsofw|B_dsl4ab);
  }
  else {
    DSLSLRSlokBits2a = DSLSLRSlokBits2a | B_dsl3e;
  }
  if (((DAT_005bb947 & 1) == 0) ||
     ((DSLSLRSlokBits2a & B_dsl3) !=
      ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab))) {
    if ((B_cwsla & B_dsl2) != ~(B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2)) {
      DAT_005bb947 = DAT_005bb947 | 2;
    }
  }
  else {
    DAT_005bb947 = DAT_005bb947 & 0xfd;
  }
  if (((DAT_005bb947 & 2) == 0) &&
     (((B_mslmin & B_cwdslt) ==
       ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes) || (B_mslmn != '\0')))
     ) {
    DAT_005bb945 = DAT_005bb945 & 0xdf;
  }
  else {
    DAT_005bb945 = DAT_005bb945 | 0x20;
  }
  if ((DAT_005bb945 & 8) == 0) {
    DAT_005bb945 = DAT_005bb945 & 0xef;
  }
  else {
    DAT_005bb945 = DAT_005bb945 | 0x10;
  }
  if ((DAT_005bb945 & 0x20) == 0) {
    if ((DAT_005bb93f & 1) == 0) {
      DAT_005bb945 = DAT_005bb945 & 0xf7;
    }
    else {
      DAT_005bb945 = DAT_005bb945 | 8;
    }
  }
  else if ((B_cwsla & B_dsl2) == ~(B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2)
          ) {
    DAT_005bb945 = DAT_005bb945 & 0xf7;
  }
  else {
    DAT_005bb945 = DAT_005bb945 | 8;
  }
  if (((DAT_005bb947 & 1) == 0) ||
     ((DSLSLRSlokBits2a & B_dsl3) !=
      ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab))) {
    if (((DAT_005bb945 & 8) == 0) && ((DAT_005bb945 & 0x10) != 0)) {
      DAT_005bb945 = DAT_005bb945 | 4;
    }
  }
  else {
    DAT_005bb945 = DAT_005bb945 & 0xfb;
  }
  if (((B_slp == '\0') || ((DAT_005bb948 & 0x10) != 0)) &&
     (((DAT_005bb947 & 1) == 0 ||
      ((DSLSLRSlokBits2a & B_dsl3) !=
       ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab))))) {
    if ((DAT_005bb940 & 0x40) != 0) {
      DAT_005bb948 = DAT_005bb948 | 8;
    }
  }
  else {
    DAT_005bb948 = DAT_005bb948 & 0xf7;
  }
  if ((DAT_005bb944 & 4) == 0) {
    DAT_005bb948 = DAT_005bb948 & 0xdf;
  }
  else {
    DAT_005bb948 = DAT_005bb948 | 0x20;
  }
  local_e4 = DAT_005bb945 & 4;
  if ((DAT_005bb945 & 0x20) == 0) {
    if ((((DAT_005bb945 & 4) == 0) || ((DAT_005bb948 & 8) == 0)) ||
       ((B_kh != '\0' && ((DAT_001cb364 & 1) != 0)))) {
      DAT_005bb944 = DAT_005bb944 & 0xfb;
    }
    else {
      DAT_005bb944 = DAT_005bb944 | 4;
    }
  }
  else if ((((DAT_005bb945 & 4) == 0) || ((DAT_005bb940 & 0x20) == 0)) ||
          ((B_kh != '\0' && ((DAT_001cb364 & 1) != 0)))) {
    DAT_005bb944 = DAT_005bb944 & 0xfb;
  }
  else {
    DAT_005bb944 = DAT_005bb944 | 4;
  }
  if ((DSLSLRSlokBits2a & B_dsl3e) !=
      ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab)) {
    if (DAT_005bb930 == 0) {
      DAT_005bb941 = DAT_005bb941 & 0xfd;
    }
    else {
      DAT_005bb930 = DAT_005bb930 - 1;
    }
  }
  if ((((DAT_005bb944 & 4) != 0) && ((DAT_005bb948 & 0x20) == 0)) && ((DAT_005bb941 & 2) == 0)) {
    DAT_005bb930 = TDMSLOF3;
    if (B_fasla != '\0') {
      DAT_005bb930 = TDMSLOFK;
    }
    DAT_005bb941 = DAT_005bb941 | 2;
  }
  if (((DAT_005bb945 & 4) == 0) ||
     ((((DAT_005bb940 & 0x40) == 0 && ((DAT_005bb940 & 0x20) == 0)) && ((B_dsl5ab & 0x40) == 0)))) {
    DAT_005bb945 = DAT_005bb945 | 2;
  }
  else {
    DAT_005bb945 = DAT_005bb945 & 0xfd;
  }
  local_e8 = DAT_005bb941 & 2;
  if (((DAT_005bb941 & 2) == 0) || ((DAT_005bb945 & 2) == 0)) {
    DAT_005bb945 = DAT_005bb945 & 0xfe;
    DAT_005bb998 = 0;
  }
  else {
    if (B_fasla == '\0') {
      uVar15 = (ushort)TDMSLOF3 + (ushort)TNOMF3;
    }
    else {
      uVar15 = (ushort)TDMSLOFK + (ushort)TNOMF3;
    }
    if (DAT_005bb998 < uVar15) {
      DAT_005bb998 = DAT_005bb998 + 1;
    }
    else {
      DAT_005bb945 = DAT_005bb945 | 1;
    }
  }
  if (((DAT_005bb945 & 1) == 0) &&
     ((B_mslmin & B_dslerr) ==
      ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes))) {
    DSLSLRSlokBits2a =
         DSLSLRSlokBits2a & (B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab);
  }
  else {
    DSLSLRSlokBits2a = DSLSLRSlokBits2a | B_dsl3ab;
  }
  if ((DSLSLRSlokBits2a & B_dsl3) ==
      ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab)) {
    DAT_005bb947 = DAT_005bb947 & 0xfe;
  }
  else {
    DAT_005bb947 = DAT_005bb947 | 1;
  }
  if ((((DSLSLRSlokBits2a & B_dsl3ab) ==
        ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab)) &&
      ((DAT_005bb941 & 2) != 0)) && ((DAT_005bb945 & 2) != 0)) {
    DSLSLRSlokBits2a = DSLSLRSlokBits2a | B_dsl3;
  }
  else {
    DSLSLRSlokBits2a =
         DSLSLRSlokBits2a & (B_dsl2ab|B_dsl2e|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab);
  }
  if (B_slp == '\0') {
    DAT_005bb948 = DAT_005bb948 & 0xef;
  }
  else {
    DAT_005bb948 = DAT_005bb948 | 0x10;
  }
  if (B_dsl4 == '\0') {
    DAT_005bb941 = DAT_005bb941 & 0x7f;
  }
  else {
    DAT_005bb941 = DAT_005bb941 | 0x80;
  }
  if ((B_dsls == '\0') || (B_te != '\0')) {
    B_dslsp4 = '\0';
    B_dsl4 = '\0';
  }
  else if (B_sla != '\0') {
    B_dslsp4 = '\x01' - ((DSLSLRSlokBits1a & B_slarq) ==
                        ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab));
    B_dsl4 = B_slp;
  }
  if (((B_dsl4 == '\0') ||
      ((B_mslmin & B_dslmes) ==
       ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes))) ||
     ((DAT_005bb936 < TWHLSLP || (B_sls == '\0')))) {
    B_dsl5ab = B_dsl5ab & 0xfe;
  }
  else {
    B_dsl5ab = B_dsl5ab | 1;
    if (DAT_005bb931 != 0xff) {
      DAT_005bb931 = DAT_005bb931 + 1;
    }
  }
  if ((B_dsls == '\0') || ((DAT_005bb942 & 4) != 0)) {
    if ((B_dsl4 == '\0') &&
       ((((DAT_005bb941 & 0x80) != 0 && (B_mslmn == '\0')) && (DAT_005bb931 <= TDMSLMN4)))) {
      DSLSLRSlokBits2a = DSLSLRSlokBits2a | B_dsl4ab;
    }
  }
  else {
    DAT_005bb931 = 0;
    DSLSLRSlokBits2a =
         DSLSLRSlokBits2a & (B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw);
  }
  if (((B_dsl5ab & 2) == 0) && ((DAT_005bb942 & 8) != 0)) {
    DAT_005bb945 = DAT_005bb945 & 0xbf;
  }
  else if ((B_dsl4 != '\0') && ((DAT_005bb941 & 0x80) == 0)) {
    DAT_005bb945 = DAT_005bb945 | 0x40;
  }
  if ((((B_mslmin & B_dslmes) ==
        ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) ||
      ((B_dsl5ab & 2) == 0)) || (B_lrs == '\0')) {
    B_dsl5ab = B_dsl5ab & 0xf7;
  }
  else {
    B_dsl5ab = B_dsl5ab | 8;
  }
  if ((DAT_005bb944 & 0x10) == 0) {
    DAT_005bb944 = DAT_005bb944 & 0xdf;
  }
  else {
    DAT_005bb944 = DAT_005bb944 | 0x20;
  }
  if ((((B_dsls == '\0') || (B_te != '\0')) || ((DAT_005bb940 & 0x40) == 0)) ||
     ((DAT_005bb945 & 0x40) == 0)) {
    DAT_005bb944 = DAT_005bb944 & 0xef;
  }
  else {
    DAT_005bb944 = DAT_005bb944 | 0x10;
  }
  if ((DAT_005bb944 & 0x10) == 0) {
    if ((B_dsl5ab & 8) != 0) {
LAB_00185a64:
      if (DAT_005bb932 == 0) {
        DAT_005bb941 = DAT_005bb941 & 0xfb;
      }
      else {
        DAT_005bb932 = DAT_005bb932 - 1;
      }
    }
  }
  else {
    if (((DAT_005bb944 & 0x20) != 0) || ((DAT_005bb941 & 4) != 0)) goto LAB_00185a64;
    DAT_005bb932 = TDMSLOF5;
    DAT_005bb941 = DAT_005bb941 | 4;
  }
  if ((B_dsl5ab & 2) == 0) {
    DAT_005bb942 = DAT_005bb942 & 0xf7;
  }
  else {
    DAT_005bb942 = DAT_005bb942 | 8;
  }
  if (((DAT_005bb941 & 4) == 0) || (((DAT_005bb945 & 0x40) != 0 && ((DAT_005bb940 & 0x40) != 0)))) {
    B_dsl5ab = B_dsl5ab & 0xf9;
    DAT_005bb99a = 0;
  }
  else if (DAT_005bb99a < (ushort)((ushort)TDMSLOF5 + (ushort)TNOMF5)) {
    DAT_005bb99a = DAT_005bb99a + 1;
    B_dsl5ab = B_dsl5ab | 2;
  }
  else {
    B_dsl5ab = B_dsl5ab & 0xfd | 4;
  }
  if ((B_mslmin & B_dslerr) !=
      ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) {
    B_dsl5ab = B_dsl5ab & 0xfd | 4;
  }
  if ((B_dsl5ab & 2) == 0) {
    if (DAT_005bb9a6 < _TMSLADAP) {
      DAT_005bb9a6 = DAT_005bb9a6 + 1;
    }
    else {
      DSLSLRSlokBits3a =
           DSLSLRSlokBits3a & (B_dfrmoff2|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper);
    }
  }
  else {
    DAT_005bb9a6 = 0;
    DSLSLRSlokBits3a = DSLSLRSlokBits3a | B_dsl5dly;
  }
  if ((B_slsoff == '\0') || ((DAT_005bb942 & 2) != 0)) {
    if ((B_dsl4 != '\0') || ((B_dsl1 != '\0' && ((B_dsl5ab & 0x40) != 0)))) {
      B_dsla = 1;
    }
  }
  else {
    B_dsla = 0;
  }
  if ((B_mslmin & B_dslm) == ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes))
  {
    DAT_005bb943 = DAT_005bb943 & 0xfb;
  }
  else {
    DAT_005bb943 = DAT_005bb943 | 4;
  }
  if ((DSLSLRSlokBits1a & B_dslo) ==
      ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) {
    DAT_005bb941 = DAT_005bb941 & 0xf7;
  }
  else {
    DAT_005bb941 = DAT_005bb941 | 8;
  }
  if ((DSLSLRSlokBits1a & B_dsloab) ==
      ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) {
    DAT_005bb940 = DAT_005bb940 & 0xf7;
  }
  else {
    DAT_005bb940 = DAT_005bb940 | 8;
  }
  if ((B_dsl1 == '\0') && (B_dsl4 == '\0')) {
    B_mslmin = B_mslmin & (B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslmab|B_dslme|B_dslmes);
  }
  else {
    B_mslmin = B_mslmin | B_dslm;
  }
  if (((B_cwsla & B_dsl1e) == ~(B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2))
     && ((B_dsl5ab & 1) == 0)) {
    B_mslmin = B_mslmin & (B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslmes);
  }
  else {
    B_mslmin = B_mslmin | B_dslme;
  }
  if (((B_mslmin & B_dslm) == ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)
      ) || ((DAT_005bb943 & 4) != 0)) {
    if ((((B_cwsla & B_dsl1ab) !=
          ~(B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2)) ||
        ((DSLSLRSlokBits2a & B_dsl4ab) !=
         ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab))) &&
       ((DAT_005bb942 & 0x80) == 0)) {
      B_mslmin = B_mslmin | B_dslmab;
    }
    if ((((DSLSLRSlokBits2a & B_dsl3ab) !=
          ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab)) ||
        ((B_dsl5ab & 4) != 0)) && ((DAT_005bb943 & 1) == 0)) {
      DSLSLRSlokBits1a = DSLSLRSlokBits1a | B_dsloab;
    }
  }
  else {
    B_mslmin = B_mslmin & (B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslme|B_dslmes);
    DSLSLRSlokBits1a = DSLSLRSlokBits1a & (B_dslo|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab);
  }
  if (((DSLSLRSlokBits2a & B_dsl3) ==
       ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab)) &&
     ((B_dsl5ab & 2) == 0)) {
    DSLSLRSlokBits1a = DSLSLRSlokBits1a & (B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab);
  }
  else {
    DSLSLRSlokBits1a = DSLSLRSlokBits1a | B_dslo;
  }
  if (((DSLSLRSlokBits2a & B_dsl3e) ==
       ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab)) &&
     ((B_dsl5ab & 8) == 0)) {
    DSLSLRSlokBits1a = DSLSLRSlokBits1a & (B_dslo|B_dsloab|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab);
  }
  else {
    DSLSLRSlokBits1a = DSLSLRSlokBits1a | B_dsloe;
  }
  if (((B_dsl5ab & 2) == 0) && ((DAT_005bb942 & 8) != 0)) {
    DSLSLRSlokBits3a =
         DSLSLRSlokBits3a & (B_dfrmoff2|B_dsl5dly|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper);
  }
  else if ((B_dsl4 != '\0') && ((DAT_005bb941 & 0x80) == 0)) {
    DSLSLRSlokBits3a = DSLSLRSlokBits3a | B_dsl45;
  }
  if (((B_cwsla & B_dsl1ab) == ~(B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2))
     && ((DSLSLRSlokBits2a & B_dsl4ab) ==
         ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab))) {
    DAT_005bb942 = DAT_005bb942 & 0x7f;
  }
  else {
    DAT_005bb942 = DAT_005bb942 | 0x80;
  }
  if (((DSLSLRSlokBits2a & B_dsl3ab) ==
       ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab)) &&
     ((B_dsl5ab & 4) == 0)) {
    DAT_005bb943 = DAT_005bb943 & 0xfe;
  }
  else {
    DAT_005bb943 = DAT_005bb943 | 1;
  }
  if (((((B_cwsla & B_dsper) == ~(B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2))
       && ((B_mslmin & B_dslerr) ==
           ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes))) &&
      (B_nmot != '\0')) &&
     ((B_mslmn == '\0' &&
      (((B_mslmin & B_cwdslt) !=
        ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes) ||
       ((DAT_005bb946 & 8) == 0)))))) {
    if ((B_cwsla & B_dspes) != ~(B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2))
    {
      B_dspe = 1;
    }
  }
  else {
    B_dspe = 0;
  }
  if ((DSLSLRSlokBits2a & B_dsl2e) ==
      ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab)) {
    B_cwsla = B_cwsla & (B_cwsla|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2);
  }
  else {
    B_cwsla = B_cwsla | B_dslte;
  }
  if ((DSLSLRSlokBits2a & B_dsl2ab) ==
      ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab)) {
    DSLSLRSlokBits1a = DSLSLRSlokBits1a & (B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq);
  }
  else {
    DSLSLRSlokBits1a = DSLSLRSlokBits1a | B_dsltab;
  }
  if ((DAT_005bb93f & 1) == 0) {
    DAT_005bb93f = DAT_005bb93f & 0xfd;
  }
  else {
    DAT_005bb93f = DAT_005bb93f | 2;
  }
  if (B_dsl1 == '\0') {
    DAT_005bb93f = DAT_005bb93f & 0xfe;
  }
  else {
    DAT_005bb93f = DAT_005bb93f | 1;
  }
  if (B_slsoff == '\0') {
    DAT_005bb942 = DAT_005bb942 & 0xfd;
  }
  else {
    DAT_005bb942 = DAT_005bb942 | 2;
  }
  if (((DSLSLRSlokBits1a & B_dslo) ==
       ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) &&
     ((DAT_005bb941 & 8) != 0)) {
    DAT_005bb941 = DAT_005bb941 | 0x10;
  }
  else {
    DAT_005bb941 = DAT_005bb941 & 0xef;
  }
  iVar18 = frm_w - 0x8000;
  if (iVar18 < -0x8000) {
    iVar18 = -0x8000;
  }
  else if (0x7fff < iVar18) {
    iVar18 = 0x7fff;
  }
  DAT_005bb9a2 = (short)iVar18;
  if (((B_mslmin & B_dslmes) ==
       ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) ||
     (((DSLSLRSlokBits1a & B_dslo) ==
       ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab) &&
      ((B_sla == '\0' ||
       ((B_mslmin & B_dslm) !=
        ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes))))))) {
    B_awmslsum = B_awmslsum & ~B_dfrmoe;
  }
  else {
    B_awmslsum = B_awmslsum | B_dfrmoe;
  }
  if (((DSLSLRSlokBits1a & B_dslo) ==
       ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) ||
     ((DAT_005bb941 & 8) != 0)) {
    if ((B_awmslsum & B_dfrmoe) != 0) {
      if (B_fasla == '\0') {
        _DAT_005bb9f8 =
             func_0xff217f84((uint)TFIMSLO << 8,(int)DAT_005bb9a2,(int)(short)DAT_005bb9f8,
                             _DAT_005bb9f8 & 0xffff);
      }
      else {
        _DAT_005bb9f8 =
             func_0xff217f84((uint)TFIMSLOK << 8,(int)DAT_005bb9a2,(int)(short)DAT_005bb9f8,
                             _DAT_005bb9f8 & 0xffff);
      }
      dfrmoff_w = DAT_005bb9f8;
      goto LAB_00186250;
    }
  }
  else {
    _DAT_005bb9f8 = 0;
    dfrmoff_w = 0;
LAB_00186250:
    if ((B_awmslsum & B_dfrmoe) != 0) {
      if (B_fasla == '\0') {
        if ((short)dfrmoff_w < 0) {
          if ((short)dfrmoff_w < _DFRMOFNX) {
            B_dsl5ab = B_dsl5ab | 0x80;
          }
          else {
LAB_001862d4:
            B_dsl5ab = B_dsl5ab & 0x7f;
          }
        }
        else {
          if ((short)dfrmoff_w <= _DFRMOFPX) goto LAB_001862d4;
          B_dsl5ab = B_dsl5ab | 0x80;
        }
      }
      else if ((short)dfrmoff_w < 0) {
        if ((short)dfrmoff_w < _DFRMOFNXKT) {
          B_dsl5ab = B_dsl5ab | 0x80;
        }
        else {
LAB_0018634c:
          B_dsl5ab = B_dsl5ab & 0x7f;
        }
      }
      else {
        if ((short)dfrmoff_w <= _DFRMOFPXKT) goto LAB_0018634c;
        B_dsl5ab = B_dsl5ab | 0x80;
      }
    }
  }
  iVar18 = frm2_w - 0x8000;
  if (iVar18 < -0x8000) {
    iVar18 = -0x8000;
  }
  else if (0x7fff < iVar18) {
    iVar18 = 0x7fff;
  }
  DAT_005bb9b0 = (short)iVar18;
  if ((B_awmslsum & B_dfrmoe) == 0) {
    DSLSLRSlokBits4a = DSLSLRSlokBits4a & ~B_dfrmoe2;
  }
  else {
    DSLSLRSlokBits4a = DSLSLRSlokBits4a | B_dfrmoe2;
  }
  if (((DSLSLRSlokBits1a & B_dslo) ==
       ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) ||
     ((DAT_005bb941 & 8) != 0)) {
    if ((DSLSLRSlokBits4a & B_dfrmoe2) != 0) {
      if (B_fasla == '\0') {
        _DAT_005bba04 =
             func_0xff217f84((uint)TFIMSLO << 8,(int)DAT_005bb9b0,(int)(short)DAT_005bba04,
                             _DAT_005bba04 & 0xffff);
      }
      else {
        _DAT_005bba04 =
             func_0xff217f84((uint)TFIMSLOK << 8,(int)DAT_005bb9b0,(int)(short)DAT_005bba04,
                             _DAT_005bba04 & 0xffff);
      }
      dfrmoff2_w = DAT_005bba04;
      goto LAB_001864a0;
    }
  }
  else {
    _DAT_005bba04 = 0;
    dfrmoff2_w = 0;
LAB_001864a0:
    if ((DSLSLRSlokBits4a & B_dfrmoe2) != 0) {
      if (B_fasla == '\0') {
        if ((short)dfrmoff2_w < 0) {
          if ((short)dfrmoff2_w < _DFRMOFNX) {
            DSLSLRSlokBits3a = DSLSLRSlokBits3a | B_dfrmoff2;
          }
          else {
LAB_00186524:
            DSLSLRSlokBits3a =
                 DSLSLRSlokBits3a &
                 (B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper);
          }
        }
        else {
          if ((short)dfrmoff2_w <= _DFRMOFPX) goto LAB_00186524;
          DSLSLRSlokBits3a = DSLSLRSlokBits3a | B_dfrmoff2;
        }
      }
      else if ((short)dfrmoff2_w < 0) {
        if ((short)dfrmoff2_w < _DFRMOFNXKT) {
          DSLSLRSlokBits3a = DSLSLRSlokBits3a | B_dfrmoff2;
        }
        else {
LAB_0018659c:
          DSLSLRSlokBits3a =
               DSLSLRSlokBits3a & (B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper);
        }
      }
      else {
        if ((short)dfrmoff2_w <= _DFRMOFPXKT) goto LAB_0018659c;
        DSLSLRSlokBits3a = DSLSLRSlokBits3a | B_dfrmoff2;
      }
    }
  }
  if (B_dsls == '\0') {
    DAT_005bb942 = DAT_005bb942 & 0xfb;
  }
  else {
    DAT_005bb942 = DAT_005bb942 | 4;
  }
  if (((((DAT_005bb941 & 0x10) == 0) &&
       ((B_mslmin & B_dslerr) ==
        ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes))) && (B_nmot != '\0')
      ) && (((DSLSLRSlokBits1a & B_dsloab) ==
             ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab) ||
            ((DAT_005bb940 & 8) != 0)))) {
    if ((DSLSLRSlokBits1a & B_dsl) !=
        ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) {
      if (B_fasla == '\0') {
        if ((B_sla == '\0') ||
           (((_TNSTDSL < tnst_w && (_IMLATDSL < imlatm_w)) &&
            (((B_ll != '\0' && (vfzg <= DSLVFZMN)) || ((CWDSLSA & 8) == 0)))))) {
LAB_00186710:
          if (((B_sls != '\0') ||
              (((B_mslmin & B_dslmes) !=
                ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes) &&
               (((B_dsl5ab & 0x40) != 0 ||
                (((B_sla != '\0' && ((B_dsl5ab & 0x80) == 0)) &&
                 ((DSLSLRSlokBits3a & B_dfrmoff2) ==
                  ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper))))))
               ))) && ((DSLSLRSlokBits3a & B_dsl5dly) ==
                       ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper)
                      )) {
            B_dsls = '\x01';
          }
        }
      }
      else if (_IMLATDSLK < imlatm_w) goto LAB_00186710;
    }
  }
  else {
    B_dsls = '\0';
  }
  uVar16 = func_0xff217b40((int)(uint)lamsoni_w >> 3,(lamsoni_w & 7) << 0xd,lamsbg_w);
  uVar17 = func_0xff2217f4(uVar16,frm_w);
  if (mlbb_w < 0x1000) {
    DAT_005bb9a0 = mlbb_w;
  }
  else {
    DAT_005bb9a0 = 0xfff;
  }
  iVar18 = (uVar17 & 0xffff) - 0x1000;
  if (iVar18 < -0x8000) {
    iVar18 = -0x8000;
  }
  else if (0x7fff < iVar18) {
    iVar18 = 0x7fff;
  }
  iVar18 = (int)((int)(short)iVar18 * (DAT_005bb9a0 & 0xfff) * 0x10) >> 0x10;
  if (iVar18 < -0x8000) {
    iVar18 = -0x8000;
  }
  else if (0x7fff < iVar18) {
    iVar18 = 0x7fff;
  }
  mslt_w = (word)iVar18;
  if ((short)mslt_w < 1) {
    mslt_w = 0;
  }
  mslvt_w = mslt_w;
  if ((B_cwsla & B_dslte) != ~(B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2)) {
    if (B_fasla == '\0') {
      DAT_005bb9fc = func_0xff217f84((uint)TFIMSLV << 8,(int)(short)mslt_w,(int)DAT_005bb9fc._0_2_,
                                     DAT_005bb9fc & 0xffff);
    }
    else {
      DAT_005bb9fc = func_0xff217f84((uint)TFIMSLVK << 8,(int)(short)mslt_w,(int)DAT_005bb9fc._0_2_,
                                     DAT_005bb9fc & 0xffff);
    }
    if ((int)DAT_005bb9fc < 0x1fffc00) {
      if ((int)DAT_005bb9fc < 1) {
        DAT_005bb9fc = 0;
        mslvft_w = 0;
      }
      else {
        mslvft_w = (word)((int)DAT_005bb9fc >> 10);
      }
    }
    else {
      DAT_005bb9fc = 0x1fffc00;
      mslvft_w = 0x7fff;
    }
  }
  if ((B_mslmin & B_dslm) == ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes))
  {
    DAT_005bb9a8 = _TMSLIFT;
    DAT_005bb9aa = _TMSLIFT1;
    DAT_005bb9ac = _TMSLIFTK;
  }
  else {
    if (DAT_005bb9a8 != 0) {
      DAT_005bb9a8 = DAT_005bb9a8 + -1;
    }
    if (DAT_005bb9aa != 0) {
      DAT_005bb9aa = DAT_005bb9aa + -1;
    }
    if (DAT_005bb9ac != 0) {
      DAT_005bb9ac = DAT_005bb9ac + -1;
    }
  }
  if ((B_mslmin & B_dslme) == ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)
     ) {
LAB_00186a78:
    DAT_005bb942 = DAT_005bb942 & 0xbf;
  }
  else {
    sVar9 = DAT_005bb9a8;
    if ((B_dsl1 != '\0') && (sVar9 = DAT_005bb9ac, B_fasla == '\0')) {
      sVar9 = DAT_005bb9aa;
    }
    if (sVar9 != 0) goto LAB_00186a78;
    DAT_005bb942 = DAT_005bb942 | 0x40;
  }
  if ((B_sla == '\0') || ((DAT_005bb945 & 0x80) != 0)) {
    if ((DAT_005bb942 & 0x40) != 0) {
      if ((fmsla == 0) || (uVar17 = ((uint)msl << 7) / (uint)fmsla, 0xffff < uVar17)) {
        uVar17 = 0xffff;
      }
      if (uVar17 < 0xff) {
        mslnt = (byte)uVar17;
      }
      else {
        mslnt = 0xff;
      }
      if (B_fasla == '\0') {
        DAT_005bb9a4 = func_0xff217fe8((uint)TFIMSLI << 8,mslnt,DAT_005bb9a4);
      }
      else {
        DAT_005bb9a4 = func_0xff217fe8((uint)TFIMSLIK << 8,mslnt,DAT_005bb9a4);
      }
      mslnf = (byte)((ushort)DAT_005bb9a4 >> 8);
      if (B_fasla == '\0') {
        _DAT_005bb9f4 =
             func_0xff217f20((uint)TFIMSLI << 8,mslt_w,DAT_005bb9f4,_DAT_005bb9f4 & 0xffff);
      }
      else {
        _DAT_005bb9f4 =
             func_0xff217f20((uint)TFIMSLIK << 8,mslt_w,DAT_005bb9f4,_DAT_005bb9f4 & 0xffff);
      }
      if (DAT_005bb9f4 >> 2 < 0xff) {
        mslift = (byte)(DAT_005bb9f4 >> 2);
      }
      else {
        mslift = 0xff;
      }
    }
  }
  else {
    mslnf = mslnenn;
    DAT_005bb9a4 = (ushort)mslnenn << 8;
    uVar17 = (int)((uint)mslnenn * (uint)fmsla) >> 7;
    if (uVar17 < 0xff) {
      mslift = (byte)uVar17;
    }
    else {
      mslift = 0xff;
    }
                    /* WARNING: Read-only address (ram,0x005bb9f6) is written */
    _DAT_005bb9f4 = CONCAT22((ushort)mslift << 2,_DAT_005bb9f6);
  }
  cVar7 = B_fasla;
  bVar1 = DAT_005bb941 & 0x10;
  if (((B_sla == '\0') || ((DAT_005bb945 & 0x80) != 0)) &&
     ((B_fasla == '\0' || ((DAT_005bb947 & 0x40) != 0)))) {
    DAT_005bb946 = DAT_005bb946 & 0xdf;
    if ((DAT_005bb941 & 0x10) != 0) {
      DAT_005bb93f = DAT_005bb93f | 0x80;
    }
  }
  else {
    DAT_005bb946 = DAT_005bb946 | 0x20;
    DAT_005bb93f = DAT_005bb93f & 0x7f;
  }
  bVar3 = B_dsl5ab & 0x80;
  if ((((DAT_005bb93f & 0x80) == 0) ||
      ((DSLSLRSlokBits1a & B_dsloab) !=
       ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab))) ||
     ((B_dsl5ab & 0x80) == 0)) {
    B_cwsla = B_cwsla & (B_cwsla|B_dslte|B_dsper|B_dspes|B_dsl1ab|B_dsl1e|B_dsl2);
  }
  else {
    B_cwsla = B_cwsla | B_errofs;
  }
  if ((mslnf == 0) || (uVar17 = ((uint)mslift << 7) / (uint)mslnf, 0xffff < uVar17)) {
    uVar17 = 0xffff;
  }
  if (uVar17 < 0x100) {
    rmslt = (byte)uVar17;
  }
  else {
    rmslt = 0xff;
  }
  if (((B_mslmin & B_cwdslt) ==
       ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) ||
     ((DSLSLRSlokBits6 & 1) != 0)) {
    mslv_w = 0;
  }
  if ((DAT_005bb941 & 0x10) == 0) {
    B_rmsl = '\0';
  }
  else {
    if ((B_mslmin & B_dslmab) ==
        ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) {
      B_rmsl = '\x01';
      mslnenn = mslnf;
      if ((DSLSLRSlokBits6 & 1) == 0) {
        rmsl = rmslt;
      }
      if (FMSLAMX < rmslt) {
        fmslav = FMSLAMX;
      }
      else if (rmslt < FMSLAMN) {
        fmslav = FMSLAMN;
      }
      else {
        fmslav = rmslt;
      }
    }
    else {
      B_rmsl = '\0';
    }
    if ((((DSLSLRSlokBits1a & B_dsltab) ==
          ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) &&
        ((B_mslmin & B_cwdslt) !=
         ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes))) &&
       ((DSLSLRSlokBits6 & 1) == 0)) {
      mslv_w = mslvft_w;
    }
  }
  if (((B_mslmin & B_dslm) == ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)
      ) || ((DAT_005bb943 & 4) != 0)) {
    if (B_rmsl != '\0') {
      B_rmslsm = '\x01';
    }
  }
  else {
    B_rmslsm = '\0';
  }
  if ((B_slsadap == '\0') || ((DSLSLRSlokBits6 & 1) != 0)) {
    fmsla = 0x80;
  }
  else {
    fmsla = fmslav;
  }
  if ((DSLSLRSlokBits6 & 1) != 0) {
    rmsl = 0x80;
  }
  if (((B_mslmin & B_dslme) ==
       ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) || (RMSLTMN <= rmslt)
     ) {
    DAT_005bb947 = DAT_005bb947 & 0xfb;
    DAT_005bb935 = 0;
  }
  else {
    if (DAT_005bb935 < TWMSLMIN) {
      DAT_005bb935 = DAT_005bb935 + 1;
    }
    else {
      DAT_005bb947 = DAT_005bb947 | 4;
    }
    if (B_fasla != '\0') {
      DAT_005bb947 = DAT_005bb947 | 4;
    }
  }
  bVar8 = DAT_005bb947;
  if ((DAT_005bb946 & 0x20) == 0) {
    if ((DAT_005bb947 & 4) != 0) {
      B_mslmin = B_mslmin | B_mslmin;
    }
  }
  else {
    B_mslmin = B_mslmin & (B_cwdslt|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes);
  }
  EVar14 = B_mslmin;
  uVar17 = (uint)rmsl;
  if (((B_mslmin & B_dslm) == ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)
      ) || ((DAT_005bb943 & 4) != 0)) {
    if ((B_rmslsm == '\0') || (B_rmslsm2 == '\0')) {
      B_awmslsum = B_awmslsum & ~B_rmslsmg | B_awmslsum;
    }
    else {
      B_awmslsum = B_awmslsum | (B_awmslsum|B_rmslsmg);
    }
    if ((B_awmslsum & B_rmslsmg) != 0) {
      uVar19 = rmsl2 + uVar17;
      if (0xff < uVar19) {
        uVar19 = 0xff;
      }
      if ((uVar19 & 0xff) < (uint)RMSLSUMN) {
        B_awmslsum = B_awmslsum | B_mslsumt;
      }
    }
  }
  else {
    B_awmslsum = B_awmslsum & ~B_mslsumt | B_awmslsum;
  }
  if ((B_awmslsum & B_mslsumt) == 0) {
    B_awmslsum = B_awmslsum & ~B_mslsum;
  }
  else {
    B_awmslsum = B_awmslsum | B_mslsum;
  }
  if ((uVar17 < RMSLMN) && (RMSLPMN < uVar17)) {
    B_mslpmn = 1;
  }
  else {
    B_mslpmn = 0;
  }
  if (B_fasla == '\0') {
    if (RMSLMN <= uVar17) goto LAB_001871f8;
LAB_001871ec:
    DAT_005bb946 = DAT_005bb946 | 0x40;
  }
  else {
    if (uVar17 < RMSLMNK) goto LAB_001871ec;
LAB_001871f8:
    DAT_005bb946 = DAT_005bb946 & 0xbf;
  }
  if (((B_awmslsum & B_mslsum) == 0) || ((DAT_005bb946 & 0x40) == 0)) {
    B_awmslsum = B_awmslsum & ~B_mslsumn;
  }
  else {
    B_awmslsum = B_awmslsum | B_mslsumn;
  }
  bVar4 = DAT_005bb947 & 0x40;
  if ((((DAT_005bb947 & 0x40) == 0) && (B_fasla != '\0')) && ((CWDSLSAD & 0x20) != 0)) {
    DSLSLRSlokBits6 = DSLSLRSlokBits6 | 1;
  }
  else {
    DSLSLRSlokBits6 = DSLSLRSlokBits6 & 0xfe;
  }
  if (((B_dsl5ab & 0x80) == 0) &&
     ((DSLSLRSlokBits1a & B_dsloab) ==
      ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab))) {
    DAT_005bb948 = DAT_005bb948 | 2;
  }
  else {
    DAT_005bb948 = DAT_005bb948 & 0xfd;
  }
  bVar2 = *local_a0;
  if (((bVar2 & 2) == 0) ||
     ((B_mslmin & B_dslmab) !=
      ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes))) {
    DAT_005bb943 = DAT_005bb943 & 0x7f;
  }
  else {
    DAT_005bb943 = DAT_005bb943 | 0x80;
  }
  if ((((B_sla != '\0') && ((DAT_005bb945 & 0x80) == 0)) ||
      ((B_fasla != '\0' && ((DAT_005bb947 & 0x40) == 0)))) || ((CWDSLSA & 0x10) == 0)) {
    DSLSLRSlokBits1a = DSLSLRSlokBits1a | B_dslp4;
    DSLSLRSlokBits4a = DSLSLRSlokBits4a | B_dslp42;
  }
  if (((DAT_005bb93f & 0x80) == 0) ||
     ((((B_mslmin & B_mslmin) ==
        ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes) || ((bVar2 & 2) == 0)
       ) && (((B_awmslsum & B_mslsumn) == 0 || ((DAT_005bb943 & 0x80) == 0)))))) {
    if ((B_awmslsum & B_awmslsum) == 0) {
      if (((DAT_005bb941 & 0x10) != 0) && ((DAT_005bb943 & 0x80) != 0)) {
        DSLSLRSlokBits3a =
             DSLSLRSlokBits3a & (B_dfrmoff2|B_dsl5dly|B_dsl45|B_zslsp|B_mxslvpr|B_meaoper) | B_zslsp
        ;
      }
    }
    else if ((((DAT_005bb949 & 1) == 0) && ((B_awmslsum & B_rmslsmg) != 0)) &&
            ((DAT_005bb943 & 0x80) != 0)) {
      DSLSLRSlokBits3a =
           DSLSLRSlokBits3a & (B_dfrmoff2|B_dsl5dly|B_dsl45|B_zslsp|B_mxslvpr|B_meaoper) | B_zslsp;
    }
  }
  else if ((DSLSLRSlokBits1a & B_dslp4) !=
           ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) {
    DSLSLRSlokBits3a = DSLSLRSlokBits3a | (B_mnslspr|B_eslsp|B_zslsp);
  }
  bVar5 = DSLSLRSlokBits6 & 1;
  if ((DSLSLRSlokBits6 & 1) != 0) {
    DSLSLRSlokBits3a = DSLSLRSlokBits3a & (B_dfrmoff2|B_dsl5dly|B_dsl45|B_mxslvpr|B_meaoper);
  }
  EVar6 = B_mslmin & B_cwdslt;
  if ((B_mslmin & B_cwdslt) !=
      ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) {
    *local_a0 = bVar2 | 1;
  }
  if ((cVar7 == '\0') || (bVar4 != 0)) {
    if (((DSLSLRSlokBits2a & B_dsl3) ==
         ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab)) &&
       ((bVar8 & 1) != 0)) {
      DAT_005bb947 = bVar8 | 0x80;
    }
  }
  else {
    DAT_005bb947 = bVar8 & 0x7f;
  }
  if ((*local_a0 & 1) == 0) {
    DSLSLRSlokBits3a =
         DSLSLRSlokBits3a & (B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_meaoper);
    DSLSLRSlokBits2a =
         DSLSLRSlokBits2a & (B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_slsofw|B_dsl4ab);
    B_mslmin = EVar14 | B_zslvp;
  }
  else {
    if ((((DSLSLRSlokBits1a & B_dsloab) ==
          ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) &&
        ((DSLSLRSlokBits1a & B_dsltab) ==
         ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab))) && (bVar3 == 0)) {
      DAT_005bb946 = DAT_005bb946 | 1;
    }
    else {
      DAT_005bb946 = DAT_005bb946 & 0xfe;
    }
    wVar20 = mslv_w;
    if (((CWDSLSY & 0x40) != 0) && (mslv_w < mslv2_w)) {
      wVar20 = mslv2_w;
    }
    if (((EVar6 == ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) ||
        ((DAT_005bb946 & 8) != 0)) && (bVar5 == 0)) {
      if (((DSLSLRSlokBits1a & B_dsltab) ==
           ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) && (_MSLVMXX < wVar20)
         ) {
LAB_00187634:
        DSLSLRSlokBits3a = DSLSLRSlokBits3a | B_mxslvpr;
        DSLSLRSlokBits2a = DSLSLRSlokBits2a | B_eslvp;
        B_mslmin = EVar14 | B_zslvp;
      }
      else if ((DAT_005bb946 & 1) != 0) {
        if (((DAT_005bb947 & 0x80) != 0) && (_MSLVMX < wVar20)) goto LAB_00187634;
        if (((DAT_005bb946 & 1) != 0) && ((bVar1 != 0 && (wVar20 <= _MSLVMX)))) {
          DSLSLRSlokBits3a =
               DSLSLRSlokBits3a & (B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_meaoper)
          ;
          DSLSLRSlokBits2a =
               DSLSLRSlokBits2a & (B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_slsofw|B_dsl4ab);
          B_mslmin = EVar14 | B_zslvp;
        }
      }
    }
    else {
      DSLSLRSlokBits3a =
           DSLSLRSlokBits3a & (B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_meaoper);
      DSLSLRSlokBits2a =
           DSLSLRSlokBits2a & (B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_slsofw|B_dsl4ab);
      B_mslmin = EVar14 & (B_cwdslt|B_mslmin|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes);
    }
  }
  if (cVar7 == '\0') {
    DAT_005bb947 = DAT_005bb947 & 0xbf;
  }
  else {
    DAT_005bb947 = DAT_005bb947 | 0x40;
  }
  uVar16 = func_0xff217b40((int)(uint)lamsoni2_w >> 3,(lamsoni2_w & 7) << 0xd,lamsbg2_w);
  uVar17 = func_0xff2217f4(uVar16,frm2_w);
  if (mlbb2_w < 0x1000) {
    DAT_005bb9a0 = mlbb2_w;
  }
  else {
    DAT_005bb9a0 = 0xfff;
  }
  iVar18 = (uVar17 & 0xffff) - 0x1000;
  if (iVar18 < -0x8000) {
    iVar18 = -0x8000;
  }
  else if (0x7fff < iVar18) {
    iVar18 = 0x7fff;
  }
  iVar18 = (int)((int)(short)iVar18 * (DAT_005bb9a0 & 0xfff) * 0x10) >> 0x10;
  if (iVar18 < -0x8000) {
    iVar18 = -0x8000;
  }
  else if (0x7fff < iVar18) {
    iVar18 = 0x7fff;
  }
  mslt2_w = (word)iVar18;
  if ((short)mslt2_w < 1) {
    mslt2_w = 0;
  }
  mslvt2_w = mslt2_w;
  if ((B_cwsla & B_dslte) != ~(B_cwsla|B_dslte|B_dsper|B_dspes|B_errofs|B_dsl1ab|B_dsl1e|B_dsl2)) {
    if (B_fasla == '\0') {
      DAT_005bba08 = func_0xff217f84((uint)TFIMSLV << 8,(int)(short)mslt2_w,(int)DAT_005bba08._0_2_,
                                     DAT_005bba08 & 0xffff);
    }
    else {
      DAT_005bba08 = func_0xff217f84((uint)TFIMSLVK << 8,(int)(short)mslt2_w,(int)DAT_005bba08._0_2_
                                     ,DAT_005bba08 & 0xffff);
    }
    if ((int)DAT_005bba08 < 0x1fffc00) {
      if ((int)DAT_005bba08 < 1) {
        DAT_005bba08 = 0;
        mslvft2_w = 0;
      }
      else {
        mslvft2_w = (word)((int)DAT_005bba08 >> 10);
      }
    }
    else {
      DAT_005bba08 = 0x1fffc00;
      mslvft2_w = 0x7fff;
    }
  }
  if ((B_sla == '\0') || ((DAT_005bb945 & 0x80) != 0)) {
    if ((DAT_005bb942 & 0x40) != 0) {
      if ((fmsla2 == 0) || (uVar17 = ((uint)msl2 << 7) / (uint)fmsla2, 0xffff < uVar17)) {
        uVar17 = 0xffff;
      }
      if (uVar17 < 0xff) {
        mslnt2 = (byte)uVar17;
      }
      else {
        mslnt2 = 0xff;
      }
      if (B_fasla == '\0') {
        DAT_005bb9ae = func_0xff217fe8((uint)TFIMSLI << 8,mslnt2,DAT_005bb9ae);
      }
      else {
        DAT_005bb9ae = func_0xff217fe8((uint)TFIMSLIK << 8,mslnt2,DAT_005bb9ae);
      }
      mslnf2 = (byte)((ushort)DAT_005bb9ae >> 8);
      if (B_fasla == '\0') {
        _DAT_005bba00 =
             func_0xff217f20((uint)TFIMSLI << 8,mslt2_w,DAT_005bba00,_DAT_005bba00 & 0xffff);
      }
      else {
        _DAT_005bba00 =
             func_0xff217f20((uint)TFIMSLIK << 8,mslt2_w,DAT_005bba00,_DAT_005bba00 & 0xffff);
      }
      if (DAT_005bba00 >> 2 < 0xff) {
        mslift2 = (byte)(DAT_005bba00 >> 2);
      }
      else {
        mslift2 = 0xff;
      }
    }
  }
  else {
    mslnf2 = mslnenn2;
    DAT_005bb9ae = (ushort)mslnenn2 << 8;
    uVar17 = (int)((uint)mslnenn2 * (uint)fmsla2) >> 7;
    if (uVar17 < 0xff) {
      mslift2 = (byte)uVar17;
    }
    else {
      mslift2 = 0xff;
    }
                    /* WARNING: Read-only address (ram,0x005bba02) is written */
    _DAT_005bba00 = CONCAT22((ushort)mslift2 << 2,_DAT_005bba02);
  }
  if ((((DAT_005bb93f & 0x80) == 0) ||
      ((DSLSLRSlokBits1a & B_dsloab) !=
       ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab))) ||
     ((DSLSLRSlokBits3a & B_dfrmoff2) ==
      ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper))) {
    B_mnslspr2 = B_mnslspr2 & (B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2);
  }
  else {
    B_mnslspr2 = B_mnslspr2 | B_errofs2;
  }
  if ((mslnf2 == 0) || (uVar17 = ((uint)mslift2 << 7) / (uint)mslnf2, 0xffff < uVar17)) {
    uVar17 = 0xffff;
  }
  if (uVar17 < 0x100) {
    rmslt2 = (byte)uVar17;
  }
  else {
    rmslt2 = 0xff;
  }
  if (((B_mslmin & B_cwdslt) ==
       ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) ||
     ((DSLSLRSlokBits6 & 1) != 0)) {
    mslv2_w = 0;
  }
  if ((DAT_005bb941 & 0x10) == 0) {
    B_rmsl2 = '\0';
  }
  else {
    if ((B_mslmin & B_dslmab) ==
        ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) {
      B_rmsl2 = '\x01';
      mslnenn2 = mslnf2;
      if ((DSLSLRSlokBits6 & 1) == 0) {
        rmsl2 = rmslt2;
      }
      if (FMSLAMX < rmslt2) {
        fmslav2 = FMSLAMX;
      }
      else if (rmslt2 < FMSLAMN) {
        fmslav2 = FMSLAMN;
      }
      else {
        fmslav2 = rmslt2;
      }
    }
    else {
      B_rmsl2 = '\0';
    }
    if ((((DSLSLRSlokBits1a & B_dsltab) ==
          ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) &&
        ((B_mslmin & B_cwdslt) !=
         ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes))) &&
       ((DSLSLRSlokBits6 & 1) == 0)) {
      mslv2_w = mslvft2_w;
    }
  }
  if (((B_mslmin & B_dslm) == ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)
      ) || ((DAT_005bb943 & 4) != 0)) {
    if (B_rmsl2 != '\0') {
      B_rmslsm2 = '\x01';
    }
  }
  else {
    B_rmslsm2 = '\0';
  }
  if ((B_slsadap == '\0') || ((DSLSLRSlokBits6 & 1) != 0)) {
    fmsla2 = 0x80;
  }
  else {
    fmsla2 = fmslav2;
  }
  if ((DSLSLRSlokBits6 & 1) != 0) {
    rmsl2 = 0x80;
  }
  if (((B_mslmin & B_dslme) ==
       ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) ||
     (RMSLTMN <= rmslt2)) {
    DAT_005bb947 = DAT_005bb947 & 0xf7;
    DAT_005bb93e = 0;
  }
  else {
    if (DAT_005bb93e < TWMSLMIN) {
      DAT_005bb93e = DAT_005bb93e + 1;
    }
    else {
      DAT_005bb947 = DAT_005bb947 | 8;
    }
    if (B_fasla != '\0') {
      DAT_005bb947 = DAT_005bb947 | 8;
    }
  }
  if ((DAT_005bb946 & 0x20) == 0) {
    if ((DAT_005bb947 & 8) != 0) {
      B_mnslspr2 = B_mnslspr2 | B_mslmin2;
    }
  }
  else {
    B_mnslspr2 = B_mnslspr2 & (B_errofs2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2);
  }
  if (((B_mslmin & B_mslmin) ==
       ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) &&
     ((B_mnslspr2 & B_mslmin2) ==
      ~(B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2))) {
    B_mslmn = '\0';
  }
  else {
    B_mslmn = '\x01';
  }
  local_ac = rmsl2;
  if ((rmsl2 < RMSLMN) && (RMSLPMN < rmsl2)) {
    B_mslpmn2 = 1;
  }
  else {
    B_mslpmn2 = 0;
  }
  if (B_fasla == '\0') {
    if (RMSLMN <= rmsl2) goto LAB_00187f00;
LAB_00187ef4:
    DAT_005bb946 = DAT_005bb946 | 0x80;
  }
  else {
    if (rmsl2 < RMSLMNK) goto LAB_00187ef4;
LAB_00187f00:
    DAT_005bb946 = DAT_005bb946 & 0x7f;
  }
  if (((B_awmslsum & B_mslsum) == 0) || ((DAT_005bb946 & 0x80) == 0)) {
    B_awmslsum = B_awmslsum & ~B_mslsumn2;
  }
  else {
    B_awmslsum = B_awmslsum | B_mslsumn2;
  }
  if ((((DSLSLRSlokBits3a & B_dfrmoff2) ==
        ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper)) &&
      ((B_mslmin & B_dslmab) ==
       ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes))) &&
     ((DSLSLRSlokBits1a & B_dsloab) ==
      ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab))) {
    DAT_005bb944 = DAT_005bb944 | 1;
  }
  else {
    DAT_005bb944 = DAT_005bb944 & 0xfe;
  }
  if (((DAT_005bb93f & 0x80) == 0) ||
     ((((B_mnslspr2 & B_mslmin2) ==
        ~(B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2) ||
       ((DAT_005bb948 & 2) == 0)) && (((DAT_005bb944 & 1) == 0 || ((B_awmslsum & B_mslsumn2) == 0)))
      ))) {
    if ((B_awmslsum & B_awmslsum) == 0) {
      if (((DAT_005bb941 & 0x10) != 0) && ((DAT_005bb944 & 1) != 0)) {
        B_mnslspr2 = B_mnslspr2 & (B_errofs2|B_mslmin2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2) |
                     B_zslsp2;
      }
    }
    else if ((((DAT_005bb949 & 1) == 0) && ((B_awmslsum & B_rmslsmg) != 0)) &&
            ((DAT_005bb944 & 1) != 0)) {
      B_mnslspr2 = B_mnslspr2 & (B_errofs2|B_mslmin2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2) |
                   B_zslsp2;
    }
  }
  else if ((DSLSLRSlokBits4a & B_dslp42) != 0) {
    B_mnslspr2 = B_mnslspr2 | (B_mnslspr2|B_eslsp2|B_zslsp2);
  }
  if ((DSLSLRSlokBits6 & 1) != 0) {
    B_mnslspr2 = B_mnslspr2 & (B_errofs2|B_mslmin2|B_mxslvpr2|B_eslvp2|B_zslvp2);
  }
  if ((B_awmslsum & B_rmslsmg) == 0) {
    DAT_005bb949 = DAT_005bb949 & 0xfe;
  }
  else {
    DAT_005bb949 = DAT_005bb949 | 1;
  }
  if ((DAT_005bb948 & 1) == 0) {
    B_mnslspr2 = B_mnslspr2 & (B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_zslvp2) | B_zslvp2
    ;
  }
  else {
    if ((((DSLSLRSlokBits1a & B_dsloab) ==
          ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) &&
        ((DSLSLRSlokBits1a & B_dsltab) ==
         ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab))) &&
       ((DSLSLRSlokBits3a & B_dfrmoff2) ==
        ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper))) {
      DAT_005bb946 = DAT_005bb946 | 1;
    }
    else {
      DAT_005bb946 = DAT_005bb946 & 0xfe;
    }
    if ((((B_mslmin & B_cwdslt) ==
          ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) ||
        ((DAT_005bb946 & 8) != 0)) && ((DSLSLRSlokBits6 & 1) == 0)) {
      if (((DSLSLRSlokBits1a & B_dsltab) ==
           ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) &&
         (_MSLVMXX < mslv2_w)) {
LAB_001881d8:
        B_mnslspr2 = B_mnslspr2 | (B_mxslvpr2|B_eslvp2|B_zslvp2);
      }
      else if ((DAT_005bb946 & 1) != 0) {
        if (((DAT_005bb947 & 0x80) != 0) && (_MSLVMX < mslv2_w)) goto LAB_001881d8;
        if (((DAT_005bb946 & 1) != 0) && (((DAT_005bb941 & 0x10) != 0 && (mslv2_w <= _MSLVMX)))) {
          B_mnslspr2 = B_mnslspr2 & (B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_zslvp2) |
                       B_zslvp2;
        }
      }
    }
    else {
      B_mnslspr2 = B_mnslspr2 & (B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2);
    }
  }
  bVar1 = (byte)local_108 >> 1 & 1;
  if ((bVar1 != 0) && ((DAT_005bb93f & 0x40) == 0)) {
    if (B_mslmn == '\0') {
      cVar7 = TC6CSL2;
      bVar3 = RMSLMN;
      if (B_fasla != '\0') {
        cVar7 = TC6CSLK2;
        bVar3 = RMSLMNK;
      }
      _m6smsl2_w = (ushort)bVar3;
      m6cmsl2 = cVar7 + -0x80;
      _m6wmsl2_w = (ushort)rmsl2;
    }
    else {
      _m6wmsl2_w = (ushort)rmslt2;
      _m6smsl2_w = (ushort)RMSLTMN;
      m6cmsl2 = TC6CSLN2 + -0x80;
    }
  }
  bVar3 = (byte)local_104 >> 1 & 1;
  if ((((B_mslmin & B_cwdslt) !=
        ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) && (bVar3 != 0)) &&
     ((DAT_005bb93f & 0x20) == 0)) {
    _m6wmslv2_w = mslv2_w;
    _m6smslv2_w = _MSLVMX;
    m6cmslv2 = TC6CSLV2;
  }
  if (bVar1 == 0) {
    DAT_005bb93f = DAT_005bb93f & 0xbf;
  }
  else {
    DAT_005bb93f = DAT_005bb93f | 0x40;
  }
  if (bVar3 == 0) {
    DAT_005bb93f = DAT_005bb93f & 0xdf;
  }
  else {
    DAT_005bb93f = DAT_005bb93f | 0x20;
  }
  bVar1 = (byte)local_10c >> 1 & 1;
  if ((((B_mslmin & B_cwdslt) !=
        ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) && (bVar1 != 0)) &&
     (((DAT_005bb93f & 0x10) == 0 && (B_mslmn == '\0')))) {
    if ((CWDSLSY & 0x40) == 0) {
      _m6wmslv_w = mslv_w;
    }
    else {
      _m6wmslv_w = mslv_w;
      if (mslv_w < mslv2_w) {
        _m6wmslv_w = mslv2_w;
      }
    }
    _m6smslv_w = _MSLVMX;
    m6cmslv = TC6CSLV;
  }
  bVar3 = (byte)local_110 >> 1 & 1;
  if (bVar3 == 0) {
LAB_0018852c:
    DAT_005bb93f = DAT_005bb93f & 0xf7;
  }
  else {
    if ((DAT_005bb93f & 8) == 0) {
      if (B_mslmn == '\0') {
        cVar7 = TC6CSL;
        bVar8 = RMSLMN;
        if (B_fasla != '\0') {
          cVar7 = TC6CSLK;
          bVar8 = RMSLMNK;
        }
        _m6smsl_w = (ushort)bVar8;
        m6cmsl = cVar7 + -0x80;
        _m6wmsl_w = (ushort)rmsl;
      }
      else {
        _m6wmsl_w = (ushort)rmslt;
        _m6smsl_w = (ushort)RMSLTMN;
        m6cmsl = TC6CSLN + -0x80;
      }
    }
    if (bVar3 == 0) goto LAB_0018852c;
    DAT_005bb93f = DAT_005bb93f | 8;
  }
  if (bVar1 == 0) {
    DAT_005bb93f = DAT_005bb93f & 0xef;
  }
  else {
    DAT_005bb93f = DAT_005bb93f | 0x10;
  }
  if (B_mslmn == '\0') {
    m6amsl = 2;
    m6cmslv = 0;
    _m6wmslv_w = 0;
    _m6smslv_w = 0;
    m6cmslv2 = 0;
    _m6wmslv2_w = 0;
    _m6smslv2_w = 0;
  }
  else if ((B_mslmin & B_cwdslt) ==
           ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) {
    m6amsl = 2;
    m6cmslv = 0;
    _m6wmslv_w = 0;
    _m6smslv_w = 0;
    m6cmslv2 = 0;
    _m6wmslv2_w = 0;
    _m6smslv2_w = 0;
  }
  else {
    m6amsl = 4;
  }
  if ((DSLSLRSlokBits1a & B_szsls) ==
      ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) {
    DAT_005bb942 = DAT_005bb942 & 0xfe;
  }
  else {
    DAT_005bb942 = DAT_005bb942 | 1;
  }
  if (((DSLSLRSlokBits3a & B_zslsp) ==
       ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper)) ||
     ((B_mnslspr2 & B_zslsp2) ==
      ~(B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2))) {
    DSLSLRSlokBits1a = DSLSLRSlokBits1a & (B_dslo|B_dsloab|B_dsloe|B_dslp4|B_dsl|B_slarq|B_dsltab);
  }
  else {
    DSLSLRSlokBits1a = DSLSLRSlokBits1a | B_szsls;
  }
  if ((((((CWDSLSA & 4) == 0) || ((B_awmslsum & B_emnslve) == 0)) &&
       (((CWDSLSA & 4) != 0 || (((B_awmslsum & B_eslve) == 0 && ((B_awmslsum & B_eslpe) == 0))))))
      && (((local_10c._0_1_ & 0xf) != 1 ||
          ((B_mslmin & B_zslvp) ==
           ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes))))) &&
     (((local_104._0_1_ & 0xf) != 1 ||
      ((B_mnslspr2 & B_zslvp2) ==
       ~(B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2))))) {
    B_esls = 0;
  }
  else {
    B_esls = 1;
  }
  if ((B_fasla == '\0') || ((CWDSLSAD & 0x10) == 0)) {
    if ((DAT_003fdf5f >> 1 & 1) == 0) {
      DAT_005bb949 = DAT_005bb949 & 0xfd;
    }
    else {
      DAT_005bb949 = DAT_005bb949 | 2;
    }
    if ((DAT_003fdf5f & 1) == 0) {
      DAT_005bb949 = DAT_005bb949 | 4;
    }
    else {
      DAT_005bb949 = DAT_005bb949 & 0xfb;
    }
    if ((DAT_003fdf61 >> 1 & 1) == 0) {
      DAT_005bb949 = DAT_005bb949 & 0xdf;
    }
    else {
      DAT_005bb949 = DAT_005bb949 | 0x20;
    }
    if ((DAT_003fdf61 & 1) == 0) {
      DAT_005bb949 = DAT_005bb949 | 0x40;
    }
    else {
      DAT_005bb949 = DAT_005bb949 & 0xbf;
    }
  }
  else {
    DAT_005bb949 = DAT_005bb949 | 0x66;
  }
  if ((B_fasla == '\0') || ((CWDSLSAD & 8) == 0)) {
    if ((DAT_003fdf27 >> 1 & 1) == 0) {
      DAT_005bb949 = DAT_005bb949 & 0xf7;
    }
    else {
      DAT_005bb949 = DAT_005bb949 | 8;
    }
    if ((DAT_003fdf27 & 1) == 0) {
      DAT_005bb949 = DAT_005bb949 | 0x10;
    }
    else {
      DAT_005bb949 = DAT_005bb949 & 0xef;
    }
    if ((DAT_003fdf29 >> 1 & 1) == 0) {
      DAT_005bb949 = DAT_005bb949 & 0x7f;
    }
    else {
      DAT_005bb949 = DAT_005bb949 | 0x80;
    }
    if ((DAT_003fdf29 & 1) == 0) {
      DAT_005bb94a = DAT_005bb94a | 1;
    }
    else {
      DAT_005bb94a = DAT_005bb94a & 0xfe;
    }
  }
  else {
    DAT_005bb949 = DAT_005bb949 | 0x98;
    DAT_005bb94a = DAT_005bb94a | 1;
  }
  local_110 = uVar10;
  local_10c = uVar12;
  if (((((DAT_003fdf23 & 1) == 0) && ((DAT_005bb949 & 2) != 0)) && ((DAT_005bb949 & 4) != 0)) &&
     (((DAT_005bb949 & 8) != 0 && ((DAT_005bb949 & 0x10) != 0)))) {
LAB_00188a50:
    if ((DSLSLRSlokBits3a & B_zslsp) !=
        ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper)) {
      if (((DSLSLRSlokBits3a & B_mnslspr) ==
           ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper)) &&
         ((DSLSLRSlokBits3a & B_eslsp) ==
          ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper))) {
        local_110 = uVar10 & 0xf0fe;
      }
      else {
        local_110 = uVar10 & 0xf0fe | 0x201;
      }
      local_110 = local_110 & 0xdffd | 0x2002;
    }
LAB_00188acc:
    if ((B_mslmin & B_zslvp) !=
        ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) {
      if (((DSLSLRSlokBits3a & B_mxslvpr) ==
           ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper)) &&
         ((DSLSLRSlokBits2a & B_eslvp) ==
          ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab))) {
        local_10c = uVar12 & 0xf0fe;
      }
      else {
        local_10c = uVar12 & 0xf0fe | 0x101;
      }
      local_10c = local_10c & 0xdffd | 0x2002;
    }
  }
  else {
    if (((DSLSLRSlokBits3a & B_mxslvpr) ==
         ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper)) &&
       ((DSLSLRSlokBits2a & B_eslvp) ==
        ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab))) goto LAB_00188acc;
    if ((B_mslmin & B_zslvp) !=
        ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) goto LAB_00188a50;
  }
  if ((DSLSLRSlokBits6 & 1) != 0) {
    local_110 = local_110 & 0xf0fc;
    local_10c = local_10c & 0xf0fc;
  }
  local_108 = uVar11;
  local_104 = uVar13;
  if (((((DAT_003fdf25 & 1) == 0) && ((DAT_005bb949 & 0x20) != 0)) && ((DAT_005bb949 & 0x40) != 0))
     && (((DAT_005bb949 & 0x80) != 0 && ((DAT_005bb94a & 1) != 0)))) {
LAB_00188c28:
    if ((B_mnslspr2 & B_zslsp2) !=
        ~(B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2)) {
      if (((B_mnslspr2 & B_mnslspr2) ==
           ~(B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2)) &&
         ((B_mnslspr2 & B_eslsp2) ==
          ~(B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2))) {
        local_108 = uVar11 & 0xf0fe;
      }
      else {
        local_108 = uVar11 & 0xf0fe | 0x201;
      }
      local_108 = local_108 & 0xdffd | 0x2002;
    }
LAB_00188cb0:
    if ((B_mnslspr2 & B_zslvp2) !=
        ~(B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2)) {
      if (((B_mnslspr2 & B_mxslvpr2) ==
           ~(B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2)) &&
         ((B_mnslspr2 & B_eslvp2) ==
          ~(B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2))) {
        local_104 = uVar13 & 0xf0fe;
      }
      else {
        local_104 = uVar13 & 0xf0fe | 0x101;
      }
      local_104 = local_104 & 0xdffd | 0x2002;
    }
  }
  else {
    if (((B_mnslspr2 & B_mxslvpr2) ==
         ~(B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2)) &&
       ((B_mnslspr2 & B_eslvp2) ==
        ~(B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2)))
    goto LAB_00188cb0;
    if ((B_mnslspr2 & B_zslvp2) !=
        ~(B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2))
    goto LAB_00188c28;
  }
  if ((DSLSLRSlokBits6 & 1) != 0) {
    local_108 = local_108 & 0xf0fc;
    local_104 = local_104 & 0xf0fc;
  }
LAB_00188ec4:
  local_100[0] = local_110;
  local_6c[0] = local_110;
  local_68 = local_100;
  func_0xff222958(0xa2,local_6c);
  local_100[0] = local_10c;
  local_64[0] = local_10c;
  local_60 = local_100;
  func_0xff222958(0xa4,local_64);
  local_100[0] = local_108;
  local_5c[0] = local_108;
  local_58 = local_100;
  func_0xff222958(0xa3,local_5c);
  local_100[0] = local_104;
  local_54[0] = local_104;
  local_50 = local_100;
  func_0xff222958(0xa5,local_54);
  return;
}

