/*
 * Program: n42.bin
 * Function: FUN_000a5fbc
 * Entry: 000a5fbc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000a5fbc(int param_1,undefined4 *param_2)

{
  param_1 = param_1 * 8;
  *(undefined4 *)(&UNK_00306000 + param_1) = *param_2;
  *(ushort *)(&UNK_00306006 + param_1) = *(ushort *)(&UNK_00306006 + param_1) & 0xf7ff | 0x4400;
  return;
}

