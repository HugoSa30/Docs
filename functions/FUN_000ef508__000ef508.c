/*
 * Program: n42.bin
 * Function: FUN_000ef508
 * Entry: 000ef508
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ef508(void)

{
  ushort uVar4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar5;
  int iVar6;
  
  uVar5 = (uint)pvdkds_w;
  if (uVar5 == 0) {
    iVar6 = (short)dpssol_w * -0x4000;
  }
  else {
    iVar6 = (int)((uVar5 - (int)(short)dpssol_w) * 0x4000) / (int)uVar5;
  }
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  else if (0x3fff < iVar6) {
    iVar6 = 0x3fff;
  }
  dpwdkhf_w = (word)(iVar6 * 2);
  dpipowdkhf = calc_value_from_y(&KLDPIPOL,iVar6 * 2 & 0xffff);
  if (ftvdkho_w == 0) {
    uVar5 = (uint)_mshfm_w << 0x10;
  }
  else {
    uVar5 = ((uint)_mshfm_w << 0x10) / (uint)ftvdkho_w;
  }
  uVar5 = uVar5 >> 3;
  if (0xffff < uVar5) {
    uVar5 = 0xffff;
  }
  uVar1 = uVar5 & 0xffff;
  mshfmad = (word)uVar5;
  uVar5 = (uint)dpwdkhf_w * 0x7d >> 0xc;
  dpwdkhf_in = (word)uVar5;
  uVar4 = _KLAF;
  if ((500 < uVar5) && (uVar4 = _DAT_001c47e2, (int)(uVar5 - 500) < 0x1f5)) {
    uVar4 = *(ushort *)(&DAT_001c4012 + uVar5 * 2);
  }
  if (uVar4 == 0) {
    uVar5 = uVar1 << 0x10;
  }
  else if (uVar5 < 0x1f5) {
    uVar5 = (uVar1 << 0x10) / (uint)_KLAF;
  }
  else if ((int)(uVar5 - 500) < 0x1f5) {
    uVar5 = (uVar1 << 0x10) / (uint)*(ushort *)(&DAT_001c4012 + uVar5 * 2);
  }
  else {
    uVar5 = (uVar1 << 0x10) / (uint)_DAT_001c47e2;
  }
  iVar6 = (uVar5 >> 1) - (uint)(_MSNLG >> 1);
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  else if (0x7fff < iVar6) {
    iVar6 = 0x7fff;
  }
  mlwdknshf = (short)iVar6 * 2;
  uVar5 = calc_value_from_x_y(&KFWDKDPS,uVar1,dpipowdkhf);
  uVar1 = calc_value_from_x_y(&KFWDKMSN,mlwdknshf,nmot_w);
  uVar2 = calc_value_from_y(&KLDPSDKM,dpwdkhf_w);
  uVar3 = calc_value_from_x_y(&KFWDKMSN,mlwdknshf,nmot_w);
  uVar5 = ((int)(((int)((uVar5 & 0xffff) - (uVar1 & 0xffff)) >> 1) * (uVar2 & 0xffff)) >> 0xe) +
          (uVar3 & 0xffff);
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (0xffff < (int)uVar5) {
    uVar5 = 0xffff;
  }
  wdkhfu_w = (word)uVar5;
  uVar1 = uVar5 & 0xffff;
  wdkhf_w = wdkugd_w;
  if (uVar1 < wdkugd_w) {
    wdkhf_w = (word)uVar5;
  }
  uVar5 = (uint)wdks_w;
  if (uVar5 < uVar1) {
    uVar5 = uVar1;
  }
  if (((uVar5 < wdkugd_w) && (B_vl == 0)) && (_BGWDKDPSGR < (short)dpssol_w)) {
    B_wdkhfu = 0;
  }
  else {
    B_wdkhfu = 1;
  }
  return;
}

