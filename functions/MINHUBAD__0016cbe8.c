/*
 * Program: n42.bin
 * Function: MINHUBAD
 * Entry: 0016cbe8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MINHUBAD(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  short sVar5;
  uint uVar6;
  ushort local_58;
  ushort local_54 [2];
  ushort local_50 [2];
  ushort *local_4c;
  
  uVar1 = _DAT_003fdf86;
  if ((((DAT_003fdfb7 & 1) == 0) && ((DAT_003fdfc1 & 1) == 0)) && ((DAT_003fde95 & 1) == 0)) {
    DAT_005b8cea = '\0';
  }
  else {
    DAT_005b8cea = '\x01';
  }
  if (B_stend != 0) {
    if ((uint)DAT_005b90ab + (uint)DAT_001c5943 < 0x81) {
      DAT_005b90ab = DAT_005b90ab + DAT_001c5943;
    }
    else {
      DAT_005b90ab = 0x80;
    }
  }
  if (DAT_001cff6f == '\0') {
    iVar2 = func_0xff21949c(DAT_001cff94,&DAT_001cff96,&DAT_001cff9e,nmot_w);
    uVar3 = func_0xff2187cc(&DAT_001cff60,tmot);
    uVar3 = iVar2 * (uVar3 & 0xff) * 2;
  }
  else {
    sVar5 = ((ushort)DAT_001c5941 - (ushort)DAT_001c5942) + 0x40;
    if (sVar5 < 0) {
      sVar5 = 0;
    }
    else if (0xff < sVar5) {
      sVar5 = 0xff;
    }
    if ((ushort)DAT_001c5941 < (ushort)tmot) {
      if (DAT_003fad34 == '\0') {
        DAT_003fad34 = '\x01';
      }
      else {
LAB_0016cd38:
        if ((short)(ushort)tmot < sVar5) {
          DAT_003fad34 = '\0';
        }
      }
    }
    else if (DAT_003fad34 != '\0') goto LAB_0016cd38;
    if (DAT_003fad34 == '\x01') {
      _DAT_003fad10 = _DAT_003fad10 + _DAT_001c5936;
    }
    else if (DAT_003fad34 == '\0') {
      _DAT_003fad10 = _DAT_003fad10 + _DAT_001c5934;
    }
    if (_DAT_003fad10 < 0) {
      _DAT_003fad10 = 0;
    }
    else if (0x7fff < _DAT_003fad10) {
      _DAT_003fad10 = 0x7fff;
    }
    DAT_005b99c0 = (ushort)_DAT_003fad10;
    iVar2 = func_0xff21949c(DAT_001cff94,&DAT_001cff96,&DAT_001cff9e,nmot_w);
    uVar3 = iVar2 * (uint)DAT_005b99c0 >> 7;
  }
  uVar3 = (uVar3 * DAT_005b90ab >> 7) * (uint)DAT_005b96ea >> 0xe;
  if (uVar3 < 0x8000) {
    DAT_005b99b4 = (ushort)uVar3;
  }
  else {
    DAT_005b99b4 = 0x7fff;
  }
  if ((DAT_005b99b4 == 0) || (_DAT_001c591a < DAT_005b99b4)) {
    DAT_005b8ce1 = '\0';
  }
  else {
    DAT_005b8ce1 = '\x01';
  }
  if ((DAT_005b8cec == '\0') && (S_VSMNHBNV == '\0')) {
    DAT_005b8ce0 = '\0';
  }
  else {
    DAT_005b8ce0 = '\x01';
  }
  DAT_005b99ba = DAT_005b99b8;
  if ((DAT_005b8cec == '\0') && (DAT_005b99ba = _minhubvsnv, S_VSMNHBNV == '\0')) {
    DAT_005b99ba = 0;
  }
  else if (_DAT_001c5926 < DAT_005b99ba) {
    DAT_005b99ba = _DAT_001c5926;
  }
  DAT_005b8ce7 = 1;
  if (((((DAT_005b8daa >> 2 & 1) == 0) && (DAT_001cff69 == '\0')) ||
      ((DAT_001cff6a == '\0' && (B_mderk != 0)))) ||
     ((DAT_001cff6b == '\0' &&
      (((((DAT_003fdf6b & 1) != 0 || ((DAT_003fdf6d & 1) != 0)) || ((DAT_003fdf6f & 1) != 0)) ||
       ((DAT_003fdf71 & 1) != 0)))))) {
    DAT_005b8ce9 = '\0';
  }
  else {
    DAT_005b8ce9 = '\x01';
  }
  uVar3 = (uint)_DAT_001c5920 - (uint)_DAT_001c591c;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0xffff < (int)uVar3) {
    uVar3 = 0xffff;
  }
  if ((((DAT_001c593e < tmot) && (fofstat != '\x02')) &&
      ((((uint)nmot_w < (uint)_DAT_001c592e && ((DAT_005b8ce9 != '\0' && (B_sa == '\0')))) &&
       (B_dtes == '\0')))) &&
     (((((((B_gdvhub == 0 && (B_fa == '\0')) && (DAT_005b8cea == '\0')) &&
         (((B_bgmszs != 0 && (B_gd == '\0')) &&
          ((vfzg <= TDADVFZ &&
           ((gangi <= TDGANGMX && ((uint)nmot_w < (uint)nstat * 0x28 + (uint)_DAT_001c5938))))))))
        && (B_llr != '\0')) &&
       (((B_stend != 0 && (B_erkat == '\0')) && (_DAT_001c591a < DAT_005b99b4)))) &&
      ((uint)evhubs_kf < (uVar3 & 0xffff))))) {
    DAT_005b8ce4 = '\x01';
  }
  else {
    DAT_005b8ce4 = '\0';
  }
  if (DAT_005b8ce4 == '\0') {
LAB_0016d21c:
    if (DAT_005b8ceb != '\0') goto LAB_0016d22c;
  }
  else {
    if (DAT_005b8ceb == '\0') {
      DAT_005b8ceb = '\x01';
      DAT_005b99c2 = _DAT_001c5930;
      goto LAB_0016d21c;
    }
LAB_0016d22c:
    if (DAT_005b99c2 == 0) {
      if (((DAT_001cff6d != '\0') && (DAT_001c42e0 != '\0')) && (DAT_005b8ce0 == '\0')) {
        B_tdadon = 1;
      }
    }
    else {
      DAT_005b99c2 = DAT_005b99c2 + -1;
    }
  }
  if (DAT_001c5945 == '\0') {
    if (DAT_005b8ce4 == '\0') {
      B_tdadon = 0;
      DAT_005b8ceb = '\0';
    }
    if (((DAT_001cff6d == '\0') || (DAT_001c42e0 == '\0')) || (DAT_005b8ce0 != '\0')) {
      B_tdadon = 0;
    }
  }
  else {
    B_tdadon = 1;
  }
  if (((DAT_005b8818 & 4) == 0) && ((B_stend & 1) != 0)) {
    DAT_005b8818 = DAT_005b8818 | 8;
  }
  else {
    DAT_005b8818 = DAT_005b8818 & 0xf7;
  }
  if (((DAT_005b8818 & 1) == 0) && ((DAT_005b8ce6 & 1) != 0)) {
    DAT_005b8818 = DAT_005b8818 | 2;
  }
  else {
    DAT_005b8818 = DAT_005b8818 & 0xfd;
  }
  if ((B_stend & 1) == 0) {
    DAT_005b8818 = DAT_005b8818 & 0xfb;
  }
  else {
    DAT_005b8818 = DAT_005b8818 | 4;
  }
  if ((DAT_005b8ce6 & 1) == 0) {
    DAT_005b8818 = DAT_005b8818 & 0xfe;
  }
  else {
    DAT_005b8818 = DAT_005b8818 | 1;
  }
  if ((int)((uint)_DAT_001c5920 - (int)_DAT_001c5924) < (int)(uint)DAT_005b99b0) {
    DAT_005b8818 = DAT_005b8818 | 0x80;
  }
  else {
    DAT_005b8818 = DAT_005b8818 & 0x7f;
  }
  if (((DAT_005b8818 & 8) == 0) && ((DAT_005b8818 & 2) == 0)) {
    if ((DAT_005b8818 & 0x40) != 0) goto LAB_0016d424;
    if ((DAT_005b8818 & 0x80) != 0) goto LAB_0016d41c;
LAB_0016d4ac:
    DAT_005b8818 = DAT_005b8818 & 0xbf;
  }
  else {
LAB_0016d41c:
    DAT_003fad18 = DAT_001c5944;
LAB_0016d424:
    if ((DAT_005b8818 & 0x80) == 0) goto LAB_0016d4ac;
    if ((((B_tdadon != 0) && (B_lltd != 0)) &&
        ((uint)evhubs_kf + (uint)_DAT_001c592c < (uint)DAT_005b99b0)) &&
       ((DAT_003fad18 != '\0' && (DAT_003fad2e = DAT_003fad2e + -1, DAT_003fad2e < '\x01')))) {
      DAT_003fad18 = DAT_003fad18 + -1;
      DAT_003fad2e = '\t';
    }
    if ((DAT_005b8818 & 0x80) == 0) goto LAB_0016d4ac;
    DAT_005b8818 = DAT_005b8818 | 0x40;
  }
  if (DAT_003fad18 == '\0') {
    DAT_005b8818 = DAT_005b8818 & 0xdf;
  }
  else {
    DAT_005b8818 = DAT_005b8818 | 0x20;
  }
  if ((DAT_005b8818 & 0x20) == 0) {
    if ((DAT_005b8818 & 0x10) != 0) {
      B_ssll = 1;
    }
    DAT_005b8818 = DAT_005b8818 & 0xef;
  }
  else {
    DAT_005b8818 = DAT_005b8818 | 0x10;
  }
  if ((B_lltd == 0) && ((int)((uint)_DAT_001c5920 + (int)_DAT_001c5922) < (int)(uint)evhubi_w)) {
    DAT_005b8cdd = '\x01';
  }
  else {
    DAT_005b8cdd = '\0';
  }
  if ((B_ssll == 0) || (DAT_005b8cdd == '\0')) {
    DAT_005b8ce6 = '\0';
  }
  else {
    B_ssll = 0;
    DAT_005b8ce6 = '\x01';
  }
  if (B_pwf != '\0') {
    ssllcnt = 0;
  }
  if ((((DAT_003fc23f == '\x02') && (ssllcnt != 0)) && (DAT_003fc240 != '\x02')) &&
     ((B_ssll == 0 && ((DAT_003fc23e == '\0' || (DAT_001cff6c != '\0')))))) {
    ssllcnt = ssllcnt - 1;
    DAT_003fc23e = '\x01';
  }
  if (((DAT_005b8ce6 != '\0') && (ssllcnt + 1 < 0xff)) && (B_pwf == '\0')) {
    ssllcnt = ssllcnt + 1;
  }
  if (ssllcnt < DAT_001c593d) {
    if (DAT_003fdc2e != '\0') {
      local_58 = uVar1 & 0xd0fc | 0x2002;
      DAT_003fdc2e = '\0';
      goto LAB_0016d70c;
    }
  }
  else {
    local_58 = uVar1 & 0xd0fc | 0x2103;
    DAT_003fdc2e = '\x01';
LAB_0016d70c:
    local_54[0] = local_58;
    local_4c = local_54;
    local_50[0] = local_58;
    func_0xff222958(0x92,local_50);
  }
  DAT_003fc240 = DAT_003fc23f;
  DAT_005b93ac = 0;
  psVar4 = &DAT_005b997a;
  iVar2 = 4;
  do {
    psVar4 = psVar4 + 1;
    if (DAT_005b93ac < *psVar4) {
      DAT_005b93ac = *psVar4;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  DAT_005b99ac = DAT_005b93ac;
  DAT_005b93ae = func_0xff2192a8(_DAT_001cff72,&DAT_001cff74,&DAT_001cff7c,nstat);
  iVar2 = (int)DAT_005b99ac - (int)DAT_005b93ae;
  if (iVar2 < -0x8000) {
    iVar2 = -0x8000;
  }
  else if (0x7fff < iVar2) {
    iVar2 = 0x7fff;
  }
  sVar5 = (short)iVar2;
  if ((((DAT_005b8cea == '\0') && (B_erkat == '\0')) || (DAT_005b8cdd == '\0')) &&
     (DAT_005b8ce6 == '\0')) {
    if (B_tdadon != 0) {
      _DAT_003fad0c = _DAT_003fad0c + (int)sVar5 * (uint)_DAT_001c5912;
      if (_DAT_003fad0c < (int)((uint)_DAT_001c591e << 0x10)) {
        _DAT_003fad0c = (uint)_DAT_001c591e << 0x10;
      }
      else if ((int)((uint)_DAT_001c5920 << 0x10) < _DAT_003fad0c) {
        _DAT_003fad0c = (uint)_DAT_001c5920 << 0x10;
      }
    }
  }
  else {
    _DAT_003fad0c = (uint)_DAT_001c591e << 0x10;
  }
  DAT_005b9978 = sVar5;
  if (B_clradmhb != 0) {
    FUN_0012dd04();
    B_clradmhb = 0;
  }
  if (DAT_001cff70 == '\0') {
    DAT_005b99b0 = (ushort)((uint)_DAT_003fad0c >> 0x10);
  }
  else {
    DAT_005b997a = func_0xff2224cc(&DAT_003fad30,(int)sVar5,_DAT_001c5932);
    if (DAT_001cff6e == '\0') {
      DAT_005b997a = (short)((uint)_DAT_003fad0c >> 0x10);
    }
    if ((_DAT_001c5910 < DAT_005b997a) && (B_tdadon != 0)) {
      DAT_005b8cde = '\x01';
    }
    if ((DAT_005b8cde != '\0') && ((uint)_DAT_001c5928 + (uint)_DAT_001c592a < (uint)evhubs_kf)) {
      DAT_005b8cdf = '\x01';
    }
    if (DAT_005b8cdf == '\0') {
      DAT_005b99b0 = _DAT_001c5918;
    }
    else {
      DAT_005b99b0 = _DAT_001c5928;
    }
  }
  _DAT_003fdc32 = DAT_005b99b0;
  uVar1 = _DAT_001c5918;
  if (DAT_001cff6d != '\0') {
    uVar1 = DAT_005b99b0;
  }
  if (DAT_005b8ce0 != '\0') {
    uVar1 = DAT_005b99ba;
  }
  uVar6 = (uint)uVar1;
  uVar3 = func_0xff2190c8(DAT_001cff84,&DAT_001cff85,0x1cff8a,tmst);
  if (uVar6 < (uVar3 & 0xffff)) {
    _DAT_003fad14 = ((uVar3 & 0xffff) - uVar6) * (uint)DAT_005b99b4 >> 0xf;
    if (_DAT_003fad14 < (uVar3 & 0xffff)) {
      _DAT_003fad14 = (uVar3 & 0xffff) - _DAT_003fad14;
    }
    else {
      _DAT_003fad14 = 0;
    }
  }
  else {
    _DAT_003fad14 = ((uVar6 - (uVar3 & 0xffff)) * (uint)DAT_005b99b4 >> 0xf) + (uVar3 & 0xffff);
  }
  if (DAT_001c42e0 == '\0') {
    minhub_w = 0;
  }
  else if (_DAT_003fad14 < 0x10000) {
    minhub_w = (word)_DAT_003fad14;
  }
  else {
    minhub_w = 0xffff;
  }
  DAT_005b99b6 = DAT_005b99bc;
  uVar3 = (uint)DAT_005b99b0 - (uint)DAT_005b99bc;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0xffff < (int)uVar3) {
    uVar3 = 0xffff;
  }
  DAT_005b99b2 = (short)uVar3;
  if ((((uint)_DAT_001c5914 <= (uVar3 & 0xffff)) || (DAT_005b8ce6 != '\0')) &&
     (DAT_005b99ae = _DAT_001c5916, DAT_005b8ce6 != '\0')) {
    DAT_005b8ce5 = DAT_005b8ce6;
  }
  if (B_tdadon == 0) {
    if (DAT_005b8ce5 == '\0') goto LAB_0016db98;
  }
  else if (DAT_005b99ae != 0) {
    DAT_005b8ce5 = '\0';
    DAT_005b99ae = DAT_005b99ae + -1;
  }
  DAT_003fc23f = '\x01';
LAB_0016db98:
  if ((DAT_005b99ae == 0) && (DAT_005b8ce5 == '\0')) {
    DAT_003fc23f = '\x02';
  }
  DAT_005b99bc = DAT_005b99b0;
  if ((DAT_005b8ce1 == '\0') && (DAT_005b8ce6 == '\0')) {
    if (DAT_003fc23f != '\x01') {
      DAT_005b8ce8 = 0;
    }
  }
  else {
    DAT_005b8ce8 = 1;
  }
  return;
}

