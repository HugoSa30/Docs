/*
 * Program: n42.bin
 * Function: FUN_000e508c
 * Entry: 000e508c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000e5cd0) */
/* WARNING: Removing unreachable block (ram,0x000e5198) */
/* WARNING: Removing unreachable block (ram,0x000e5d04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e508c(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  
  iVar3 = (int)_wdkba_w;
  _DAT_003f9be8 = _wdkba_w;
  if (iVar3 < 1) {
    wdkba = 0;
  }
  else if (iVar3 < 0x1000) {
    wdkba = (byte)(iVar3 >> 4);
  }
  else {
    wdkba = 0xff;
  }
  iVar3 = iVar3 - _DAT_003f9be6;
  if (iVar3 < -0x8000) {
    iVar3 = -0x8000;
  }
  else if (0x7fff < iVar3) {
    iVar3 = 0x7fff;
  }
  dwdkba_w = (word)iVar3;
  _DAT_003f9be6 = _wdkba_w;
  uVar4 = (uint)udkp1sv * 0x10 - (uint)_DUDKP1HY;
  if ((int)uVar4 < 0) {
    uVar4 = 0;
  }
  else if (0xffff < (int)uVar4) {
    uVar4 = 0xffff;
  }
  uVar2 = (uint)udkp1_w;
  if ((uVar4 & 0xffff) < uVar2) {
    uVar4 = (uint)udkp1sv * 0x10 + (uint)_DUDKP1HY;
    if (0xffff < uVar4) {
      uVar4 = 0xffff;
    }
    if ((uVar4 & 0xffff) <= uVar2) {
      B_udk1nv = '\x01';
    }
  }
  else {
    B_udk1nv = '\0';
  }
  if (ub < UBVDKPO) {
    if (ub <= UBVDKPU) {
      B_ubvdkp = '\0';
    }
  }
  else {
    B_ubvdkp = '\x01';
  }
  if ((((B_st == '\0') && (B_udk1nv == '\0')) && ((DAT_003fdeb5 & 1) == 0)) && (B_ubvdkp != '\0')) {
    B_wdk1v = 1;
  }
  else {
    B_wdk1v = 0;
  }
  if (B_dkpu != '\0') {
    return;
  }
  if (B_ubpvg == '\0') {
    return;
  }
  if (B_dkp1e == '\0') {
    uVar2 = uVar2 - udkp1a_w;
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    else if (0xffff < (int)uVar2) {
      uVar2 = 0xffff;
    }
    uVar4 = FUN_000b1800((uVar2 & 0xfff) << 4,dkpstg_w);
    wdk1 = (byte)(uVar4 >> 8);
    wdk1_w = (word)((uVar4 >> 8 & 0xff) << 4);
  }
  if (B_dkp2e == '\0') {
    uVar4 = (uint)udkp2a_w - (uint)udkp2_w;
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    else if (0xffff < (int)uVar4) {
      uVar4 = 0xffff;
    }
    uVar4 = FUN_000b1800((uVar4 & 0xfff) << 4,dkpstg_w);
    wdk2 = (byte)(uVar4 >> 8);
    wdk2_w = (word)((uVar4 >> 8 & 0xff) << 4);
  }
  if (B_dkp1e == '\0') {
    uVar4 = (uint)udkp1_w;
    if (((uint)UDKP1O << 4 < uVar4) || (uVar4 < (uint)UDKP1U << 4)) {
      B_dkp1ev = true;
    }
    else {
      B_dkp1ev = false;
    }
    if ((bool)B_dkp1ev) {
      if (ctdkp1 < TVPDKP1) {
        ctdkp1 = ctdkp1 + 1;
      }
      else {
        B_dkp1e = '\x01';
      }
    }
    else {
      ctdkp1 = 0;
    }
    if ((B_dkp1e == '\0') || (uVar4 <= (uint)UDKP1O << 4)) {
      B_dkp1mx = 0;
    }
    else {
      B_dkp1mx = 1;
    }
    if ((B_dkp1e == '\0') || ((uint)UDKP1U << 4 <= uVar4)) {
      B_dkp1mn = 0;
    }
    else {
      B_dkp1mn = 1;
    }
  }
  if (B_dkp2e == '\0') {
    uVar4 = (uint)udkp2_w;
    if (((NDKPPU < nmot) || (B_dkp1e != '\0')) && (uVar4 < (uint)UDKP2U << 4)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (((uint)UDKP2O << 4 < uVar4) || (bVar1)) {
      B_dkp2ev = true;
    }
    else {
      B_dkp2ev = false;
    }
    if ((bool)B_dkp2ev) {
      if (ctdkp2 < TVPDKP2) {
        ctdkp2 = ctdkp2 + 1;
      }
      else {
        B_dkp2e = '\x01';
      }
    }
    else {
      ctdkp2 = 0;
    }
    if ((B_dkp2e == '\0') || (uVar4 <= (uint)UDKP2O << 4)) {
      B_dkp2mx = 0;
    }
    else {
      B_dkp2mx = 1;
    }
    if ((B_dkp2e == '\0') || (!bVar1)) {
      B_dkp2mn = 0;
    }
    else {
      B_dkp2mn = 1;
    }
  }
  if (((B_dkp1e == '\0') && (B_dkp2e == '\0')) && (B_dkpaw == '\0')) {
    if (NDKPPU < nmot) {
      uVar2 = (uint)wdk2;
      uVar4 = (uint)wdk1;
      if (uVar4 < uVar2) {
        uVar4 = uVar2 - uVar4;
      }
      else {
        uVar4 = uVar4 - uVar2;
      }
    }
    else {
      uVar4 = (uint)wdk1 - (uint)wdk2;
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xff < (int)uVar4) {
        uVar4 = 0xff;
      }
    }
    if (((B_dkp1ev == '\0') && (B_dkp2ev == '\0')) && ((uint)DWDK12O < (uVar4 & 0xff))) {
      B_wdk12ev = true;
    }
    else {
      B_wdk12ev = false;
    }
    if ((bool)B_wdk12ev) {
      if (ctwdk12 < TVPWDK12) {
        ctwdk12 = ctwdk12 + 1;
      }
      else {
        B_dkpaw = '\x01';
      }
    }
    else {
      ctwdk12 = 0;
    }
  }
  if (((B_dkp2ev == '\0') && (B_wdk12ev == '\0')) ||
     ((B_dkp1e != '\0' || ((B_dkp1ev != '\0' || (B_wdkhfu != 0)))))) {
    DAT_003f9b89 = '\0';
  }
  else if (DAT_003f9b89 == '\0') {
    DAT_003f9b89 = '\x01';
    _DAT_003f9bea = (ushort)wdk1 << 8;
    wdk1g = wdk1;
  }
  else {
    uVar4 = FUN_000a87cc(&TFWDKPN,nmot);
    _DAT_003f9bea = FUN_000a7fe8((uVar4 & 0xff) << 8,wdk1,_DAT_003f9bea);
    wdk1g = (byte)((ushort)_DAT_003f9bea >> 8);
  }
  if ((((B_dkp1ev == '\0') && (B_wdk12ev == '\0')) || (B_dkp2e != '\0')) ||
     ((B_dkp2ev != '\0' || (B_wdkhfu != 0)))) {
    DAT_003f9b8a = '\0';
  }
  else if (DAT_003f9b8a == '\0') {
    DAT_003f9b8a = '\x01';
    _DAT_003f9bec = (ushort)wdk2 << 8;
    wdk2g = wdk2;
  }
  else {
    uVar4 = FUN_000a87cc(&TFWDKPN,nmot);
    _DAT_003f9bec = FUN_000a7fe8((uVar4 & 0xff) << 8,wdk2,_DAT_003f9bec);
    wdk2g = (byte)((ushort)_DAT_003f9bec >> 8);
  }
  if ((DAT_003f9b89 == '\x01') || (DAT_003f9b8a == '\x01')) {
    if (DAT_003f9b8b == '\0') {
      DAT_003f9b8b = '\x01';
      _DAT_003f9bee = wdkhf_w;
      wdk3g = (byte)(wdkhf_w >> 8);
    }
    else {
      uVar4 = FUN_000a87cc(&TFWDKPN,nmot);
      _DAT_003f9bee = FUN_000a7fe8((uVar4 & 0xff) << 8,wdkhf_w >> 8,_DAT_003f9bee);
      wdk3g = (byte)(_DAT_003f9bee >> 8);
    }
  }
  else {
    DAT_003f9b8b = '\0';
  }
  if ((B_dkp1e == '\0') && ((B_dkp2e != '\0' || (B_dkpaw != '\0')))) {
    if (wdk1g < wdk3g) {
      bVar5 = wdk3g - wdk1g;
    }
    else {
      bVar5 = wdk1g - wdk3g;
    }
    if ((((B_dkp1ev == '\0') && (B_wdkhfu == 0)) && (NWDK3 < nmot)) && (DWDK13O < bVar5)) {
      B_wdk13ev = true;
    }
    else {
      B_wdk13ev = false;
    }
    if ((bool)B_wdk13ev) {
      if (ctwdk13 < TVPWDK13) {
        ctwdk13 = ctwdk13 + 1;
      }
      else {
        B_dkp1e = '\x01';
      }
    }
    else {
      ctwdk13 = 0;
    }
    if (B_ehfs != '\0') {
      B_dkp1e = '\x01';
    }
    B_dkp1np = B_dkp1e;
  }
  if (B_dkp2e == '\0') {
    if ((B_dkp1e != '\0') || (B_dkpaw != '\0')) {
      if (wdk2g < wdk3g) {
        bVar5 = wdk3g - wdk2g;
      }
      else {
        bVar5 = wdk2g - wdk3g;
      }
      if (((B_dkp2ev == '\0') && (B_wdkhfu == 0)) && ((NWDK3 < nmot && (DWDK23O < bVar5)))) {
        B_wdk23ev = true;
      }
      else {
        B_wdk23ev = false;
      }
      if ((bool)B_wdk23ev) {
        if (ctwdk23 < TVPWDK23) {
          ctwdk23 = ctwdk23 + 1;
        }
        else {
          B_dkp2e = '\x01';
        }
      }
      else {
        ctwdk23 = 0;
      }
      if (B_ehfs != '\0') {
        B_dkp2e = '\x01';
      }
      B_dkp2np = B_dkp2e;
      goto LAB_000e5b48;
    }
LAB_000e5b50:
    if (B_dkp2e == '\0') {
      if (wdk1g < wdk3g) {
        bVar5 = wdk3g - wdk1g;
      }
      else {
        bVar5 = wdk1g - wdk3g;
      }
      if (wdk2g < wdk3g) {
        bVar6 = wdk3g - wdk2g;
      }
      else {
        bVar6 = wdk2g - wdk3g;
      }
      if ((((B_wdk12ev == '\0') || (B_wdkhfu != 0)) || (nmot <= NWDK3)) || (bVar5 <= bVar6)) {
        B_wdk2st = 0;
        bVar1 = false;
      }
      else {
        B_wdk2st = 1;
        bVar1 = true;
      }
      goto LAB_000e5c10;
    }
  }
  else {
LAB_000e5b48:
    if (B_dkp1e == '\0') goto LAB_000e5b50;
  }
  B_dkpaw = '\0';
  B_wdk2st = 0;
  bVar1 = false;
LAB_000e5c10:
  if (B_dkpaw != '\0') {
    if ((B_wdkhfu == 0) && (NWDK3 < nmot)) {
      if (ctdkpaw < TDKPAW) {
        ctdkpaw = ctdkpaw + 1;
        if (bVar1) {
          uVar4 = cpaw2 + 1;
          if (0xff < uVar4) {
            uVar4 = 0xff;
          }
          cpaw2 = (byte)uVar4;
        }
        else {
          uVar4 = cpaw1 + 1;
          if (0xff < uVar4) {
            uVar4 = 0xff;
          }
          cpaw1 = (byte)uVar4;
        }
      }
      else {
        B_dkpaw = '\0';
        if (cpaw1 < cpaw2) {
          B_dkp1e = '\x01';
          B_dkp1np = '\x01';
        }
        else {
          B_dkp2e = '\x01';
          B_dkp2np = '\x01';
        }
      }
    }
    else {
      ctdkpaw = 0;
      cpaw1 = 0;
      cpaw2 = 0;
    }
  }
  if ((B_dkp2e == '\0') && ((B_dkp1e != '\0' || ((B_dkp2ev == '\0' && (B_dkp1ev != '\0')))))) {
    B_wdk2sel = 1;
  }
  else if ((B_wdkhfu == 0) ||
          ((((B_wdk12ev == '\0' || (B_dkp1e != '\0')) || (B_dkp2e != '\0')) ||
           ((B_dkp1ev != '\0' || (B_dkp2ev != '\0')))))) {
    B_wdk2sel = 0;
  }
  else if (wdk1 < wdk2) {
    B_wdk2sel = 1;
  }
  else {
    B_wdk2sel = 0;
  }
  if (((B_dkp1e == '\0') && (B_dkp2e == '\0')) && (B_dkpaw == '\0')) {
    B_dksbeg = 0;
  }
  else {
    B_dksbeg = 1;
  }
  if (((B_dkp1ev == '\0') && (B_dkp2ev == '\0')) && (B_wdk12ev == '\0')) {
    B_edks = 0;
  }
  else {
    B_edks = 1;
  }
                    /* WARNING: Read-only address (ram,0x003fdeb5) is written */
  return;
}

