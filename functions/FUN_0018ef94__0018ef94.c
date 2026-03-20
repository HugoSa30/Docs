/*
 * Program: n42.bin
 * Function: FUN_0018ef94
 * Entry: 0018ef94
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018ef94(void)

{
  undefined2 uVar1;
  
  if (B_hfm == '\0') {
    uVar1 = func_0xff2189bc(&FPVMXN2,nmot_w);
    psmx_w = func_0xff221800(uVar1,pvdkds_w);
  }
  else {
    uVar1 = func_0xff2189bc(&FPVMXN,nmot_w);
    psmx_w = func_0xff221800(uVar1,pvdkds_w);
  }
  if (((((dhubra_w < _DHUBMX) || (B_gdvhub == 0)) && (DAT_001c39ea != '\x01')) &&
      (((B_clddss & 1) == 0 && ((E_pddss & 1) == 0)))) || (DAT_001c39ea == '\x02')) {
    B_rlh = 0;
  }
  else {
    B_rlh = 1;
  }
  return;
}

