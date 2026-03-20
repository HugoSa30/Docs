/*
 * Program: n42.bin
 * Function: FUN_0019bd08
 * Entry: 0019bd08
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0019c024) */
/* WARNING: Removing unreachable block (ram,0x0019bfd4) */
/* WARNING: Removing unreachable block (ram,0x0019c7c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019bd08(void)

{
  undefined uVar1;
  byte bVar2;
  byte bVar3;
  word wVar4;
  ushort uVar7;
  undefined2 uVar8;
  uint uVar5;
  short sVar9;
  undefined4 uVar6;
  word wVar13;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined2 local_60;
  undefined4 local_58;
  
  uVar7 = DAT_005b96d4;
  if (B_lr2 == '\0') {
    DAT_005b96d0 = frm_w;
  }
  else if (B_lr == '\0') {
    DAT_005b96d0 = frm2_w;
  }
  else {
    DAT_005b96d0 = (frm2_w >> 1) + (frm_w >> 1);
  }
  DAT_005b91f9 = (undefined)(DAT_005b96d0 >> 8);
  wVar13 = te_w;
  if (te2_w < te_w) {
    wVar13 = te2_w;
  }
  if ((_TEMIN == 0) || (uVar10 = ((uint)wVar13 << 9) / _TEMIN, 0xff < uVar10)) {
    uVar10 = 0xff;
  }
  DAT_005b91ff = (undefined)uVar10;
  DAT_005b96d2 = DAT_005b96d4;
  wVar13 = frm_w;
  if (frm_w < 0x8001) {
    wVar13 = -frm_w;
  }
  wVar4 = frm2_w;
  if (frm2_w < 0x8001) {
    wVar4 = -frm2_w;
  }
  if ((ushort)(wVar13 + 0x8000) < (ushort)(wVar4 + 0x8000)) {
    DAT_005b91fa = (undefined)(frm2_w >> 8);
    DAT_005b96d4 = frm2_w;
  }
  else {
    DAT_005b91fa = (undefined)(frm_w >> 8);
    DAT_005b96d4 = frm_w;
  }
  if ((((B_frmin == '\0') && (B_frmax == '\0')) && (B_frmin2 == '\0')) && (B_frmax2 == '\0')) {
    if (DAT_005b96d4 < uVar7) {
LAB_0019beec:
      if (DAT_005b96d4 < 0x8000) goto LAB_0019bef4;
    }
    else {
      if (0x8000 < DAT_005b96d4) goto LAB_0019bef4;
      if (DAT_005b96d4 <= uVar7) goto LAB_0019beec;
    }
    DAT_003fc1e2 = '\0';
  }
  else {
LAB_0019bef4:
    DAT_003fc1e2 = '\x01';
  }
  uVar7 = func_0xff2187cc(&DAT_001d2afc,DAT_005b96d0 >> 8);
  if (DAT_003fc1e2 == '\0') {
    iVar11 = (short)DAT_005b96e0 + -1;
  }
  else {
    iVar11 = (short)DAT_005b96e0 + 1;
  }
  if (iVar11 < 0) {
    DAT_005b96e0 = 0;
  }
  else if ((short)((uVar7 & 0xff) + 1) < iVar11) {
    DAT_005b96e0 = (uVar7 & 0xff) + 1;
  }
  else {
    DAT_005b96e0 = (ushort)iVar11;
  }
  if ((uVar7 & 0xff) < DAT_005b96e0) {
    DAT_003fc1e3 = '\x01';
  }
  else if (DAT_005b96e0 == 0) {
    DAT_003fc1e3 = '\0';
  }
  uVar10 = (uint)_DAT_001cb6ce + (uint)mste;
  if (0xffff < uVar10) {
    uVar10 = 0xffff;
  }
  if ((uint)msdkalm_w < (uint)_DAT_001cb6ce) {
    DAT_005b96ee = (ushort)uVar10;
  }
  else {
    uVar12 = (uint)msdkalm_w + (uint)mste;
    if (0xffff < uVar12) {
      uVar12 = 0xffff;
    }
    DAT_005b96ee = (ushort)uVar12;
  }
  DAT_005b96ec = mlsol_w;
  if (DAT_005b96ee < mlsol_w) {
    DAT_005b96ec = DAT_005b96ee;
  }
  if (DAT_005b96ec < _DAT_001cb6ce) {
    DAT_005b96ec = _DAT_001cb6ce;
  }
  if (DAT_005b96aa < 0x8001) {
    uVar12 = 0;
  }
  else {
    uVar12 = (uint)(ushort)(DAT_005b96aa + 0x8000);
  }
  if (pu == 0) {
    uVar12 = 0xff;
  }
  else {
    uVar12 = uVar12 / pu;
    if (uVar12 < 0x80) {
      uVar12 = 0x80 - uVar12;
    }
    else {
      uVar12 = 0;
    }
  }
  if ((uVar12 & 0xffff) < 0x100) {
    DAT_005b91fd = (undefined)uVar12;
  }
  else {
    DAT_005b91fd = 0xff;
  }
  DAT_003fb71e = func_0xff21a1e0(DAT_001d2aa0,&DAT_001d2aa2,DAT_001d2aa1,&DAT_001d2ab6,&DAT_001d2abc
                                 ,_ml_w,DAT_005b91fd);
  local_58._0_2_ = (ushort)(((uint)DAT_005b96b4 << 9) >> 0x10);
  uVar8 = func_0xff217b40(local_58._0_2_,(uint)DAT_005b96b4 << 9 & 0xffff,DAT_005b96ec);
  uVar12 = func_0xff2217f4(uVar8,DAT_003fb71e);
  if ((uint)DAT_003fb71d << 8 < (uVar12 & 0xffff)) {
    uVar12 = (uint)DAT_003fb71d << 8;
  }
  if ((uint)_DAT_003fb6fc << 8 < (uVar12 & 0xffff)) {
    uVar12 = (uint)_DAT_003fb6fc << 8;
  }
  if ((DAT_003fc1ed != '\0') && ((uint)DAT_003fb71c << 8 < (uVar12 & 0xffff))) {
    uVar12 = (uint)DAT_003fb71c << 8;
  }
  uVar7 = (ushort)uVar12;
  if (DAT_003fb718 < 0x80) {
    uVar5 = func_0xff221800((uint)DAT_003fb718 << 8,DAT_005b96d8);
    if ((uVar5 & 0xffff) < (uVar12 & 0xffff)) {
      uVar7 = (ushort)uVar5;
    }
  }
  DAT_005b96da = uVar7;
  iVar11 = (int)((int)(short)ftead_w * (uint)DAT_005b96dc) >> 0x10;
  if (iVar11 < -0x8000) {
    iVar11 = -0x8000;
  }
  else if (0x7fff < iVar11) {
    iVar11 = 0x7fff;
  }
  sVar9 = (short)iVar11;
  if (sVar9 < 0x400) {
    if (sVar9 < -0x400) {
      sVar9 = -0x400;
    }
  }
  else {
    sVar9 = 0x3ff;
  }
  DAT_005b91f6 = (undefined)(sVar9 >> 3);
  if ((DAT_003fc1ec == '\0') && (DAT_003fc1ed == '\0')) {
    B_teakt = '\0';
  }
  else {
    B_teakt = '\x01';
  }
  DAT_005b91f5 = (char)DAT_005b8ba6 * (char)DAT_005b96d8;
  DAT_005b91f1 = DAT_005b8b9e - DAT_005b91f5;
  DAT_005b8b9d = func_0xff219ee0(DAT_001d2e9e,&DAT_001d2ea0,DAT_001d2e9f,0x1d2ea5,&DAT_001d2eaa,nmot
                                 ,rl);
  DAT_005b91f4 = func_0xff2187cc(&DAT_001d2a44,DAT_005b91ff);
  DAT_005b8b9e = (char)((uint)((int)DAT_005b8b9d * (int)(short)(ushort)DAT_005b91f4) >> 8);
  iVar11 = (int)((int)DAT_005b8ba6 * (uint)DAT_005b96d8) >> 0x10;
  if (iVar11 < -0x8000) {
    iVar11 = -0x8000;
  }
  else if (0x7fff < iVar11) {
    iVar11 = 0x7fff;
  }
  sVar9 = (short)iVar11;
  if (sVar9 < 0x400) {
    if (sVar9 < -0x400) {
      sVar9 = -0x400;
    }
  }
  else {
    sVar9 = 0x3ff;
  }
  DAT_005b91f5 = (char)(sVar9 >> 3);
  iVar11 = (int)DAT_005b8b9e - (int)DAT_005b91f5;
  if (iVar11 < -0x80) {
    iVar11 = -0x80;
  }
  else if (0x7f < iVar11) {
    iVar11 = 0x7f;
  }
  DAT_005b91f1 = (char)iVar11;
  iVar11 = (int)((int)(short)((int)DAT_005b91f1 << 8) * (uint)DAT_001cb698 * 0x100) >> 0x10;
  if (iVar11 < -0x8000) {
    iVar11 = -0x8000;
  }
  else if (0x7fff < iVar11) {
    iVar11 = 0x7fff;
  }
  sVar9 = (short)iVar11;
  if (sVar9 < 0x201) {
    if (sVar9 < -0x200) {
      sVar9 = -0x200;
    }
  }
  else {
    sVar9 = 0x200;
  }
  DAT_005b91f8 = (char)(sVar9 >> 6);
  if (DAT_003fc1e3 == '\0') {
    DAT_005b8b9c = '\0';
  }
  else {
    DAT_005b8b9c = (char)_DAT_003fb71a;
  }
  iVar11 = (int)DAT_005b91f8 - (int)DAT_005b8b9c;
  if (iVar11 < -0x80) {
    iVar11 = -0x80;
  }
  else if (0x7f < iVar11) {
    iVar11 = 0x7f;
  }
  DAT_005b91f7 = (char)iVar11;
  iVar11 = (int)((int)(short)((int)DAT_005b91f7 << 8) * (uint)DAT_003fb719 * 0x100) >> 0xf;
  if (iVar11 < -0x8000) {
    iVar11 = -0x8000;
  }
  else if (0x7fff < iVar11) {
    iVar11 = 0x7fff;
  }
  iVar11 = (int)((int)(short)iVar11 * (DAT_005b8baa & 0xff) * 0x100) >> 0x10;
  if (iVar11 < -0x8000) {
    iVar11 = -0x8000;
  }
  else if (0x7fff < iVar11) {
    iVar11 = 0x7fff;
  }
  DAT_005b96cc = (short)iVar11;
  if (B_sab == '\0') {
    _DAT_003fb6f4 = func_0xff2187cc(&DAT_001cb6b4,tmot);
    _DAT_003fb6f4 = _DAT_003fb6f4 & 0xff;
    DAT_003fb775 = DAT_003fb775 & 0xfe;
  }
  else if (_DAT_003fb6f4 == 0) {
    DAT_003fb775 = DAT_003fb775 & 0xfe | 1;
  }
  else {
    _DAT_003fb6f4 = _DAT_003fb6f4 - 1;
  }
  if ((DAT_005b8b9c < '\x01') || ('\0' < DAT_003fb6fe)) {
    uVar12 = (uint)DAT_005b96da;
  }
  else {
    uVar12 = (uint)_DAT_003fb6f6;
    if (DAT_005b96da < uVar12) {
      uVar12 = (uint)DAT_005b96da;
    }
  }
  DAT_003fb6fe = DAT_005b8b9c;
  if (B_teakt == '\0') {
    uVar1 = DAT_001cb6b2;
    if (DAT_003fc1e9 != '\0') {
      uVar1 = DAT_001cb6b3;
    }
    sVar9 = func_0xff221710(DAT_005b96d6 >> 1,uVar1);
    iVar11 = (int)-sVar9;
    if (-1 < iVar11) {
      iVar11 = -1;
    }
    if (DAT_005b96cc < iVar11) {
      iVar11 = (int)DAT_005b96cc;
    }
  }
  else {
    DAT_005b96d6 = DAT_005b96d8;
    iVar11 = (int)DAT_005b96cc;
  }
  local_60 = (undefined2)((uVar12 << 0xf) >> 0x10);
  uVar6 = func_0xff217c80(0x1000,iVar11,(int)_DAT_003fb700,_DAT_003fb700 & 0xffff,0,0,local_60,
                          uVar12 << 0xf & 0xffff);
  _DAT_003fb700 = (short)((uint)uVar6 >> 0x10);
  DAT_005b96d8 = _DAT_003fb700 * 2;
  if ((uint)DAT_005b96d8 * (uint)DAT_005b96ec < 0x2000000) {
    DAT_005b96f2 = (undefined2)((uint)DAT_005b96d8 * (uint)DAT_005b96ec >> 9);
  }
  else {
    DAT_005b96f2 = 0xffff;
  }
  uVar12 = (uint)(DAT_005b96ee >> 1) - ((int)(uint)_DAT_003fb754 >> 1);
  if ((int)uVar12 < -0x8000) {
    uVar12 = 0xffff8000;
  }
  else if (0x7fff < (int)uVar12) {
    uVar12 = 0x7fff;
  }
  _DAT_003fb758 = (short)uVar12;
  uVar5 = (uint)DAT_005b96ee + (uint)_DAT_003fb754;
  if (0xffff < uVar5) {
    uVar5 = 0xffff;
  }
  _DAT_003fb75a = (undefined2)uVar5;
  _DAT_003fb700 = uVar6;
  _DAT_003fb75c = func_0xff217b80((int)(_DAT_003fb758 >> 8),(uVar12 & 0xff) << 8,uVar5 & 0xffff);
  if (_DAT_003fb75c < 0x80) {
    if (_DAT_003fb75c < -0x80) {
      dmssginr = 0x80;
    }
    else {
      dmssginr = (byte)_DAT_003fb75c;
    }
  }
  else {
    dmssginr = 0x7f;
  }
  uVar12 = func_0xff21ae98(&DAT_001cb680,DAT_001c0f50,esst_sdm05tesb,esst_snm04teub);
  DAT_005b91fb = (undefined)uVar12;
  if (((B_evloc == '\0') || ((DAT_003fb775 & 1) != 0)) || (B_nmot == '\0')) {
    DAT_005b96f4 = 0;
  }
  else {
    DAT_005b96f4 = func_0xff221800(DAT_005b96f2,(uVar12 & 0xff) << 8);
    if (DAT_005b96f4 == 0) {
      _DAT_003fb6f6 = 0;
    }
    else {
      uVar12 = (uint)DAT_005b96f4 << 9;
      local_58._0_2_ = (ushort)(uVar12 >> 0x10);
      uVar12 = func_0xff217b40(local_58._0_2_,uVar12 & 0xffff,DAT_005b96ec);
      _DAT_003fb6f6 = func_0xff217b40((uVar12 & 0xffff) >> 9,(uVar12 & 0x1ff) << 7,DAT_005b91fb);
    }
  }
  if (DAT_005b96b6 == 0) {
    DAT_005b96dc = 0;
    DAT_005b91fc = 0;
  }
  else {
    uVar12 = (uint)DAT_005b96b6 << 9;
    local_58._0_2_ = (ushort)(uVar12 >> 0x10);
    DAT_005b96dc = func_0xff217b40(local_58._0_2_,uVar12 & 0xffff,DAT_005b96ee);
    DAT_005b91fc = (undefined)(DAT_005b96dc >> 8);
  }
  if (DAT_005b96b6 == 0) {
    DAT_005b96e6 = 0;
  }
  else {
    DAT_005b96e6 = func_0xff217b40(DAT_005b96b6 >> 8,(DAT_005b96b6 & 0xff) << 8,DAT_005b96ee);
  }
  _DAT_003fb748 = DAT_005b96e6;
  if ((uint)_ml_w < (uVar10 & 0xffff)) {
    _DAT_003fb75e =
         func_0xff217b40((int)(uint)DAT_005b96ee >> 0xc,(DAT_005b96ee & 0xfff) << 4,uVar10 & 0xffff)
    ;
  }
  else {
    _DAT_003fb75e =
         func_0xff217b40((int)(uint)DAT_005b96ee >> 0xc,(DAT_005b96ee & 0xfff) << 4,(uint)_ml_w);
  }
  if (_DAT_003fb75e < 0x100) {
    qmsdyn = (byte)_DAT_003fb75e;
  }
  else {
    qmsdyn = 0xff;
  }
  if ((uint)_DAT_001cb6d0 < (uint)nmot_w) {
    iVar11 = (esst_sqm05teub >> 0x10) * 2;
    uVar12 = (uint)nmot_w *
             ((uint)*(ushort *)(&DAT_001cb6c4 + iVar11) +
              ((int)((esst_sqm05teub & 0xffff) *
                    ((uint)*(ushort *)(&DAT_001cb6c6 + iVar11) -
                    (uint)*(ushort *)(&DAT_001cb6c4 + iVar11))) >> 0x10) & 0xffff);
  }
  else {
    iVar11 = (esst_sqm05teub >> 0x10) * 2;
    uVar12 = (uint)_DAT_001cb6d0 *
             ((uint)*(ushort *)(&DAT_001cb6c4 + iVar11) +
              ((int)((esst_sqm05teub & 0xffff) *
                    ((uint)*(ushort *)(&DAT_001cb6c6 + iVar11) -
                    (uint)*(ushort *)(&DAT_001cb6c4 + iVar11))) >> 0x10) & 0xffff);
  }
  local_58 = uVar12 >> 0xb;
  uVar5 = local_58;
  local_58._0_2_ = (ushort)(uVar12 >> 0x1b);
  if (local_58._0_2_ != 0) {
    local_58 = CONCAT22(local_58._0_2_,0xffff);
    uVar5 = local_58;
  }
  local_58 = uVar5;
  if ((local_58 & 0xffff) < 0x8001) {
    if ((local_58 & 0xffff) < (uint)_DAT_001cb6c2) {
      _DAT_003fb744 = _DAT_001cb6c2;
    }
    else {
      _DAT_003fb744 = local_58._2_2_;
    }
  }
  else {
    _DAT_003fb744 = 0x8000;
  }
  DAT_005b96ce = _DAT_003fb744;
  DAT_005b96e4 = func_0xff217e3c(&DAT_003fb734);
  uVar12 = esst_sqm05teub & 0xffff;
  bVar2 = (&DAT_001cb6ac)[esst_sqm05teub >> 0x10];
  bVar3 = (&DAT_001cb6ad)[esst_sqm05teub >> 0x10];
  uVar5 = func_0xff2187cc(&DAT_001cb69c,nmot);
  uVar12 = (uVar5 & 0xff) * 8 *
           ((uint)bVar2 + ((int)(uVar12 * ((uint)bVar3 - (uint)bVar2)) >> 0x10) & 0xff);
  if (0xfffe < uVar12) {
    uVar12 = 0xffff;
  }
  DAT_005b96de = (undefined2)uVar12;
  uVar6 = func_0xff217f20(uVar12 & 0xffff,DAT_005b96e4,_DAT_003fb710,_DAT_003fb710 & 0xffff);
  _DAT_003fb710 = (undefined2)((uint)uVar6 >> 0x10);
  uVar8 = _DAT_003fb710;
  _DAT_003fb710 = uVar6;
  uVar6 = func_0xff217f20(DAT_005b96de,uVar8,_DAT_003fb714,_DAT_003fb714 & 0xffff);
  _DAT_003fb714 = (ushort)((uint)uVar6 >> 0x10);
  DAT_005b96e2 = _DAT_003fb714;
  uVar12 = (uint)_ml_w;
  if (uVar12 < (uVar10 & 0xffff)) {
    uVar12 = uVar10 & 0xffff;
  }
  if ((char)(uVar12 * _DAT_003fb714 >> 0x18) == '\0') {
    local_58._2_2_ = (ushort)(uVar12 * _DAT_003fb714 >> 8);
    DAT_005b96f0 = local_58._2_2_;
  }
  else {
    DAT_005b96f0 = 0xffff;
  }
  _DAT_003fb714 = uVar6;
  if (DAT_005b96f0 == 0) {
    DAT_005b96f8 = 0;
  }
  else {
    uVar8 = func_0xff2217f4(nmot_w,(uint)KUMSRL << 8);
    local_58._0_2_ = (ushort)((uint)DAT_005b96f0 * 0x10a >> 0x10);
    DAT_005b96f8 = func_0xff217b40(local_58._0_2_,(uint)DAT_005b96f0 * 0x10a & 0xffff,uVar8);
  }
  iVar11 = (int)((int)(short)ftead_w * (uint)DAT_005b96f8) >> 0xd;
  if (iVar11 < 0x8000) {
    if (iVar11 < -0x8000) {
      rkte_w = 0x8000;
    }
    else {
      local_58._2_2_ = (ushort)iVar11;
      rkte_w = local_58._2_2_;
    }
  }
  else {
    rkte_w = 0x7fff;
  }
  if ((B_nswo1 == '\0') && (DAT_005b8b99 != -0x38)) {
    local_58._0_2_ = (ushort)((uint)mifa_w * 200 >> 0x10);
    mitebg_w = func_0xff217b40(local_58._0_2_,(uint)mifa_w * 200 & 0xffff,DAT_005b8b99);
    DAT_005b8b98 = DAT_005b8b99;
  }
  else {
    _DAT_003fb720 = 0x6400;
    mitebg_w = 0;
    DAT_005b8b98 = -0x38;
  }
  if (_ml_w < 0x8000) {
    DAT_005b9b70 = _ml_w;
  }
  else {
    DAT_005b9b70 = 0x7fff;
  }
  DAT_005b9b6a = func_0xff219a00(&DAT_001d2b14,(int)(short)DAT_005b9b70,(int)DAT_005b8ba6);
  iVar11 = ((int)DAT_005b9b6a - (uint)kfdps_aus) + 0x8000;
  if (iVar11 < -0x8000) {
    uVar10 = 0xffff8000;
  }
  else if (iVar11 < 0x8000) {
    uVar10 = ((int)DAT_005b9b6a - (uint)kfdps_aus) + 0x10000;
  }
  else {
    uVar10 = 0x7fff;
  }
  DAT_005b9b72 = (undefined2)uVar10;
  if (DAT_003fc1ec == '\0') {
    DAT_005b9b6c = 0;
  }
  else {
    DAT_005b9b6c = func_0xff219bb4(&DAT_001d2d7a,nmot_w,uVar10 & 0xffff);
  }
  _DAT_003fb76c =
       func_0xff217f84(_DAT_001d2ec6,(int)DAT_005b9b6c,(int)_DAT_003fb76c,_DAT_003fb76c & 0xffff);
  uVar6 = _DAT_003fb76c;
  _DAT_003fb76c = (short)(_DAT_003fb76c >> 0x10);
  DAT_005b9b6e = _DAT_003fb76c;
  if ((int)_DAT_001cb696 < (int)DAT_005b8ba6) {
    DAT_003fb768 = '\x01';
  }
  else if ((int)DAT_005b8ba6 < (int)_DAT_001cb696 - (int)_DAT_001cb694) {
    DAT_003fb768 = '\0';
  }
  if ((DAT_003fb768 == '\0') || (DAT_003fc1ec == '\0')) {
    iVar11 = (uint)_DAT_001d2ed0 * 0x8000;
  }
  else {
    iVar11 = (uint)_DAT_001d2ed0 * -0x8000;
  }
  _DAT_003fb764 = _DAT_003fb764 + iVar11;
  if ((int)((uint)_DAT_001d2ec4 << 0x10) < _DAT_003fb764) {
    if (0x3fffffff < _DAT_003fb764) {
      _DAT_003fb764 = 0x40000000;
    }
  }
  else {
    _DAT_003fb764 = (uint)_DAT_001d2ec4 << 0x10;
  }
  DAT_005b96ea = (short)((uint)_DAT_003fb764 >> 0x10);
  _DAT_003fb76c = uVar6;
  return;
}

