/*
 * Program: n42.bin
 * Function: BGMSZS_2
 * Entry: 000d5864
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000d66fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BGMSZS_2(void)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_50;
  byte E_dssi;
  
  if (((((((E_pddss & 1) == 0) && ((B_clddss & 1) == 0)) &&
        ((B_vvtnotl == 0 || ((CW_DPSMSZS & 1) == 0)))) && ((B_rlh == 0 || ((CW_DPSMSZS & 2) == 0))))
      && ((B_gd == '\0' || ((CW_DPSMSZS & 4) == 0)))) && ((CW_DPSMSZS & 8) == 0)) {
    mszsst = mszsst & 0xfe;
  }
  else {
    mszsst = mszsst & 0xfe | 1;
  }
  uVar8 = (uint)pvdkds_w;
  if ((mszsst & 1) == 0) {
    dpsbgms_w = dps_w;
  }
  else {
    iVar7 = (int)((uVar8 - _ps_w) * (uint)_fkmsdk_w) >> 0xe;
    if (iVar7 < -0x7fff) {
      dpsbgms_w = 0x8001;
    }
    else if (iVar7 < 0x8001) {
      dpsbgms_w = (word)iVar7;
    }
    else {
      dpsbgms_w = 0x8000;
    }
  }
  if ((int)(uVar8 - (int)(short)dpsbgms_w) < 0) {
    dpsvbgms_w = 0;
  }
  else {
    iVar7 = (int)((uVar8 - (int)(short)dpsbgms_w) * 0x8000) / (int)uVar8;
    if (iVar7 < 0x10000) {
      dpsvbgms_w = (word)iVar7;
    }
    else {
      dpsvbgms_w = 0xffff;
    }
  }
  if (B_lltd == 0) {
    zkmsdk_w = calc_value_from_y(&ZKMSDK,dpsvbgms_w);
  }
  else {
    zkmsdk_w = calc_value_from_y(&ZKMSDKTD,dpsvbgms_w);
  }
  uVar8 = ((uint)evhubi_w << 0xf) / (uint)fhubvnsi_w;
  if (uVar8 < 0x10000) {
    evhubin_w = (word)uVar8;
  }
  else {
    evhubin_w = 0xffff;
  }
  uVar8 = ((uint)evhubi2_w << 0xf) / (uint)fhubvnsi_w;
  if (uVar8 < 0x10000) {
    evhubin2_w = (word)uVar8;
  }
  else {
    evhubin2_w = 0xffff;
  }
  if ((B_stend != '\0') || (S_MSDKIST != '\0')) {
    if (B_vl == 0) {
      if (B_llk == 0) {
        rlvwvvti = calc_value_from_x_y(&KFEHUBIV,nmot_w,evhubin_w);
        uVar8 = (((uint)rlvwvvti * (uint)umsrln_w >> 2) * 3) / 0x640;
LAB_000d5c44:
        if (0xffff < uVar8) {
          uVar8 = 0xffff;
        }
      }
      else {
        uVar8 = calc_value_from_x_y(&KFEHUBLLIV,evhubin_w,nmot_w);
        uVar9 = calc_value_from_x_y(&KFEHUBLLKI,evhubin_w,nmot_w);
        uVar8 = ((int)(((uVar9 & 0xffff) - (uVar8 & 0xffff)) * (uint)fhubwll_au) >> 8) +
                (uVar8 & 0xffff);
        if ((int)uVar8 < 0) {
          uVar8 = 0;
        }
        else {
          if ((int)uVar8 < 0x10000) goto LAB_000d5c44;
          uVar8 = 0xffff;
        }
      }
      mlsolkori = (word)uVar8;
      if (fpups_w == 0) {
        iVar7 = -1;
      }
      else {
        iVar7 = (int)((_msnvvto_w * 4 + (uVar8 * _fkmsvvt_w >> 0xe)) * 0x2000) / (int)(uint)fpups_w;
      }
      if ((uint)fho * (uint)ftvdk == 0) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = ((uint)mste << 0xf) / ((uint)fho * (uint)ftvdk);
      }
      iVar7 = iVar7 - uVar8;
      if (iVar7 < 0x8000) {
        if (iVar7 < -0x7fff) {
          mskorb_w = 0x8001;
        }
        else {
          mskorb_w = (word)iVar7;
        }
      }
      else {
        mskorb_w = 0x7fff;
      }
      if (pspvdkugn_w < dpsvbgms_w) {
        dpipolmszs = pspvdkugn_w;
      }
      else {
        dpipolmszs = dpsvbgms_w;
      }
      dpipol_aus = calc_value_from_y(&KLDPIPOL,dpipolmszs);
      wdkbab_w = wdkugd_w >> 4;
      if ((int)(short)_wdkba_w <= (int)(uint)wdkbab_w) {
        wdkbab_w = _wdkba_w;
      }
      uVar9 = FUN_000aa9c0(_KFDKMS,&DAT_001cf598,_KFDKMS_axis_x,0x1cf5c2,&KFDKMS_start,
                           (int)(short)wdkbab_w,dpipol_aus);
      uVar8 = (uint)dpipolmszs * 1000 >> 0xf;
      dpipol_in = (word)uVar8;
      if (uVar8 < 0x1f5) {
        uVar8 = (uint)_KLAF;
      }
      else if ((int)(uVar8 - 500) < 0x1f5) {
        uVar8 = (uint)*(ushort *)(&DAT_001c4012 + uVar8 * 2);
      }
      else {
        uVar8 = (uint)_DAT_001c47e2;
      }
      iVar5 = (int)_msndko_w;
      uVar3 = FUN_000aa9c0(_KFMSNWDK,&DAT_001cf726,_KFMSNWDK_axis_x,&KFMSNWDK_axis_y,0x1cf752,
                           (int)(short)wdkbab_w,nmot_w);
      local_50 = (uVar3 & 0xffff) + (uint)_MSNLG + (int)_msndko_w;
      if (0xffff < local_50) {
        local_50 = 0xffff;
      }
      iVar6 = (int)(local_50 * uVar8) >> 0x10;
      iVar5 = (((int)(iVar5 * uVar8) >> 0x10) + (uVar9 & 0xffff)) - iVar6;
      if (iVar5 < 0x10000) {
        if (iVar5 < -0xffff) {
          iVar5 = -0xffff;
        }
      }
      else {
        iVar5 = 0xffff;
      }
      uVar8 = calc_value_from_y(&KLDPSDKM,dpipolmszs);
      iVar6 = ((int)(iVar5 * (uVar8 & 0xffff)) >> 0xf) + iVar6;
      if (iVar6 < 0x10000) {
        if (iVar6 < -0xffff) {
          iVar6 = -0xffff;
        }
      }
      else {
        iVar6 = 0xffff;
      }
      iVar5 = (int)(iVar6 * (uint)_fkmsdk_w) >> 0xe;
      if (iVar5 < 0x10000) {
        if (iVar5 < 0) {
          dkmsmszs = 0;
        }
        else {
          dkmsmszs = (word)iVar5;
        }
      }
      else {
        dkmsmszs = 0xffff;
      }
      if ((uint)fho * (uint)ftvdk == 0) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = ((uint)mssp_w << 5) / ((uint)fho * (uint)ftvdk);
      }
      msspkorr_w = (word)uVar8;
      if (B_lltd != 0) {
        iVar7 = (uint)dkmsmszs << 2;
      }
      iVar7 = ((int)(((uVar8 + dkmsmszs) * 4 - iVar7) * (uint)dpsfak) >> 8) + iVar7 >> 2;
      if (iVar7 < 0) {
        msndk_w = 0;
      }
      else if (iVar7 < 0x10000) {
        msndk_w = (word)iVar7;
      }
      else {
        msndk_w = 0xffff;
      }
    }
    else {
      uVar8 = ((uint)rlvugd * (uint)umsrln_w * 0x1e) / 8000;
      if (uVar8 < 0x10000) {
        msndk_w = (word)uVar8;
      }
      else {
        msndk_w = 0xffff;
      }
    }
    uVar8 = (int)((uint)msndk_w * (uint)ftvdk * (uint)fho) >> 0xd;
    if (uVar8 < 0x10000) {
      msdk_w = (word)uVar8;
    }
    else {
      msdk_w = 0xffff;
    }
  }
  fpvdk_w = FUN_000b181c(_fkmsdk_w,fpvdkds_w);
  fpvdk = (byte)(fpvdk_w >> 8);
  pvdk_w = FUN_000b181c(pvdkds_w,_fkmsdk_w);
  pvdk = (byte)(pvdk_w >> 8);
  E_dssi = DAT_003fab9d >> 2 & 1;
  if (((B_dssv == 0) || (B_hfmv != 0)) || (E_dssi == 0)) {
    if ((DAT_003fab9d & 1) == 0) {
      if (B_hfmv != 0) goto LAB_000d6124;
LAB_000d6148:
      mss_w = _ml_w;
    }
    else {
      if (B_hfmv == 0) goto LAB_000d6148;
      mss_w = _mshfm_w;
    }
    iVar7 = (uint)mss_w - (uint)msdk_w;
    if (iVar7 < -0x8000) {
      iVar7 = -0x8000;
    }
    else if (0x7fff < iVar7) {
      iVar7 = 0x7fff;
    }
    msdif_w = (word)iVar7;
    bVar2 = false;
  }
  else {
LAB_000d6124:
    bVar2 = true;
    msdif_w = 0;
  }
  if (((E_dssi == 0) && ((B_sidk & 1) == 0)) && ((B_silm & 1) == 0)) {
    B_bgmszsi = 0;
  }
  else {
    B_bgmszsi = 1;
  }
  if (B_bgmszsi == 0) {
    if (B_llk == 0) {
      if (DAT_003fabb0 == '\0') goto LAB_000d6254;
    }
    else if (DAT_003fabb0 != '\0') goto LAB_000d6254;
  }
  _fkmsvvts_w = (ushort)FKPVDKE << 8;
  _DAT_003fdc08 = (uint)FKPVDKE << 0x10;
LAB_000d6254:
  if (B_bgmszsi == 0) {
    if ((((B_sidk & 1) != 0) || ((B_silm & 1) != 0)) ||
       ((_ml_w <= _KLZKBGMSDK || ((B_nmot == '\0' || (bVar2)))))) {
      B_bgmszs = 0;
    }
    else {
      B_bgmszs = 1;
      if ((BGMSDKDPS < dpsfak) || (B_lltd != 0)) {
        B_bgmsdk = 1;
        if (DAT_003fabb2 == '\0') {
          _DAT_003faba6 = _TIMSAON;
        }
        DAT_003fabb2 = '\x01';
        B_timsvvt = 0;
        if (_DAT_003faba6 == 0) {
          _DAT_003faba4 = _TIMSAON;
          _DAT_003fdc04 = _DAT_003fdc04 + (int)(short)msdif_w * (uint)zkmsdk_w;
          iVar7 = _DAT_003fdc04 >> 8;
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          if ((int)((uint)FKMSDKMX << 8) < iVar7) {
            _fkmsdks_w = (ushort)FKMSDKMX << 8;
            _DAT_003fdc04 = (uint)FKMSDKMX << 0x10;
          }
          else if (iVar7 < (int)((uint)FKMSDKMN << 8)) {
            _fkmsdks_w = (ushort)FKMSDKMN << 8;
            _DAT_003fdc04 = (uint)FKMSDKMN << 0x10;
          }
          else {
            _fkmsdks_w = (ushort)iVar7;
          }
        }
        else {
          _DAT_003faba6 = _DAT_003faba6 + -1;
        }
      }
      else if (dpsfak < BGMSVVTDPS) {
        B_bgmsdk = 0;
        DAT_003fabb2 = '\0';
        if (_DAT_003faba4 == 0) {
          _DAT_003faba6 = _TIMSAON;
          B_timsvvt = 1;
          uVar8 = calc_value_from_x_y(&KFZKMSVT,rlvw_w,nmot_w);
          _DAT_003fdc08 = _DAT_003fdc08 + (int)(short)msdif_w * (uVar8 & 0xffff);
          iVar7 = _DAT_003fdc08 >> 8;
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          if ((int)((uint)FKMSVVTMX << 8) < iVar7) {
            _fkmsvvts_w = (ushort)FKMSVVTMX << 8;
            _DAT_003fdc08 = (uint)FKMSVVTMX << 0x10;
          }
          else if (iVar7 < (int)((uint)FKMSVVTMN << 8)) {
            _fkmsvvts_w = (ushort)FKMSVVTMN << 8;
            _DAT_003fdc08 = (uint)FKMSVVTMN << 0x10;
          }
          else {
            _fkmsvvts_w = (ushort)iVar7;
          }
        }
        else {
          _DAT_003faba4 = _DAT_003faba4 + -1;
          B_timsvvt = 0;
        }
      }
      else {
        B_bgmsdk = 0;
        DAT_003fabb2 = '\0';
      }
    }
  }
  else {
    _fkmsdks_w = (ushort)FKPVDKE << 8;
    _DAT_003fdc04 = (uint)FKPVDKE << 0x10;
    _DAT_003faba4 = _TIMSAON;
    _DAT_003faba6 = _TIMSAON;
  }
  zkbgmsdk = calc_value_from_y(&KLZKBGMSDK,dpsfak);
  if (B_bgmsdk == 0) {
    uVar4 = 0x4000;
  }
  else {
    uVar4 = FUN_000b181c(_fkmsdks_w,_fkmsdka_w);
  }
  _fkmsdk_w = FUN_000b2514(&UNK_003faba8,uVar4,zkbgmsdk);
  if (B_llk == 0) {
    _fkmsvvt_w = FUN_000b181c(_fkmsvvts_w,_fkmsvvta_w);
  }
  else {
    _fkmsvvt_w = _fkmsvvts_w;
  }
  uVar1 = _fkmsvvts_w;
  if (BGMSDKDPS < dpsfak) {
    uVar1 = _fkmsdks_w;
  }
  uVar8 = (uint)uVar1;
  if (uVar8 < (uint)FKMSDKMX << 8) {
    uVar9 = (uint)FKMSDKMX * 0x100 + (uint)DFKMSMX * -0x100;
    if ((int)uVar9 < 0) {
      uVar9 = 0;
    }
    else if (0xffff < (int)uVar9) {
      uVar9 = 0xffff;
    }
    if (uVar8 < (uVar9 & 0xffff)) {
      B_fkmsmx = 0;
    }
  }
  else {
    B_fkmsmx = 1;
  }
  if ((uint)FKMSDKMN << 8 < uVar8) {
    uVar9 = (uint)FKMSDKMN * 0x100 + (uint)DFKMSMN * 0x100;
    if (0xffff < uVar9) {
      uVar9 = 0xffff;
    }
    if ((uVar9 & 0xffff) < uVar8) {
      B_fkmsmn = 0;
    }
  }
  else {
    B_fkmsmn = 1;
  }
  if (B_stend == '\0') {
    DAT_003fabb1 = 0;
    DAT_003fabb3 = DAT_003fabb4;
  }
  else if (DAT_003fabb3 == '\0') {
    DAT_003fabb1 = 1;
  }
  else {
    DAT_003fabb3 = DAT_003fabb3 + -1;
    DAT_003fabb1 = 0;
  }
  DAT_003fabb0 = B_llk;
  return;
}

