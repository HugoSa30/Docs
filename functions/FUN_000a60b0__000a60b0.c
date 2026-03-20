/*
 * Program: n42.bin
 * Function: FUN_000a60b0
 * Entry: 000a60b0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000a60b0(int param_1)

{
  *(ushort *)(&UNK_00306006 + param_1 * 8) = *(ushort *)(&UNK_00306006 + param_1 * 8) & 0xefff;
  return;
}

