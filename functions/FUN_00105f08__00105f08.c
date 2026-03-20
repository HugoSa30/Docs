/*
 * Program: n42.bin
 * Function: FUN_00105f08
 * Entry: 00105f08
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00105f08(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = uVar1 >> 1;
  if ((param_1[1] & 1) != 0) {
    *param_1 = uVar1 >> 1 ^ 0x80000000;
  }
  param_1[1] = param_1[1] >> 1;
  return;
}

