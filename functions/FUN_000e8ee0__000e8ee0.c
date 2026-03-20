/*
 * Program: n42.bin
 * Function: FUN_000e8ee0
 * Entry: 000e8ee0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e8ee0(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  word wVar4;
  int iVar5;
  ushort local_38;
  word wStack_36;
  
  iVar5 = (uint)_USABGL - (uint)uulsuv_w;
  if (iVar5 < -0x8000) {
    iVar5 = -0x8000;
  }
  else if (0x7fff < iVar5) {
    iVar5 = 0x7fff;
  }
  iVar5 = (int)(short)iVar5;
  if (iVar5 < 0x201) {
    if (iVar5 < -0x200) {
      iVar5 = -0x200;
    }
  }
  else {
    iVar5 = 0x200;
  }
  if (B_lsuab == '\0') {
    DAT_003fb000 = TVLENA;
    DAT_003fb013 = DAT_003fb013 & 0xdf;
  }
  else if (DAT_003fb000 == '\0') {
    DAT_003fb013 = DAT_003fb013 | 0x20;
  }
  else {
    DAT_003fb000 = DAT_003fb000 + -1;
    DAT_003fb013 = DAT_003fb013 & 0xdf;
  }
  if ((DAT_003fb013 & 0x20) != 0) {
    uVar2 = FUN_000a7f84(_ZFDUSVK,iVar5,(int)_DAT_003fdc6c,_DAT_003fdc6c & 0xffff);
    _DAT_003fdc6c = (short)(uVar2 >> 0x10);
    _kusvk_w = _DAT_003fdc6c;
    _DAT_003fdc6c = uVar2;
  }
  if ((CWGGLSU & 1) == 0) {
    iVar5 = (int)_kusvk_w + (uint)uulsuv_w;
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
    else if (0x7fff < iVar5) {
      iVar5 = 0x7fff;
    }
    _DAT_003faff4 = (short)iVar5;
  }
  else {
    uVar2 = FUN_000a7f20(_ZFUULSU,uulsuv_w,_DAT_003faff0,_DAT_003faff0 & 0xffff);
    _DAT_003faff0 = (ushort)(uVar2 >> 0x10);
    uulsuf_w = _DAT_003faff0;
    iVar5 = (int)_kusvk_w + (uint)_DAT_003faff0;
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
    else if (0x7fff < iVar5) {
      iVar5 = 0x7fff;
    }
    _DAT_003faff4 = (short)iVar5;
    _DAT_003faff0 = uVar2;
  }
  iVar5 = (int)_DAT_003faff4 - (uint)_USABGL;
  if (iVar5 < -0x8000) {
    iVar5 = -0x8000;
  }
  else if (0x7fff < iVar5) {
    iVar5 = 0x7fff;
  }
  _DAT_003faff4 = (short)iVar5;
  iVar5 = (int)((int)_DAT_003faff4 * (uint)_DAT_003faffa) >> 0xf;
  if (iVar5 < -0x8000) {
    iVar5 = -0x8000;
  }
  else if (0x7fff < iVar5) {
    iVar5 = 0x7fff;
  }
  uVar2 = (uint)_USABGL + (int)(short)iVar5;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0xffff < (int)uVar2) {
    uVar2 = 0xffff;
  }
  usvkk_w = (word)uVar2;
  _DAT_003faff8 = _DAT_003faff4;
  lamsonb_w = calc_value_from_y(&LALIUS,uVar2 & 0xffff);
  lamsoni_w = lamsonb_w;
  if ((B_sls != '\0') && (B_sbbvk != '\0')) {
    uVar2 = (flamsls + 0x180) * (uint)lamsonb_w;
    wStack_36 = (word)(uVar2 >> 9);
    local_38 = (ushort)(uVar2 >> 0x19);
    if (local_38 != 0) {
      wStack_36 = 0xffff;
    }
    lamsoni_w = wStack_36;
  }
  iVar5 = lamsonb_w - 0x1000;
  if (iVar5 < -0x8000) {
    iVar5 = -0x8000;
  }
  else if (0x7fff < iVar5) {
    iVar5 = 0x7fff;
  }
  dlam_w = (word)iVar5;
  wVar4 = dlam_w;
  if ((short)dlam_w < 0) {
    if (dlam_w == 0x8000) {
      wVar4 = 0x7fff;
    }
    else {
      wVar4 = -dlam_w;
    }
  }
  if ((DAT_003fb014 & 2) == 0) {
    DAT_003fb014 = DAT_003fb014 & 0xfb;
  }
  else {
    DAT_003fb014 = DAT_003fb014 | 4;
  }
  if (B_llr == '\0') {
    _DAT_003faffc = _TVABGL;
    DAT_003fb014 = DAT_003fb014 & 0xfd;
  }
  else if (_DAT_003faffc == 0) {
    DAT_003fb014 = DAT_003fb014 | 2;
  }
  else {
    _DAT_003faffc = _DAT_003faffc + -1;
  }
  if (((DAT_003fb013 & 8) == 0) && (B_llr != '\0')) {
    if (((DAT_003fb014 & 2) != 0) && ((DAT_003fb014 & 4) == 0)) {
      B_abll = B_abll | 1;
    }
  }
  else {
    B_abll = B_abll & 0xfe;
  }
  if ((((B_sbbvk == '\0') || (B_llr == '\0')) || ((B_abll & 1) == 0)) || (_SDLAA <= (short)wVar4)) {
    DAT_003fb013 = DAT_003fb013 & 0x77;
    DAT_003faffe = 0;
  }
  else if (DAT_003faffe < TABGL) {
    DAT_003faffe = DAT_003faffe + 1;
    DAT_003fb013 = DAT_003fb013 | 0x80;
  }
  else {
    DAT_003fb013 = DAT_003fb013 | 0x88;
  }
  if ((((uulsuv_w < _ULSUAMX) && (_ULSUAMN < uulsuv_w)) && ((B_abll & 4) != 0)) ||
     (((DAT_003fb013 & 8) == 0 && ((DAT_003fb013 & 0x80) != 0)))) {
    B_lsuab = '\x01';
  }
  else {
    B_lsuab = '\0';
  }
  if (((B_lsuab == '\0') && (_SDLAB < (short)wVar4)) && (B_hsv != '\0')) {
    if (DAT_003fb001 == '\0') {
      DAT_003fb013 = DAT_003fb013 | 2;
    }
    else {
      DAT_003fb001 = DAT_003fb001 + -1;
      DAT_003fb013 = DAT_003fb013 & 0xfd;
    }
  }
  else {
    DAT_003fb001 = TSTBB;
    DAT_003fb013 = DAT_003fb013 & 0xfd;
  }
  if ((((B_elsuv == '\0') && (B_elsu == '\0')) &&
      (((B_ehlsu == '\0' && (((B_abll & 4) == 0 && (B_st == '\0')))) && (B_hsv != '\0')))) &&
     (UBGGLSU <= ub)) {
    if ((DAT_003fb013 & 2) != 0) {
      B_sbbvk = '\x01';
    }
  }
  else {
    B_sbbvk = '\0';
  }
  iVar5 = (uint)_USABGL - (uint)uulsuv2_w;
  if (iVar5 < -0x8000) {
    iVar5 = -0x8000;
  }
  else if (0x7fff < iVar5) {
    iVar5 = 0x7fff;
  }
  iVar5 = (int)(short)iVar5;
  if (iVar5 < 0x201) {
    if (iVar5 < -0x200) {
      iVar5 = -0x200;
    }
  }
  else {
    iVar5 = 0x200;
  }
  if (B_lsuab2 == '\0') {
    DAT_003fb011 = TVLENA;
    DAT_003fb013 = DAT_003fb013 & 0xbf;
  }
  else if (DAT_003fb011 == '\0') {
    DAT_003fb013 = DAT_003fb013 | 0x40;
  }
  else {
    DAT_003fb011 = DAT_003fb011 + -1;
    DAT_003fb013 = DAT_003fb013 & 0xbf;
  }
  if ((DAT_003fb013 & 0x40) != 0) {
    uVar2 = FUN_000a7f84(_ZFDUSVK,iVar5,(int)_DAT_003fdc70,_DAT_003fdc70 & 0xffff);
    _DAT_003fdc70 = (short)(uVar2 >> 0x10);
    _kusvk2_w = _DAT_003fdc70;
    _DAT_003fdc70 = uVar2;
  }
  if ((CWGGLSU & 1) == 0) {
    iVar5 = (int)_kusvk2_w + (uint)uulsuv2_w;
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
    else if (0x7fff < iVar5) {
      iVar5 = 0x7fff;
    }
    _DAT_003fb008 = (short)iVar5;
  }
  else {
    uVar2 = FUN_000a7f20(_ZFUULSU,uulsuv2_w,_DAT_003fb004,_DAT_003fb004 & 0xffff);
    _DAT_003fb004 = (ushort)(uVar2 >> 0x10);
    uulsuf2_w = _DAT_003fb004;
    iVar5 = (int)_kusvk2_w + (uint)_DAT_003fb004;
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
    else if (0x7fff < iVar5) {
      iVar5 = 0x7fff;
    }
    _DAT_003fb008 = (short)iVar5;
    _DAT_003fb004 = uVar2;
  }
  iVar5 = (int)_DAT_003fb008 - (uint)_USABGL;
  if (iVar5 < -0x8000) {
    iVar5 = -0x8000;
  }
  else if (0x7fff < iVar5) {
    iVar5 = 0x7fff;
  }
  _DAT_003fb008 = (short)iVar5;
  iVar5 = (int)((int)_DAT_003fb008 * (uint)_DAT_003fb00e) >> 0xf;
  if (iVar5 < -0x8000) {
    iVar5 = -0x8000;
  }
  else if (0x7fff < iVar5) {
    iVar5 = 0x7fff;
  }
  uVar2 = (uint)_USABGL + (int)(short)iVar5;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0xffff < (int)uVar2) {
    uVar2 = 0xffff;
  }
  usvkk2_w = (word)uVar2;
  _DAT_003fb00c = _DAT_003fb008;
  lamsoni2_w = calc_value_from_y(&LALIUS,uVar2 & 0xffff);
  lamsonb2_w = lamsoni2_w;
  uVar2 = (uint)lamsoni2_w;
  if ((B_sls != '\0') && (B_sbbvk2 != '\0')) {
    uVar3 = (flamsls + 0x180) * uVar2;
    wStack_36 = (word)(uVar3 >> 9);
    local_38 = (ushort)(uVar3 >> 0x19);
    if (local_38 != 0) {
      wStack_36 = 0xffff;
    }
    lamsoni2_w = wStack_36;
  }
  iVar5 = uVar2 - 0x1000;
  if (iVar5 < -0x8000) {
    iVar5 = -0x8000;
  }
  else if (0x7fff < iVar5) {
    iVar5 = 0x7fff;
  }
  wVar4 = (word)iVar5;
  dlam2_w = wVar4;
  if ((short)wVar4 < 0) {
    if (wVar4 == 0x8000) {
      wVar4 = 0x7fff;
    }
    else {
      wVar4 = -wVar4;
    }
  }
  if (((DAT_003fb013 & 0x10) == 0) && (B_llr != '\0')) {
    if (((DAT_003fb014 & 2) != 0) && ((DAT_003fb014 & 4) == 0)) {
      B_abll = B_abll | 2;
    }
  }
  else {
    B_abll = B_abll & 0xfd;
  }
  if ((((B_sbbvk2 == '\0') || (B_llr == '\0')) || ((B_abll & 2) == 0)) || (_SDLAA <= (short)wVar4))
  {
    DAT_003fb014 = DAT_003fb014 & 0xfe;
    bVar1 = false;
    DAT_003fb013 = DAT_003fb013 & 0xef;
    DAT_003fb010 = 0;
  }
  else {
    DAT_003fb014 = DAT_003fb014 | 1;
    bVar1 = true;
    if (DAT_003fb010 < TABGL) {
      DAT_003fb010 = DAT_003fb010 + 1;
    }
    else {
      DAT_003fb013 = DAT_003fb013 | 0x10;
    }
  }
  if ((((uulsuv2_w < _ULSUAMX) && (_ULSUAMN < uulsuv2_w)) && ((B_abll & 4) != 0)) ||
     (((DAT_003fb013 & 0x10) == 0 && (bVar1)))) {
    B_lsuab2 = 1;
    bVar1 = true;
  }
  else {
    B_lsuab2 = 0;
    bVar1 = false;
  }
  if (((bVar1) || ((short)wVar4 <= _SDLAB)) || (B_hsv2 == '\0')) {
    DAT_003fb012 = TSTBB;
    DAT_003fb013 = DAT_003fb013 & 0xfb;
  }
  else if (DAT_003fb012 == '\0') {
    DAT_003fb013 = DAT_003fb013 | 4;
  }
  else {
    DAT_003fb012 = DAT_003fb012 + -1;
    DAT_003fb013 = DAT_003fb013 & 0xfb;
  }
  if ((((B_elsuv == '\0') && (B_elsu2 == '\0')) &&
      ((B_ehlsu2 == '\0' && (((B_abll & 4) == 0 && (B_st == '\0')))))) &&
     ((B_hsv2 != '\0' && (UBGGLSU <= ub)))) {
    if ((DAT_003fb013 & 4) != 0) {
      B_sbbvk2 = '\x01';
    }
  }
  else {
    B_sbbvk2 = '\0';
  }
  return;
}

