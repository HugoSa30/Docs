/*
 * Program: n42.bin
 * Function: FUN_0012ef58
 * Entry: 0012ef58
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012ef58(void)

{
  short sVar1;
  
  dps_w = 0;
  dpssyn_w = 0;
  dpsddss_w = 0;
  _DAT_003faf6c = 0;
  _DAT_003faf70 = 1;
  DAT_003faf76 = 0;
  DAT_003faf72 = DAT_003faf72 & 0xf9;
  DAT_003faf77 = 0;
  dpsad_w = 0;
  DAT_003faf74 = 0;
  DAT_003faf73 = DAT_003faf73 & 0xf9;
  DAT_003faf75 = 0;
  _DAT_003faf7c = (int)(short)dpssol_w << 0x10;
  sVar1 = func_0xff219bb4(&DAT_001d0c50,_wdkba_w,nmot_w);
  _DAT_003faf80 = (int)sVar1 << 0x10;
  return;
}

