/*
 * Program: n42.bin
 * Function: FUN_000b4efc
 * Entry: 000b4efc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000b4efc(ushort *param_1)

{
  *(undefined *)(param_1 + 0xd) = 4;
  param_1[4] = (ushort)((uint)*param_1 * (uint)*(byte *)((int)param_1 + 0x1b) >> 5);
  *(undefined *)(param_1 + 0xf) = 1;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  return;
}

