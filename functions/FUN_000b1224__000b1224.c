/*
 * Program: n42.bin
 * Function: FUN_000b1224
 * Entry: 000b1224
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000b1224(int param_1)

{
  return _DAT_00011e70 + *(int *)(_DAT_00011e78 + param_1 * 4) +
         *(int *)(_DAT_00011e7c + param_1 * 4) + -2;
}

