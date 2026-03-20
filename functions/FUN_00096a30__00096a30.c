/*
 * Program: n42.bin
 * Function: FUN_00096a30
 * Entry: 00096a30
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_00096a30(byte *param_1)

{
  return *(int *)(&DAT_001c0448 + ((int)(uint)*param_1 >> 4) * 4) + (*param_1 & 0xf) * 0x10000 +
         (uint)param_1[1] * 0x100 + (uint)param_1[2];
}

