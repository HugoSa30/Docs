/*
 * Program: n42.bin
 * Function: maf_1
 * Entry: 00134040
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maf_1(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = func_0xff209c74(1);
  uVar1 = uVar2 & 0xffff;
  uVar3 = uVar1 >> 1;
  uhfm_w = (word)uVar3;
  if ((DAT_003fae1c & 1) == 0) {
    _DAT_003fb068 = _DAT_003fb068 + uVar1;
    _DAT_003fb070 = _DAT_003fb070 + uVar1 * uVar1;
    if (uVar3 == 0) {
      uVar3 = (uint)_MLHFM;
    }
    else if (uVar3 < 0x200) {
      uVar3 = (uint)*(ushort *)(&MLHFM + (uVar2 & 0xfffe));
    }
    else {
      uVar3 = (uint)_DAT_001c78b8;
    }
    _mlhfma_w = (undefined2)uVar3;
    _DAT_003fb060 = _DAT_003fb060 + uVar3;
    _DAT_003fb078 = _DAT_003fb078 + 1;
  }
  else {
    _DAT_003fb06c = _DAT_003fb06c + uVar1;
    _DAT_003fb074 = _DAT_003fb074 + uVar1 * uVar1;
    if (uVar3 == 0) {
      uVar3 = (uint)_MLHFM;
    }
    else if (uVar3 < 0x200) {
      uVar3 = (uint)*(ushort *)(&MLHFM + (uVar2 & 0xfffe));
    }
    else {
      uVar3 = (uint)_DAT_001c78b8;
    }
    _mlhfma_w = (undefined2)uVar3;
    _DAT_003fb064 = _DAT_003fb064 + uVar3;
    _DAT_003fb07a = _DAT_003fb07a + 1;
  }
  uVar3 = func_0xff209c74(6);
  if ((uVar3 & 0xffff0000) == 0) {
    uVar3 = uVar3 & 0xffff;
  }
  else {
    uVar3 = 0;
  }
  udkp1_w = (word)(uVar3 << 2);
  uVar3 = func_0xff209c74(7);
  if ((uVar3 & 0xffff0000) == 0) {
    uVar3 = uVar3 & 0xffff;
  }
  else {
    uVar3 = 0;
  }
  udkp2_w = (word)(uVar3 << 2);
  uVar3 = func_0xff209c74(8);
  if ((uVar3 & 0xffff0000) == 0) {
    udkp1v_w = (word)uVar3;
  }
  else {
    udkp1v_w = 0;
  }
  func_0xff237298();
  uVar3 = func_0xff209c74(0x16);
  if ((uVar3 & 0xffff0000) == 0) {
    uddss_w = (word)uVar3;
  }
  else {
    uddss_w = 0;
  }
  uVar3 = func_0xff209c74(0x1c);
  if ((uVar3 & 0xffff0000) == 0) {
    uuptes_w = (word)uVar3;
  }
  else {
    uuptes_w = 0;
  }
  uVar3 = func_0xff209c74(0);
  if ((uVar3 & 0xffff0000) == 0) {
    uVar3 = uVar3 & 0xffff;
  }
  else {
    uVar3 = 0;
  }
  wub = (byte)(uVar3 >> 2);
  uVar3 = func_0xff209c74(2);
  if ((uVar3 & 0xffff0000) == 0) {
    uVar3 = uVar3 & 0xffff;
  }
  else {
    uVar3 = 0;
  }
  wtmot = (byte)(uVar3 >> 2);
  uVar3 = func_0xff209c74(3);
  if ((uVar3 & 0xffff0000) == 0) {
    uVar3 = uVar3 & 0xffff;
  }
  else {
    uVar3 = 0;
  }
  wtans = (byte)(uVar3 >> 2);
  if (B_adcc_um == '\0') {
    uVar3 = func_0xff209c74(4);
    if ((uVar3 & 0xffff0000) == 0) {
      upwg1_w = (word)uVar3;
    }
    else {
      upwg1_w = 0;
    }
    if (B_adcc_um == '\0') {
      uVar3 = func_0xff209c74(5);
      if ((uVar3 & 0xffff0000) == 0) {
        upwg2_w = (word)uVar3;
      }
      else {
        upwg2_w = 0;
      }
    }
  }
  uVar3 = func_0xff209c74(9);
  if ((uVar3 & 0xffff0000) == 0) {
    udsu_w = (word)uVar3;
  }
  else {
    udsu_w = 0;
  }
  uVar3 = func_0xff209c74(10);
  if ((uVar3 & 0xffff0000) == 0) {
    uVar3 = uVar3 & 0xffff;
  }
  else {
    uVar3 = 0;
  }
  uhsv = (byte)(uVar3 >> 2);
  uVar3 = func_0xff209c74(0xb);
  if ((uVar3 & 0xffff0000) == 0) {
    uVar3 = uVar3 & 0xffff;
  }
  else {
    uVar3 = 0;
  }
  uhsv2 = (byte)(uVar3 >> 2);
  uVar3 = func_0xff209c74(0xc);
  if ((uVar3 & 0xffff0000) == 0) {
    uVar3 = uVar3 & 0xffff;
  }
  else {
    uVar3 = 0;
  }
  uhsh = (byte)(uVar3 >> 2);
  uVar3 = func_0xff209c74(0xd);
  if ((uVar3 & 0xffff0000) == 0) {
    uVar3 = uVar3 & 0xffff;
  }
  else {
    uVar3 = 0;
  }
  uhsh2 = (byte)(uVar3 >> 2);
  uVar3 = func_0xff209c74(0x12);
  if ((uVar3 & 0xffff0000) == 0) {
    uVar3 = uVar3 & 0xffff;
  }
  else {
    uVar3 = 0;
  }
  wtka = (byte)(uVar3 >> 2);
  uVar3 = func_0xff209c74(0x13);
  if ((uVar3 & 0xffff0000) == 0) {
    uVar3 = uVar3 & 0xffff;
  }
  else {
    uVar3 = 0;
  }
  DAT_005b9105 = (undefined)(uVar3 >> 2);
  uVar3 = func_0xff209c74(0x17);
  if ((uVar3 & 0xffff0000) == 0) {
    uVar3 = uVar3 & 0xffff;
  }
  else {
    uVar3 = 0;
  }
  DAT_005b9106 = (undefined)(uVar3 >> 2);
  uVar3 = func_0xff209c74(0x18);
  if ((uVar3 & 0xffff0000) == 0) {
    Disa_spg = (word)uVar3;
  }
  else {
    Disa_spg = 0;
  }
  uVar3 = func_0xff209c74(0x19);
  if ((uVar3 & 0xffff0000) == 0) {
    uVar3 = uVar3 & 0xffff;
  }
  else {
    uVar3 = 0;
  }
  DAT_005b9100 = (undefined)(uVar3 >> 2);
  uVar3 = func_0xff209c74(0x1a);
  if ((uVar3 & 0xffff0000) == 0) {
    uVar3 = uVar3 & 0xffff;
  }
  else {
    uVar3 = 0;
  }
  DAT_005b9101 = (char)(uVar3 >> 2);
  return;
}

