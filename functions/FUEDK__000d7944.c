/*
 * Program: n42.bin
 * Function: FUEDK
 * Entry: 000d7944
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUEDK(void)

{
  bool bVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  word wVar7;
  
  uVar6 = (uint)wdks_w;
  wVar7 = dpssol_w;
  if ((short)dpssol_w < 0) {
    wVar7 = 0;
  }
  uVar5 = (uint)dpsfak;
  iVar4 = (int)(short)dpsdpsad_w;
  uVar2 = calc_value_from_y(&KLDPSREGOF,wVar7);
  iVar4 = (int)(((int)((0x100 - uVar5) * iVar4) >> 8) * (uVar2 & 0xffff)) >> 0xf;
  if (iVar4 < 0x8000) {
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
  }
  else {
    iVar4 = 0x7fff;
  }
  iVar4 = ((int)((iVar4 + (short)dpssol_w) * (uint)_fkmsdk_w) >> 0xe) + 0x8000;
  if (iVar4 < 0x10000) {
    if (iVar4 < 0) {
      dpssolad_w = 0;
    }
    else {
      dpssolad_w = (word)iVar4;
    }
  }
  else {
    dpssolad_w = 0xffff;
  }
  iVar4 = (uint)pvdkds_w - (dpssolad_w - 0x8000);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  uVar2 = (uint)(iVar4 << 0xf) / (uint)pvdkds_w;
  if ((B_ll == '\0') || (B_gd == '\0')) {
    uVar5 = 0x8000;
  }
  else {
    uVar5 = (uint)_DPLLMX;
  }
  if (uVar2 < uVar5) {
    kldpin_w = (word)uVar2;
  }
  else {
    kldpin_w = (word)uVar5;
  }
  bVar1 = B_kl15 == 0;
  if (bVar1) {
    wdksom_w = calc_value_from_y(&WDKSNLN,nmot_w);
    tfwdksom_w = _TFWDKSOM;
    B_tfwdksom = bVar1;
    B_wdksom = bVar1;
    wdksv_w = wdksom_w;
    goto LAB_000d7e70;
  }
  if ((B_fpwdkap != '\0') || (B_nmot == '\0')) {
    B_tfwdksom = bVar1;
    B_wdksom = bVar1;
    wdksv_w = calc_value_from_y(&FPWDKAPP,wped_w);
    goto LAB_000d7e70;
  }
  if ((B_wdksap != '\0') || (B_wdksapcw != '\0')) {
    wdksv_w = _WDKSAPP;
    B_tfwdksom = bVar1;
    B_wdksom = bVar1;
    goto LAB_000d7e70;
  }
  if (B_vl != 0) {
    B_tfwdksom = bVar1;
    B_wdksom = bVar1;
    wdksv_w = calc_value_from_y(&KLDKVL,nmot_w);
    goto LAB_000d7e70;
  }
  B_tfwdksom = bVar1;
  B_wdksom = bVar1;
  fdpsdkm_w = calc_value_from_y(&KLDPSDKM,kldpin_w);
  dpipol = calc_value_from_y(&KLDPIPOL,kldpin_w);
  uVar2 = (uint)kldpin_w * 1000 >> 0xf;
  kldpin_in = (word)uVar2;
  if (uVar2 < 0x1f5) {
    uVar2 = (uint)_KLAF;
  }
  else if ((int)(uVar2 - 500) < 0x1f5) {
    uVar2 = (uint)*(ushort *)(&DAT_001c4012 + uVar2 * 2);
  }
  else {
    uVar2 = (uint)_DAT_001c47e2;
  }
  if (ftvdkho_w == 0) {
    iVar4 = 0xffff;
LAB_000d7d38:
    mlsoladte = (word)iVar4;
  }
  else {
    if ((uint)mlsol_w - (uint)mste == (uint)(mssp_w >> 8)) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)((((uint)mlsol_w - (uint)mste) - ((int)(uint)mssp_w >> 8)) * 0x2000) /
              (int)(uint)ftvdkho_w;
    }
    if (_fkmsdk_w == 0) {
      iVar4 = 0xffff;
    }
    else {
      iVar4 = (iVar4 << 0xe) / (int)(uint)_fkmsdk_w;
    }
    iVar4 = iVar4 - ((int)((int)_msndko_w * uVar2) >> 0x10);
    if (iVar4 < 0) {
      iVar4 = 0;
      goto LAB_000d7d38;
    }
    if ((0xffff < iVar4) || (-1 < iVar4)) goto LAB_000d7d38;
    mlsoladte = 0;
  }
  wdksvt = calc_value_from_x_y(&KFWDKDPS,mlsoladte,dpipol);
  if (uVar2 == 0) {
    mlwdkns_w = -_MSNLG - 1;
  }
  else {
    uVar2 = ((uint)mlsoladte << 0x10) / uVar2;
    if (uVar2 < 0x10000) {
      if (uVar2 < _MSNLG) {
        mlwdkns_w = 0;
      }
      else {
        mlwdkns_w = (short)uVar2 - _MSNLG;
      }
    }
    else {
      mlwdkns_w = -_MSNLG - 1;
    }
  }
  wdksgd = calc_value_from_x_y(&KFWDKMSN,mlwdkns_w,nmot_w);
  iVar4 = ((int)(((uint)wdksvt - (uint)wdksgd) * (uint)fdpsdkm_w) >> 0xf) + (uint)wdksgd;
  if (iVar4 < 0x10000) {
    if (iVar4 < 0) {
      wdksv_w = 0;
    }
    else {
      wdksv_w = (word)iVar4;
    }
  }
  else {
    wdksv_w = 0xffff;
  }
LAB_000d7e70:
  if (B_tfwdksom == 0) {
    if ((B_gd == '\0') && ((short)dpssol_w <= _DPSGRENDK)) {
      uVar3 = calc_value_from_y(&TWDKNV,nmot_w);
      wdksp_w = FUN_000b2514(&DAT_003fac70,wdksv_w,uVar3);
    }
    else if (B_stend == '\0') {
      wdksp_w = FUN_000b2514(&DAT_003fac70,wdksv_w,_TWDKSVST);
    }
    else if (kldpin_w < dpsvbgms_w) {
      uVar3 = calc_value_from_y(&TWDKSV,kldpin_w);
      wdksp_w = FUN_000b2514(&DAT_003fac70,wdksv_w,uVar3);
    }
    else {
      uVar3 = calc_value_from_y(&TWDKSV,dpsvbgms_w);
      wdksp_w = FUN_000b2514(&DAT_003fac70,wdksv_w,uVar3);
    }
  }
  else {
    wdksp_w = FUN_000b2514(&DAT_003fac70,wdksv_w,tfwdksom_w);
  }
  if (B_gd == '\0') {
    uVar2 = (uint)TVWDKS;
  }
  else {
    uVar2 = 0;
  }
  *(word *)(&UNK_003fac5c + (DAT_003fac6c & 7) * 2) = wdksp_w;
  wdks_w = *(word *)(&UNK_003fac5c + ((DAT_003fac6c - uVar2) * 2 & 0xe));
  DAT_003fac6c = DAT_003fac6c + 1;
  wdks = (byte)(wdks_w >> 8);
  iVar4 = wdks_w - uVar6;
  if (iVar4 < -0x8000) {
    iVar4 = -0x8000;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  dwdks_w = (word)iVar4;
  return;
}

