/*
 * Program: n42.bin
 * Function: FUN_00105f98
 * Entry: 00105f98
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00105f98(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar1 = (uVar1 >> 5 ^ uVar1 >> 2 ^ uVar1 >> 1 ^ uVar1) & 1;
  FUN_00105f08(param_1);
  uVar2 = param_1[1];
  param_1[1] = uVar2 & 0xfffffff;
  if ((uVar1 & 0xff) != 0) {
    param_1[1] = uVar2 & 0xfffffff ^ 0x10000000;
  }
  return;
}

