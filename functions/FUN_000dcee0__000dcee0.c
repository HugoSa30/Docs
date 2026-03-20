/*
 * Program: n42.bin
 * Function: FUN_000dcee0
 * Entry: 000dcee0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000dcfa8) */
/* WARNING: Removing unreachable block (ram,0x000dcff4) */

void FUN_000dcee0(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r30;
  uint local_20;
  
  if (B_llrein == '\0') {
    milres_w = mifal_w;
    if (mifal_w <= mitebg_w) {
      milres_w = mitebg_w;
    }
  }
  else {
    bVar1 = vsdmr;
    if (vsdmr < dmrkh) {
      bVar1 = dmrkh;
    }
    uVar2 = (uint)bVar1 << 8;
    if ((uint)bVar1 << 8 < (uint)dmrkt_w) {
      uVar2 = (uint)dmrkt_w;
    }
    if (dmrllr_w < 0x400) {
      unaff_r30 = (uint)dmrllr_w << 6;
    }
    else {
      unaff_r30 = 0xffff;
    }
    if (uVar2 < (unaff_r30 & 0xffff)) {
      dmrmx_w = (word)unaff_r30;
      uVar3 = (uint)mifal_w + (unaff_r30 & 0xffff);
      if (0xffff < uVar3) {
        uVar3 = 0xffff;
      }
    }
    else {
      dmrmx_w = (word)uVar2;
      uVar3 = mifal_w + uVar2;
      unaff_r30 = uVar2;
      if (0xffff < uVar3) {
        uVar3 = 0xffff;
      }
    }
    milres_w = mitebg_w;
    if ((uint)mitebg_w < (uVar3 & 0xffff)) {
      milres_w = (word)uVar3;
    }
  }
  uVar2 = (uint)mifa_w * 0xc800;
  local_20._0_2_ = (undefined2)(uVar2 >> 0x10);
  if ((B_zwms == '\0') && (B_lsd != '\0')) {
    uVar3 = calc_value_from_x_y_2(&KFETAMN,mifa,gangi);
    uVar2 = FUN_000a7b40(local_20._0_2_,uVar2 & 0xffff,(uVar3 & 0xff) << 8);
  }
  else {
    uVar2 = FUN_000a7b40(local_20._0_2_,uVar2 & 0xffff,etazwmn);
  }
  local_20 = (uint)milres_w;
  if ((uVar2 & 0xffff) <= local_20) {
    local_20 = uVar2 & 0xffff;
  }
  if ((unaff_r30 & 0xffff) == 0) {
    local_20 = local_20 * 200;
  }
  else {
    local_20 = local_20 * etazwbm;
  }
  uVar2 = FUN_000a7b40(local_20._0_2_,local_20 & 0xffff,200);
  if (((B_dash == '\0') && (B_fil == '\0')) && ((uVar2 & 0xffff) <= (uint)mifa_w)) {
    uVar2 = (uint)mifa_w;
  }
  uVar2 = (uVar2 >> 1 & 0x7fff) + (int)(short)dmllr_w;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0xffff < (int)uVar2) {
    uVar2 = 0xffff;
  }
  if ((uVar2 & 0xffff) < 0x8000) {
    uVar2 = uVar2 * 2;
  }
  else {
    uVar2 = 0xffff;
  }
  mifafu_w = (word)uVar2;
  uVar3 = (uint)mimsr_w;
  if (uVar3 <= (uVar2 & 0xffff)) {
    uVar3 = uVar2;
  }
  if ((uVar3 & 0xffff) < (uint)misgsl_w) {
    uVar3 = (uint)misgsl_w;
  }
  milsol_w = (word)uVar3;
  if (nmot < NASNOT) {
    uVar2 = (uint)MDIMX << 8;
  }
  else {
    uVar2 = (uint)miasrl_w;
    if (miges_w < uVar2) {
      uVar2 = (uint)miges_w;
    }
  }
  if (mivmx_w < uVar2) {
    uVar2 = (uint)mivmx_w;
  }
  if (minmx_w < uVar2) {
    uVar2 = (uint)minmx_w;
  }
  if (mibgr_w < uVar2) {
    uVar2 = (uint)mibgr_w;
  }
  if (B_mibeg == '\0') {
    if ((uint)MDIMX << 8 < uVar2) {
      uVar2 = (uint)MDIMX << 8;
    }
  }
  else if (miszul_w < uVar2) {
    uVar2 = (uint)miszul_w;
  }
  if (uVar2 <= (uVar3 & 0xffff)) {
    milsol_w = (word)uVar2;
  }
  return;
}

