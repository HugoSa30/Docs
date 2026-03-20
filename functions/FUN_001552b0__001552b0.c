/*
 * Program: n42.bin
 * Function: FUN_001552b0
 * Entry: 001552b0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001552b0(void)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  undefined2 local_18;
  undefined2 local_14;
  
  local_18 = (undefined2)((uint)_rl_w * 0xff >> 0x10);
  uVar1 = func_0xff217b40(local_18,(uint)_rl_w * 0xff & 0xffff,rlugd_w);
  if ((_rpm_limiter1 >> 8 == 0) ||
     (uVar3 = (uint)nmot_w / (uint)(_rpm_limiter1 >> 8), 0xffff < uVar3)) {
    uVar3 = 0xffff;
  }
  uVar3 = (uVar1 & 0xffff) * uVar3;
  if (0xfffe < uVar3) {
    uVar3 = 0xffff;
  }
  rl_u = (byte)(uVar3 >> 8);
  upwg1_u = (byte)(upwg1_w >> 2);
  upwg2_u = (byte)(upwg2_w >> 2);
  uVar2 = upwg2d_w >> 2;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  upwg2d_u = (byte)uVar2;
  uVar2 = udkp1_w >> 4;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  udkp1_u = (byte)uVar2;
  uVar2 = udkp2_w >> 4;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  udkp2_u = (byte)uVar2;
  uVar2 = rinv_w >> 5;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  rinv_u = (byte)uVar2;
  uVar2 = rinh_w >> 5;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  rinh_u = (byte)uVar2;
  uVar2 = _tpsvkmf_w >> 2;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  tpsvkmf_u = (byte)uVar2;
  fr_u = (byte)(fr_w >> 8);
  fra_u = (byte)(fra_w >> 8);
  ftead_u = (byte)(ftead_w >> 8);
  top_u = (byte)(top_w >> 8);
  if (tmotlin < 0xc) {
    tmot_u = 0;
  }
  else {
    local_14._1_1_ = (char)((int)((uint)tmotlin * 3) >> 2);
    tmot_u = (char)local_14 - 8;
  }
  if (vfzg < 0xcc) {
    local_14 = (ushort)vfzg << 8;
    local_14._0_1_ = (byte)((ushort)((local_14 >> 2) * 5) >> 8);
    vfzg_u = local_14._0_1_;
  }
  else {
    vfzg_u = 0xff;
  }
  if (vfzgv1_w < 0x7fff) {
    vfzgv1_u = (byte)((int)(uint)vfzgv1_w >> 7);
  }
  else {
    vfzgv1_u = 0xff;
  }
  uVar2 = udkp1a_w >> 4;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  udkp1a_u = (byte)uVar2;
  igokr_u = (byte)(igokr_w >> 8);
  uushk_u = (byte)(uushk_w >> 2);
  wnwi1_u = (byte)(wnwi_w >> 8);
  adhfm_u = (byte)(uhfm_w >> 2);
  adtm_u = wtmot;
  adta_u = wtans;
  adtka_u = wtka;
  addsu_u = (byte)(udsu_w >> 2);
  igod_u = (byte)(igod_w >> 8);
  lamsons_u = (byte)(lamsons_w >> 8);
  fho_u = (byte)(fho_w >> 8);
  frm_u = (byte)(frm_w >> 8);
  frhol_u = (byte)(frhol_w >> 8);
  tnse_u = (byte)(tnse_w >> 8);
  wdknlp_u = (byte)(wdknlp_w >> 8);
  wdknlpr_u = (byte)((ushort)_wdknlpr_w >> 8);
  rkrn_u = (byte)(rkrn_w >> 5);
  DAT_005b902d = (char)(DAT_005b8996 >> 5);
  DAT_005b902e = (char)(DAT_005b8998 >> 5);
  DAT_005b902f = (char)(DAT_005b899a >> 5);
  DAT_005b9030 = (char)(DAT_005b899c >> 5);
  DAT_005b9031 = (char)(DAT_005b899e >> 5);
  DAT_005b9032 = (char)(DAT_005b89a0 >> 5);
  DAT_005b9033 = (char)(DAT_005b89a2 >> 5);
  tabst_u = (byte)(tabst_w >> 8);
  frau_u = (byte)(frau_w >> 8);
  sVar4 = (short)dlahi_w >> 4;
  if (sVar4 < 0x80) {
    if (sVar4 < -0x80) {
      sVar4 = -0x80;
    }
  }
  else {
    sVar4 = 0x7f;
  }
  dlahi_u = (byte)sVar4;
  uVar2 = _dynlsu_w >> 6;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  dynlsu_u = (byte)uVar2;
  if (_kusvk_w < 0x80) {
    sVar4 = _kusvk_w;
    if (_kusvk_w < -0x80) {
      sVar4 = -0x80;
    }
  }
  else {
    sVar4 = 0x7f;
  }
  kusvk_u = (byte)sVar4;
  sVar4 = (short)ladiff_w >> 6;
  if (sVar4 < 0x80) {
    if (sVar4 < -0x80) {
      sVar4 = -0x80;
    }
  }
  else {
    sVar4 = 0x7f;
  }
  ladiff_u = (byte)sVar4;
  sVar4 = (short)lamsam_w >> 3;
  if (sVar4 < 0x80) {
    if (sVar4 < -0x80) {
      sVar4 = -0x80;
    }
  }
  else {
    sVar4 = 0x7f;
  }
  lamsam_u = (byte)sVar4;
  lamsoni_u = (byte)(lamsoni_w >> 8);
  lamzak_u = (byte)(lamzak_w >> 8);
  palsu_u = (byte)(palsu_w >> 8);
  usvkk_u = (byte)(usvkk_w >> 2);
  uulsuf_u = (byte)(uulsuf_w >> 2);
  uulsuv_u = (byte)(uulsuv_w >> 2);
  sVar4 = (short)dlahi2_w >> 4;
  if (sVar4 < 0x80) {
    if (sVar4 < -0x80) {
      sVar4 = -0x80;
    }
  }
  else {
    sVar4 = 0x7f;
  }
  dlahi2_u = (byte)sVar4;
  uVar2 = _dynlsu2_w >> 6;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  dynlsu2_u = (byte)uVar2;
  if (_kusvk2_w < 0x80) {
    sVar4 = _kusvk2_w;
    if (_kusvk2_w < -0x80) {
      sVar4 = -0x80;
    }
  }
  else {
    sVar4 = 0x7f;
  }
  kusvk2_u = (byte)sVar4;
  sVar4 = (short)ladiff2_w >> 6;
  if (sVar4 < 0x80) {
    if (sVar4 < -0x80) {
      sVar4 = -0x80;
    }
  }
  else {
    sVar4 = 0x7f;
  }
  ladiff2_u = (byte)sVar4;
  sVar4 = (short)lamsam2_w >> 3;
  if (sVar4 < 0x80) {
    if (sVar4 < -0x80) {
      sVar4 = -0x80;
    }
  }
  else {
    sVar4 = 0x7f;
  }
  lamsam2_u = (byte)sVar4;
  lamsoni2_u = (byte)(lamsoni2_w >> 8);
  lamzak2_u = (byte)(lamzak2_w >> 8);
  palsu2_u = (byte)(palsu2_w >> 8);
  usvkk2_u = (byte)(usvkk2_w >> 2);
  uulsuv2_u = (byte)(uulsuv2_w >> 2);
  uulsuf2_u = (byte)(uulsuf2_w >> 2);
  uVar2 = rinv2_w >> 5;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  rinv2_u = (byte)uVar2;
  uVar2 = rinh2_w >> 5;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  rinh2_u = (byte)uVar2;
  uVar2 = _tpsvkmf2_w >> 2;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  tpsvkmf2_u = (byte)uVar2;
  fr2_u = (byte)(fr2_w >> 8);
  fra2_u = (byte)(fra2_w >> 8);
  wnwi2_u = wnwi1_u;
  lamsons2_u = (byte)(lamsons2_w >> 8);
  frm2_u = (byte)(frm2_w >> 8);
  frau2_u = (byte)(frau2_w >> 8);
  uushk2_u = (byte)(uushk2_w >> 2);
  vvt_sw_u = (byte)(vvt_sw >> 8);
  vvt_iw_u = (byte)(vvt_iw >> 8);
  return;
}

