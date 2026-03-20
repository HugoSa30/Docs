/*
 * Program: n42.bin
 * Function: FUN_0009c8a0
 * Entry: 0009c8a0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009c8a0(int param_1,int param_2)

{
  short *psVar1;
  short *psVar2;
  
  if (param_1 == 0) {
    psVar1 = _DAT_003fa13c;
    psVar2 = _DAT_003fa144;
    if (param_2 != 0) {
      psVar1 = _DAT_003fa138;
    }
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    psVar1 = _DAT_003fa14c;
    psVar2 = _DAT_003fa154;
    if (param_2 != 0) {
      psVar1 = _DAT_003fa148;
    }
  }
  while( true ) {
    if (psVar2 <= psVar1) {
      return 1;
    }
    if (*psVar1 != -1) break;
    psVar1 = psVar1 + 1;
  }
  return 0;
}

