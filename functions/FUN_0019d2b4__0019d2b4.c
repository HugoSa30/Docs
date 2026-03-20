/*
 * Program: n42.bin
 * Function: FUN_0019d2b4
 * Entry: 0019d2b4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019d2b4(void)

{
  ushort uVar1;
  
  if (((DAT_005bb821 & 1) == 0) || (B_vbemg == '\0')) {
    if (_tabsnl_w != 0xffff) {
      _tabsnl_w = _tabsnl_w + 1;
    }
  }
  else {
    _tabsnl_w = 0;
  }
  uVar1 = func_0xff2187cc(&DAT_001d00a0,tmotab);
  if (_tabsnl_w < (uVar1 & 0xff)) {
    _B_nlale = _B_nlale | 4;
  }
  else {
    _B_nlale = _B_nlale & 0xfffb;
  }
  DAT_005bb821 = DAT_005bb821 & 0xfe;
  return;
}

