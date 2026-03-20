/*
 * Program: n42.bin
 * Function: FUN_000d93d4
 * Entry: 000d93d4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000d98e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d93d4(void)

{
  char cVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  word wVar6;
  short sVar7;
  uint uVar8;
  
  cVar1 = B_dknolu;
  DAT_003fb0a4 = B_dlrspid;
  if (B_dkaden == '\0') {
    if (B_appnolu == '\0') {
      uVar8 = (uint)wdks_w;
    }
    else if ((((B_dkp1e == '\0') && (B_dkp2e == '\0')) && (B_i_ska_um == '\0')) &&
            (((B_ubdve != '\0' && (B_wdksive == '\0')) &&
             ((B_dlrbe == '\0' && ((B_dlrpide == '\0' && (DAT_003fbf07 == '\0')))))))) {
      uVar8 = (uint)_WDKSAPNOL;
    }
    else {
      B_appnolu = '\0';
      uVar8 = (uint)wdks_w;
    }
  }
  else {
    uVar8 = (uint)wdkada_w;
  }
  if (B_wdk1v == '\0') {
    _wdkdlr_w = (ushort)(uVar8 >> 4) & 0xffc;
  }
  else {
    _wdkdlr_w = (ushort)(uVar8 >> 4);
  }
  uVar8 = (uint)_wdkdlr_w;
  iVar4 = uVar8 - wdkdlra_w;
  if (iVar4 < -0x8000) {
    iVar4 = 0;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  _gwdkdlr_w = (short)(iVar4 << 4);
  wdkdlra_w = _wdkdlr_w;
  if (((B_dkaden == '\0') && (wped == 0)) && (nmot == 0)) {
    if (_TPWRSV < dpwrsvc) {
      B_pwrsv = '\x01';
    }
    else {
      dpwrsvc = dpwrsvc + 1;
    }
  }
  else {
    dpwrsvc = 0;
    B_pwrsv = '\0';
  }
  sVar7 = _gwdkdlr_w;
  if (_gwdkdlr_w < 0) {
    if (_gwdkdlr_w == -0x8000) {
      sVar7 = 0x7fff;
    }
    else {
      sVar7 = -_gwdkdlr_w;
    }
  }
  if (CWDLRIKL != '\0') {
    B_iklstar = '\0';
    if (sVar7 < 1) {
      B_dlrparc = 0;
      sVar2 = _dwdkdlr_w;
      if (_dwdkdlr_w < 0) {
        sVar2 = -_dwdkdlr_w;
      }
      if (B_wdk1v == '\0') {
LAB_000d96d4:
        if ((_DWDKSIKLS < sVar2) || (sVar2 < _WDKSTGROB)) goto LAB_000d970c;
      }
      else if ((_DWDKSIKLS < sVar2) || (sVar2 < sRam001c7c02)) {
        if (B_wdk1v != '\0') goto LAB_000d970c;
        goto LAB_000d96d4;
      }
      if (B_dlrikla == '\0') {
        B_iklrest = '\x01';
      }
      B_iklstar = '\x01';
    }
    else {
      B_dlrparc = 1;
      B_wdksauf = -1 < _gwdkdlr_w;
      if (sVar7 >> 4 <= _DWDKSIKLS) {
        if (B_dlrikla == '\0') {
          B_iklrest = '\0';
        }
        B_iklstar = '\x01';
      }
    }
LAB_000d970c:
    if (_DWDKSIKLS < sVar7 >> 4) {
      B_dlrikla = '\0';
      _dlrikl_w = 0;
    }
    if ((B_dlrikla == '\0') && (B_iklstar != '\0')) {
      B_dlrikla = '\x01';
      B_dlriklst = 1;
      if (B_iklrest == '\0') {
        wVar6 = dlriklst_w;
        if ((short)dlriklst_w < 0) {
          wVar6 = -dlriklst_w;
        }
        _dlrikl_w = (short)((int)(short)wVar6 * (uint)WDKREIB >> 8);
        if (B_wdksauf == '\0') {
          _dlrikl_w = -_dlrikl_w;
        }
      }
      else {
        _dlrikl_w = 0;
      }
    }
  }
  dlriant_w = _DAT_003fb088;
  iVar4 = (int)_wdkba_w;
  if (((iVar4 <= (int)(uint)_DLRUMABAND) && (_DLRUMABAND <= uVar8)) &&
     ((short)_DAT_003fb088 < (short)_DLRUMAIINI)) {
    _DAT_003fb088 = _DLRUMAIINI;
  }
  if (B_dlrumzu == '\0') {
LAB_000d98cc:
    uVar5 = (uint)wdknlp_w + (uint)_DLRNLPD;
    if (0xffff < uVar5) {
      uVar5 = 0xffff;
    }
    if ((uVar5 >> 4 & 0xfff) < uVar8) {
      if ((int)(uint)wdknlp_w >> 4 < iVar4) {
        uVar8 = iVar4 - (uint)(wdknlp_w >> 4);
      }
      else {
        uVar8 = (uint)(wdknlp_w >> 4) - iVar4;
      }
      if ((uint)(_DLRNLPD >> 4) < (uVar8 & 0xffff)) {
        _DAT_003fb088 = _DAT_003fb088 + _dlrini_w;
      }
      B_dlrumzu = '\x01';
    }
  }
  else {
    uVar5 = (uint)wdknlp_w - (uint)_DLRNLPD;
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    else if (0xffff < (int)uVar5) {
      uVar5 = 0xffff;
    }
    if (uVar8 < (uVar5 >> 4 & 0xfff)) {
      if ((int)(uint)wdknlp_w >> 4 < iVar4) {
        uVar5 = iVar4 - (uint)(wdknlp_w >> 4);
      }
      else {
        uVar5 = (uint)(wdknlp_w >> 4) - iVar4;
      }
      if ((uint)(_DLRNLPD >> 4) < (uVar5 & 0xffff)) {
        _DAT_003fb088 = _DAT_003fb088 - _dlrini_w;
      }
      B_dlrumzu = '\0';
    }
    if (B_dlrumzu == '\0') goto LAB_000d98cc;
  }
  if ((short)_DAT_003fb088 < 0x200) {
    if ((short)_DAT_003fb088 < -0x1ff) {
      _DAT_003fb088 = 0xfe01;
      goto LAB_000d9990;
    }
  }
  else {
    _DAT_003fb088 = 0x1ff;
LAB_000d9990:
    _DAT_003fb08a = 0;
  }
  puVar3 = &B_dcdisfr;
  if (B_dcdisfr == '\0') {
    _dlriamax = _DLRIAMAXA;
  }
  else {
    _dlriamax = 0;
  }
  if (((B_dknolu != '\0') && (B_appnolu == '\0')) || ((B_dkpiu != '\0' || (B_i_ska_um != '\0')))) {
    B_dlrbe = '\0';
    goto LAB_000d9b7c;
  }
  if (((B_ubdve == '\0') || (B_dkaden != '\0')) || (B_pwrsv != '\0')) {
    uVar8 = (uint)dlrpidc - (uint)_TDLRPIDC;
    if ((int)uVar8 < 0) {
      uVar8 = 0;
    }
    else if (0xffff < (int)uVar8) {
      uVar8 = 0xffff;
    }
    dlrpidc = (word)uVar8;
    if (_DLRPID2T + 1 < (uVar8 & 0xffff)) {
      dlrpidc = _DLRPID2T + 1;
    }
    dveesc = 0;
    B_dveesh = '\0';
    B_dvete = 0;
    goto LAB_000d9b7c;
  }
  if (B_dlrspid == '\0') {
LAB_000d9a58:
    if (_DLRPIDMIN < _dlrspid_w) {
      FUN_000ac8dc();
      goto LAB_000d9b7c;
    }
  }
  else {
    if (_DLRPIDMAX < _dlrspid_w) {
      FUN_000ac8dc();
      goto LAB_000d9b7c;
    }
    if (B_dlrspid == '\0') goto LAB_000d9a58;
  }
  B_dlrbe = '\0';
  uVar8 = (uint)dlrpidc - (uint)_TDLRPIDC;
  if ((int)uVar8 < 0) {
    uVar8 = 0;
  }
  else if (0xffff < (int)uVar8) {
    uVar8 = 0xffff;
  }
  dlrpidc = (word)uVar8;
  if (_DLRPID2T + 1 < (uVar8 & 0xffff)) {
    dlrpidc = _DLRPID2T + 1;
  }
  dveesc = 0;
LAB_000d9b7c:
  if ((((B_dcdisr == '\0') &&
       ((((cVar1 == '\0' || (B_appnolu != '\0')) && (B_dkpiu == '\0')) &&
        ((B_i_ska_um == '\0' && (B_dveesh == '\0')))))) && (B_ubdve != '\0')) && (B_pwrsv == '\0'))
  {
    AS_dimdk = 0;
  }
  else {
    AS_dimdk = 1;
  }
  *puVar3 = AS_dimdk;
  return;
}

