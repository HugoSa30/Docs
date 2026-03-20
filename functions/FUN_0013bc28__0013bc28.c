/*
 * Program: n42.bin
 * Function: FUN_0013bc28
 * Entry: 0013bc28
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013bc28(undefined4 param_1,int param_2,undefined4 param_3,byte *param_4,byte param_5)

{
  *param_4 = param_5 & 0xef;
  mslnenn2 = DAT_001d349e;
  fmsla2 = 0x80;
  fmslav2 = 0x80;
  rmsl2 = 0x80;
  mslnf2 = DAT_001d349e;
  DAT_005bb9ae = (ushort)DAT_001d349e << 8;
  if (DAT_001d349e == 0xff) {
    mslift2 = 0xff;
  }
  else {
    mslift2 = DAT_001d349e;
  }
  DAT_005bba00 = (ushort)mslift2 << 2;
  if (*(char *)(param_2 + 0x14b) < '\0') {
    *param_4 = *param_4 & 0x1f;
    DAT_005bb947 = DAT_005bb947 & 0x7f;
    mslvft2_w = 0;
    DAT_005bba08 = 0;
    mslv2_w = 0;
  }
  return;
}

