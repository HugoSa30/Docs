/*
 * Program: n42.bin
 * Function: FUN_000c1560
 * Entry: 000c1560
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c1560(void)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  word wVar5;
  int iVar6;
  short sVar7;
  short local_28;
  
  iVar6 = (int)(short)drlsoldk_w;
  if (iVar6 < 0x801) {
    if (iVar6 < -0x800) {
      iVar6 = -0x800;
    }
  }
  else {
    iVar6 = 0x800;
  }
  if (tseg_l < s_ZZZZ3333_00100000 + 1) {
    iVar6 = iVar6 * tseg_l;
  }
  else {
    iVar6 = iVar6 << 0x14;
  }
  drlsoldk_seg = (word)(iVar6 / 100000);
  iVar6 = (int)(short)drlsoldk_seg;
  if ((((short)(_DRLTOTDK >> 1) < iVar6) || (iVar6 < -(int)(short)(_DRLTOTDK >> 1))) &&
     (B_uk1 != '\0')) {
    iVar6 = (short)drkakdk_w + iVar6;
    if ((short)_RKAKDKGMX < iVar6) {
      drkakdk_w = _RKAKDKGMX;
    }
    else if (iVar6 < (short)_RKAKDKGMN) {
      drkakdk_w = _RKAKDKGMN;
    }
    else {
      drkakdk_w = (word)iVar6;
    }
  }
  if ((B_uk1 == '\0' | B_sa) != 0) {
    drkakdk_w = 0;
  }
  iVar6 = (int)(short)wfdk_w;
  if (B_wf == '\0') {
    wfdk_w = 0;
  }
  else {
    uVar4 = (int)((uint)nmot_w * (uint)FWFNDK) >> 7;
    if (uVar4 < 0x8000) {
      if ((int)uVar4 < -0x8000) {
        uVar4 = 0xffff8000;
      }
    }
    else {
      uVar4 = 0x7fff;
    }
    uVar1 = calc_value_from_x_y(&KFWFRLDK,rlp_w,evhubi_w);
    iVar3 = (int)(short)((ushort)(uVar1 >> 1) & 0x7fff) + (int)(short)uVar4;
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    wfdk_w = (word)iVar3;
  }
  if (B_uk1 == '\0') {
    dwfdk_w = 0;
  }
  else {
    iVar6 = (short)wfdk_w - iVar6;
    if (iVar6 < -0x8000) {
      iVar6 = -0x8000;
    }
    else if (0x7fff < iVar6) {
      iVar6 = 0x7fff;
    }
    dwfdk_w = (word)iVar6;
  }
  iVar6 = (int)(short)dwfdk_w;
  if ((short)drlp_w < 0) {
    B_vaaudk = 1;
    iVar3 = (int)(iVar6 * (uint)avakdk * 0x100) >> 0x10;
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    dwfkdk_w = (word)iVar3;
  }
  else {
    B_vaaudk = 0;
    iVar3 = (int)(iVar6 * (uint)abakdk * 0x100) >> 0x10;
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    dwfkdk_w = (word)iVar3;
  }
  iVar3 = (int)(short)dwfkdk_w;
  iVar6 = iVar6 - iVar3;
  if (iVar6 < -0x8000) {
    iVar6 = -0x8000;
  }
  else if (0x7fff < iVar6) {
    iVar6 = 0x7fff;
  }
  dwfldk_w = (word)iVar6;
  if (B_uk1 == '\0') {
    sdwfkdk_w = 0;
    if (_DUKKDK < 0) {
      B_ukkdk = 1;
      rkukkdk_w = -_DUKKDK;
    }
    else {
      B_ukkdk = 0;
      rkukkdk_w = 0;
    }
  }
  else {
    if (B_redkl == '\0') {
      iVar3 = (short)sdwfkdk_w + iVar3;
      if (iVar3 < -0x8000) {
        iVar3 = -0x8000;
      }
      else if (0x7fff < iVar3) {
        iVar3 = 0x7fff;
      }
      sdwfkdk_w = (word)iVar3;
    }
    else {
      iVar3 = iVar3 - (short)rkukkdk_w;
      if (iVar3 < -0x8000) {
        iVar3 = -0x8000;
      }
      else if (0x7fff < iVar3) {
        iVar3 = 0x7fff;
      }
      iVar6 = (int)(short)sdwfkdk_w + (int)(short)iVar3;
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      sdwfkdk_w = (word)iVar6;
    }
    iVar6 = (int)((int)(short)sdwfkdk_w * (uint)ZUKKDK * 0x100) >> 0x10;
    if (iVar6 < -0x8000) {
      iVar6 = -0x8000;
    }
    else if (0x7fff < iVar6) {
      iVar6 = 0x7fff;
    }
    sVar2 = (short)iVar6;
    if (sVar2 < 0) {
      if (sVar2 == -0x8000) {
        sVar7 = 0x7fff;
      }
      else {
        sVar7 = -sVar2;
      }
      if (_DUKKDK < sVar7) {
        B_ukkdk = 1;
        iVar6 = (int)sVar2 - (int)-_DUKKDK;
        if (iVar6 < -0x8000) {
          iVar6 = -0x8000;
        }
        else if (0x7fff < iVar6) {
          iVar6 = 0x7fff;
        }
        rkukkdk_w = (word)iVar6;
      }
      else {
        B_ukkdk = 0;
        rkukkdk_w = 0;
      }
    }
    else if (_DUKKDK < sVar2) {
      B_ukkdk = 1;
      iVar6 = (int)sVar2 - (int)_DUKKDK;
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      rkukkdk_w = (word)iVar6;
    }
    else {
      B_ukkdk = 0;
      rkukkdk_w = 0;
    }
  }
  if (B_uk1 == '\0') {
    sdwfldk_w = 0;
    rkukldk_w = 0;
  }
  else {
    if (B_redkl == '\0') {
      iVar6 = (int)(short)sdwfldk_w + (int)(short)dwfldk_w;
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      sdwfldk_w = (word)iVar6;
    }
    else {
      iVar6 = (int)(short)dwfldk_w - (int)(short)rkukldk_w;
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      iVar6 = (int)(short)sdwfldk_w + (int)(short)iVar6;
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      sdwfldk_w = (word)iVar6;
    }
    iVar6 = (int)(short)sdwfldk_w;
    if (iVar6 < 0) {
      B_valdk = 1;
      iVar6 = (int)(iVar6 * (uint)zvaledk * 0x20) >> 0x10;
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      rkukldk_w = (word)iVar6;
    }
    else {
      B_valdk = 0;
      iVar6 = (int)(iVar6 * (uint)zbaledk * 0x20) >> 0x10;
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      rkukldk_w = (word)iVar6;
    }
  }
  if (B_uke == '\0') {
    iVar6 = (int)(short)rkukldk_w + (int)(short)rkukkdk_w;
    if (iVar6 < -0x8000) {
      iVar6 = -0x8000;
    }
    else if (0x7fff < iVar6) {
      iVar6 = 0x7fff;
    }
    rkukdk_w = (word)iVar6;
    rkukkld_w = rkukdk_w;
  }
  else {
    rkukdk_w = rkukedk_w;
  }
  if (rkukdk_w == 0x8000) {
    wVar5 = 0x7fff;
  }
  else {
    wVar5 = rkukdk_w;
    if ((short)rkukdk_w < 0) {
      wVar5 = -rkukdk_w;
    }
  }
  B_ukgdk = _RKUKKLUDK < (short)wVar5;
  if (-1 < (short)rkukdk_w) {
    _DAT_003fadc4 = fbakldk_w;
  }
  else {
    _DAT_003fadc4 = fvakldk_w;
  }
  B_vakldk = -1 >= (short)rkukdk_w;
  if ((short)_RKAKDKEMX < (short)drkakdk_w) {
    ddrkakdk_w = _RKAKDKEMX;
  }
  else if ((short)drkakdk_w < (short)_RKAKDKEMN) {
    ddrkakdk_w = _RKAKDKEMN;
  }
  else {
    ddrkakdk_w = drkakdk_w;
  }
  iVar6 = (int)(short)ddrkakdk_w;
  drkakdk_w = drkakdk_w - ddrkakdk_w;
  if (iVar6 < 0) {
    sVar2 = calc_value_from_y_2(&KLAKWDK,iVar6);
    uVar4 = calc_value_from_x_y_2(&KFAKVDK,nmot,rl);
    uVar1 = FUN_000a87cc(&KLAKTDK,tmot);
    iVar6 = ((int)((int)sVar2 * (uVar4 & 0xff) * (uVar1 & 0xff)) >> 0x10) * (uint)fvansdk;
  }
  else {
    sVar2 = calc_value_from_y_2(&KLAKWDK,iVar6);
    uVar4 = calc_value_from_x_y_2(&KFAKBDK,nmot,rl);
    uVar1 = FUN_000a87cc(&KLAKTDK,tmot);
    iVar6 = ((int)((int)sVar2 * (uVar4 & 0xff) * (uVar1 & 0xff)) >> 0x10) * (uint)fbansdk;
  }
  if (iVar6 < 0x8000) {
    if (iVar6 < -0x8000) {
      rkakdk_w = 0x8000;
    }
    else {
      rkakdk_w = (word)iVar6;
    }
  }
  else {
    rkakdk_w = 0x7fff;
  }
  local_28 = (short)((uint)((int)(short)rkukdk_w * (int)(short)_DAT_003fadc4) >> 0x10);
  sVar2 = FUN_000a7b80((int)local_28,(int)(short)rkukdk_w * (int)(short)_DAT_003fadc4 & 0xffff,0x20)
  ;
  iVar6 = (int)sVar2 + (int)(short)rkakdk_w;
  if (iVar6 < 0x8000) {
    if (iVar6 < -0x8000) {
      rkukgdk_w = 0x8000;
    }
    else {
      rkukgdk_w = (word)iVar6;
    }
  }
  else {
    rkukgdk_w = 0x7fff;
  }
  return;
}

