/*
 * Program: n42.bin
 * Function: FUN_000ead00
 * Entry: 000ead00
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_000ead00(void)

{
  bool bVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_68;
  
  if (_LRSTPZA >> 1 < _DAT_003f9c08) {
    dfrza_w = (ushort)lrsza * -0x20;
  }
  else {
    dfrza_w = (ushort)lrsza << 5;
  }
  if (_DAT_003f9c08 < _LRSTPZA) {
    _DAT_003f9c08 = _DAT_003f9c08 + 1;
  }
  else {
    _DAT_003f9c08 = 1;
  }
  iVar4 = (int)(short)FZAB2 * (int)(short)dfrzaf_w;
  if (iVar4 < 0x7fff1) {
    if (iVar4 < -0x80000) {
      dfrzaf2_w = 0x8000;
    }
    else {
      dfrzaf2_w = (word)(iVar4 >> 4);
    }
  }
  else {
    dfrzaf2_w = 0x7fff;
  }
  iVar4 = (int)(short)dfrza_w;
  iVar6 = (short)FZAB2 * iVar4;
  if (iVar6 < 0x7fff1) {
    if (iVar6 < -0x80000) {
      dfrza2_w = 0x8000;
    }
    else {
      dfrza2_w = (word)(iVar6 >> 4);
    }
  }
  else {
    dfrza2_w = 0x7fff;
  }
  if (iVar4 < 1) {
    DAT_003f9bdc = DAT_003f9bdc & 0xfd;
  }
  else {
    DAT_003f9bdc = DAT_003f9bdc | 2;
  }
  B_lrssp = ((DAT_003f9bdc & 4) != 0) != ((DAT_003f9bdc & 2) != 0);
  if ((DAT_003f9bdc & 2) == 0) {
    DAT_003f9bdc = DAT_003f9bdc & 0xfb;
  }
  else {
    DAT_003f9bdc = DAT_003f9bdc | 4;
  }
  uVar2 = FUN_000a7f84((uint)zlrs << 8,iVar4,(int)_DAT_003f9ca4,_DAT_003f9ca4 & 0xffff);
  _DAT_003f9ca4 = (short)((uint)uVar2 >> 0x10);
  iVar4 = (int)_DAT_003f9ca4 * (int)(short)KVZAF;
  if (iVar4 < 0x200000) {
    if (iVar4 < -0x200000) {
      _DAT_003f9c44 = 0x8000;
    }
    else {
      _DAT_003f9c44 = (undefined2)(iVar4 >> 6);
    }
  }
  else {
    _DAT_003f9c44 = 0x7fff;
  }
  _DAT_003f9c40 = tlrs_w;
  _DAT_003f9ca4 = uVar2;
  dfrzaf_w = FUN_000a7e3c(&DAT_003f9c30);
  if ((((CLRS & 0x40) == 0) || (B_lrsresf == '\0')) &&
     (((CLRS & 0x40) != 0 || ((B_lrsresf == '\0' || ((DAT_003f9bdc & 8) != 0)))))) {
    B_flrsres = '\0';
  }
  else {
    B_flrsres = '\x01';
  }
  if (((((B_lrs == '\0') || (B_lrmsbs != '\0')) || ((B_lamka & B_lrka) != 0)) ||
      ((tkatm_w < _TKATSZA || (2 < lamsons_w - 0xfff)))) && ((CLRS & 4) == 0)) {
    B_za = false;
  }
  else {
    B_za = true;
  }
  if ((mlbb_w == 0) || (uVar7 = ((uint)msl << 0x10) / (uint)mlbb_w, 0xffff < uVar7)) {
    uVar7 = 0xffff;
  }
  uVar7 = ((uVar7 & 0xffff) >> 1) + 0x2000;
  if ((uVar7 == 0) || (uVar7 = ((uint)lamsoni_w << 0xd) / uVar7, 0xffff < uVar7)) {
    uVar7 = 0xffff;
  }
  uVar7 = (uVar7 & 0xffff) - (int)((short)dlahi_w >> 3);
  if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  else if (0xffff < (int)uVar7) {
    uVar7 = 0xffff;
  }
  if ((bool)B_za) {
    uVar7 = (uVar7 & 0xffff) - (int)((short)dfrzaf_w >> 3);
    if ((int)uVar7 < 0) {
      uVar7 = 0;
    }
    else if (0xffff < (int)uVar7) {
      uVar7 = 0xffff;
    }
  }
  lamzak_w = (word)uVar7;
  if (((uint)lamsons_w <= (uint)_LALIUSMN) && ((uVar7 & 0xffff) < (uint)_LALIUSMN)) {
    lamzak_w = _LALIUSMN;
  }
  _DAT_003f9c58 = tlrs_w;
  _DAT_003f9c5c = lamsbg_w;
  uVar7 = FUN_000a7e3c(&DAT_003f9c48);
  iVar4 = (int)(short)((int)(char)dlaso << 3) + (int)(short)dlahp_w;
  if (iVar4 < -0x8000) {
    iVar4 = -0x8000;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  uVar7 = (uVar7 & 0xffff) + (int)(short)((short)iVar4 >> 3);
  if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  else if (0xffff < (int)uVar7) {
    uVar7 = 0xffff;
  }
  lamsbgt_w = (word)uVar7;
  if ((lamsons_w <= _LALIUSMN) && ((uVar7 & 0xffff) < (uint)_LALIUSMN)) {
    lamsbgt_w = _LALIUSMN;
  }
  iVar4 = (uint)lamzak_w - (uint)lamsbgt_w;
  if (iVar4 < -0x8000) {
    iVar4 = -0x8000;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  sVar3 = FUN_000b1710((int)(short)iVar4 << 0xf,(uint)lamsbgt_w);
  if (B_lrs == '\0') {
    _DAT_003f9c0a = 0;
  }
  else if (_DAT_003f9c0a != 0xffff) {
    _DAT_003f9c0a = FUN_000a7fe8(0x1999,0xff,_DAT_003f9c0a);
  }
  ladiff_w = (word)((int)sVar3 * (uint)_DAT_003f9c0a >> 0x10);
  if ((B_lrmsbs == '\0') || (B_lrs == '\0')) {
    dfrmin_w = (word)((int)FDFRMIN << 8);
  }
  else {
    dfrmin_w = dfr_w;
  }
  if ((B_sls == '\0') || (B_kh == '\0')) {
    frmn_w = calc_value_from_x_y(&KFFRMIN,tmot,tnst_w);
  }
  else {
    frmn_w = _FRMINKH;
  }
  _DAT_003f9c0c = frmn_w + 0x8000;
  if (((B_lrs == '\0') || (B_lrsrems != '\0')) || (B_flrsres != '\0')) {
    dfr_w = 0;
    lrsy2_w = 0;
    _DAT_003f9ca0 = 0;
    lrsy4_w = 0;
    lrsw1_w = 0;
    lrsw2_w = 0;
    lrsxk1_w = 0;
    _DAT_003f9c94 = 0;
    lrsxk3_w = 0;
    _DAT_003f9c98 = 0;
    lrsxk4_w = 0;
    _DAT_003f9c9c = 0;
    B_y2max = '\0';
    B_y2min = '\0';
    B_update = '\x01';
  }
  else {
    if (B_frini != '\0') {
      lrsxk1_w = frini_w + 0x8000;
      _DAT_003f9c94 = (uint)lrsxk1_w << 0x10;
    }
    iVar5 = (uint)lrsg2_w * (int)(short)ladiff_w;
    iVar4 = 0x1ffffff;
    iVar6 = iVar4;
    if ((iVar5 < 0x2000000) && (iVar6 = iVar5, iVar5 < -0x2000000)) {
      iVar6 = -0x2000000;
    }
    iVar6 = FUN_000b144c(_DAT_003f9c94,(short)(iVar6 >> 10) * 0x148);
    _DAT_003f9ca0 = (word)((uint)iVar6 >> 0x10);
    lrsy2_w = _DAT_003f9ca0;
    if ((short)_Y2MAX < (short)_DAT_003f9ca0) {
      _DAT_003f9ca0 = (uint)_Y2MAX << 0x10;
      lrsy2_w = _Y2MAX;
      B_y2max = '\x01';
      B_y2min = '\0';
    }
    else {
      B_y2max = '\0';
      if ((short)_DAT_003f9ca0 < (short)_DAT_003f9c0c) {
        _DAT_003f9ca0 = (uint)_DAT_003f9c0c << 0x10;
        lrsy2_w = _DAT_003f9c0c;
        B_y2min = '\x01';
      }
      else {
        B_y2min = '\0';
        _DAT_003f9ca0 = iVar6;
      }
    }
    if (B_nswo1 == '\0') {
      iVar6 = (int)(short)ladiff_w - (int)(short)lrsxk3_w;
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      iVar5 = FUN_000b144c((uint)lrsp1_w * (int)(short)iVar6,(uint)lrsp2_w * (int)(short)lrsxk4_w);
      if ((int)(short)_WIMAX << 0xb < iVar5) {
        lrsw1_w = _WIMAX;
      }
      else if (iVar5 < (int)(short)_WIMIN << 0xb) {
        lrsw1_w = _WIMIN;
      }
      else {
        lrsw1_w = (word)(iVar5 >> 0xb);
      }
      iVar6 = FUN_000b144c((uint)lrsp3_w * (int)(short)iVar6,(uint)lrsp1_w * (int)(short)lrsxk4_w);
      if ((int)(short)_WIMAX << 0xb < iVar6) {
        lrsw2_w = _WIMAX;
      }
      else if (iVar6 < (int)(short)_WIMIN << 0xb) {
        lrsw2_w = _WIMIN;
      }
      else {
        lrsw2_w = (word)(iVar6 >> 0xb);
      }
      iVar6 = (int)(short)lrsw2_w - (int)(short)lrsw1_w;
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      iVar5 = (int)(short)lrsp4_w * (int)(short)iVar6;
      iVar6 = iVar4;
      if ((iVar5 < 0x2000000) && (iVar6 = iVar5, iVar5 < -0x2000000)) {
        iVar6 = -0x2000000;
      }
      iVar6 = (int)(short)((int)(short)lrsw1_w >> 1) + (int)(short)(iVar6 >> 10);
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      lrsy4_w = (word)iVar6;
      iVar5 = FUN_000b144c((int)(short)lrsg1_w * (int)(short)ladiff_w,
                           (int)(short)lrsg4_w * (int)(short)lrsy4_w >> 1);
      iVar6 = iVar4;
      if ((iVar5 < 0x2000000) && (iVar6 = iVar5, iVar5 < -0x2000000)) {
        iVar6 = -0x2000000;
      }
      iVar6 = (int)(short)(iVar6 >> 10) + (int)(short)lrsy2_w;
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      dfrpr_w = (word)iVar6;
    }
    else {
      iVar5 = (int)(short)lrsg1_w * (int)(short)ladiff_w;
      iVar6 = iVar4;
      if ((iVar5 < 0x2000000) && (iVar6 = iVar5, iVar5 < -0x2000000)) {
        iVar6 = -0x2000000;
      }
      iVar6 = (int)(short)(iVar6 >> 10) + (int)(short)lrsy2_w;
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      dfrpr_w = (word)iVar6;
      _DAT_003f9c98 = 0;
      lrsxk3_w = 0;
      _DAT_003f9c9c = 0;
      lrsxk4_w = 0;
    }
    if ((B_lrmsbs == '\0') || ((short)dfrmin_w <= (short)dfrpr_w)) {
      dfr_w = dfrpr_w;
      B_update = '\x01';
    }
    else {
      dfr_w = dfrmin_w;
      B_update = '\0';
    }
    if (B_update != '\0') {
      iVar6 = (uint)lrsg2_w * (int)(short)ladiff_w;
      if ((iVar6 < 0x2000000) && (iVar4 = iVar6, iVar6 < -0x2000000)) {
        iVar4 = -0x2000000;
      }
      iVar4 = (int)(short)(iVar4 >> 10);
      if (B_y2max == '\0') {
        if (B_y2min == '\0') {
          _DAT_003f9c94 = FUN_000b144c(_DAT_003f9c94,iVar4 * 0x28f);
        }
        else {
          _DAT_003f9c94 = FUN_000b1538((int)(short)_DAT_003f9c0c << 0x10,iVar4 * 0x148);
        }
      }
      else {
        local_68._0_2_ = (short)((uint)(iVar4 * 0x148) >> 0x10);
        _DAT_003f9c94 =
             FUN_000a7ac0((int)(short)_Y2MAX,0,(int)local_68._0_2_,iVar4 * 0x148 & 0xffff);
      }
      lrsxk1_w = _DAT_003f9c94;
      if (B_nswo1 == '\0') {
        iVar4 = (short)lrsw1_w * 0x28f;
        if (iVar4 < 0x20000000) {
          if (iVar4 < -0x20000000) {
            local_68 = -0x80000000;
          }
          else {
            local_68 = (short)lrsw1_w * 0xa3c;
          }
        }
        else {
          local_68 = 0x7fffffff;
        }
        iVar4 = FUN_000b144c(_DAT_003f9c98,local_68);
        _DAT_003f9c98 = (word)((uint)iVar4 >> 0x10);
        if ((short)_XIMAX < (short)_DAT_003f9c98) {
          _DAT_003f9c98 = (uint)_XIMAX << 0x10;
        }
        else {
          bVar1 = (short)_DAT_003f9c98 < (short)_XIMIN;
          _DAT_003f9c98 = iVar4;
          if (bVar1) {
            _DAT_003f9c98 = (uint)_XIMIN << 0x10;
          }
        }
        lrsxk3_w = _DAT_003f9c98;
        iVar4 = (int)(short)lrsw1_w - (int)(short)lrsw2_w;
        if (iVar4 < -0x8000) {
          iVar4 = -0x8000;
        }
        else if (0x7fff < iVar4) {
          iVar4 = 0x7fff;
        }
        iVar6 = (short)iVar4 * 0x28f;
        if (iVar6 < 0x20000000) {
          if (iVar6 < -0x20000000) {
            local_68 = -0x80000000;
          }
          else {
            local_68 = (short)iVar4 * 0xa3c;
          }
        }
        else {
          local_68 = 0x7fffffff;
        }
        iVar4 = FUN_000b144c(_DAT_003f9c9c,local_68);
        _DAT_003f9c9c = (word)((uint)iVar4 >> 0x10);
        if ((short)_XIMAX < (short)_DAT_003f9c9c) {
          _DAT_003f9c9c = (uint)_XIMAX << 0x10;
        }
        else {
          bVar1 = (short)_DAT_003f9c9c < (short)_XIMIN;
          _DAT_003f9c9c = iVar4;
          if (bVar1) {
            _DAT_003f9c9c = (uint)_XIMIN << 0x10;
          }
        }
        lrsxk4_w = _DAT_003f9c9c;
      }
    }
  }
  if (B_lrs == '\0') {
    if (B_frini == '\0') {
      froza_w = 0x8000;
    }
    else {
      froza_w = frini_w;
    }
  }
  else {
    iVar4 = (short)dfr_w + 0x8000;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0xffff < iVar4) {
      iVar4 = 0xffff;
    }
    froza_w = (word)iVar4;
  }
  if (_FRMAX < froza_w) {
    frm_w = _FRMAX;
    B_frmax = 1;
    B_frmin = 0;
  }
  else {
    B_frmax = 0;
    if (froza_w < frmn_w) {
      frm_w = frmn_w;
      B_frmin = 1;
    }
    else {
      frm_w = froza_w;
      B_frmin = 0;
    }
  }
  if (B_za == '\0') {
    fr_w = frm_w;
  }
  else {
    iVar4 = (uint)frm_w + (int)(short)dfrza_w;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0xffff < iVar4) {
      iVar4 = 0xffff;
    }
    fr_w = (word)iVar4;
  }
  if (((((B_lrs2 == '\0') || (B_lrmsbs2 != '\0')) || ((B_lamka & B_lrka2) != 0)) ||
      ((tkatm2_w < _DAT_001cb568 || (2 < lamsons2_w - 0xfff)))) && ((CLRS & 4) == 0)) {
    B_za2 = false;
  }
  else {
    B_za2 = true;
  }
  if (_FRMAX < froza2_w) {
    frm2_w = _FRMAX;
    B_frmax2 = 1;
    B_frmin2 = 0;
  }
  else {
    B_frmax2 = 0;
    if (froza2_w < frmn_w) {
      frm2_w = frmn_w;
      B_frmin2 = 1;
    }
    else {
      frm2_w = froza2_w;
      B_frmin2 = 0;
    }
  }
  if ((bool)B_za2) {
    iVar4 = (uint)frm2_w + (int)(short)dfrza2_w;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0xffff < iVar4) {
      iVar4 = 0xffff;
    }
    fr2_w = (word)iVar4;
  }
  else {
    fr2_w = frm2_w;
  }
  if ((mlbb2_w == 0) || (uVar7 = ((uint)msl2 << 0x10) / (uint)mlbb2_w, 0xffff < uVar7)) {
    uVar7 = 0xffff;
  }
  uVar7 = ((uVar7 & 0xffff) >> 1) + 0x2000;
  if ((uVar7 == 0) || (uVar7 = ((uint)lamsoni2_w << 0xd) / uVar7, 0xffff < uVar7)) {
    uVar7 = 0xffff;
  }
  uVar7 = (uVar7 & 0xffff) - (int)((short)dlahi2_w >> 3);
  if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  else if (0xffff < (int)uVar7) {
    uVar7 = 0xffff;
  }
  if ((bool)B_za2) {
    uVar7 = (uVar7 & 0xffff) - (int)((short)dfrzaf2_w >> 3);
    if ((int)uVar7 < 0) {
      uVar7 = 0;
    }
    else if (0xffff < (int)uVar7) {
      uVar7 = 0xffff;
    }
  }
  lamzak2_w = (word)uVar7;
  if (((uint)lamsons2_w <= (uint)_LALIUSMN) && ((uVar7 & 0xffff) < (uint)_LALIUSMN)) {
    lamzak2_w = _LALIUSMN;
  }
  _DAT_003f9c80 = tlrs_w;
  _DAT_003f9c84 = lamsbg2_w;
  uVar7 = FUN_000a7e3c(&DAT_003f9c70);
  iVar4 = (int)(short)((int)(char)dlaso2 << 3) + (int)(short)dlahp2_w;
  if (iVar4 < -0x8000) {
    iVar4 = -0x8000;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  uVar7 = (uVar7 & 0xffff) + (int)(short)((short)iVar4 >> 3);
  if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  else if (0xffff < (int)uVar7) {
    uVar7 = 0xffff;
  }
  lamsbgt2_w = (word)uVar7;
  if ((lamsons2_w <= _LALIUSMN) && ((uVar7 & 0xffff) < (uint)_LALIUSMN)) {
    lamsbgt2_w = _LALIUSMN;
  }
  iVar4 = (uint)lamzak2_w - (uint)lamsbgt2_w;
  if (iVar4 < -0x8000) {
    iVar4 = -0x8000;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  sVar3 = FUN_000b1710((int)(short)iVar4 << 0xf,(uint)lamsbgt2_w);
  if (B_lrs2 == '\0') {
    _DAT_003f9c60 = 0;
  }
  else if (_DAT_003f9c60 != 0xffff) {
    _DAT_003f9c60 = FUN_000a7fe8(0x1999,0xff,_DAT_003f9c60);
  }
  ladiff2_w = (word)((int)sVar3 * (uint)_DAT_003f9c60 >> 0x10);
  if ((B_lrmsbs2 == '\0') || (B_lrs2 == '\0')) {
    dfrmin2_w = (word)((int)FDFRMIN << 8);
  }
  else {
    dfrmin2_w = dfr2_w;
  }
  if (((B_lrs2 == '\0') || (B_lrsrems2 != '\0')) || (B_flrsres != '\0')) {
    dfr2_w = 0;
    lrsy22_w = 0;
    _DAT_003f9cb4 = 0;
    lrsy42_w = 0;
    lrsw12_w = 0;
    lrsw22_w = 0;
    lrsxk12_w = 0;
    _DAT_003f9ca8 = 0;
    lrsxk32_w = 0;
    _DAT_003f9cac = 0;
    lrsxk42_w = 0;
    _DAT_003f9cb0 = 0;
    B_y2max2 = '\0';
    B_y2min2 = '\0';
    B_update2 = '\x01';
  }
  else {
    if (B_frini2 != '\0') {
      lrsxk12_w = frini2_w + 0x8000;
      _DAT_003f9ca8 = (uint)lrsxk12_w << 0x10;
    }
    iVar5 = (uint)lrsg2_w * (int)(short)ladiff2_w;
    iVar6 = 0x1ffffff;
    iVar4 = iVar6;
    if ((iVar5 < 0x2000000) && (iVar4 = iVar5, iVar5 < -0x2000000)) {
      iVar4 = -0x2000000;
    }
    iVar4 = FUN_000b144c(_DAT_003f9ca8,(short)(iVar4 >> 10) * 0x148);
    _DAT_003f9cb4 = (word)((uint)iVar4 >> 0x10);
    lrsy22_w = _DAT_003f9cb4;
    if ((short)_Y2MAX < (short)_DAT_003f9cb4) {
      _DAT_003f9cb4 = (uint)_Y2MAX << 0x10;
      lrsy22_w = _Y2MAX;
      B_y2max2 = '\x01';
      B_y2min2 = '\0';
    }
    else {
      B_y2max2 = '\0';
      if ((short)_DAT_003f9cb4 < (short)_DAT_003f9c0c) {
        _DAT_003f9cb4 = (uint)_DAT_003f9c0c << 0x10;
        lrsy22_w = _DAT_003f9c0c;
        B_y2min2 = '\x01';
      }
      else {
        B_y2min2 = '\0';
        _DAT_003f9cb4 = iVar4;
      }
    }
    if (B_nswo1 == '\0') {
      iVar4 = (int)(short)ladiff2_w - (int)(short)lrsxk32_w;
      if (iVar4 < -0x8000) {
        iVar4 = -0x8000;
      }
      else if (0x7fff < iVar4) {
        iVar4 = 0x7fff;
      }
      iVar5 = FUN_000b144c((uint)lrsp1_w * (int)(short)iVar4,(uint)lrsp2_w * (int)(short)lrsxk42_w);
      if ((int)(short)_WIMAX << 0xb < iVar5) {
        lrsw12_w = _WIMAX;
      }
      else if (iVar5 < (int)(short)_WIMIN << 0xb) {
        lrsw12_w = _WIMIN;
      }
      else {
        lrsw12_w = (word)(iVar5 >> 0xb);
      }
      iVar4 = FUN_000b144c((uint)lrsp3_w * (int)(short)iVar4,(uint)lrsp1_w * (int)(short)lrsxk42_w);
      if ((int)(short)_WIMAX << 0xb < iVar4) {
        lrsw22_w = _WIMAX;
      }
      else if (iVar4 < (int)(short)_WIMIN << 0xb) {
        lrsw22_w = _WIMIN;
      }
      else {
        lrsw22_w = (word)(iVar4 >> 0xb);
      }
      iVar4 = (int)(short)lrsw22_w - (int)(short)lrsw12_w;
      if (iVar4 < -0x8000) {
        iVar4 = -0x8000;
      }
      else if (0x7fff < iVar4) {
        iVar4 = 0x7fff;
      }
      iVar5 = (int)(short)lrsp4_w * (int)(short)iVar4;
      iVar4 = iVar6;
      if ((iVar5 < 0x2000000) && (iVar4 = iVar5, iVar5 < -0x2000000)) {
        iVar4 = -0x2000000;
      }
      iVar4 = (int)(short)((int)(short)lrsw12_w >> 1) + (int)(short)(iVar4 >> 10);
      if (iVar4 < -0x8000) {
        iVar4 = -0x8000;
      }
      else if (0x7fff < iVar4) {
        iVar4 = 0x7fff;
      }
      lrsy42_w = (word)iVar4;
      iVar5 = FUN_000b144c((int)(short)lrsg1_w * (int)(short)ladiff2_w,
                           (int)(short)lrsg4_w * (int)(short)lrsy42_w >> 1);
      iVar4 = iVar6;
      if ((iVar5 < 0x2000000) && (iVar4 = iVar5, iVar5 < -0x2000000)) {
        iVar4 = -0x2000000;
      }
      iVar4 = (int)(short)(iVar4 >> 10) + (int)(short)lrsy22_w;
      if (iVar4 < -0x8000) {
        iVar4 = -0x8000;
      }
      else if (0x7fff < iVar4) {
        iVar4 = 0x7fff;
      }
      dfrpr2_w = (word)iVar4;
    }
    else {
      iVar5 = (int)(short)lrsg1_w * (int)(short)ladiff2_w;
      iVar4 = iVar6;
      if ((iVar5 < 0x2000000) && (iVar4 = iVar5, iVar5 < -0x2000000)) {
        iVar4 = -0x2000000;
      }
      iVar4 = (int)(short)(iVar4 >> 10) + (int)(short)lrsy22_w;
      if (iVar4 < -0x8000) {
        iVar4 = -0x8000;
      }
      else if (0x7fff < iVar4) {
        iVar4 = 0x7fff;
      }
      dfrpr2_w = (word)iVar4;
      _DAT_003f9cac = 0;
      lrsxk32_w = 0;
      _DAT_003f9cb0 = 0;
      lrsxk42_w = 0;
    }
    if ((B_lrmsbs2 == '\0') || ((short)dfrmin2_w <= (short)dfrpr2_w)) {
      dfr2_w = dfrpr2_w;
      B_update2 = '\x01';
    }
    else {
      dfr2_w = dfrmin2_w;
      B_update2 = '\0';
    }
    if (B_update2 != '\0') {
      iVar4 = (uint)lrsg2_w * (int)(short)ladiff2_w;
      if ((iVar4 < 0x2000000) && (iVar6 = iVar4, iVar4 < -0x2000000)) {
        iVar6 = -0x2000000;
      }
      iVar4 = (int)(short)(iVar6 >> 10);
      if (B_y2max2 == '\0') {
        if (B_y2min2 == '\0') {
          _DAT_003f9ca8 = FUN_000b144c(_DAT_003f9ca8,iVar4 * 0x28f);
        }
        else {
          _DAT_003f9ca8 = FUN_000b1538((int)(short)_DAT_003f9c0c << 0x10,iVar4 * 0x148);
        }
      }
      else {
        local_68._0_2_ = (short)((uint)(iVar4 * 0x148) >> 0x10);
        _DAT_003f9ca8 =
             FUN_000a7ac0((int)(short)_Y2MAX,0,(int)local_68._0_2_,iVar4 * 0x148 & 0xffff);
      }
      lrsxk12_w = _DAT_003f9ca8;
      if (B_nswo1 == '\0') {
        iVar4 = (short)lrsw12_w * 0x28f;
        if (iVar4 < 0x20000000) {
          if (iVar4 < -0x20000000) {
            local_68 = -0x80000000;
          }
          else {
            local_68 = (short)lrsw12_w * 0xa3c;
          }
        }
        else {
          local_68 = 0x7fffffff;
        }
        iVar4 = FUN_000b144c(_DAT_003f9cac,local_68);
        _DAT_003f9cac = (word)((uint)iVar4 >> 0x10);
        if ((short)_XIMAX < (short)_DAT_003f9cac) {
          _DAT_003f9cac = (uint)_XIMAX << 0x10;
        }
        else {
          bVar1 = (short)_DAT_003f9cac < (short)_XIMIN;
          _DAT_003f9cac = iVar4;
          if (bVar1) {
            _DAT_003f9cac = (uint)_XIMIN << 0x10;
          }
        }
        lrsxk32_w = _DAT_003f9cac;
        iVar4 = (int)(short)lrsw12_w - (int)(short)lrsw22_w;
        if (iVar4 < -0x8000) {
          iVar4 = -0x8000;
        }
        else if (0x7fff < iVar4) {
          iVar4 = 0x7fff;
        }
        iVar6 = (short)iVar4 * 0x28f;
        if (iVar6 < 0x20000000) {
          if (iVar6 < -0x20000000) {
            local_68 = -0x80000000;
          }
          else {
            local_68 = (short)iVar4 * 0xa3c;
          }
        }
        else {
          local_68 = 0x7fffffff;
        }
        iVar4 = FUN_000b144c(_DAT_003f9cb0,local_68);
        _DAT_003f9cb0 = (word)((uint)iVar4 >> 0x10);
        if ((short)_XIMAX < (short)_DAT_003f9cb0) {
          _DAT_003f9cb0 = (uint)_XIMAX << 0x10;
        }
        else {
          bVar1 = (short)_DAT_003f9cb0 < (short)_XIMIN;
          _DAT_003f9cb0 = iVar4;
          if (bVar1) {
            _DAT_003f9cb0 = (uint)_XIMIN << 0x10;
          }
        }
        lrsxk42_w = _DAT_003f9cb0;
      }
    }
  }
  if (B_lrs2 == '\0') {
    if (B_frini2 == '\0') {
      froza2_w = 0x8000;
    }
    else {
      froza2_w = frini2_w;
    }
  }
  else {
    iVar4 = (short)dfr2_w + 0x8000;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0xffff < iVar4) {
      iVar4 = 0xffff;
    }
    froza2_w = (word)iVar4;
  }
  if (B_lrsresf == '\0') {
    DAT_003f9bdc = DAT_003f9bdc & 0xf7;
  }
  else {
    DAT_003f9bdc = DAT_003f9bdc | 8;
  }
  return;
}

