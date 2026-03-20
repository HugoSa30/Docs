/*
 * Program: n42.bin
 * Function: BGMSZS
 * Entry: 0014a2dc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0014ac5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BGMSZS(void)

{
  byte bVar3;
  ushort uVar1;
  short sVar2;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (((B_bgmszs == 0) || (tmot <= TMFKMSDKA)) || ((dpsfak <= BGMSDKDPS && (B_lltd == 0)))) {
    B_timsa = TIMSA;
    B_timsall = TIMSALL;
    B_timsavvt = 0;
    B_timsallv = 0;
  }
  else {
    iVar6 = (_fkmsdks_w >> 1) - 0x2000;
    if (iVar6 < -0x8000) {
      iVar6 = -0x8000;
    }
    else if (0x7fff < iVar6) {
      iVar6 = 0x7fff;
    }
    iVar6 = (int)(short)iVar6;
    bVar3 = func_0xff2187cc(&WDKFMAON,nmot);
    if (((wdkba < bVar3) && (bVar3 = func_0xff2187cc(&WDKFMAUN,nmot), bVar3 < wdkba)) &&
       (B_gd != '\0')) {
      if (B_timsa == '\0') {
        B_timsavvt = 1;
        _DAT_003fdbec = _DAT_003fdbec + ((int)(iVar6 * (uint)KIMSA * 0x11) >> 2);
        if (_DAT_003fdbec < (int)((uint)FKPVDKMN << 0x17)) {
          _DAT_003fdbec = (uint)FKPVDKMN << 0x17;
        }
        else if ((int)((uint)FKPVDKMX << 0x17) < _DAT_003fdbec) {
          _DAT_003fdbec = (uint)FKPVDKMX << 0x17;
        }
      }
      else {
        B_timsa = B_timsa + -1;
      }
    }
    else {
      B_timsa = TIMSA;
      B_timsavvt = 0;
    }
    if (B_gd == '\0') {
      bVar3 = func_0xff2187cc(&WDKMSONTD,nmot);
    }
    else {
      bVar3 = func_0xff2187cc(&WDKMSON,nmot);
    }
    if ((nmot < NMSNDKO) && (wdkba < bVar3)) {
      if (B_timsall == '\0') {
        B_timsallv = 1;
        if (B_gd == '\0') {
          if (_DPSTDMN < dpssol_uw) {
            _DAT_003fdbf4 = _DAT_003fdbf4 + ((int)(iVar6 * (uint)KIMSALL * 0xaa) >> 9);
            if (_DAT_003fdbf4 < (int)DAT_001c2598 << 0x10) {
              _DAT_003fdbf4 = (int)DAT_001c2598 << 0x10;
            }
            else if ((int)DAT_001c2599 << 0x10 < _DAT_003fdbf4) {
              _DAT_003fdbf4 = (int)DAT_001c2599 << 0x10;
            }
          }
        }
        else {
          _DAT_003fdbf0 = _DAT_003fdbf0 + ((int)(iVar6 * (uint)KIMSALL * 0xaa) >> 9);
          if (_DAT_003fdbf0 < (int)DAT_001c2598 << 0x10) {
            _DAT_003fdbf0 = (int)DAT_001c2598 << 0x10;
          }
          else if ((int)DAT_001c2599 << 0x10 < _DAT_003fdbf0) {
            _DAT_003fdbf0 = (int)DAT_001c2599 << 0x10;
          }
        }
      }
      else {
        B_timsall = B_timsall + -1;
      }
    }
    else {
      B_timsall = TIMSALL;
      B_timsallv = 0;
    }
  }
  if (B_bgmsdk == 0) {
    sVar2 = 0;
  }
  else if (B_gd == '\0') {
    sVar2 = (short)((uint)_DAT_003fdbf4 >> 0x10);
  }
  else {
    sVar2 = (short)((uint)_DAT_003fdbf0 >> 0x10);
  }
  _msndko_w = func_0xff2224cc(&UNK_003fabac,(int)sVar2,zkbgmsdk);
  _fkmsdka_w = (ushort)(_DAT_003fdbec >> 0xf);
  if (((B_bgmszs == 0) || (tmot <= DAT_001c25b1)) || ((BGMSVVTDPS <= dpsfak || (B_bgmsdk != 0)))) {
    DAT_003faba1 = TIMSAVT;
    DAT_003faba3 = TIMSALLVT;
    B_timsavvt = 0;
    B_timsallv = 0;
  }
  else {
    iVar6 = (_fkmsvvts_w >> 1) - 0x2000;
    if (iVar6 < -0x8000) {
      iVar6 = -0x8000;
    }
    else if (0x7fff < iVar6) {
      iVar6 = 0x7fff;
    }
    iVar6 = (int)(short)iVar6;
    uVar1 = func_0xff2190c8(HUBFMAON,0x1cf56b,&DAT_001cf570,nmot);
    if ((evhubi_w < uVar1) &&
       (uVar1 = func_0xff2190c8(HUBFMAUN,&DAT_001cf579,&HUBFMAUN_start,nmot), uVar1 < evhubi_w)) {
      if (DAT_003faba1 == '\0') {
        B_timsavvt = 1;
        _DAT_003fdc00 = _DAT_003fdc00 + ((int)(iVar6 * (uint)KIMSAVT * 0x11) >> 2);
        if (_DAT_003fdc00 < (int)((uint)DAT_001c2593 << 0x17)) {
          _DAT_003fdc00 = (uint)DAT_001c2593 << 0x17;
        }
        else if ((int)((uint)DAT_001c2594 << 0x17) < _DAT_003fdc00) {
          _DAT_003fdc00 = (uint)DAT_001c2594 << 0x17;
        }
      }
      else {
        DAT_003faba1 = DAT_003faba1 + -1;
      }
    }
    else {
      DAT_003faba1 = TIMSAVT;
      B_timsavvt = 0;
    }
    if ((nmot < DAT_001c259c) &&
       (uVar1 = func_0xff2190c8(HUBMSON,&DAT_001cf587,&DAT_001cf58c,nmot), evhubi_w < uVar1)) {
      if (DAT_003faba3 == '\0') {
        B_timsallv = 1;
        if (B_llk == 0) {
          _DAT_003fdbf8 = _DAT_003fdbf8 + ((int)(iVar6 * (uint)KIMSALLVT * 0xaa) >> 9);
          if (_DAT_003fdbf8 < (int)DAT_001c25b2 << 0x10) {
            _DAT_003fdbf8 = (int)DAT_001c25b2 << 0x10;
          }
          else if ((int)DAT_001c25b3 << 0x10 < _DAT_003fdbf8) {
            _DAT_003fdbf8 = (int)DAT_001c25b3 << 0x10;
          }
        }
        else {
          _DAT_003fdbfc = _DAT_003fdbfc + ((int)(iVar6 * (uint)KIMSNLL * 0xaa) >> 9);
          if (_DAT_003fdbfc < (int)DAT_001c25b4 << 0x10) {
            _DAT_003fdbfc = (int)DAT_001c25b4 << 0x10;
          }
          else if ((int)DAT_001c25b5 << 0x10 < _DAT_003fdbfc) {
            _DAT_003fdbfc = (int)DAT_001c25b5 << 0x10;
          }
        }
      }
      else {
        DAT_003faba3 = DAT_003faba3 + -1;
      }
    }
    else {
      DAT_003faba3 = TIMSALLVT;
      B_timsallv = 0;
    }
  }
  if ((DAT_001c2587 & 1) == 0) {
    if ((DAT_001c2587 & 2) == 0) {
      trefvvto = (word)tmot;
    }
    else {
      trefvvto = (word)m_tol;
    }
  }
  else {
    trefvvto = toel_w;
  }
  _fkmsvvta_w = (ushort)(_DAT_003fdc00 >> 0xf);
  if (B_llk != 0) {
    if (DAT_001c25af == '\0') {
      _msnvvtoll = (word)((uint)_DAT_003fdbfc >> 0x10);
      iVar6 = (int)(short)_msnvvtoll;
      goto LAB_0014ab24;
    }
    if (B_llk != 0) {
      iVar6 = (int)(short)msnvvtonn;
      _msnvvtoll = msnvvtonn;
      goto LAB_0014ab24;
    }
  }
  iVar6 = _DAT_003fdbf8 >> 0x10;
  if (DAT_001c25af != '\0') {
    iVar6 = iVar6 + (short)msnvvtdnn;
  }
LAB_0014ab24:
  sVar2 = func_0xff2192a8(_KLMSNVTOM,&DAT_001cf814,&KLMSNVTOM_start,trefvvto);
  iVar6 = iVar6 + sVar2;
  if (iVar6 < 0x8000) {
    if (iVar6 < -0x7fff) {
      _msnvvto_w = 0x7fff;
    }
    else {
      _msnvvto_w = (undefined2)iVar6;
    }
  }
  else {
    _msnvvto_w = 0x7fff;
  }
  uVar1 = _fkmsvvta_w;
  if (BGMSDKDPS < dpsfak) {
    uVar1 = _fkmsdka_w;
  }
  uVar4 = (uint)uVar1;
  if (uVar4 < (uint)FKPVDKMX << 8) {
    uVar5 = (uint)FKPVDKMX * 0x100 + (uint)DAT_001c258b * -0x100;
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    else if (0xffff < (int)uVar5) {
      uVar5 = 0xffff;
    }
    if (uVar4 < (uVar5 & 0xffff)) {
      B_fkpvmx = 0;
    }
  }
  else {
    B_fkpvmx = 1;
  }
  if ((uint)FKPVDKMN << 8 < uVar4) {
    uVar5 = (uint)FKPVDKMN * 0x100 + (uint)DAT_001c258a * 0x100;
    if (0xffff < uVar5) {
      uVar5 = 0xffff;
    }
    if ((uVar5 & 0xffff) < uVar4) {
      B_fkpvmn = 0;
    }
  }
  else {
    B_fkpvmn = 1;
  }
  if (B_clradmsz != '\0') {
    FUN_0012d43c();
    B_clradmsz = '\0';
  }
  DAT_003fabb4 = func_0xff2187cc(&KLTDSTEND,tmst);
  return;
}

