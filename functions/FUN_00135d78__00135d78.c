/*
 * Program: n42.bin
 * Function: FUN_00135d78
 * Entry: 00135d78
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00135d78(void)

{
  uint uVar1;
  int in_TBLr;
  
  DAT_005b8b00 = DAT_005b8b00 + DAT_005b8afc + (in_TBLr - common_rt);
  uVar1 = (uint)(in_TBLr - DAT_005b8b10) >> 3;
  if ((DAT_001cb365 & 0x80) == 0) {
    rt_bg_brutto_max = 0;
  }
  else if (rt_bg_brutto_max < uVar1) {
    rt_bg_brutto_max = (word)uVar1;
  }
  DAT_005b8b04 = DAT_005b8b04 + uVar1;
  DAT_005b8b08 = DAT_005b8b08 + 1;
  DAT_005b8afc = common_rt - in_TBLr;
  DAT_005b8b10 = in_TBLr;
  return;
}

