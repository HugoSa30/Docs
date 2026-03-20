/*
 * Program: n42.bin
 * Function: FUN_0012d9ec
 * Entry: 0012d9ec
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012d9ec(void)

{
  uint uVar1;
  int iVar2;
  
  evhubs_w = _HUBSGNL;
  uVar1 = func_0xff2189bc(&KLHUBEX,_HUBSGNL);
  iVar2 = (uVar1 & 0xffff) + ((int)(short)Adexws >> 8);
  if (iVar2 < 0) {
    exwinksp_w = 0;
  }
  else if (iVar2 < 0x10000) {
    exwinksp_w = (word)iVar2;
  }
  else {
    exwinksp_w = 0xffff;
  }
  exwinks_w = exwinksp_w;
  if (exwinksp_w < 0x9f7) {
    exwinks = (byte)(exwinksp_w / 10);
  }
  else {
    exwinks = 0xff;
  }
  DAT_003fac94 = exwinks;
  _LPHUBS = (uint)evhubsnf_w << 0x10;
  _DAT_003fac90 = 0x80000000;
  B_vvtclose = 0;
  _DAT_003fac8c = _DAT_001c56bc;
  DAT_003fac8f = 0;
  DAT_003fac8e = 0;
  B_frz_hub = 0;
  evhubfrz_w = 0;
  devhubi2_w = 0;
  devhubi_w = 0;
  tdexwslow = TVVTSLOW;
  B_vvtslow = 0;
  return;
}

