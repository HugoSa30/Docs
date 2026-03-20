/*
 * Program: n42.bin
 * Function: FUN_000c0a2c
 * Entry: 000c0a2c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c0a2c(void)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  short sVar7;
  uint uVar5;
  uint uVar6;
  uint uVar8;
  word wVar9;
  int iVar10;
  uint uVar11;
  short sVar12;
  short local_30;
  
  bVar3 = B_sa;
  iVar10 = (int)(short)drlsolvt_w;
  if (iVar10 < 0x801) {
    if (iVar10 < -0x800) {
      iVar10 = -0x800;
    }
  }
  else {
    iVar10 = 0x800;
  }
  if (tseg_l < s_ZZZZ3333_00100000 + 1) {
    iVar10 = iVar10 * tseg_l;
  }
  else {
    iVar10 = iVar10 << 0x14;
  }
  drlsolvt_seg = (word)(iVar10 / 100000);
  iVar10 = (int)(short)drlsolvt_seg;
  if ((((short)(_DRLTOTVVT >> 1) < iVar10) || (iVar10 < -(int)(short)(_DRLTOTVVT >> 1))) &&
     (B_uk1 != '\0')) {
    iVar10 = (short)drkakvt_w + iVar10;
    if ((short)_RKAKVTGMX < iVar10) {
      drkakvt_w = _RKAKVTGMX;
    }
    else if (iVar10 < (short)_RKAKVTGMN) {
      drkakvt_w = _RKAKVTGMN;
    }
    else {
      drkakvt_w = (word)iVar10;
    }
  }
  if ((B_uk1 == '\0' | B_sa) != 0) {
    drkakvt_w = 0;
  }
  if (((B_wf == '\0') || (DAT_003fadac == '\0')) || (B_ukns == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) || (B_ukns == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  DAT_003fadac = B_wf;
  iVar10 = (int)(short)wf_w;
  B_uk1 = bVar1;
  B_uke = bVar2;
  if (B_wf == '\0') {
    wf_w = 0;
  }
  else {
    uVar8 = (int)((uint)nmot_w * (uint)FWFN) >> 7;
    if (uVar8 < 0x8000) {
      if ((int)uVar8 < -0x8000) {
        uVar8 = 0xffff8000;
      }
    }
    else {
      uVar8 = 0x7fff;
    }
    sVar7 = (short)uVar8;
    if (ESUKRLP == '\x01') {
      uVar8 = FUN_000c09d8(&WFRL,rlp_w,0x1a);
    }
    else {
      uVar8 = FUN_000c09d8(&WFRL,rlsol_w,0x1a);
    }
    iVar4 = (int)(short)((ushort)(uVar8 >> 1) & 0x7fff) + (int)sVar7;
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    wf_w = (word)iVar4;
  }
  if (bVar1) {
    iVar10 = (short)wf_w - iVar10;
    if (iVar10 < -0x8000) {
      iVar10 = -0x8000;
    }
    else if (0x7fff < iVar10) {
      iVar10 = 0x7fff;
    }
    dwf_w = (word)iVar10;
  }
  else {
    dwf_w = 0;
  }
  wVar9 = drlsol_w;
  if (ESUKRLP == '\x01') {
    wVar9 = drlp_w;
  }
  iVar10 = (int)(short)dwf_w;
  if ((short)wVar9 < 0) {
    B_vaau = 1;
    iVar4 = (int)(iVar10 * (uint)avak * 0x100) >> 0x10;
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    dwfk_w = (word)iVar4;
  }
  else {
    B_vaau = 0;
    iVar4 = (int)(iVar10 * (uint)abak * 0x100) >> 0x10;
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    dwfk_w = (word)iVar4;
  }
  iVar4 = (int)(short)dwfk_w;
  iVar10 = iVar10 - iVar4;
  if (iVar10 < -0x8000) {
    iVar10 = -0x8000;
  }
  else if (0x7fff < iVar10) {
    iVar10 = 0x7fff;
  }
  dwfl_w = (word)iVar10;
  anztis = anzti;
  iVar10 = (uint)anzti - (uint)DAT_003fadbc;
  if (iVar10 < -0x8000) {
    iVar10 = -0x8000;
  }
  else if (0x7fff < iVar10) {
    iVar10 = 0x7fff;
  }
  if (((short)iVar10 == 0) && (bVar3 == 0)) {
    B_redkl = false;
  }
  else {
    B_redkl = true;
  }
  DAT_003fadbc = anzti;
  if (bVar1) {
    if ((bool)B_redkl) {
      iVar4 = iVar4 - (short)rkukk_w;
      if (iVar4 < -0x8000) {
        iVar4 = -0x8000;
      }
      else if (0x7fff < iVar4) {
        iVar4 = 0x7fff;
      }
      iVar10 = (int)(short)sdwfk_w + (int)(short)iVar4;
      if (iVar10 < -0x8000) {
        iVar10 = -0x8000;
      }
      else if (0x7fff < iVar10) {
        iVar10 = 0x7fff;
      }
      sdwfk_w = (word)iVar10;
    }
    else {
      iVar4 = (short)sdwfk_w + iVar4;
      if (iVar4 < -0x8000) {
        iVar4 = -0x8000;
      }
      else if (0x7fff < iVar4) {
        iVar4 = 0x7fff;
      }
      sdwfk_w = (word)iVar4;
    }
    iVar10 = (int)((int)(short)sdwfk_w * (uint)ZUKK * 0x100) >> 0x10;
    if (iVar10 < -0x8000) {
      iVar10 = -0x8000;
    }
    else if (0x7fff < iVar10) {
      iVar10 = 0x7fff;
    }
    sVar7 = (short)iVar10;
    if (sVar7 < 0) {
      if (sVar7 == -0x8000) {
        sVar12 = 0x7fff;
      }
      else {
        sVar12 = -sVar7;
      }
      if (_DUKK < sVar12) {
        B_ukk = 1;
        iVar10 = (int)sVar7 - (int)-_DUKK;
        if (iVar10 < -0x8000) {
          iVar10 = -0x8000;
        }
        else if (0x7fff < iVar10) {
          iVar10 = 0x7fff;
        }
        rkukk_w = (word)iVar10;
      }
      else {
        B_ukk = 0;
        rkukk_w = 0;
      }
    }
    else if (_DUKK < sVar7) {
      B_ukk = 1;
      iVar10 = (int)sVar7 - (int)_DUKK;
      if (iVar10 < -0x8000) {
        iVar10 = -0x8000;
      }
      else if (0x7fff < iVar10) {
        iVar10 = 0x7fff;
      }
      rkukk_w = (word)iVar10;
    }
    else {
      B_ukk = 0;
      rkukk_w = 0;
    }
  }
  else {
    sdwfk_w = 0;
    if (_DUKK < 0) {
      B_ukk = 1;
      rkukk_w = -_DUKK;
    }
    else {
      B_ukk = 0;
      rkukk_w = 0;
    }
  }
  if (bVar1) {
    if ((bool)B_redkl) {
      iVar10 = (int)(short)dwfl_w - (int)(short)rkukl_w;
      if (iVar10 < -0x8000) {
        iVar10 = -0x8000;
      }
      else if (0x7fff < iVar10) {
        iVar10 = 0x7fff;
      }
      iVar10 = (int)(short)sdwfl_w + (int)(short)iVar10;
      if (iVar10 < -0x8000) {
        iVar10 = -0x8000;
      }
      else if (0x7fff < iVar10) {
        iVar10 = 0x7fff;
      }
      sdwfl_w = (word)iVar10;
    }
    else {
      iVar10 = (int)(short)sdwfl_w + (int)(short)dwfl_w;
      if (iVar10 < -0x8000) {
        iVar10 = -0x8000;
      }
      else if (0x7fff < iVar10) {
        iVar10 = 0x7fff;
      }
      sdwfl_w = (word)iVar10;
    }
    iVar10 = (int)(short)sdwfl_w;
    if (iVar10 < 0) {
      B_val = 1;
      iVar10 = (int)(iVar10 * (uint)zvale * 0x20) >> 0x10;
      if (iVar10 < -0x8000) {
        iVar10 = -0x8000;
      }
      else if (0x7fff < iVar10) {
        iVar10 = 0x7fff;
      }
      rkukl_w = (word)iVar10;
    }
    else {
      B_val = 0;
      iVar10 = (int)(iVar10 * (uint)zbale * 0x20) >> 0x10;
      if (iVar10 < -0x8000) {
        iVar10 = -0x8000;
      }
      else if (0x7fff < iVar10) {
        iVar10 = 0x7fff;
      }
      rkukl_w = (word)iVar10;
    }
  }
  else {
    sdwfl_w = 0;
    rkukl_w = 0;
  }
  if (bVar2) {
    rkuk_w = rkuke_w;
  }
  else {
    iVar10 = (int)(short)rkukl_w + (int)(short)rkukk_w;
    if (iVar10 < -0x8000) {
      iVar10 = -0x8000;
    }
    else if (0x7fff < iVar10) {
      iVar10 = 0x7fff;
    }
    rkukkl_w = (word)iVar10;
    rkuk_w = rkukkl_w;
  }
  if (rkuk_w == 0x8000) {
    wVar9 = 0x7fff;
  }
  else {
    wVar9 = rkuk_w;
    if ((short)rkuk_w < 0) {
      wVar9 = -rkuk_w;
    }
  }
  B_ukg = _RKUKKLU < (short)wVar9;
  if (-1 < (short)rkuk_w) {
    _DAT_003fadaa = fbakl_w;
  }
  else {
    _DAT_003fadaa = fvakl_w;
  }
  B_vakl = -1 >= (short)rkuk_w;
  if ((short)_RKAKVTEMX < (short)drkakvt_w) {
    ddrkakvt_w = _RKAKVTEMX;
  }
  else if ((short)drkakvt_w < (short)_RKAKVTEMN) {
    ddrkakvt_w = _RKAKVTEMN;
  }
  else {
    ddrkakvt_w = drkakvt_w;
  }
  drkakvt_w = drkakvt_w - ddrkakvt_w;
  sVar7 = calc_value_from_y_2(&KLAKWVVT,(int)(short)ddrkakvt_w);
  uVar11 = (uint)sVar7;
  uVar8 = uVar11;
  if ((int)uVar11 < 0) {
    uVar8 = uVar11 * 0xffff;
  }
  if ((short)ddrkakvt_w < 0) {
    uVar5 = calc_value_from_x_y_2(&KFAKVVVT,nmot,rl);
    uVar6 = FUN_000a87cc(&KLAKTVVT,tmot);
    sVar7 = calc_value_from_x_y(&KFAKVTD,minhub_w,dpssol_uw);
    iVar10 = FUN_000b1838((uVar5 & 0xff) * (uVar6 & 0xff),sVar7 * (ushort)fvans,uVar8 & 0xffff);
  }
  else {
    uVar5 = calc_value_from_x_y_2(&KFAKBVVT,nmot,rl);
    uVar6 = FUN_000a87cc(&KLAKTVVT,tmot);
    sVar7 = calc_value_from_x_y(&KFAKBTD,minhub_w,dpssol_uw);
    iVar10 = FUN_000b1838((uVar5 & 0xff) * (uVar6 & 0xff),sVar7 * (ushort)fbans,uVar8 & 0xffff);
  }
  iVar10 = iVar10 >> 6;
  if ((int)uVar11 < 0) {
    iVar10 = -iVar10;
  }
  if (iVar10 < 0x8000) {
    if (iVar10 < -0x8000) {
      rkakvvt_w = 0x8000;
    }
    else {
      rkakvvt_w = (word)iVar10;
    }
  }
  else {
    rkakvvt_w = 0x7fff;
  }
  local_30 = (short)((uint)((int)(short)rkuk_w * (int)(short)_DAT_003fadaa) >> 0x10);
  sVar7 = FUN_000a7b80((int)local_30,(int)(short)rkuk_w * (int)(short)_DAT_003fadaa & 0xffff,0x20);
  iVar10 = (int)sVar7 + (int)(short)rkakvvt_w;
  if (iVar10 < 0x8000) {
    if (iVar10 < -0x8000) {
      rkukgvt_w = 0x8000;
    }
    else {
      rkukgvt_w = (word)iVar10;
    }
  }
  else {
    rkukgvt_w = 0x7fff;
  }
  iVar10 = (int)(short)rkukgdk_w - (int)(short)rkukgvt_w;
  if (iVar10 < 0x8000) {
    if (iVar10 < -0x8000) {
      iVar10 = -0x8000;
    }
  }
  else {
    iVar10 = 0x7fff;
  }
  iVar10 = (int)(iVar10 * (uint)dpsfak) / 0xff + (int)(short)rkukgvt_w;
  if (iVar10 < 0x8000) {
    if (iVar10 < -0x8000) {
      rkukg_w = 0x8000;
    }
    else {
      rkukg_w = (word)iVar10;
    }
  }
  else {
    rkukg_w = 0x7fff;
  }
  return;
}

