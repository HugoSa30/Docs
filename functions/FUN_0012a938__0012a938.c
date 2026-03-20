/*
 * Program: n42.bin
 * Function: FUN_0012a938
 * Entry: 0012a938
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012a938(void)

{
  B_dtimer = 0;
  diagtime = 0;
  B_canoff = 0;
  B_cdiagoff = 0;
  B_diagtimeout = 0;
  if ((_DAT_003fffd4 == 0x9160916) && (B_hwpwf == 0)) {
    FUN_0010a35c(0,2);
    FUN_0010a35c(1,2);
    FUN_001a5e0c(1,0);
  }
  else {
    _DAT_003fffd4 = 0;
  }
  return;
}

