/*
 * Program: n42.bin
 * Function: FUN_000a5f94
 * Entry: 000a5f94
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000a5f94(int param_1,int param_2)

{
  *(ushort *)(&UNK_00306006 + param_1 * 8) =
       *(ushort *)(&UNK_00306006 + param_1 * 8) & 63999 | (ushort)(param_2 << 9);
  return;
}

