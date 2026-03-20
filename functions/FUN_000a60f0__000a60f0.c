/*
 * Program: n42.bin
 * Function: FUN_000a60f0
 * Entry: 000a60f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000a60f0(int param_1)

{
  *(ushort *)(&UNK_00306006 + param_1 * 8) = *(ushort *)(&UNK_00306006 + param_1 * 8) & 0xf7ff;
  return;
}

