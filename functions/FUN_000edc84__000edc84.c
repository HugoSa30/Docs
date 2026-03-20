/*
 * Program: n42.bin
 * Function: FUN_000edc84
 * Entry: 000edc84
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000edc84(void)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  
  if ((((B_mdstop == 0) && (B_fomod == '\0')) && (CDFO != '\0')) && (B_fofr1 != '\0')) {
    if (B_autget == '\0') {
      esst_srl05dmub1 = FUN_000ab0e8(&DAT_001c1a88,rl);
    }
    else {
      esst_srl05dmub2 = FUN_000ab0e8(&DAT_001c1a90,rl);
    }
    if (B_autget == '\0') {
      esst_snm10dmuw1 = calc1dim(&DAT_001c1a5c,nmot_w);
    }
    else {
      esst_snm10dmuw2 = calc1dim(0x1c1a72,nmot_w);
    }
    if (B_autget == '\0') {
      cfoxx = FUN_000ab0c8(&KFCFO1,DAT_001c1a88,esst_snm10dmuw1,esst_srl05dmub1);
    }
    else {
      cfoxx = FUN_000ab0c8(&KFCFO2,DAT_001c1a90,esst_snm10dmuw2,esst_srl05dmub2);
    }
    if (B_autget == '\0') {
      idxforlt = (&DAT_001c199c)[esst_srl05dmub1 >> 0x10];
      idxfont = (&DAT_001c1984)[esst_snm10dmuw1 >> 0x10];
    }
    else {
      idxforlt = (&DAT_001c19a4)[esst_srl05dmub2 >> 0x10];
      idxfont = (&DAT_001c1990)[esst_snm10dmuw2 >> 0x10];
    }
    idxforl = FUN_000b222c(1,idxforlt,3);
    idxfon = FUN_000b222c(1,idxfont,8);
    if ((idxforlt == 0) || (3 < idxforlt)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    idxforlap = idxforl;
    if (!bVar2) {
      idxforlap = 0;
    }
    if ((idxfont == 0) || (8 < idxfont)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    idxfonap = idxfon;
    if (!bVar1) {
      idxfonap = 0;
    }
    sVar3 = (ushort)idxfon * 3 + (ushort)idxforl + -4;
    if (sVar3 < 0) {
      sVar3 = 0;
    }
    else if (0xff < sVar3) {
      sVar3 = 0xff;
    }
    idxfob = (byte)sVar3;
    if ((bVar1) && (bVar2)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      idxfobap = idxfob;
      if (cfoxx != 0) {
        ffon2 = ffon2 & ~B_fondis;
        return;
      }
    }
    else {
      idxfobap = 0xff;
    }
    ffon2 = ffon2 & ~B_fondis | B_fondis;
  }
  return;
}

