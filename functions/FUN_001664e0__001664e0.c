/*
 * Program: n42.bin
 * Function: FUN_001664e0
 * Entry: 001664e0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x001668f0) */
/* WARNING: Removing unreachable block (ram,0x001666b8) */
/* WARNING: Removing unreachable block (ram,0x00166750) */
/* WARNING: Removing unreachable block (ram,0x00166988) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001664e0(void)

{
  uint unaff_r28;
  uint uVar1;
  uint uVar2;
  undefined2 local_20;
  
  uVar2 = (uint)ub;
  if ((B_stend == '\0') || (UBHS < uVar2)) {
    B_enhlshk = '\0';
  }
  else {
    B_enhlshk = '\x01';
  }
  B_rehs = DAT_003faadc != '\0';
  if ((bool)B_rehs) {
    DAT_003faadc = DAT_003faadc + -1;
  }
  else {
    DAT_003faadc = 'd';
  }
  uVar2 = uVar2 * uVar2 * 0x8000;
  local_20 = (undefined2)(uVar2 >> 0x10);
  uVar2 = func_0xff217b40(local_20,uVar2 & 0xffff,(uint)UHSN * (uint)UHSN);
  uVar2 = uVar2 & 0xffff;
  if (B_stend == '\0') {
    DAT_003faae4 = DAT_003faae4 & 0xbf;
    DAT_003faadd = TVHSH;
  }
  else if (DAT_003faadd == '\0') {
    DAT_003faae4 = DAT_003faae4 | 0x40;
  }
  else {
    DAT_003faadd = DAT_003faadd + -1;
    DAT_003faae4 = DAT_003faae4 & 0xbf;
  }
  if (B_atmtpk == '\0') {
    thhat = THHA;
  }
  else {
    thhat = func_0xff2189bc(&THSHKTK,tanhkm_w);
  }
  if (((ATMbits & 1) == 0) || ((DAT_003faae4 & 0x40) != 0)) {
    uVar1 = thhat + 5;
    if (0xff < uVar1) {
      uVar1 = 0xff;
    }
    uVar1 = (uVar2 * (uVar1 & 0xff) >> 0xf) - 10;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0xffff < (int)uVar1) {
      uVar1 = 0xffff;
    }
    if (0xff < (uVar1 & 0xffff)) {
      uVar1 = 0xff;
    }
    thhaist = (byte)uVar1;
  }
  else {
    thhaist = THHAWU;
  }
  if (B_enhlshk == '\0') {
    phlsnh = 0;
  }
  else {
    uVar1 = thhaist + 10;
    if (0xff < uVar1) {
      uVar1 = 0xff;
    }
    unaff_r28 = uVar2 * 1000 >> 0xf;
    if (((uVar1 & 0xff) == 0) || (uVar1 = unaff_r28 / (uVar1 & 0xff), 0xffff < uVar1)) {
      uVar1 = 0xffff;
    }
    phlsnh = (byte)uVar1;
  }
  if ((((DAT_003fdf1f & 1) == 0) && ((DAT_003fdf1f >> 1 & 1) != 0)) &&
     ((PHLSNHMN <= phlsnh || (_TANHKMMN <= tanhkm_w)))) {
    if (DAT_003faae0 < THSHA) {
      DAT_003faae0 = DAT_003faae0 + 1;
    }
    else {
      B_hsha = 1;
    }
  }
  else {
    DAT_003faae0 = 0;
    B_hsha = 0;
  }
  if (B_atmtpk2 == '\0') {
    thhat2 = THHA2;
  }
  else {
    thhat2 = func_0xff2189bc(&THSHKTK2,tanhkm2_w);
  }
  if (((ATMbits & 2) == 0) || ((DAT_003faae4 & 0x40) != 0)) {
    uVar1 = thhat2 + 5;
    if (0xff < uVar1) {
      uVar1 = 0xff;
    }
    uVar2 = (uVar2 * (uVar1 & 0xff) >> 0xf) - 10;
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    else if (0xffff < (int)uVar2) {
      uVar2 = 0xffff;
    }
    if (0xff < (uVar2 & 0xffff)) {
      uVar2 = 0xff;
    }
    thhaist2 = (byte)uVar2;
  }
  else {
    thhaist2 = THHAWU;
  }
  if (B_enhlshk == '\0') {
    phlsnh2 = 0;
  }
  else {
    uVar2 = thhaist2 + 10;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    if (((uVar2 & 0xff) == 0) || (uVar2 = unaff_r28 / (uVar2 & 0xff), 0xffff < uVar2)) {
      uVar2 = 0xffff;
    }
    phlsnh2 = (byte)uVar2;
  }
  if ((((DAT_003fdf21 & 1) == 0) && ((DAT_003fdf21 >> 1 & 1) != 0)) &&
     ((PHLSNHMN <= phlsnh2 || (_TANHKMMN <= tanhkm2_w)))) {
    if (DAT_003faae3 < THSHA) {
      DAT_003faae3 = DAT_003faae3 + 1;
    }
    else {
      B_hsha2 = 1;
    }
  }
  else {
    DAT_003faae3 = 0;
    B_hsha2 = 0;
  }
  return;
}

