/*
 * Program: n42.bin
 * Function: FUN_0013bd9c
 * Entry: 0013bd9c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013bd9c(void)

{
  if (B_dtimer == 0) {
    diagtime = 0;
    B_canoff = 0;
    B_cdiagoff = 0;
    B_diagtimeout = 0;
    _DAT_003fffd4 = 0;
  }
  else {
    diagtime = diagtime + 1;
    if (0xe < diagtime) {
      FUN_00124568();
    }
    if ((B_canoff == 0) && (4 < diagtime)) {
      B_cdiagoff = 0;
      B_dtimer = 0;
      diagtime = 0;
      B_diagtimeout = 0;
    }
  }
  return;
}

