/*
 * Program: n42.bin
 * Function: FUN_0015240c
 * Entry: 0015240c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015240c(void)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  
  if (B_clradllr != '\0') {
    _dmvadll_w = 0;
    _DAT_003fddb0 = 0;
    _dmvadko_w = 0;
    _DAT_003fddb4 = 0;
    _dmvadfs_w = 0;
    _DAT_003fddb8 = 0;
    _dmvadfk_w = 0;
    _DAT_003fddbc = 0;
    B_clradllr = '\0';
  }
  if ((((((((B_silm & 1) == 0) && ((DAT_003fdfc1 & 1) == 0)) && ((B_sidk & 1) == 0)) &&
        (((DAT_003fdf57 & 1) == 0 && ((DAT_003fdfc9 & 1) == 0)))) && ((DAT_003fdfdf & 1) == 0)) &&
      (((B_mdarv == 0 && (B_edkvs == '\0')) &&
       ((B_edkvs2 == '\0' && (((B_dkpu == '\0' && (B_dknolu == '\0')) && (B_eev == '\0')))))))) &&
     (B_evloc != '\0')) {
    B_madstp = false;
  }
  else {
    B_madstp = true;
  }
  B_adwko = B_koe;
  B_adwfs = B_fs;
  if ((B_koe == '\0') || (B_fs == '\0')) {
    B_adwfk = '\0';
  }
  else {
    B_adwfk = '\x01';
  }
  if ((((B_nswo1 != '\0') || (B_llr == '\0')) ||
      ((B_llrein == '\0' || (((B_vllr != '\0' || (tmot <= TMDMAD)) || (B_dtes != '\0')))))) ||
     ((bool)B_madstp)) {
    DAT_003fb354 = DAT_003fb354 & 0xfd | 1;
  }
  else {
    DAT_003fb354 = DAT_003fb354 | 3;
  }
  if ((DAT_003fb354 >> 1 & 1) == 0) {
    DAT_003fb355 = TWDMAD;
    B_madll = '\0';
    B_madko = '\0';
    B_madfs = '\0';
    B_madfk = '\0';
  }
  else if (DAT_003fb355 == '\0') {
    if ((B_koe == '\0') && (B_fs == '\0')) {
      if (B_madll == '\0') {
        B_madll = '\x01';
        iVar2 = (int)_dmvadll_w + (int)(short)((ushort)DMADLL << 5);
        if (iVar2 < -0x8000) {
          iVar2 = -0x8000;
        }
        else if (0x7fff < iVar2) {
          iVar2 = 0x7fff;
        }
        dmvamxll_w = (word)iVar2;
        if ((short)((ushort)DMADMXLL << 5) < (short)dmvamxll_w) {
          dmvamxll_w = (ushort)DMADMXLL << 5;
        }
        iVar2 = (int)_dmvadll_w - (int)(short)((ushort)DMADLL << 5);
        if (iVar2 < -0x8000) {
          iVar2 = -0x8000;
        }
        else if (0x7fff < iVar2) {
          iVar2 = 0x7fff;
        }
        dmvamnll_w = (word)iVar2;
        if ((int)(short)dmvamnll_w < -(int)(short)((ushort)DMADMNLL << 5)) {
          dmvamnll_w = (ushort)DMADMNLL * -0x20;
        }
      }
      iVar2 = (int)(short)dmllri_w + (int)_DMOLL;
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
      else if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
      uVar1 = func_0xff217c80(_ZKDMADLL,(int)(short)iVar2,(int)_DAT_003fddb0,_DAT_003fddb0 & 0xffff,
                              (int)(short)dmvamnll_w,0,(int)(short)dmvamxll_w,0);
      _DAT_003fddb0 = (short)(uVar1 >> 0x10);
      _dmvadll_w = _DAT_003fddb0;
      _DAT_003fddb0 = uVar1;
    }
    else {
      B_madll = '\0';
    }
    if ((B_koe == '\0') || (B_fs != '\0')) {
      B_madko = '\0';
    }
    else {
      if (B_madko == '\0') {
        B_madko = '\x01';
        iVar2 = (int)_dmvadko_w + (int)(short)((ushort)DMADKO << 5);
        if (iVar2 < -0x8000) {
          iVar2 = -0x8000;
        }
        else if (0x7fff < iVar2) {
          iVar2 = 0x7fff;
        }
        dmvamxko_w = (word)iVar2;
        if ((short)((ushort)DMADMXKO << 5) < (short)dmvamxko_w) {
          dmvamxko_w = (ushort)DMADMXKO << 5;
        }
        iVar2 = (int)_dmvadko_w - (int)(short)((ushort)DMADKO << 5);
        if (iVar2 < -0x8000) {
          iVar2 = -0x8000;
        }
        else if (0x7fff < iVar2) {
          iVar2 = 0x7fff;
        }
        dmvamnko_w = (word)iVar2;
        if ((int)(short)dmvamnko_w < -(int)(short)((ushort)DMADMNKO << 5)) {
          dmvamnko_w = (ushort)DMADMNKO * -0x20;
        }
      }
      iVar2 = (int)(short)dmllri_w + (int)_DMOKO;
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
      else if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
      uVar1 = func_0xff217c80(_ZKDMADKO,(int)(short)iVar2,(int)_DAT_003fddb4,_DAT_003fddb4 & 0xffff,
                              (int)(short)dmvamnko_w,0,(int)(short)dmvamxko_w,0);
      _DAT_003fddb4 = (short)(uVar1 >> 0x10);
      _dmvadko_w = _DAT_003fddb4;
      _DAT_003fddb4 = uVar1;
    }
    if ((B_koe == '\0') && (B_fs != '\0')) {
      if (B_madfs == '\0') {
        B_madfs = '\x01';
        iVar2 = (int)_dmvadfs_w + (int)(short)((ushort)DMADFS << 5);
        if (iVar2 < -0x8000) {
          iVar2 = -0x8000;
        }
        else if (0x7fff < iVar2) {
          iVar2 = 0x7fff;
        }
        dmvamxfs_w = (word)iVar2;
        if ((short)((ushort)DMADMXFS << 5) < (short)dmvamxfs_w) {
          dmvamxfs_w = (ushort)DMADMXFS << 5;
        }
        iVar2 = (int)_dmvadfs_w - (int)(short)((ushort)DMADFS << 5);
        if (iVar2 < -0x8000) {
          iVar2 = -0x8000;
        }
        else if (0x7fff < iVar2) {
          iVar2 = 0x7fff;
        }
        dmvamnfs_w = (word)iVar2;
        if ((int)(short)dmvamnfs_w < -(int)(short)((ushort)DMADMNFS << 5)) {
          dmvamnfs_w = (ushort)DMADMNFS * -0x20;
        }
      }
      iVar2 = (int)(short)dmllri_w + (int)_DMOFS;
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
      else if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
      uVar1 = func_0xff217c80(_ZKDMADFS,(int)(short)iVar2,(int)_DAT_003fddb8,_DAT_003fddb8 & 0xffff,
                              (int)(short)dmvamnfs_w,0,(int)(short)dmvamxfs_w,0);
      _DAT_003fddb8 = (short)(uVar1 >> 0x10);
      _dmvadfs_w = _DAT_003fddb8;
      _DAT_003fddb8 = uVar1;
    }
    else {
      B_madfs = '\0';
    }
    if ((B_koe == '\0') || (B_fs == '\0')) {
      B_madfk = '\0';
    }
    else {
      if (B_madfk == '\0') {
        B_madfk = '\x01';
        iVar2 = (int)_dmvadfk_w + (int)(short)((ushort)DMADFK << 5);
        if (iVar2 < -0x8000) {
          iVar2 = -0x8000;
        }
        else if (0x7fff < iVar2) {
          iVar2 = 0x7fff;
        }
        dmvamxfk_w = (word)iVar2;
        if ((short)((ushort)DMADMXFK << 5) < (short)dmvamxfk_w) {
          dmvamxfk_w = (ushort)DMADMXFK << 5;
        }
        iVar2 = (int)_dmvadfk_w - (int)(short)((ushort)DMADFK << 5);
        if (iVar2 < -0x8000) {
          iVar2 = -0x8000;
        }
        else if (0x7fff < iVar2) {
          iVar2 = 0x7fff;
        }
        dmvamnfk_w = (word)iVar2;
        if ((int)(short)dmvamnfk_w < -(int)(short)((ushort)DMADMNFK << 5)) {
          dmvamnfk_w = (ushort)DMADMNFK * -0x20;
        }
      }
      iVar2 = (int)(short)dmllri_w + (int)_DMOFK;
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
      else if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
      uVar1 = func_0xff217c80(_ZKDMADFK,(int)(short)iVar2,(int)_DAT_003fddbc,_DAT_003fddbc & 0xffff,
                              (int)(short)dmvamnfk_w,0,(int)(short)dmvamxfk_w,0);
      _DAT_003fddbc = (short)(uVar1 >> 0x10);
      _dmvadfk_w = _DAT_003fddbc;
      _DAT_003fddbc = uVar1;
    }
  }
  else {
    DAT_003fb355 = DAT_003fb355 + -1;
    B_madll = '\0';
    B_madko = '\0';
    B_madfs = '\0';
    B_madfk = '\0';
  }
  if (B_adwfk == '\0') {
    sVar3 = _dmvadfs_w;
    if (B_adwfs == '\0') {
      sVar3 = 0;
    }
  }
  else {
    sVar3 = _dmvadfk_w;
    if (B_adwfs != '\0') {
      iVar2 = (int)_dmvadfk_w + (int)_dmvadfs_w;
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
      else if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
      sVar3 = (short)iVar2;
    }
  }
  if (B_adwko != '\0') {
    iVar2 = (int)_dmvadko_w + (int)sVar3;
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    sVar3 = (short)iVar2;
  }
  iVar2 = (int)_dmvadll_w + (int)sVar3;
  if (iVar2 < -0x8000) {
    iVar2 = -0x8000;
  }
  else if (0x7fff < iVar2) {
    iVar2 = 0x7fff;
  }
  dmvad_w = (word)iVar2;
  return;
}

