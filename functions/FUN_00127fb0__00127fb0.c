/*
 * Program: n42.bin
 * Function: FUN_00127fb0
 * Entry: 00127fb0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00127fb0(void)

{
  char cVar1;
  uint uVar2;
  
  B_ramerr = 0;
  if (B_eepwf == '\0') {
    cVar1 = FUN_00127d24(&DAT_003fe968,&DAT_003fe96c,&DAT_003fe970);
    uVar2 = (uint)EwsNvBits;
    if ((((int)uVar2 >> 2 & 1U) == 0) || (cVar1 != '\0')) {
      cVar1 = FUN_00127d24(&DAT_003fe95c,&DAT_003fe960,&DAT_003fe964);
      if ((((int)uVar2 >> 3 & 1U) == 0) || (cVar1 != '\0')) {
        B_ramerr = 1;
        FUN_00127e80();
      }
    }
    else {
      _DAT_003fe95c = _DAT_003fe968;
      _DAT_003fe960 = _DAT_003fe968;
      _DAT_003fe964 = _DAT_003fe968;
      EwsNvBits = EwsNvBits | 8;
    }
  }
  else {
    FUN_00127e80();
  }
  EwsNvBits = EwsNvBits & 0xfb;
  return;
}

