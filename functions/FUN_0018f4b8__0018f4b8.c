/*
 * Program: n42.bin
 * Function: FUN_0018f4b8
 * Entry: 0018f4b8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018f4b8(void)

{
  ushort uVar1;
  word wVar2;
  
  wVar2 = tabssc_w;
  if (B_uhrrsec == '\0') {
    if (B_uhrrmin == '\0') {
      wVar2 = tabstm_w;
      if ((B_abstnl != '\0') && (tabstm_w < _tabsnl_w)) {
        wVar2 = _tabsnl_w;
      }
    }
    else {
      wVar2 = tabsmn_w;
      if ((B_abstnl != '\0') && (tabsmn_w < _tabsnl_w)) {
        wVar2 = _tabsnl_w;
      }
    }
  }
  if (wVar2 < tabstm_w) {
    uVar1 = tabstm_w - wVar2;
  }
  else {
    uVar1 = wVar2 - tabstm_w;
  }
  if (((((DAT_003fde7d & 1) == 0) && (B_pwml2cok != '\0')) && ((BgtabstNvBits & 1) == 0)) &&
     (((uVar1 <= _DTABUNPL || (B_pltab == '\0')) ||
      ((B_uhrrmin == '\0' && ((B_uhrrsec == '\0' && (B_abstnl == '\0')))))))) {
    B_tabunpl = false;
  }
  else {
    B_tabunpl = true;
  }
  if ((B_stend == '\0') && (tabst_w = wVar2, B_tabunpl)) {
    tabst_w = tabstm_w;
  }
  return;
}

