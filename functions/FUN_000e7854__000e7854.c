/*
 * Program: n42.bin
 * Function: FUN_000e7854
 * Entry: 000e7854
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000e7854(void)

{
  if ((DAT_003faae4 & 1) == 0) {
    if (DAT_003faadf != 0) {
      DAT_003faadf = DAT_003faadf - 1;
      goto LAB_000e78ac;
    }
    DAT_003faae4 = DAT_003faae4 | 4;
  }
  else {
    DAT_003faadf = thhaist;
LAB_000e78ac:
    DAT_003faae4 = DAT_003faae4 & 0xfb;
  }
  if ((((DAT_003faae4 & 4) != 0) && ((DAT_003faae4 & 8) == 0)) || (DAT_003faade < 10)) {
    if (DAT_003faade == 0) {
      DAT_003faae4 = DAT_003faae4 & 0xfe;
      DAT_003faade = 10;
    }
    else {
      DAT_003faade = DAT_003faade - 1;
      DAT_003faae4 = DAT_003faae4 | 1;
    }
  }
  if ((DAT_003faae4 & 4) == 0) {
    DAT_003faae4 = DAT_003faae4 & 0xf7;
  }
  else {
    DAT_003faae4 = DAT_003faae4 | 8;
  }
  if (((thhaist == 0) || ((DAT_003faae4 & 1) != 0)) && ((B_enhlshk != '\0' && (B_rehs != '\0')))) {
    B_hshe = 1;
  }
  else {
    B_hshe = 0;
  }
  if ((DAT_003faae4 & 2) == 0) {
    if (DAT_003faae2 == 0) {
      DAT_003faae4 = DAT_003faae4 | 0x10;
      goto LAB_000e79d8;
    }
    DAT_003faae2 = DAT_003faae2 - 1;
  }
  else {
    DAT_003faae2 = thhaist2;
  }
  DAT_003faae4 = DAT_003faae4 & 0xef;
LAB_000e79d8:
  if ((((DAT_003faae4 & 0x10) != 0) && ((DAT_003faae4 & 0x20) == 0)) || (DAT_003faae1 < 10)) {
    if (DAT_003faae1 == 0) {
      DAT_003faae4 = DAT_003faae4 & 0xfd;
      DAT_003faae1 = 10;
    }
    else {
      DAT_003faae1 = DAT_003faae1 - 1;
      DAT_003faae4 = DAT_003faae4 | 2;
    }
  }
  if ((DAT_003faae4 & 0x10) == 0) {
    DAT_003faae4 = DAT_003faae4 & 0xdf;
  }
  else {
    DAT_003faae4 = DAT_003faae4 | 0x20;
  }
  if ((((thhaist2 == 0) || ((DAT_003faae4 & 2) != 0)) && (B_enhlshk != '\0')) && (B_rehs != '\0')) {
    B_hshe2 = 1;
  }
  else {
    B_hshe2 = 0;
  }
  return;
}

