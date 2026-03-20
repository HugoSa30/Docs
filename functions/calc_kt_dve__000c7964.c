/*
 * Program: n42.bin
 * Function: calc_kt_dve
 * Entry: 000c7964
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void calc_kt_dve(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  short sVar6;
  int iVar5;
  short local_20;
  short sStack_1e;
  
  if (DAT_003fb0a5 == '\0') {
    return;
  }
  _dwdkdlr_w = _wdkdlr_w - _wdkba_w;
  if (_dwdkdlr_w < 0xfff) {
    if (_dwdkdlr_w < -0xffe) {
      _dwdkdlr_w = -0xfff;
    }
  }
  else {
    _dwdkdlr_w = 0xfff;
  }
  if (B_wdk1v == '\0') {
    _DAT_003fb082 = _DANTGESWNV;
    _DAT_003fb084 = _DANTSCHWNV;
  }
  else {
    _DAT_003fb082 = _DANTGESWV;
    _DAT_003fb084 = _DANTSCHWV;
  }
  _dlrndif_w = _DAT_003fb096 - _wdkba_w;
  _DAT_003fb096 = _wdkba_w;
  iVar1 = (int)_dlrndif_w;
  if ((iVar1 < _DAT_003fb082) && (-iVar1 < (int)_DAT_003fb082)) {
    if (((int)_DAT_003fb084 < (int)_dwdkdlr_w) ||
       (sVar6 = _DAT_003fb090, (int)_DAT_003fb084 < -(int)_dwdkdlr_w)) goto LAB_000c7a84;
  }
  else {
LAB_000c7a84:
    sVar6 = (short)((int)(iVar1 * (uint)dlrd) >> 1);
    if (sVar6 < 0x1400) {
      if (sVar6 < -0x13ff) {
        sVar6 = -0x1400;
      }
    }
    else {
      sVar6 = 0x1400;
    }
    sVar6 = sVar6 + _DAT_003fb090;
  }
  if (sVar6 < 0) {
    B_dlrspid = '\0';
    uVar3 = -(int)sVar6 * (uint)dlrkomp;
    if (0xfffe < uVar3) {
      uVar3 = 0xffff;
    }
    _dlrspid_w = (ushort)uVar3;
  }
  else {
    B_dlrspid = '\x01';
    uVar3 = (int)sVar6 * (uint)dlrkomp;
    if (0xfffe < uVar3) {
      uVar3 = 0xffff;
    }
    _dlrspid_w = (ushort)uVar3;
  }
  sVar6 = (short)(((uint)_dlrspid_w * 10000) / 0xffff);
  if (B_dlrspid == '\0') {
    sVar6 = -sVar6;
  }
  FUN_000f4330(0,(int)sVar6);
  DAT_003fb080 = DAT_003fb080 + -1;
  if (DAT_003fb080 != '\x01') {
    if (DAT_003fb080 != '\0') {
      iVar1 = (int)_dwdkdlr_w * (uint)dlrp;
      if (iVar1 < 0x7fff) {
        if (iVar1 < -0x7fff) {
          _DAT_003fb08c = -0xfff0000;
        }
        else {
          sStack_1e = (short)iVar1;
          _DAT_003fb08c = CONCAT22((short)(iVar1 >> 3),sStack_1e << 0xd);
        }
      }
      else {
        _DAT_003fb08c = 0xfff0000;
      }
      _DAT_003fb090 = (short)((uint)(_DAT_003fb08c + _DAT_003fb088) >> 0x10);
                    /* WARNING: Read-only address (ram,0x003fb092) is written */
      _DAT_003fb090 = CONCAT22(_DAT_003fb090 + _dlrikl_w,(short)(_DAT_003fb08c + _DAT_003fb088));
      DAT_003fb080 = 2;
      return;
    }
    uVar2 = (uint)_dwdkdlr_w;
    uVar3 = uVar2;
    if ((int)uVar2 < 0) {
      uVar3 = -uVar2;
    }
    uVar3 = uVar3 & 0xffff;
    if (uVar3 < 0xf8) {
      uVar4 = (int)uVar3 >> 3 & 0xff;
    }
    else {
      uVar4 = 0x1f;
    }
    if (_wdkba_w < (short)(wdknlp_w >> 4)) {
      if (B_wdk1v == '\0') {
        dlrp = DLRKPUNLP3;
        dlrd = DLRKDUNLP3;
        dlri = *(byte *)(uVar4 + 0x1c7b94);
      }
      else if (B_dlrparc == '\0') {
        if ((int)_DLRDWDKSS1 >> 4 < (int)uVar3) {
          dlrp = DLRKPUNLP0;
          dlrd = DLRKDUNLP0;
          dlri = *(byte *)(uVar4 + 0x1c7b34);
        }
      }
      else {
        iVar1 = (int)(short)_gwdkdlr_w;
        if (iVar1 < 0) {
          if (iVar1 == -0x8000) {
            uVar3 = 0x7fff;
          }
          else {
            uVar3 = -iVar1 & 0xffff;
          }
        }
        else {
          uVar3 = (uint)_gwdkdlr_w;
        }
        if ((int)_DLRDWDKSS1 < (int)uVar3) {
          dlrp = DLRKPUNLP0;
          dlrd = DLRKDUNLP0;
          dlri = *(byte *)(uVar4 + 0x1c7b34);
        }
        else if ((int)_DLRDWDKSS2 < (int)uVar3) {
          dlrp = DLRKPUNLP1;
          dlrd = DLRKDUNLP1;
          dlri = *(byte *)(uVar4 + 0x1c7b54);
        }
        else {
          dlrp = DLRKPUNLP2;
          dlrd = DLRKDUNLP2;
          dlri = *(byte *)(uVar4 + 0x1c7b74);
        }
      }
    }
    else {
      dlrp = DLRKPONLP0;
      dlrd = DLRKDONLP0;
      dlri = *(byte *)(uVar4 + 0x1c7b14);
    }
    iVar1 = _DAT_003fb088 + uVar2 * 4 * (uint)dlri * 0x80;
    _DAT_003fb088 = (short)((uint)iVar1 >> 0x10);
    if (_DAT_003fb088 <= (short)-_dlriamax) {
      _DAT_003fb088 = (uint)(ushort)-_dlriamax << 0x10;
      return;
    }
    if (_DAT_003fb088 < (short)_dlriamax) {
      _DAT_003fb088 = iVar1;
      return;
    }
    _DAT_003fb088 = (uint)_dlriamax << 0x10;
    return;
  }
  if (B_dlrikla == '\0') {
    return;
  }
  if (CWDLRIKL == '\0') {
    return;
  }
  if (B_dlriklst != '\0') {
    _DAT_003fb098 = _wdkba_w;
    B_dkbew = '\0';
    B_dlriklst = '\0';
    goto LAB_000c7c44;
  }
  if (_dwdkdlr_w < 1) {
    if (_DAT_003fb094 < 0) {
      if (_dwdkdlr_w < 0) goto LAB_000c7c44;
      goto LAB_000c7c30;
    }
  }
  else {
LAB_000c7c30:
    if (0 < _DAT_003fb094) goto LAB_000c7c44;
  }
  B_dlrikla = '\0';
LAB_000c7c44:
  if (B_iklrest == '\0') {
    iVar5 = (int)_DAT_003fb098;
    iVar1 = (int)_wdkba_w;
    if (iVar1 < iVar5) {
      uVar3 = iVar5 - iVar1;
    }
    else {
      uVar3 = iVar1 - iVar5;
    }
    if (((int)_WDKBEWS < (int)(uVar3 & 0xffff)) && (B_dkbew == '\0')) {
      dlriklst_w = _dlrikl_w;
      B_dkbew = '\x01';
    }
  }
  if (B_dlrikla == '\0') {
    _dlrikl_w = 0;
  }
  else {
    local_20 = (short)(_dwdkdlr_w * 4 * (uint)DLRIKLPAR * 0x80 >> 0x10);
    _dlrikl_w = local_20 + _dlrikl_w;
    if ((short)_dlrikl_w < 0x200) {
      if ((short)_dlrikl_w < -0x1ff) {
        _dlrikl_w = -0x200;
      }
    }
    else {
      _dlrikl_w = 0x200;
    }
  }
  _DAT_003fb094 = _dwdkdlr_w;
  return;
}

