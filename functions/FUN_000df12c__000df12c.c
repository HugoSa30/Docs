/*
 * Program: n42.bin
 * Function: FUN_000df12c
 * Entry: 000df12c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000df12c(void)

{
  char cVar1;
  int iVar2;
  
  if (((DAT_003fdfc1 & 1) == 0) && ((DAT_003fdfb7 & 1) == 0)) {
    cVar1 = calc_ign_angle_full_load(&DAT_001cd784,DAT_001c1064,esst_snm24zuub,esst_srl16zuub);
    DAT_005b922c = (char)((int)cVar1 * (int)DAT_003fb86e >> 7);
  }
  else {
    cVar1 = calc_ign_angle_full_load(&DAT_001cd784,DAT_001c1064,esst_snm24zuub,esst_srl16zuub);
    DAT_005b922c = (char)((int)cVar1 * (int)DAT_001cda84 >> 7);
  }
  iVar2 = (int)DAT_005b922c;
  cVar1 = calc_ign_angle_full_load(&DAT_001cd904,DAT_001c1064,esst_snm24zuub,esst_srl16zuub);
  iVar2 = cVar1 + iVar2;
  if (iVar2 < -0x80) {
    iVar2 = -0x80;
  }
  else if (0x7f < iVar2) {
    iVar2 = 0x7f;
  }
  DAT_005b922d = (char)iVar2;
  return;
}

