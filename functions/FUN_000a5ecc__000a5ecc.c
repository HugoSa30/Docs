/*
 * Program: n42.bin
 * Function: FUN_000a5ecc
 * Entry: 000a5ecc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a5ecc(byte param_1)

{
  if (param_1 == 0x10) {
    param_1 = 0;
  }
  _DAT_00306816 = _DAT_00306816 & 0xfff0 | (ushort)param_1;
  return;
}

