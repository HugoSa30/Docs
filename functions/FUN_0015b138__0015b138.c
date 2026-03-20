/*
 * Program: n42.bin
 * Function: FUN_0015b138
 * Entry: 0015b138
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0015b350) */

void FUN_0015b138(void)

{
  ushort uVar1;
  char cVar2;
  
  if (B_mdzgstp == 0) {
    cVar2 = B_su;
    if ((CWSTPCNF >> 2 & 1) == 0) {
      cVar2 = '\0';
    }
    DAT_003fa98c = '\x01' - (cVar2 == DAT_003fa98d);
    DAT_003fa98d = B_su;
    if ((CWSTPCNF >> 2 & 1) == 0) {
      DAT_003fa98d = '\0';
    }
    DAT_005b856f = tans < TAMIALU;
    uVar1 = func_0xff2190c8(KLTALUST,&DAT_001ce9fd,0x1cea02,tmst);
    B_mdtnst = tnst_w < uVar1;
    if ((DAT_003fdf8f & 1) == 0) {
      dmdstpBits1_100ms = dmdstpBits1_100ms & 0xfc7f;
    }
    else {
      dmdstpBits1_100ms = dmdstpBits1_100ms & 0xfcff | 0x80;
    }
    if ((DAT_003fde6f & 1) == 0) {
      dmdstpBits1_100ms = dmdstpBits1_100ms & 0xfffb;
    }
    else {
      dmdstpBits1_100ms = dmdstpBits1_100ms | 4;
    }
    if ((DAT_003fdf8b & 1) == 0) {
      dmdstpBits1_100ms = dmdstpBits1_100ms & 0xffbf;
    }
    else {
      dmdstpBits1_100ms = dmdstpBits1_100ms | 0x40;
    }
    if ((((dmdstpBits1_100ms & 0x80) == 0) && ((dmdstpBits1_100ms & 0x40) == 0)) &&
       ((dmdstpBits1_100ms & 4) == 0)) {
      B_error5 = 0;
    }
    else {
      B_error5 = B_error5;
    }
    B_error1 = 0;
    if ((DAT_003fdfbb & 1) == 0) {
      dmdstpBits1_100ms = dmdstpBits1_100ms & 0xeff4;
    }
    else {
      dmdstpBits1_100ms = dmdstpBits1_100ms & 0xfff4 | 0x1000;
    }
    if ((DAT_003fdfb9 & 1) == 0) {
      dmdstpBits1_100ms = dmdstpBits1_100ms & 0xf7ff;
    }
    else {
      dmdstpBits1_100ms = dmdstpBits1_100ms | 0x800;
    }
    if ((DAT_003fdf69 & 1) == 0) {
      dmdstpBits1_100ms = dmdstpBits1_100ms & 0xffdf;
    }
    else {
      dmdstpBits1_100ms = dmdstpBits1_100ms | 0x20;
    }
    if ((DAT_003fdfb3 & 1) == 0) {
      dmdstpBits1_100ms = dmdstpBits1_100ms & 0xfbff;
    }
    else {
      dmdstpBits1_100ms = dmdstpBits1_100ms | 0x400;
    }
    DAT_005b8571 = B_enws;
    DAT_005b8575 = B_vvtnlf;
    B_fontm = tmot < SFONTM;
    DAT_005b8570 = B_edkvs2;
    if ((((bool)B_fontm) || (B_edkvs != '\0')) || (B_edkvs2 != '\0')) {
      DAT_005b8573 = 1;
    }
    else {
      DAT_005b8573 = 0;
    }
    if ((((dmdstpBits1_100ms & 0x1000) == 0) && ((dmdstpBits1_100ms & 0x800) == 0)) &&
       (((dmdstpBits1_100ms & 0x20) == 0 &&
        ((((dmdstpBits1_100ms & 0x400) == 0 && (B_enws == 0)) && (B_vvtnlf == 0)))))) {
      B_error26 = 0;
    }
    else {
      B_error26 = B_error26;
    }
    if (((dmdstpBits1_100ms & 0x1000) == 0) && ((dmdstpBits1_100ms & 0x800) == 0)) {
      B_error3 = false;
    }
    else {
      B_error3 = true;
    }
    if ((B_eev != '\0') || ((bool)B_error3)) {
      DAT_005b8572 = 1;
    }
    else {
      DAT_005b8572 = 0;
    }
    if ((DAT_003fdfdf & 1) == 0) {
      dmdstpBits1_100ms = dmdstpBits1_100ms & 0x9fef;
    }
    else {
      dmdstpBits1_100ms = dmdstpBits1_100ms & 0xdfef | 0x4000;
    }
    fsalunkh = func_0xff2187cc(&SALUNKH,dmrkh);
    B_error7 = DAT_005b8575;
  }
  return;
}

