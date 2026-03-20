/*
 * Program: n42.bin
 * Function: FUN_000cd33c
 * Entry: 000cd33c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_000cd33c(void)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  
  if (B_ausc_act == '\0') {
    FUN_0009c3cc(2,0,AS_dimdk);
  }
  FUN_0009c3cc(3,1,DAT_003fc180);
  FUN_0009c3cc(4,1,B_slv);
  if (B_btmls3 == '\0') {
    if (DAT_003fc17d == '\0') goto LAB_000cd3c8;
LAB_000cd3d0:
    uVar3 = 1;
  }
  else {
    if (B_mls3et != '\0') goto LAB_000cd3d0;
LAB_000cd3c8:
    uVar3 = 0;
  }
  FUN_0009c3cc(5,1,uVar3);
  if (B_btslp == '\0') {
    if (B_slp == '\0') goto LAB_000cd418;
LAB_000cd420:
    uVar3 = 1;
  }
  else {
    if (DAT_003fc0db != '\0') goto LAB_000cd420;
LAB_000cd418:
    uVar3 = 0;
  }
  FUN_0009c3cc(6,1,uVar3);
  if (B_btev8 == '\0') {
    if (B_ebl == '\0') goto LAB_000cd468;
LAB_000cd470:
    uVar3 = 1;
  }
  else {
    if (DAT_003fc0b7 != '\0') goto LAB_000cd470;
LAB_000cd468:
    uVar3 = 0;
  }
  FUN_0009c3cc(7,1,uVar3);
  if (B_btev7 == '\0') {
    if (B_koe == '\0') goto LAB_000cd4b8;
LAB_000cd4c0:
    uVar3 = 1;
  }
  else {
    if (B_btev6 != '\0') goto LAB_000cd4c0;
LAB_000cd4b8:
    uVar3 = 0;
  }
  FUN_0009c3cc(8,1,uVar3);
  bVar2 = DAT_003fc0b8;
  if (B_btekp == '\0') {
    if (B_ekp != '\0') {
      bVar2 = DAT_003fb7f8 & 0x20;
      goto joined_r0x000cd518;
    }
  }
  else {
joined_r0x000cd518:
    if (bVar2 == 0) {
      uVar3 = 1;
      goto LAB_000cd528;
    }
  }
  uVar3 = 0;
LAB_000cd528:
  FUN_0009c3cc(9,1,uVar3);
  FUN_0009c3cc(10,1,B_akr);
  cVar1 = B_hsve;
  if (B_bthsv != '\0') {
    cVar1 = DAT_003fc0d8;
  }
  FUN_0009c3cc(0xb,0,cVar1 != '\0');
  cVar1 = B_hsve2;
  if (B_bthsv2 != '\0') {
    cVar1 = DAT_003fc0d7;
  }
  FUN_0009c3cc(0xc,0,cVar1 != '\0');
  cVar1 = B_hshe;
  if (B_bthsh != '\0') {
    cVar1 = DAT_003fc0d6;
  }
  FUN_0009c3cc(0xd,0,cVar1 != '\0');
  cVar1 = B_hshe2;
  if (B_bthsh2 != '\0') {
    cVar1 = DAT_003fc0d5;
  }
  FUN_0009c3cc(0xe,0,cVar1 != '\0');
  FUN_0009c3cc(0xf,0,B_lsuab);
  FUN_0009c3cc(0x10,0,B_lsuab2);
  FUN_0009c3cc(0x11,1,DAT_003fc1d9);
  FUN_0009c3cc(0x12,0,DAT_003fc1da);
  FUN_0009c3cc(0x13,0,DAT_003fc17e);
  FUN_0009c3cc(0x14,0,AS_wp);
  FUN_0009c3cc(0x15,0,DAT_003fc17f);
  FUN_0009c3cc(0x21,0,DAT_003fc1d8);
  return;
}

