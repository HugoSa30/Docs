/*
 * Program: n42.bin
 * Function: FUN_0010b1e0
 * Entry: 0010b1e0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0010b1e0(uint param_1)

{
  if (_DAT_003fbd50 != 0) {
    return (-(uint)*(byte *)(_DAT_003fbd50 + param_1) & ~(uint)*(byte *)(_DAT_003fbd50 + param_1))
           >> 0x1f;
  }
  return (uint)(param_1 == DAT_003fffa2);
}

