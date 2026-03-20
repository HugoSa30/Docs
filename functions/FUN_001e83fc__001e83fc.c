/*
 * Program: n42.bin
 * Function: FUN_001e83fc
 * Entry: 001e83fc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001e83fc(ushort *param_1)

{
  *param_1 = *param_1 | 0x8000;
  param_1[0x14] = param_1[0x14] | 0x80;
  param_1[0x14] = param_1[0x14] & 0xff7f;
  return;
}

