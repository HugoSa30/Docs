/*
 * Program: n42.bin
 * Function: FUN_000f89c0
 * Entry: 000f89c0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f89c0(ushort param_1)

{
  if (30000 < param_1) {
    param_1 = 30000;
  }
  _DAT_0030419c = (short)(((uint)param_1 * 5000) / (uint)_DAT_003fc7e4);
  return;
}

