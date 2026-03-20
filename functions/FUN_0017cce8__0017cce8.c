/*
 * Program: n42.bin
 * Function: FUN_0017cce8
 * Entry: 0017cce8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0017d15c) */
/* WARNING: Removing unreachable block (ram,0x0017d0fc) */
/* WARNING: Removing unreachable block (ram,0x0017d1b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017cce8(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  tlrvamo_w = func_0xff2190c8(DAT_001cb5be,&DAT_001cb5bf,&DAT_001cb5c8,tmot);
  tlrbamo_w = func_0xff2190c8(DAT_001cb5a4,&DAT_001cb5a5,0x1cb5ae,tmot);
  if (B_stend == '\0') {
    DAT_005bb92a = DAT_005bb92a & 0xef;
    DAT_005bb992 = func_0xff2190c8(DAT_001d2698,&DAT_001d2699,0x1d269e,tmst);
    DAT_005bb92a = DAT_005bb92a & 0xdf;
    DAT_005bb92d = DAT_001d2682;
  }
  else {
    if (DAT_005bb992 == 0) {
      DAT_005bb92a = DAT_005bb92a | 0x10;
    }
    else {
      DAT_005bb992 = DAT_005bb992 + -1;
    }
    if (DAT_005bb92d == '\0') {
      DAT_005bb92a = DAT_005bb92a | 0x20;
    }
    else {
      DAT_005bb92d = DAT_005bb92d + -1;
    }
  }
  if ((B_st != '\0') && (DAT_005b91c2 = tans, tans < DAT_001cb595)) {
    DAT_003fc178 = '\x01';
  }
  if ((DAT_001cb59a < tmst) && (DAT_001cb596 < DAT_005b91c2)) {
    if (((DAT_005bb92a & 0x10) == 0) || ((DAT_005bb92a & 0x20) == 0)) {
      B_pspwl = 0;
    }
    else {
      B_pspwl = 1;
    }
  }
  else if (((DAT_005bb92a & 0x10) == 0) || (B_stend == '\0')) {
    B_pspwl = 0;
  }
  else {
    B_pspwl = 1;
  }
  if ((B_sa == '\0') && ((DAT_005bb92a & 0x80) != 0)) {
    DAT_005bb990 = _DAT_001d2696;
    DAT_005bb92b = DAT_005bb92b & 0xfe;
  }
  if (DAT_005bb990 == 0) {
    DAT_005bb92b = DAT_005bb92b | 1;
  }
  else {
    DAT_005bb990 = DAT_005bb990 + -1;
  }
  uVar3 = (uint)lamsoni_w;
  uVar2 = (uint)lamsons_w;
  if (uVar2 < uVar3) {
    uVar3 = uVar3 - uVar2;
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    else if (0xffff < (int)uVar3) {
      uVar3 = 0xffff;
    }
  }
  else {
    uVar3 = uVar2 - uVar3;
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    else if (0xffff < (int)uVar3) {
      uVar3 = 0xffff;
    }
  }
  if (((DAT_005bb92b & 1) == 0) && ((uint)_DAT_001cb59c < (uVar3 & 0xffff))) {
    if (((DAT_005bb92a & 0x80) != 0) && (B_sa == '\0')) {
      B_lrssa = 0;
    }
  }
  else {
    B_lrssa = 1;
  }
  uVar3 = (uint)lamsoni2_w;
  uVar2 = (uint)lamsons2_w;
  if (uVar2 < uVar3) {
    uVar3 = uVar3 - uVar2;
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    else if (0xffff < (int)uVar3) {
      uVar3 = 0xffff;
    }
  }
  else {
    uVar3 = uVar2 - uVar3;
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    else if (0xffff < (int)uVar3) {
      uVar3 = 0xffff;
    }
  }
  if (((DAT_005bb92b & 1) == 0) && ((uint)_DAT_001cb59c < (uVar3 & 0xffff))) {
    if (((DAT_005bb92a & 0x80) != 0) && (B_sa == '\0')) {
      B_lrssa2 = 0;
    }
  }
  else {
    B_lrssa2 = 1;
  }
  uVar2 = (uint)DAT_001cb597 + (uint)DAT_001cb574;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  uVar3 = (uint)tmot;
  if (uVar3 < (uVar2 & 0xff)) {
    if (uVar3 < DAT_001cb597) {
      DAT_005bb92a = DAT_005bb92a & 0xfe;
    }
  }
  else {
    DAT_005bb92a = DAT_005bb92a | 1;
  }
  uVar2 = (uint)DAT_001cb598 + (uint)DAT_001cb574;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  if (uVar3 < (uVar2 & 0xff)) {
    if (uVar3 < DAT_001cb598) {
      DAT_005bb92a = DAT_005bb92a & 0xfd;
    }
  }
  else {
    DAT_005bb92a = DAT_005bb92a | 2;
  }
  uVar2 = (uint)DAT_001cb599 + (uint)DAT_001cb574;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  if (uVar3 < (uVar2 & 0xff)) {
    if (uVar3 < DAT_001cb599) {
      DAT_005bb92a = DAT_005bb92a & 0xfb;
    }
  }
  else {
    DAT_005bb92a = DAT_005bb92a | 4;
  }
  if (B_stend == '\0') {
    DAT_005bb92a = DAT_005bb92a & 0xf7;
    DAT_005bb994 = func_0xff2190c8(DAT_001d26a8,&DAT_001d26a9,0x1d26ae);
  }
  else if (DAT_005bb994 == 0) {
    DAT_005bb92a = DAT_005bb92a | 8;
  }
  else {
    DAT_005bb994 = DAT_005bb994 + -1;
  }
  iVar4 = (uint)DAT_005b88cb - (uint)tmotlin;
  if (iVar4 < -0x80) {
    iVar4 = -0x80;
  }
  else if (0x7f < iVar4) {
    iVar4 = 0x7f;
  }
  if (((DAT_005bb92a & 8) == 0) || (((char)iVar4 <= DAT_001d2681 && (DAT_001d2680 == '\0')))) {
    DAT_005bb92a = DAT_005bb92a & 0xbf;
  }
  else {
    DAT_005bb92a = DAT_005bb92a | 0x40;
  }
  if (DAT_003fc178 == '\0') {
    if (B_ll == '\0') {
      if (((DAT_005bb92a & 1) == 0) && ((DAT_005bb92a & 0x40) == 0)) {
        B_tmlr = 0;
      }
      else {
        B_tmlr = 1;
      }
    }
    else if (((DAT_005bb92a & 2) == 0) && ((DAT_005bb92a & 0x40) == 0)) {
      B_tmlr = 0;
    }
    else {
      B_tmlr = 1;
    }
  }
  else if (((DAT_005bb92a & 4) == 0) && ((DAT_005bb92a & 0x40) == 0)) {
    B_tmlr = 0;
  }
  else {
    B_tmlr = 1;
  }
  bVar1 = func_0xff2187cc(&DAT_001cb578,nmot);
  if (bVar1 < rl) {
    if (DAT_005bb92c == '\0') {
      if (((B_ll == '\0') || (DAT_001cb576 <= rl)) || (nmot < DAT_001cb575)) {
        B_lrrl = 1;
      }
      else {
        B_lrrl = 0;
      }
    }
    else {
      DAT_005bb92c = DAT_005bb92c + -1;
    }
  }
  else {
    B_lrrl = 0;
    DAT_005bb92c = DAT_001d2683;
  }
  if (((B_slsoff == '\0') && (bVar1 = func_0xff2187cc(&DAT_001cb58c,nmot), rl <= bVar1)) ||
     (B_dsla != '\0')) {
    B_slspaus = 1;
  }
  else {
    B_slspaus = 0;
  }
  if ((B_eobdlr == '\0') && (((DAT_003fdf5f & 1) == 0 || ((DAT_003fdf5f >> 1 & 1) == 0)))) {
    if (B_lr == '\0') {
      if ((flglrs & B_nolrw) == 0) {
        flglrs = B_nolrb;
      }
    }
    else {
      flglrs = B_lr2s;
    }
  }
  else {
    flglrs = B_nolre;
  }
  if ((B_eobdlr2 == '\0') && (((DAT_003fdf61 & 1) == 0 || ((DAT_003fdf61 >> 1 & 1) == 0)))) {
    if (B_lr2 == '\0') {
      if ((B_lr2s2 & B_nolrw2) == 0) {
        B_lr2s2 = B_nolrb2;
      }
    }
    else {
      B_lr2s2 = B_lr2s2;
    }
  }
  else {
    B_lr2s2 = B_nolre2;
  }
  if (B_sa == '\0') {
    DAT_005bb92a = DAT_005bb92a & 0x7f;
  }
  else {
    DAT_005bb92a = DAT_005bb92a | 0x80;
  }
  return;
}

