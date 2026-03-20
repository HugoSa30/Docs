/*
 * Program: n42.bin
 * Function: FE
 * Entry: 000d67b4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000d6ee0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FE(void)

{
  bool bVar1;
  ushort uVar3;
  undefined2 uVar4;
  undefined4 uVar2;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if ((B_st != '\0') && (DAT_003fac4e == '\0')) {
    uVar3 = calc_value_from_x_y(&KFVHUBON,tmst,_kmstandold);
    if (_DAT_001c42cc < uVar3) {
      t_hubon = calc_value_from_x_y(&KFVHUBON,tmst,_kmstandold);
    }
    else {
      t_hubon = 0;
    }
    DAT_005b8e0d = FUN_000a87cc(&DAT_001c42a0,tmst);
  }
  DAT_003fac4e = B_st;
  uVar6 = (uint)ftvdk * (uint)fho;
  if (0xfffe < uVar6) {
    uVar6 = 0xffff;
  }
  ftvdkho_w = (word)uVar6;
  if ((DPSFGDVH == '\0') && (B_gdvvtueb == 0)) {
    if (Ttvdpsrlvw == 0) {
      Btvdpsrlvw = 0;
    }
    else {
      Ttvdpsrlvw = Ttvdpsrlvw - 1;
    }
  }
  else {
    Btvdpsrlvw = 1;
    Ttvdpsrlvw = _TVDPSRLVW;
  }
  if (B_stend == '\0') {
    Btvdpsrlvw = 0;
  }
  else if ((B_sidk & 1) == 0) {
    if ((E_pddss & 1) == 0) {
      if ((B_clddss & 1) == 0) {
        if (B_vvtnotl != 0) {
          Btvdpsrlvw = 0;
        }
      }
      else {
        Btvdpsrlvw = 0;
      }
    }
    else {
      Btvdpsrlvw = 0;
    }
  }
  else {
    Btvdpsrlvw = 0;
  }
  if (Btvdpsrlvw == 0) {
    if (B_lltd == 0) {
      iVar8 = (int)(short)dpssol_w;
    }
    else {
      iVar8 = (short)kfdps_aus + -0x8000;
    }
  }
  else if (DAT_001c42da == '\0') {
    iVar8 = (int)(short)dps_w;
  }
  else {
    iVar8 = (int)(short)dpssol_w;
  }
  uVar9 = (uint)pu_w - iVar8;
  if ((uVar9 & 0xffff) == 0) {
    uVar9 = 0xffff;
  }
  else {
    uVar9 = ((uint)pu_w << 0xd) / (uVar9 & 0xffff);
    if ((int)uVar9 < 0) {
      uVar9 = 0;
    }
    else if (0xffff < uVar9) {
      uVar9 = 0xffff;
    }
  }
  if (DAT_001c42d9 == '\0') {
    fpups_w = 0x2000;
  }
  else {
    fpups_w = (word)uVar9;
    if ((uint)_DAT_001c42be < (uVar9 & 0xffff)) {
      fpups_w = _DAT_001c42be;
    }
    if (fpups_w < 0x2000) {
      fpups_w = 0x2000;
    }
  }
  uVar10 = (uint)umsrln_w;
  uVar9 = (uint)rlsol_w;
  uVar7 = (uVar9 + (int)DAT_005b9684) * uVar10;
  if (uVar7 < 0x42ab5c) {
    uVar7 = uVar7 * 0x3d7 >> 0x15;
  }
  else {
    uVar7 = (uVar7 >> 0xe) * 0x3d7 >> 7;
  }
  if (uVar7 < 0x3fffd) {
    mlsol_w = (word)(uVar7 >> 2);
  }
  else {
    uVar7 = 0xffff;
  }
  if (uVar6 == 0) {
    uVar7 = 0xffff;
  }
  else {
    uVar7 = (uVar7 << 0xd) / uVar6;
  }
  DAT_005b98f0 = (ushort)uVar7;
  uVar7 = uVar7 * fpups_w >> 0xd;
  if (0xffff < uVar7) {
    uVar7 = 0xffff;
  }
  DAT_005b98ee = (undefined2)uVar7;
  iVar8 = uVar7 + _msnvvto_w * -4;
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  else if (0xffff < iVar8) {
    iVar8 = 0xffff;
  }
  if (_fkmsvvt_w == 0) {
    uVar7 = 0xffff;
  }
  else {
    uVar7 = (uint)(iVar8 << 0xe) / (uint)_fkmsvvt_w;
  }
  mlsolkor_w = (word)uVar7;
  if (uVar10 != 0) {
    uVar10 = ((uVar7 >> 2) * 0x2155) / uVar10;
    if (0xffff < uVar10) {
      uVar10 = 0xffff;
    }
    rlvwvvt_w = (word)uVar10;
  }
  if ((uVar6 == 0) || (uVar10 = (uVar9 << 0xd) / uVar6, 0xffff < uVar10)) {
    uVar10 = 0xffff;
  }
  rlvw_w = (word)uVar10;
  if ((uVar6 == 0) || (uVar6 = (uVar9 << 8) / uVar6, 0xff < uVar6)) {
    uVar6 = 0xff;
  }
  rlvw = (byte)uVar6;
  uVar6 = calc_value_from_x_y_2(&KFMSZSVNS,nmot,uVar6 & 0xff);
  rlvwvnsv_w = (short)(((uint)rlvwvvt_w - (uVar10 & 0xffff)) * (uVar6 & 0xff) >> 8) + rlvw_w;
  uVar4 = calc_value_from_x_y(&KFTDVNSFIL,minhub_w,dpssol_uw);
  uVar2 = FUN_000a7f20(uVar4,rlvwvnsv_w,_DAT_003fac54,_DAT_003fac54 & 0xffff);
  _DAT_003fac54 = (ushort)((uint)uVar2 >> 0x10);
  DAT_005b9906 = _DAT_003fac54;
  if (_fkmsdk_w == 0) {
    uVar6 = 0xffff;
  }
  else {
    uVar6 = (((uint)DAT_005b98f0 + _msndko_w * -4) * 0x4000) / (uint)_fkmsdk_w;
  }
  if (umsrln_w == 0) {
    uVar6 = 0xffff;
  }
  else {
    uVar6 = ((uVar6 >> 2) * 0x2169) / (uint)umsrln_w;
  }
  _DAT_003fac54 = uVar2;
  uVar9 = calc_value_from_x_y_2(&KFMSZSVNST,nmot,rlvw);
  rlvwvnst_w = (short)((uVar6 - rlvw_w) * (uVar9 & 0xff) >> 8) + rlvw_w;
  uVar4 = FUN_000a91ac(_KLGDVNSFIL,&DAT_001c4394,&DAT_001c43a4,(int)DAT_005b934a);
  uVar2 = FUN_000a7f20(uVar4,rlvwvnst_w,_DAT_003fac58,_DAT_003fac58 & 0xffff);
  _DAT_003fac58 = (ushort)((uint)uVar2 >> 0x10);
  DAT_005b9902 = _DAT_003fac58;
  DAT_005b990a = (undefined2)
                 ((uint)DAT_005b9906 * (0x100 - (uint)dpsfak) + (uint)_DAT_003fac58 * (uint)dpsfak
                 >> 8);
  DAT_005b98f8 = 0x654d;
  DAT_005b8e0b = 0x65;
  _DAT_003fac58 = uVar2;
  uVar6 = calc_value_from_x_y(&KFLM0812,minhub_w,nmot_w);
  uVar9 = calc_value_from_x_y(&KFTDKLM,Vse_spri,Vsa_spri);
  uVar6 = ((int)((uVar6 & 0xffff) * (uVar9 & 0xffff)) >> 3) / 5;
  if (0xffff < uVar6) {
    uVar6 = 0xffff;
  }
  uVar9 = (uint)evhubs_kf + (uint)_DAT_001cfe98;
  if (0xffff < uVar9) {
    uVar9 = 0xffff;
  }
  if (((((uVar9 & 0xffff) < (uint)minhub_w) || (B_lltd != 0)) &&
      ((B_llk != 0 || (DAT_001c42df != '\0')))) &&
     ((((uint)nsol < (uint)nstat + (uint)NTDMAO && (B_gd == '\0')) && (dpssoltd_w < _DAT_001cfe96)))
     ) {
    B_tdfuereg = '\x01';
  }
  else {
    B_tdfuereg = '\0';
  }
  iVar8 = (uint)_rl_w - (uint)rlsol_w;
  if (iVar8 < -0x8000) {
    iVar8 = -0x8000;
  }
  else if (0x7fff < iVar8) {
    iVar8 = 0x7fff;
  }
  rlfe_w = (short)iVar8;
  if (B_tdfuereg != '\0') {
    sVar5 = calc_value_from_y_2(&KLTDFUEREG,(int)rlfe_w);
    iVar8 = (int)mldtma_w + (int)sVar5;
    if (iVar8 < -0x8000) {
      iVar8 = -0x8000;
    }
    else if (0x7fff < iVar8) {
      iVar8 = 0x7fff;
    }
    mldtma_w = (short)iVar8;
  }
  if (mldtma_w < _MLTDMAMN) {
    mldtma_w = _MLTDMAMN;
  }
  else if (_MLTDMAM < mldtma_w) {
    mldtma_w = _MLTDMAM;
  }
  DAT_005b98f6 = FUN_000b1710((int)mldtma_w,MLTDDIV);
  uVar6 = (uVar6 & 0xffff) + (int)DAT_005b98f6;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  else if (0xffff < (int)uVar6) {
    uVar6 = 0xffff;
  }
  mlhubmn_w = (undefined2)uVar6;
  iVar8 = (uVar6 & 0xffff) + _msnvvto_w * 4;
  if (iVar8 < 0x8000) {
    if (iVar8 < -0x8000) {
      iVar8 = -0x8000;
    }
  }
  else {
    iVar8 = 0x7fff;
  }
  iVar8 = (int)(iVar8 * (uint)DAT_005b87c2) >> 0xf;
  if (iVar8 < 1) {
    iVar8 = 0xffff;
  }
  else {
    iVar8 = (int)((uint)DAT_005b98f0 << 0xe) / iVar8;
    if (iVar8 < 0x10000) {
      if (iVar8 < 0) {
        iVar8 = 0;
      }
    }
    else {
      iVar8 = 0xffff;
    }
  }
  DAT_005b98fc = (undefined2)iVar8;
  uVar6 = (uint)fho;
  uVar9 = calc_value_from_x_y(&DAT_001c3f70,minhub_w,nmot_w);
  uVar10 = calc_value_from_x_y(&DAT_001c3ecc,Vse_spri,Vsa_spri);
  iVar8 = (int)(((int)((uVar9 & 0xffff) * (uVar10 & 0xffff)) >> 0xf) *
                ((int)(iVar8 + uVar6 * -0x100) >> 2) + (uint)fho * 0x200000) >> 0xe;
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  else if (0x2000 < iVar8) {
    iVar8 = 0x2000;
  }
  iVar8 = (uint)pvdkds_w - ((int)(iVar8 * (uint)pvdkds_w) >> 0xd);
  if ((((DAT_001c42e0 == '\0') || ((B_stend == '\0' && (DAT_001c42e2 == '\0')))) || (B_vl != 0)) ||
     (((B_vvtnotl != 0 || ((B_llk == 0 && (DAT_001c56bb == '\0')))) ||
      ((uint)minhub_w + (uint)_DAT_001c42c0 < (uint)evhubs_kf)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if (iVar8 < 0x8000) {
      if (iVar8 < -0x8000) {
        iVar8 = -0x8000;
      }
    }
    else {
      iVar8 = 0x7fff;
    }
    dpssoltdr_w = (short)iVar8 + 0x8000;
  }
  else {
    dpssoltdr_w = 0x8000;
  }
  if (dpssoltd_w < dpssoltdr_w) {
    dpssoltd_w = FUN_000b2514(&DAT_003fac40,dpssoltdr_w,_DPSGRADTD);
  }
  else {
    dpssoltd_w = FUN_000b2514(&DAT_003fac40,dpssoltdr_w,_DPSGRADUTD);
  }
  if ((bVar1) && (kfdps_aus < dpssoltd_w)) {
    B_lltd = 1;
  }
  else {
    B_lltd = 0;
  }
  kfdps_aus = calc_value_from_x_y(&KFDPS,nmot_w,rlvw_w);
  uVar9 = calc_value_from_x_y(&KFDPS2,nmot_w,rlvw_w);
  uVar6 = calc_value_from_x_y(&KFDPS1,nmot_w,rlvw_w);
  uVar6 = uVar6 & 0xffff;
  if (DAT_001c42e3 == '\0') {
    uVar10 = (uint)kfdps_aus;
  }
  else {
    uVar10 = (uint)kfdps_aus + (int)DAT_005b9b6e;
    if ((int)uVar10 < 0) {
      uVar10 = 0;
    }
    else if (0xffff < (int)uVar10) {
      uVar10 = 0xffff;
    }
  }
  if (((int)uVar10 <= (int)uVar6) && (uVar6 = uVar10, (int)uVar10 < (int)(uVar9 & 0xffff))) {
    uVar6 = uVar9 & 0xffff;
  }
  DAT_005b98e0 = (ushort)uVar6;
  if (B_stend == '\0') {
    _DAT_003f9abe = 0x8000;
    DAT_005b8800 = '\x01';
  }
  else if ((DAT_005b8800 == '\0') || ((uVar6 & 0xffff) < (uint)_DAT_003f9abe + (uint)DAT_001c42d5))
  {
    DAT_005b8800 = '\0';
    _DAT_003f9abe = DAT_005b98e0;
  }
  else {
    _DAT_003f9abe = _DAT_003f9abe + DAT_001c42d5;
  }
  if (_DAT_003f9abe < dpssoltd_w) {
    DAT_005b98e2 = dpssoltd_w;
  }
  else {
    DAT_005b98e2 = _DAT_003f9abe;
  }
  uVar6 = (uint)DAT_005b98e2;
  iVar8 = (int)(short)dpsuddr_w;
  iVar11 = iVar8 + uVar6 + -0x8000;
  if (iVar11 < 0x8000) {
    if (iVar11 < -0x8000) {
      DAT_005b98d8 = 0x8000;
    }
    else {
      DAT_005b98d8 = (word)iVar11;
    }
  }
  else {
    DAT_005b98d8 = 0x7fff;
  }
  if (DAT_005b934e >> 1 == 0) {
    uVar9 = 0xffff;
  }
  else {
    uVar9 = ((uint)rlsol_w << 0x10) / (uint)(DAT_005b934e >> 1);
  }
  iVar11 = uVar9 + DAT_005b9354;
  if (0xffff < iVar11) {
    iVar11 = 0xffff;
  }
  DAT_005b98fa = (undefined2)iVar11;
  iVar11 = (uint)pvdkds_w - iVar11;
  if (iVar11 < 0) {
    iVar11 = 0;
  }
  if ((int)(uint)pvdkds_w < iVar11) {
    DAT_005b98d2 = pvdkds_w;
  }
  else {
    DAT_005b98d2 = (word)iVar11;
  }
  if (iVar8 < 1) {
    dpssol_w = DAT_005b98d8;
  }
  else if ((int)(uint)DAT_005b98d2 < (int)(short)DAT_005b98d8) {
    dpssol_w = DAT_005b98d2;
  }
  else {
    dpssol_w = DAT_005b98d8;
  }
  if (B_lltd != 0) {
    _DAT_003fac50 = _DAT_001c43b4;
  }
  if ((_DAT_003fac50 == 0) && (B_lltd == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((B_lltd == 0) && (_DAT_003fac50 != 0)) {
    _DAT_003fac50 = _DAT_003fac50 + -1;
  }
  iVar11 = (int)(short)dpssol_w;
  if (((((int)(uint)_DAT_001c42bc < iVar11) || (iVar11 < (int)(uint)_DAT_001c42ba)) ||
      (B_gd != '\0')) || (bVar1)) {
    DAT_005b87f5 = 0;
    DAT_005b98ce = 0;
  }
  else {
    DAT_005b87f5 = 1;
    iVar11 = iVar11 - (short)dps_w;
    if (iVar11 < -0x8000) {
      iVar11 = -0x8000;
    }
    else if (0x7fff < iVar11) {
      iVar11 = 0x7fff;
    }
    DAT_005b98ce = (undefined2)iVar11;
  }
  if (uVar6 < 0x8001) {
    uVar6 = (uint)DAT_005b98d2 + (0x8000 - uVar6 & 0xffff);
    if (0x8000 < uVar6) {
      uVar6 = 0x8000;
    }
    sVar5 = (short)uVar6;
  }
  else {
    sVar5 = DAT_005b98d2 - (DAT_005b98e2 + 0x8000);
  }
  if (sVar5 < 0x1a) {
    sVar5 = 0x1a;
  }
  uVar6 = (uint)(iVar8 << 8) / (uint)(int)sVar5;
  if (0xff < uVar6) {
    uVar6 = 0xff;
  }
  DAT_005b8e0a = (undefined)uVar6;
  dpsfak = FUN_000a87cc(&DAT_001c4290,uVar6 & 0xff);
  if (DAT_001c42d8 == '\0') {
    if ((short)dpssol_w < 0) {
      _DAT_003fac48 = 0;
    }
    else {
      _DAT_003fac48 = dpssol_w;
    }
    if (B_st != '\0') {
      _DAT_003fac44 = (uint)_DAT_003fac48 << 0x10;
      dpssol_uw = _DAT_003fac48;
    }
    if (B_stend != '\0') {
      dpssol_uw = FUN_000b2514(&DAT_003fac44,_DAT_003fac48,_DAT_001c42d2);
    }
  }
  else if ((short)dps_w < 0) {
    dpssol_uw = 0;
  }
  else {
    dpssol_uw = dps_w;
  }
  dpssol_ub = (undefined)(dpssol_uw >> 8);
  if (B_lltd == 0) {
    if (dpsfak == 0) goto LAB_000d783c;
  }
  else if (dpsfak == 0) {
    DAT_005b87f6 = 2;
    return;
  }
  if (dpsfak != 0xff) {
    DAT_005b87f6 = 4;
    return;
  }
LAB_000d783c:
  if ((dhubra_w == 0) || (_DHUBMX <= dhubra_w)) {
    if ((B_gdst == 0) || ((B_vvtnotl != 0 || (_DHUBMX != dhubra_w)))) {
      if ((_DHUBMX == dhubra_w) && (B_gdon != '\0')) {
        DAT_005b87f6 = 0x20;
      }
      else if ((_DHUBMX == dhubra_w) && (S_GDVHUB != '\0')) {
        DAT_005b87f6 = 0x40;
      }
      else if ((_DHUBMX == dhubra_w) && (B_vvtnotl != 0)) {
        DAT_005b87f6 = 0x80;
      }
      else {
        DAT_005b87f6 = 1;
      }
    }
    else {
      DAT_005b87f6 = 0x10;
    }
  }
  else {
    DAT_005b87f6 = 8;
  }
  return;
}

