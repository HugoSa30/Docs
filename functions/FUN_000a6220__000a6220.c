/*
 * Program: n42.bin
 * Function: FUN_000a6220
 * Entry: 000a6220
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000a6220(int param_1,int param_2)

{
  *(ushort *)(&UNK_00306006 + param_1 * 8) =
       *(ushort *)(&UNK_00306006 + param_1 * 8) & 0xff9f | (ushort)(param_2 << 5);
  return;
}

