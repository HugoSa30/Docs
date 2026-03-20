/*
 * Program: n42.bin
 * Function: FUN_00096abc
 * Entry: 00096abc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00096abc(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
  _DAT_002fc140 = _DAT_002fc140 & 0xfffffff9 | uVar1;
  return;
}

