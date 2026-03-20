/*
 * Program: n42.bin
 * Function: FUN_0013a8e4
 * Entry: 0013a8e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013a8e4(int param_1,undefined4 param_2,undefined4 param_3,undefined param_4)

{
  int in_r12;
  
  *(undefined *)(in_r12 + -0x404d) = param_4;
  DAT_005bb91d = param_4;
  DAT_005bb91e = param_4;
  DAT_005bb985 = DAT_005bb985 & 0x97;
  if ((*(char *)(param_1 + 0xb3) < '\0') || (*(char *)(param_1 + 0xaf) < '\0')) {
    frauzs2_w = frau2_w;
    rkamzs2_w = rkam2_w;
    DAT_005bb921 = 0;
    DAT_005bb922 = 0;
    B_gaefra2 = 0;
    B_gaeing2 = 0;
    DAT_005bb923 = 0;
    DAT_005bb926 = 0;
    DAT_005bb924 = 0;
    DAT_005bb925 = 0;
    DAT_005bb984 = DAT_005bb984 & 0xe0;
  }
  else if ((*(char *)(param_1 + 0x141) < '\0') || (*(char *)(param_1 + 0x13d) < '\0')) {
    rkamzs2_w = rkam2_w;
    DAT_005bb922 = 0;
    B_gaeing2 = 0;
    DAT_005bb924 = 0;
    DAT_005bb925 = 0;
    DAT_005bb984 = DAT_005bb984 & 0xf2;
  }
  if (*(char *)(param_1 + 0xb5) < '\0') {
    DAT_005bb920 = 0;
    DAT_005bb9c4 = 0x7fff;
    DAT_005bb9c6 = 0;
    B_frste = 0;
  }
  if (*(char *)(param_1 + 0xb7) < '\0') {
    DAT_005bb927 = 0;
    DAT_005bb9c8 = 0x7fff;
    DAT_005bb9ca = 0;
    B_frste2 = 0;
  }
  return;
}

