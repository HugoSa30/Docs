/*
 * Program: n42.bin
 * Function: FUN_0016dde8
 * Entry: 0016dde8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016dde8(void)

{
  short sVar2;
  uint uVar1;
  ushort uVar3;
  int iVar4;
  
  nmot_tmp = nmot_w;
  rl_tmp = _rl_w;
  DAT_003fad54 = zwoutzyl;
  DAT_003fad55 = DAT_005b921d;
  DAT_003fad56 = DAT_005b921e;
  DAT_003fad57 = DAT_005b921f;
  sVar2 = func_0xff2189bc(&DAT_001c5bd0,tabgm_w);
  B_fbstabgm = sVar2 != 0;
  if ((uint)_DAT_001c5c8a < (uint)tabgm_w) {
    B_tabgatb = 1;
  }
  else if ((int)(uint)tabgm_w < (int)((uint)_DAT_001c5c8a - (uint)_DAT_001c5c88)) {
    B_tabgatb = 0;
  }
  if ((uint)_DAT_001c5c8c < (uint)DAT_005b868e) {
    B_tkatatb = 1;
  }
  else if ((int)(uint)DAT_005b868e < (int)((uint)_DAT_001c5c8c - (uint)_DAT_001c5c88)) {
    B_tkatatb = 0;
  }
  if ((((B_tabgatb == 0) && (B_tkatatb == 0)) || (!(bool)B_fbstabgm)) || (DAT_001c5c8e != '\x01')) {
    B_atbeg = 0;
  }
  else {
    B_atbeg = 1;
  }
  if (((B_tabgatb == 0) && (B_tkatatb == 0)) || ((!(bool)B_fbstabgm || (DAT_001c5c8e != '\x02')))) {
    B_atbegl = 0;
  }
  else {
    B_atbegl = 1;
  }
  if (B_vl == 0) {
    _DAT_003fad58 = func_0xff21984c(0x1c5a02,nmot_tmp,rl_tmp);
  }
  else {
    _DAT_003fad58 = func_0xff2189bc(&KLLATBVL,nmot_tmp);
  }
  latb_w = _DAT_003fad58;
  uVar3 = (short)(char)DAT_003fad54 + (short)DAT_003fad56;
  zwoutm = (char)((short)uVar3 >> 1) + ((short)uVar3 < 0 && (uVar3 & 1) != 0);
  _DAT_003fad6e = (short)DAT_003fad55 + (short)DAT_003fad57;
  zwoutm2 = (char)((short)_DAT_003fad6e >> 1) +
            ((short)_DAT_003fad6e < 0 && (_DAT_003fad6e & 1) != 0);
  if (B_vl == 0) {
    if (nmot_tmp < 0x9f60) {
      DAT_003fad7c = (undefined)(nmot_tmp / 0xa0);
    }
    else {
      DAT_003fad7c = 0xff;
    }
    if (rl_tmp < 0x1fe0) {
      DAT_003fad7d = (undefined)((int)(uint)rl_tmp >> 5);
    }
    else {
      DAT_003fad7d = 0xff;
    }
    zwatb = func_0xff219ee0(KFZWATBTL,&DAT_001c5af4,DAT_001c5af3,&DAT_001c5b04,&KFZWATBTL_start,
                            DAT_003fad7c,DAT_003fad7d);
    _DAT_003fad70 = (short)(char)zwatb;
    if ((0x7e < _DAT_003fad70) || (_DAT_003fad70 < -0x7f)) {
      zwatb = 0;
    }
  }
  else {
    _DAT_003fad6e = func_0xff2192a8(_KLZWATBVL,&DAT_001c5c48,&DAT_001c5c68,nmot_tmp);
    if (((short)_DAT_003fad6e < 0x7f) && (-0x80 < (short)_DAT_003fad6e)) {
      zwatb = (byte)_DAT_003fad6e;
    }
    else {
      zwatb = 0;
    }
  }
  iVar4 = (int)(char)zwatb - (int)(char)zwoutm;
  if (iVar4 < -0x80) {
    iVar4 = -0x80;
  }
  else if (0x7f < iVar4) {
    iVar4 = 0x7f;
  }
  DAT_003fad68 = (byte)iVar4;
  iVar4 = (int)(char)zwatb - (int)(char)zwoutm2;
  if (iVar4 < -0x80) {
    iVar4 = -0x80;
  }
  else if (0x7f < iVar4) {
    iVar4 = 0x7f;
  }
  DAT_003fad69 = (byte)iVar4;
  dzwatb = DAT_003fad68;
  if ((char)DAT_003fad68 < '\x01') {
    dzwatb = 0;
  }
  dzwatb2 = DAT_003fad69;
  if ((char)DAT_003fad69 < '\x01') {
    dzwatb2 = 0;
  }
  zwoutm_tmp = (word)(char)zwoutm;
  uVar1 = func_0xff21a9c0(_KFZWDLATB,&DAT_001cffb4,_DAT_001cffb2,&DAT_001cffc4,&DAT_001cffd4,
                          (int)(short)zwoutm_tmp,nmot_tmp);
  _DAT_003fad74 = (uint)dzwatb * (uVar1 & 0xffff) * 0xbf;
  zwoutm_tmp = (word)(char)zwoutm2;
  uVar1 = func_0xff21a9c0(_KFZWDLATB,&DAT_001cffb4,_DAT_001cffb2,&DAT_001cffc4,&DAT_001cffd4,
                          (int)(short)zwoutm_tmp,nmot_tmp);
  uVar1 = (uint)dzwatb2 * (uVar1 & 0xffff) * 0xbf;
  if (_DAT_003fad74 >> 8 < 0xffff) {
    dlatbnf_w = (word)(_DAT_003fad74 >> 8);
  }
  else {
    dlatbnf_w = 0xffff;
  }
  _DAT_003fad78 = uVar1 >> 8;
  if (_DAT_003fad78 < 0xffff) {
    dlatbnf2_w = (word)(uVar1 >> 8);
  }
  else {
    dlatbnf2_w = 0xffff;
  }
  _DAT_003fad74 = _DAT_003fad74 >> 8;
  _DAT_003fad64 = func_0xff2189bc(&DAT_001c5c24,nmot_tmp);
  if (B_fbstabgm == 0) {
    _DAT_003fad5c = (uint)dlatbnf_w << 0x10;
    _DAT_003fad60 = (uint)dlatbnf2_w << 0x10;
  }
  if (((B_dash == '\0') && (B_gsaf == '\0')) && (B_fil == '\0')) {
    dlatb_w = func_0xff222514(&DAT_003fad5c,dlatbnf_w,_DAT_003fad64);
    dlatb2_w = func_0xff222514(&DAT_003fad60,dlatbnf2_w,_DAT_003fad64);
  }
  else {
    dlatb_w = (word)((uint)_DAT_003fad5c >> 0x10);
    dlatb2_w = (word)((uint)_DAT_003fad60 >> 0x10);
  }
  if (dlatb_w < latb_w) {
    _DAT_003fad6a = latb_w - dlatb_w;
  }
  else {
    _DAT_003fad6a = latb_w;
  }
  if (dlatb2_w < latb_w) {
    _DAT_003fad6c = latb_w - dlatb2_w;
  }
  else {
    _DAT_003fad6c = latb_w;
  }
  _DAT_003fad66 = func_0xff2189bc(&DAT_001c5bd0,tabgm_w);
  if (lamfa_w < 0x2000) {
    _DAT_003fad7e = lamfa_w << 3;
  }
  else {
    _DAT_003fad7e = 0xffff;
  }
  uVar1 = (uint)_DAT_003fad7e;
  _DAT_003fad88 = _DAT_003fad6a - uVar1;
  _DAT_003fad80 = ((int)((_DAT_003fad6a - uVar1) * (uint)_DAT_003fad66) >> 0x12) + ((int)uVar1 >> 3)
  ;
  _DAT_003fad8c = _DAT_003fad6c - uVar1;
  _DAT_003fad84 = ((int)((_DAT_003fad6c - uVar1) * (uint)_DAT_003fad66) >> 0x12) + ((int)uVar1 >> 3)
  ;
  if ((B_atbeg == 0) && (B_atbegl == 0)) {
    lamatb_w = 0x1000;
    lamatb2_w = 0x1000;
  }
  else {
    if ((_DAT_003fad80 < 0xffff) && (0 < _DAT_003fad80)) {
      lamatb_w = (word)_DAT_003fad80;
    }
    else {
      lamatb_w = 0xffff;
    }
    if ((_DAT_003fad84 < 0xffff) && (0 < _DAT_003fad84)) {
      lamatb2_w = (word)_DAT_003fad84;
    }
    else {
      lamatb2_w = 0xffff;
    }
  }
  uVar1 = (uint)lamatb_w;
  if (uVar1 == 0) {
    fakatb_w = 0;
  }
  else if (uVar1 < 0x101) {
    fakatb_w = 0xffff;
  }
  else {
    fakatb_w = (word)(0x1000000 / uVar1);
  }
  uVar1 = (uint)lamatb2_w;
  if (uVar1 == 0) {
    fakatb2_w = 0;
  }
  else if (uVar1 < 0x101) {
    fakatb2_w = 0xffff;
  }
  else {
    fakatb2_w = (word)(0x1000000 / uVar1);
  }
  return;
}

