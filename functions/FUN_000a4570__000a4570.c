/*
 * Program: n42.bin
 * Function: FUN_000a4570
 * Entry: 000a4570
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000a4570(short param_1)

{
  _DAT_0030501c = _DAT_0030501c & 0xe0e0 | (param_1 + -1) * 0x100 & 0x1f00U;
  return 1;
}

