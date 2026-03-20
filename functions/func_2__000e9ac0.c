/*
 * Program: n42.bin
 * Function: func_2
 * Entry: 000e9ac0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void func_2(void)

{
  uint uVar1;
  
  uVar1 = FUN_00099c74(0);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  wub = (byte)(uVar1 >> 2);
  uVar1 = FUN_00099c74(2);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  wtmot = (byte)(uVar1 >> 2);
  uVar1 = FUN_00099c74(3);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  wtans = (byte)(uVar1 >> 2);
  if (B_adcc_um == '\0') {
    uVar1 = FUN_00099c74(4);
    if ((uVar1 & 0xffff0000) == 0) {
      upwg1_w = (word)uVar1;
    }
    else {
      upwg1_w = 0;
    }
    if (B_adcc_um == '\0') {
      uVar1 = FUN_00099c74(5);
      if ((uVar1 & 0xffff0000) == 0) {
        upwg2_w = (word)uVar1;
      }
      else {
        upwg2_w = 0;
      }
    }
  }
  uVar1 = FUN_00099c74(9);
  if ((uVar1 & 0xffff0000) == 0) {
    udsu_w = (word)uVar1;
  }
  else {
    udsu_w = 0;
  }
  uVar1 = FUN_00099c74(10);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  uhsv = (byte)(uVar1 >> 2);
  uVar1 = FUN_00099c74(0xb);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  uhsv2 = (byte)(uVar1 >> 2);
  uVar1 = FUN_00099c74(0xc);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  uhsh = (byte)(uVar1 >> 2);
  uVar1 = FUN_00099c74(0xd);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  uhsh2 = (byte)(uVar1 >> 2);
  uVar1 = FUN_00099c74(0x12);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  wtka = (byte)(uVar1 >> 2);
  uVar1 = FUN_00099c74(0x13);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  DAT_005b9105 = (undefined)(uVar1 >> 2);
  uVar1 = FUN_00099c74(0x17);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  DAT_005b9106 = (undefined)(uVar1 >> 2);
  uVar1 = FUN_00099c74(0x18);
  if ((uVar1 & 0xffff0000) == 0) {
    Disa_spg = (word)uVar1;
  }
  else {
    Disa_spg = 0;
  }
  uVar1 = FUN_00099c74(0x19);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  DAT_005b9100 = (undefined)(uVar1 >> 2);
  uVar1 = FUN_00099c74(0x1a);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  DAT_005b9101 = (char)(uVar1 >> 2);
  return;
}

