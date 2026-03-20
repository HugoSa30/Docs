/*
 * Program: n42.bin
 * Function: FUN_0013baf0
 * Entry: 0013baf0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013baf0(undefined *param_1,int param_2,byte param_3,byte *param_4,undefined param_5,
                 byte *param_6,int param_7)

{
  ENUM_005b8c10 EVar1;
  
  if (param_7 < 0xff) {
    *param_1 = param_5;
  }
  else {
    *param_1 = 0xff;
  }
  DAT_005bb9f4 = (ushort)*param_6 << 2;
  if (*(char *)(param_2 + 0x149) < '\0') {
    DSLSLRSlokBits3a =
         DSLSLRSlokBits3a & (B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_meaoper);
    DSLSLRSlokBits2a =
         DSLSLRSlokBits2a & (B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_slsofw|B_dsl4ab);
    *param_4 = param_3 & 0xfb;
    DAT_005bb947 = DAT_005bb947 & 0x7f;
    mslvft_w = 0;
    DAT_005bb9fc = 0;
    mslv_w = 0;
  }
  if ((*(char *)(param_2 + 0x147) < '\0') || (*(char *)(param_2 + 0x14b) < '\0')) {
    DAT_005bb93f = DAT_005bb93f & 0x7f;
    _m6wmsl2_w = 0;
    _m6smsl2_w = 0;
    _m6wmslv2_w = 0;
    _m6smslv2_w = 0;
    m6cmsl2 = 0;
    m6cmslv2 = 0;
    EVar1 = B_mnslspr2 & (B_errofs2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2);
    if (*(char *)(param_2 + 0x147) < '\0') {
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
      EVar1 = B_mnslspr2 & (B_errofs2|B_mxslvpr2|B_eslvp2|B_zslvp2);
    }
    B_mnslspr2 = EVar1;
    if (*(char *)(param_2 + 0x14b) < '\0') {
      B_mnslspr2 = B_mnslspr2 & (B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2);
      DAT_005bb947 = DAT_005bb947 & 0x7f;
      mslvft2_w = 0;
      DAT_005bba08 = 0;
      mslv2_w = 0;
    }
  }
  return;
}

