/*
 * Program: n42.bin
 * Function: FUN_0009ae2c
 * Entry: 0009ae2c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0009ae2c(int param_1,short *param_2)

{
  undefined4 uVar1;
  
  if (param_1 < *param_2) {
    uVar1 = 2;
  }
  else if (param_2[1] < param_1) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

