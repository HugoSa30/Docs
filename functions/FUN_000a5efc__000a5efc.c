/*
 * Program: n42.bin
 * Function: FUN_000a5efc
 * Entry: 000a5efc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a5efc(int param_1)

{
  if (param_1 == 0) {
    _DAT_00306816 = _DAT_00306816 & 0x7fff;
  }
  else {
    _DAT_00306816 = _DAT_00306816 | 0x8000;
  }
  return;
}

