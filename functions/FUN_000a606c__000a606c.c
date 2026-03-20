/*
 * Program: n42.bin
 * Function: FUN_000a606c
 * Entry: 000a606c
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000a606c(int param_1)

{
  return (*(ushort *)(&UNK_00306006 + param_1 * 8) & 0x400) >> 10;
}

