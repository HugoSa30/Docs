/*
 * Program: n42.bin
 * Function: DHFM
 * Entry: 000e7f28
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DHFM(void)

{
  undefined4 uVar1;
  ushort uVar2;
  uint uVar3;
  uint dhfmrlvwo;
  int iVar4;
  ushort uVar5;
  int dpspmax_w;
  
  uVar1 = FUN_000a7f20(ZMLRO,mlhfmm_w,_DAT_003fac04,_DAT_003fac04 & 0xffff);
  _DAT_003fac04 = (word)((uint)uVar1 >> 0x10);
  mlhfmf_w = _DAT_003fac04;
  _DAT_003fac04 = uVar1;
  if ((DAT_003fac00 & 8) == 0) {
    B_initmxmn = '\x01';
  }
  else {
    if (B_edks == '\0') {
      if (Btvdpsrlvw == 0) {
        dhfmrlvwo = 0;
      }
      else {
        dhfmrlvwo = (uint)_DHFMOUMSCH;
      }
      ::dhfmrlvwo = (word)dhfmrlvwo;
      if (rlvw_w + dhfmrlvwo < 0x10000) {
        rlvwd_w = (word)(rlvw_w + dhfmrlvwo);
      }
      else {
        rlvwd_w = 0xffff;
      }
    }
    else {
      rlvwd_w = 0x1400;
    }
    if (_LowpassT == 0) {
      _LowpassT = (uint)rlvwd_w << 0x10;
    }
    rlvwdf_w = FUN_000b2514(&LowpassT,rlvwd_w,_ZKRLVWD);
    if ((CW_DHFM & 1) == 0) {
      dhfmrlvwo = calc_value_from_x_y(&KFEHUBIV,nmot_w,evhubin_w);
      mldvvt1_w = (word)(((dhfmrlvwo & 0xffff) * (uint)umsrln_w >> 7) * 0x7b >> 0xd);
      dhfmrlvwo = calc_value_from_x_y(&KFEHUBIV,nmot_w,evhubin2_w);
      dhfmrlvwo = ((dhfmrlvwo & 0xffff) * (uint)umsrln_w >> 7) * 0x7b >> 0xd;
      mldvvt2_w = (word)dhfmrlvwo;
      mldvvt_w = (mldvvt1_w >> 1) + (short)((dhfmrlvwo & 0xffff) >> 1);
      if (((((E_pddss & 1) == 0) && ((B_clddss & 1) == 0)) && (S_DHFMLEAN == '\0')) &&
         (B_vvtnotl == 0)) {
        dpspmax_w = ((int)(short)dps_w << 0xf) / (int)(uint)_PMAX1013;
        if (-1 < dpspmax_w) {
          dpspmax_w = -dpspmax_w;
        }
        dpspmax_w = dpspmax_w + 0x8000;
        if (dpspmax_w < 0) {
          ::dpspmax_w = 0;
        }
        else if (dpspmax_w < 0x10000) {
          ::dpspmax_w = (word)dpspmax_w;
        }
        else {
          ::dpspmax_w = 0xffff;
        }
        dpipdhfm_w = calc_value_from_y(&KLDPIPOL,::dpspmax_w);
        mlddkdps_w = FUN_000aa9c0(_KFDKMS,&DAT_001cf598,_KFDKMS_axis_x,0x1cf5c2,&KFDKMS_start,
                                  (int)(short)_wdkba_w,dpipdhfm_w);
        mldhfm_w = mlddkdps_w;
        if (mldvvt_w <= mlddkdps_w) {
          mldhfm_w = mldvvt_w;
        }
      }
      else {
        mlddk_w = calc_value_from_x_y(&KFMLD,_wdkba_w,nmot_w);
        mldhfm_w = mlddk_w;
        if (mldvvt_w <= mlddk_w) {
          mldhfm_w = mldvvt_w;
        }
      }
      dhfmmlu_w = calc_value_from_x_y(&KFDHFMMLU,nmot_w,rlvwdf_w);
      dpspmax_w = (uint)mldhfm_w - (uint)dhfmmlu_w;
      if (dpspmax_w < 0) {
        mldmn_w = 0;
      }
      else if (dpspmax_w < 0x8000) {
        mldmn_w = (word)dpspmax_w;
      }
      else {
        mldmn_w = 0x7fff;
      }
      dhfmmlo_w = calc_value_from_x_y(&KFDHFMMLO,nmot_w,rlvwdf_w);
      if ((uint)mldhfm_w + (uint)dhfmmlo_w < 0x10000) {
        mldmx_w = (word)((uint)mldhfm_w + (uint)dhfmmlo_w);
      }
      else {
        mldmx_w = 0xffff;
      }
    }
    else {
      if ((B_sidk & 1) == 0) {
        wdkba_mldm = _wdkba_w;
        wdkba_mldn = _wdkba_w;
      }
      else {
        wdkba_mldm = 0x1000;
        wdkba_mldn = 0;
      }
      if ((B_iwfalse == 0) && (B_iwfalse2 == 0)) {
        evhubimldm = evhubi_w;
        evhubimldn = evhubi_w;
      }
      else {
        evhubimldm = 1000;
        evhubimldn = 0;
      }
      mlddkmx = FUN_000aa9c0(_KFMLDDKMX,&DAT_001cfca6,_KFMLDDKMX_axis_x,0x1cfcb6,0x1cfcc6,
                             (int)(short)wdkba_mldm,nmot_w);
      mldhubmx = calc_value_from_x_y(&KFMLDHUBMX,evhubimldm,nmot_w);
      uVar5 = mldhubmx;
      if (mlddkmx < mldhubmx) {
        uVar5 = mlddkmx;
      }
      if (B_initmxmn != '\0') {
        _LowpassT_1 = (uint)uVar5 << 0x10;
      }
      uVar2 = FUN_000b2514(&LowpassT_1,uVar5,_TDHFMMX);
      if (uVar2 < uVar5) {
        _LowpassT_1 = (uint)uVar5 << 0x10;
        uVar2 = uVar5;
      }
      mldmx2_w = uVar5;
      if (uVar5 < uVar2) {
        mldmx2_w = uVar2;
      }
      if (Btvdpsrlvw != 0) {
        if ((uint)mldmx2_w + (uint)_DHFMUEBMX < 0x10000) {
          mldmx2_w = (word)((uint)mldmx2_w + (uint)_DHFMUEBMX);
        }
        else {
          mldmx2_w = 0xffff;
        }
      }
      mlddkmn = FUN_000aa9c0(_KFMLDDKMN,&DAT_001cfc02,_KFMLDDKMN_axis_x,0x1cfc12,0x1cfc22,
                             (int)(short)wdkba_mldn,nmot_w);
      mldhubmn = calc_value_from_x_y(&KFMLDHUBMN,evhubimldn,nmot_w);
      uVar5 = mldhubmn;
      if (mlddkmn < mldhubmn) {
        uVar5 = mlddkmn;
      }
      if (B_initmxmn != '\0') {
        _LowpassT_2 = (uint)uVar5 << 0x10;
      }
      uVar2 = FUN_000b2514(&LowpassT_2,uVar5,_TDHFMMN);
      if (uVar5 < uVar2) {
        _LowpassT_2 = (uint)uVar5 << 0x10;
        uVar2 = uVar5;
      }
      mldmn2_w = uVar5;
      if (uVar2 < uVar5) {
        mldmn2_w = uVar2;
      }
      if (Btvdpsrlvw != 0) {
        if ((int)((uint)mldmn2_w - (uint)_DHFMUEBMN) < 0) {
          mldmn2_w = 0;
        }
        else {
          mldmn2_w = (word)((uint)mldmn2_w - (uint)_DHFMUEBMN);
        }
      }
      B_initmxmn = '\0';
      mldmx_w = mldmx2_w;
      if (mldmn2_w < 0x8000) {
        mldmn_w = mldmn2_w;
      }
      else {
        mldmn_w = 0x7fff;
      }
    }
    dhfmrlvwo = (uint)((short)mldmn_w * 0x6400) / ((uint)umsrln_w * 3);
    if (dhfmrlvwo < 0x10000) {
      rldhfmmn_w = (word)dhfmrlvwo;
    }
    else {
      rldhfmmn_w = 0xffff;
    }
    dhfmrlvwo = ((uint)mldmx_w * 0x6400) / ((uint)umsrln_w * 3);
    if (dhfmrlvwo < 0x10000) {
      rldhfmmx_w = (word)dhfmrlvwo;
    }
    else {
      rldhfmmx_w = 0xffff;
    }
    uVar3 = (uint)mlhfmf_w;
    dhfmrlvwo = (uint)mlhfmm_w;
    if (dhfmrlvwo < uVar3) {
      iVar4 = uVar3 - _MLOFS;
      dpspmax_w = dhfmrlvwo - _MLOFS;
    }
    else {
      dpspmax_w = uVar3 - _MLOFS;
      iVar4 = dhfmrlvwo - _MLOFS;
    }
    B_mnhfm = iVar4 < (short)mldmn_w;
    B_mxhfm = (int)(uint)mldmx_w < dpspmax_w;
    if (((bool)B_mxhfm) || ((bool)B_mnhfm)) {
      if (DAT_003fac0d < TDMLHFM) {
        DAT_003fac0d = DAT_003fac0d + 1;
      }
      if (DAT_003fac0d == TDMLHFM) {
        B_ehfm1 = '\x01';
      }
    }
    else {
      DAT_003fac0d = 0;
    }
    if ((!(bool)B_mnhfm) && (!(bool)B_mxhfm)) {
      dhfmrlvwo = dhfmrlvwo - _MLOFS;
      if ((int)dhfmrlvwo < 0) {
        dhfmrlvwo = 0;
      }
      else if (0xffff < (int)dhfmrlvwo) {
        dhfmrlvwo = 0xffff;
      }
      if ((uint)fwmlhfm < (dhfmrlvwo & 0xffff)) {
        B_ehfm1 = '\0';
      }
    }
    if ((B_ehfm1 == '\0') && ((UBHFM <= ub || ((DAT_003fac00 & 0x20) == 0)))) {
      B_ehfs = 0;
      B_hfm = 1;
      B_ehfm = 0;
    }
    else {
      B_ehfs = 1;
      B_hfm = 0;
      B_ehfm = 1;
    }
  }
  return;
}

