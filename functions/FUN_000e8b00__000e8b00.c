/*
 * Program: n42.bin
 * Function: FUN_000e8b00
 * Entry: 000e8b00
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000e8e48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e8b00(void)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = B_lamnse;
  if (((B_kh == '\0') && (B_dsla == '\0')) && (B_fasla == '\0')) {
    B_lamkh = '\0';
  }
  else {
    B_lamkh = '\x01';
  }
  if (((B_lamnse == 0) || (B_lamkhe == '\0')) && (B_lamkh != '\0')) {
    FUN_000ac604();
  }
  if (((bVar1 == 0) || (B_lamkhe == '\0')) ||
     (((B_lamka & B_lamka) != 0 || ((B_lamka & B_lamka2) != 0)))) {
    FUN_000ac328();
  }
  if ((B_bevab == '\0') && (B_bevab2 == '\0')) {
    lamsubg_w = lams_w;
  }
  else {
    lamsubg_w = (ushort)lasoabv << 5;
  }
  if ((uint)lamsubg_w < (uint)lamlgfmn << 5) {
    lamsbg_w = (ushort)lamlgfmn << 5;
    B_lalgf = 1;
  }
  else {
    if ((uint)lamlgm << 5 < (uint)lamsubg_w) {
      lamsbg_w = (ushort)lamlgm << 5;
    }
    else {
      lamsbg_w = lamsubg_w;
    }
    B_lalgf = 0;
  }
  if (B_slsfz == '\0') {
    lamsos_w = lamsbg_w;
  }
  else {
    uVar2 = (uint)lamsbg_w * (uint)flamsl_w >> 0xc;
    if (uVar2 < 0x10000) {
      lamsos_w = (word)uVar2;
    }
    else {
      lamsos_w = 0xffff;
    }
  }
  if ((lamsos_w < _LAMSOSUF) || (_LAMSOSOF < lamsos_w)) {
    lamsons_w = lamsos_w;
  }
  else {
    lamsons_w = 0x1000;
  }
  if ((B_bevab2 == '\0') && (B_bevab == '\0')) {
    lamsubg2_w = lams2_w;
  }
  else {
    lamsubg2_w = (ushort)lasoabv << 5;
  }
  if ((uint)lamsubg2_w < (uint)lamlgfmn << 5) {
    lamsbg2_w = (ushort)lamlgfmn << 5;
    B_lalgf2 = 1;
  }
  else {
    if ((uint)lamlgm << 5 < (uint)lamsubg2_w) {
      lamsbg2_w = (ushort)lamlgm << 5;
    }
    else {
      lamsbg2_w = lamsubg2_w;
    }
    B_lalgf2 = 0;
  }
  if (B_slsfz == '\0') {
    lamsos2_w = lamsbg2_w;
  }
  else {
    uVar2 = (uint)lamsbg2_w * (uint)flamsl2_w >> 0xc;
    if (uVar2 < 0x10000) {
      lamsos2_w = (word)uVar2;
    }
    else {
      lamsos2_w = 0xffff;
    }
  }
  if ((lamsos2_w < _LAMSOSUF) || (_LAMSOSOF < lamsos2_w)) {
    lamsons2_w = lamsos2_w;
  }
  else {
    lamsons2_w = 0x1000;
  }
  uVar2 = (uint)lamsbg_w + (uint)lamsbg2_w;
  if (0xffff < uVar2) {
    uVar2 = 0xffff;
  }
  uVar2 = uVar2 >> 1 & 0x7fff;
  if (uVar2 < 0x2000) {
    lambas = (byte)((int)uVar2 >> 5);
  }
  else {
    lambas = 0xff;
  }
  if ((B_ldef == '\0') && (B_ldef2 == '\0')) {
    B_lamsdef = 0;
  }
  else {
    B_lamsdef = 1;
  }
  return;
}

