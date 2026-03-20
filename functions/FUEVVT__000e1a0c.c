/*
 * Program: n42.bin
 * Function: FUEVVT
 * Entry: 000e1a0c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUEVVT(void)

{
  uint uVar1;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar2;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((B_gdvhub == 0) || (DAT_003fac98 != '\0')) {
    if ((_DAT_003fac96 == 0) || (B_gdvhub == 0)) {
      _DAT_003fac96 = 0;
    }
    else {
      _DAT_003fac96 = _DAT_003fac96 + -1;
    }
  }
  else {
    _DAT_003fac96 = _TVDHUBVHN1;
  }
  DAT_003fac98 = B_gdvhub;
  if ((HUBST == '\0') || (B_stend != '\0')) {
    B_hubst = 0;
  }
  else {
    B_hubst = 1;
  }
  if ((uint)nwe + (uint)DNWELLK + (uint)DNWE < (uint)nmot) {
    B_nwe = 0;
  }
  else if ((uint)nmot < (uint)nwe + (uint)DNWELLK) {
    B_nwe = 1;
  }
  if (DAT_003fac8f == '\0') {
    if ((B_gdst != 0) && (DAT_003fac8e == '\0')) {
      evhubfrz_w = evhubmd_w;
      B_frz_hub = 1;
      DAT_003fac8f = '\x01';
    }
  }
  else if ((DAT_003fac8e != '\0') && (B_gdst == 0)) {
    B_frz_hub = 0;
  }
  DAT_003fac8e = B_gdst;
  fhubwll_au = FUN_000a87cc(&FHUBWLL,tmot);
  if (B_fphubap != '\0') {
    uVar1 = calc_value_from_y(&FPHUBAPP,wped_w);
    uVar1 = uVar1 & 0xffff;
    goto LAB_000e22dc;
  }
  if (B_hubap != '\0') {
    uVar1 = (uint)_HUBAPP;
    goto LAB_000e22dc;
  }
  if ((B_vl == 0) || (B_stend == '\0')) {
    if (((B_ll == '\0') || (B_nwe == 0)) && (B_stend != '\0')) {
      B_llk = false;
    }
    else {
      B_llk = true;
    }
    if ((bool)B_llk) {
      if (B_hubst == 0) {
        sVar3 = calc_value_from_x_y(&KFEHUBLL,mlsolkor_w,nmot_w);
        sVar4 = calc_value_from_x_y(&KFEHUBLLK,mlsolkor_w,nmot_w);
        evhubs_kf = (short)((int)(short)(sVar4 - sVar3) * (uint)fhubwll_au >> 8) + sVar3;
      }
      else if (TMSTHUBSTM < tmst) {
        evhubs_kf = calc_value_from_x_y(&KFEHUBSTM,nmot_w,tmst);
      }
      else {
        evhubs_kf = calc_value_from_x_y(&KFEHUBST,nmot_w,rlvw_w);
      }
    }
    else {
      evhubs_kf = calc_value_from_x_y(&KFEHUB,nmot_w,rlvwvvt_w);
    }
    if (evhubs_kf < minhub_w) {
      evhubs_tmp = minhub_w;
    }
    else {
      evhubs_tmp = evhubs_kf;
    }
    if (VSE_SPRON == '\0') {
      vse_spr = Vse_sprs;
    }
    else {
      vse_spr = Vse_spri;
    }
    kffl_ausi = calc_value_from_x_y(&KFFLAEAN,evhubs_tmp,vse_spr);
    kffl_ausn = calc_value_from_x_y(&KFFLAEAN,evhubs_tmp,Vse_sprn);
    if (kffl_ausi == 0) {
      uVar1 = 0xffffff;
    }
    else {
      uVar1 = ((uint)kffl_ausn << 10) / (uint)kffl_ausi;
      if (0xffffff < uVar1) {
        uVar1 = 0xffffff;
      }
    }
    uVar2 = calc_value_from_x_y_2(&KFANFLVNS,nmot,rlvw);
    iVar8 = ((int)((uVar1 - 0x400) * (uVar2 & 0xff)) >> 6) + 0x400;
    if (iVar8 < 0x10000) {
      if (iVar8 < -0xffff) {
        iVar8 = -0xffff;
      }
    }
    else {
      iVar8 = 0xffff;
    }
    uVar1 = calc_value_from_y(&WESNESPR,evhubs_tmp);
    iVar6 = (uVar1 & 0xffff) * 0x1e;
    uVar1 = iVar6 + (uint)Vse_sprn;
    if (uVar1 < 0x10000) {
      vsesprn = (word)uVar1;
    }
    else {
      vsesprn = 0xffff;
    }
    uVar1 = iVar6 + (uint)vse_spr;
    if (uVar1 < 0x10000) {
      vsespris = (word)uVar1;
    }
    else {
      vsespris = 0xffff;
    }
    sVar3 = calc_value_from_y_2(&KLZYLN,(int)(short)vsespris);
    if (sVar3 == 0) {
      iVar6 = 0xffffff;
LAB_000e1f98:
      vol_verh_w = 0xffff;
      iVar7 = iVar6;
    }
    else {
      sVar4 = calc_value_from_y_2(&KLZYLN,(int)(short)vsesprn);
      iVar7 = ((int)sVar4 << 10) / (int)sVar3;
      iVar6 = 0xffffff;
      if ((0xffffff < iVar7) || (iVar6 = iVar7, 0x1000 < iVar7)) goto LAB_000e1f98;
      if (iVar7 < 0) {
        vol_verh_w = 0;
      }
      else {
        vol_verh_w = (word)(iVar7 << 4);
      }
    }
    uVar1 = calc_value_from_x_y_2(&KFESVNS,nmot,rlvw);
    iVar6 = ((int)((iVar7 + -0x400) * (uVar1 & 0xff)) >> 7) + 0x400;
    if (iVar6 < 0x10000) {
      if (iVar6 < -0xffff) {
        iVar6 = -0xffff;
      }
    }
    else {
      iVar6 = 0xffff;
    }
    iVar8 = iVar8 * iVar6 >> 5;
    if (iVar8 < (int)(uint)_FHUBVNSMN) {
      fhubvnsf_w = _FHUBVNSMN;
    }
    else if ((int)(uint)_FHUBVNSMX < iVar8) {
      fhubvnsf_w = _FHUBVNSMX;
    }
    else {
      fhubvnsf_w = (word)iVar8;
    }
    fhubvnss_w = FUN_000b2514(&DAT_003fac90,fhubvnsf_w,(uint)ZKWESVNS << 8);
    if (((NOHUBMO != '\0') || (B_stend == '\0')) || (fhubvnsi_w = fhubvnss_w, B_lltd != 0)) {
      fhubvnsi_w = 0x8000;
    }
    uVar1 = (uint)evhubs_tmp * (uint)fhubvnsi_w >> 0xf;
    if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
  }
  else {
    uVar1 = calc_value_from_y(&KLEHUBVL,nmot_w);
    uVar1 = uVar1 & 0xffff;
    fhubvnsi_w = 0x8000;
  }
  evhubmd_w = (word)uVar1;
  if (B_gdvhub == 0) {
    if ((uint)_DHUBMD < (uint)dhubra_w) {
      uVar2 = (uint)dhubra_w - (uint)_DHUBMD;
    }
    else {
      uVar2 = 0;
    }
    if (b_gdvhub_alt != 0) {
      b_gdvhub_alt = 0;
      if ((uVar1 & 0xffff) < (uint)evhubvh_w) {
        uVar2 = (uint)evhubvh_w - (uVar1 & 0xffff);
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    if (B_gdst == 0) {
      if (_DAT_003fac96 == 0) {
        uVar2 = (uint)dhubra_w + (uint)_DHUBVHN1;
      }
      else {
        uVar2 = (uint)dhubra_w + (uint)_DHUBVHN;
      }
    }
    else {
      uVar2 = (uint)dhubra_w + (uint)_DHUBVH;
    }
    if (b_gdvhub_alt == 0) {
      b_gdvhub_alt = 1;
    }
  }
  if (_DHUBMX < uVar2) {
    uVar2 = (uint)_DHUBMX;
  }
  dhubra_w = (word)uVar2;
  if (E_vvt_hub == 0) {
    klhubgd_aus = calc_value_from_y(&KLVHUB,nmot_w);
  }
  else {
    klhubgd_aus = _ERRVVTHUB;
  }
  if ((B_frz_hub == 0) || (S_EVHUBFRZ == '\0')) {
    uVar2 = uVar2 + evhubmd_w;
  }
  else if ((uint)evhubmd_w < (uint)evhubfrz_w) {
    uVar2 = uVar2 + evhubfrz_w;
  }
  else {
    uVar2 = uVar2 + evhubmd_w;
  }
  if (0xffff < uVar2) {
    uVar2 = 0xffff;
  }
  if ((uVar2 & 0xffff) < (uint)klhubgd_aus) {
    evhubvh_w = (word)uVar2;
  }
  else {
    evhubvh_w = klhubgd_aus;
  }
  uVar1 = (uint)evhubvh_w;
  if (uVar1 < evhubmd_w) {
    uVar1 = (uint)evhubmd_w;
  }
LAB_000e22dc:
  if (nmot_w == 0) {
    evhubsnf_w = _HUBSGNL;
  }
  else {
    iVar8 = uVar1 + (int)(short)Adevhubs;
    if (iVar8 < 0) {
      evhubsnf_w = 0;
    }
    else if (iVar8 < 0x10000) {
      evhubsnf_w = (word)iVar8;
    }
    else {
      evhubsnf_w = 0xffff;
    }
  }
  if (B_llk == 0) {
    uVar5 = calc_value_from_y(&TFHUBS,rlvwvugd_w);
    evhubs_w = FUN_000b2514(&LPHUBS,evhubsnf_w,uVar5);
  }
  else {
    uVar5 = calc_value_from_y(&TFHUBSLL,rlvwvugd_w);
    evhubs_w = FUN_000b2514(&LPHUBS,evhubsnf_w,uVar5);
  }
  devhubs_w = evhubs_w - evhubs_20;
  evhubs_20 = evhubs_10;
  evhubs_10 = evhubs_w;
  uVar1 = calc_value_from_y(&KLHUBEX,evhubs_w);
  iVar8 = (uVar1 & 0xffff) + ((int)(short)Adexws >> 8);
  if (iVar8 < 0) {
    exwinksp_w = 0;
  }
  else if (iVar8 < 0x10000) {
    exwinksp_w = (word)iVar8;
  }
  else {
    exwinksp_w = 0xffff;
  }
  *(word *)(&UNK_003fac74 + (DAT_003fac84 & 7) * 2) = exwinksp_w;
  exwinks_w = *(word *)(&UNK_003fac74 + (((uint)DAT_003fac84 - (uint)TVHUB) * 2 & 0xe));
  DAT_003fac84 = DAT_003fac84 + 1;
  if (exwinks_w < 0x9f7) {
    exwinks = (byte)(exwinks_w / 10);
  }
  else {
    exwinks = 0xff;
  }
  iVar8 = (int)(short)Adexws;
  if (iVar8 < 1) {
    uVar1 = (uint)exwnki_w + ((uint)-iVar8 >> 8 & 0xff);
    if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
    evhubi_w = FUN_000a81f0(&KLHUBEX,uVar1 & 0xffff);
  }
  else {
    if ((iVar8 >> 8 & 0xffffU) < (uint)exwnki_w) {
      uVar1 = (uint)exwnki_w - (iVar8 >> 8);
    }
    else {
      uVar1 = 0;
    }
    evhubi_w = FUN_000a81f0(&KLHUBEX,uVar1 & 0xffff);
  }
  devhubi_w = evhubi_w - evhubi_20;
  evhubi_20 = evhubi_10;
  evhubi_10 = evhubi_w;
  if (B_stend != '\0') {
    B_vvtclose = 1;
  }
  uVar1 = (int)((uint)exwinks - (uint)DAT_003fac94) >> 0x1f;
  uVar1 = (uVar1 ^ (uint)exwinks - (uint)DAT_003fac94) - uVar1;
  dexwinks = (byte)uVar1;
  DAT_003fac94 = exwinks;
  devhubi2_w = devhubi_w;
  evhubi2_w = evhubi_w;
  uVar2 = FUN_000a87cc(&KLDEXWSLOW,nmot);
  if ((uVar1 & 0xff) < (uVar2 & 0xff)) {
    if (((tdexwslow == 0) || (tdexwslow = tdexwslow - 1, tdexwslow == 0)) && (CW_VVTSLOW != '\0')) {
      B_vvtslow = 1;
    }
  }
  else {
    tdexwslow = TVVTSLOW;
    B_vvtslow = 0;
  }
  return;
}

