/*
 * Program: n42.bin
 * Function: FUN_00110e2c
 * Entry: 00110e2c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00110e2c(int param_1)

{
  _5();
  if (param_1 == 0) {
    _DAT_003fa4b4 = _DAT_003fa4b4 & 0xfffeffff;
    _DAT_00306086 = 0x4000;
  }
  else {
    _DAT_003fa4b4 = _DAT_003fa4b4 | 0x10000;
    _DAT_00306086 = 0x4800;
  }
  _6();
  return;
}

