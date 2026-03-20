/*
 * Program: n42.bin
 * Function: FUN_00105f34
 * Entry: 00105f34
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00105f34(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar1 = (uVar1 >> 6 ^ uVar1 >> 5 ^ uVar1 >> 3 ^ uVar1) & 1;
  FUN_00105f08(param_1);
  uVar2 = param_1[1];
  param_1[1] = uVar2 & 0x1fffffff;
  if ((uVar1 & 0xff) != 0) {
    param_1[1] = uVar2 & 0x1fffffff ^ 0x20000000;
  }
  return;
}

