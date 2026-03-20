/*
 * Program: n42.bin
 * Function: FUN_000d8330
 * Entry: 000d8330
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000d8330(void)

{
  if ((DAT_003fb7f8 & 2) == 0) {
    DAT_005bb818 = DAT_005bb818 & 0xff7f;
  }
  else {
    DAT_005bb818 = DAT_005bb818 | 0x80;
  }
  if (B_evabu == '\0') {
    DAT_005bb818 = DAT_005bb818 & 0xfffd;
  }
  else {
    DAT_005bb818 = DAT_005bb818 | 2;
  }
  if (B_nlph == '\0') {
    DAT_005bb818 = DAT_005bb818 & 0xfffa;
  }
  else {
    DAT_005bb818 = DAT_005bb818 & 0xfffe | 4;
  }
  if (B_ausc_act == '\0') {
    DAT_005bb818 = DAT_005bb818 & 0xfeff;
  }
  else {
    DAT_005bb818 = DAT_005bb818 | 0x100;
  }
  if (DAT_005bb818 == 0) {
    evz_austot = evz_aus;
  }
  else {
    evz_austot = 0xff;
  }
  if ((B_dmdstop == '\0') && (DAT_005bb818 == 0)) {
    B_evasel = 1;
  }
  else {
    B_evasel = 0;
  }
  return;
}

