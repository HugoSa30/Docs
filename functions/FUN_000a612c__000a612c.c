/*
 * Program: n42.bin
 * Function: FUN_000a612c
 * Entry: 000a612c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000a612c(int param_1,ushort param_2,undefined4 *param_3)

{
  param_1 = param_1 * 8;
  *(undefined4 *)(&UNK_00306000 + param_1) = *param_3;
  *(ushort *)(&UNK_00306006 + param_1) =
       (*(ushort *)(&UNK_00306006 + param_1) & 0xfff0 | param_2) & 0xf7ff;
  return;
}

