/*
 * Program: n42.bin
 * Function: FUN_000a61e0
 * Entry: 000a61e0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000a61e0(int param_1,ushort param_2)

{
  *(ushort *)(&UNK_00306006 + param_1 * 8) =
       *(ushort *)(&UNK_00306006 + param_1 * 8) & 0xfff0 | param_2;
  return;
}

