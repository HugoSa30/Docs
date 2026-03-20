/*
 * Program: n42.bin
 * Function: FUN_000e741c
 * Entry: 000e741c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e741c(void)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  
  if ((B_cdswe & B_cdlsv) != 0) {
    uVar2 = (uint)uulsuv_w - (uint)DAT_005b81bc;
    if ((int)uVar2 < -0x8000) {
      uVar2 = 0xffff8000;
    }
    else if (0x7fff < (int)uVar2) {
      uVar2 = 0x7fff;
    }
    DAT_005b81bc = uulsuv_w;
    if ((short)uVar2 < 0) {
      uVar2 = -uVar2;
    }
    if (((DAT_005b81a6 & 0x80) == 0) == (bool)B_hsve) {
      DAT_005b81a7 = DAT_005b81a7 | 1;
      DAT_005b81a4 = DAT_005b81a4 | 0x20;
      DAT_005b81c6 = (ushort)TVHKLSUV;
    }
    else if (DAT_005b81c6 == 0) {
      DAT_005b81a4 = DAT_005b81a4 & 0xdf;
    }
    else {
      DAT_005b81c6 = DAT_005b81c6 - 1;
    }
    if (B_hsve == '\0') {
      DAT_005b81a6 = DAT_005b81a6 & 0x7f;
    }
    else {
      DAT_005b81a6 = DAT_005b81a6 | 0x80;
    }
    if ((B_luft & B_lsurfc) ==
        ~(B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu)) {
      if (((((DAT_005b81a4 & 1) != 0) && ((DAT_005b81a4 & 0x20) != 0)) && ((DAT_005b81a7 & 1) != 0))
         && (((uint)_SDULSUMX <= (uVar2 & 0xffff) &&
             (DAT_005b81a7 = DAT_005b81a7 & 0xfe, zhklsu != 0xff)))) {
        zhklsu = zhklsu + 1;
      }
    }
    else {
      zhklsu = 0;
    }
    uVar2 = FUN_000a7f20(_ZLAMLP,lamsoni_w,DAT_005b81dc,_DAT_005b81dc & 0xffff);
    DAT_005b81dc = (undefined2)(uVar2 >> 0x10);
    uVar1 = DAT_005b81dc;
    _DAT_005b81dc = uVar2;
    _DAT_005b81e0 = FUN_000a7f20(_ZLAMHP,uVar1,DAT_005b81e0,_DAT_005b81e0 & 0xffff);
    iVar3 = (_DAT_005b81dc >> 0x10) - (_DAT_005b81e0 >> 0x10);
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    lamsam_w = (word)iVar3;
    uVar2 = (uint)uulsuv2_w - (uint)DAT_005b8210;
    if ((int)uVar2 < -0x8000) {
      uVar2 = 0xffff8000;
    }
    else if (0x7fff < (int)uVar2) {
      uVar2 = 0x7fff;
    }
    DAT_005b8210 = uulsuv2_w;
    if ((short)uVar2 < 0) {
      uVar2 = -uVar2;
    }
    if (((DAT_005b81aa & 1) == 0) == (bool)B_hsve2) {
      DAT_005b81aa = DAT_005b81aa | 6;
      DAT_005b8218 = (ushort)TVHKLSUV;
    }
    else if (DAT_005b8218 == 0) {
      DAT_005b81aa = DAT_005b81aa & 0xfb;
    }
    else {
      DAT_005b8218 = DAT_005b8218 - 1;
    }
    if (B_hsve2 == '\0') {
      DAT_005b81aa = DAT_005b81aa & 0xfe;
    }
    else {
      DAT_005b81aa = DAT_005b81aa | 1;
    }
    if ((B_luft & B_lsurfc) ==
        ~(B_lsumx|B_lsuna|B_lsupft|B_lsuft|B_lsupmr|B_lsurfc|B_luft|B_maxflsu)) {
      if ((((DAT_005b81aa & 8) != 0) && ((DAT_005b81aa & 4) != 0)) &&
         (((DAT_005b81aa & 2) != 0 &&
          (((uint)_SDULSUMX <= (uVar2 & 0xffff) &&
           (DAT_005b81aa = DAT_005b81aa & 0xfd, zhklsu2 != 0xff)))))) {
        zhklsu2 = zhklsu2 + 1;
      }
    }
    else {
      zhklsu2 = 0;
    }
    uVar2 = FUN_000a7f20(_ZLAMLP,lamsoni2_w,DAT_005b8228,_DAT_005b8228 & 0xffff);
    DAT_005b8228 = (undefined2)(uVar2 >> 0x10);
    uVar1 = DAT_005b8228;
    _DAT_005b8228 = uVar2;
    _DAT_005b822c = FUN_000a7f20(_ZLAMHP,uVar1,DAT_005b822c,_DAT_005b822c & 0xffff);
    iVar3 = (_DAT_005b8228 >> 0x10) - (_DAT_005b822c >> 0x10);
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    lamsam2_w = (word)iVar3;
  }
  return;
}

