/*
 * Program: n42.bin
 * Function: FUN_000e2db8
 * Entry: 000e2db8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000e2db8(uint *param_1)

{
  uint uVar1;
  uint in_TBLr;
  int in_TBUr;
  
  uVar1 = in_TBUr * 0x6666 + (int)((ulonglong)in_TBLr * 0x6666 >> 0x20);
  *param_1 = (uVar1 >> 0x10) << 0x16 | (uVar1 * 0x10000 | in_TBLr * 0x6666 >> 0x10) >> 10;
  return;
}

