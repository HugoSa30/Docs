/*
 * Program: n42.bin
 * Function: FUN_0009adc8
 * Entry: 0009adc8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0009adc8(int param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined uVar2;
  undefined2 uVar1;
  
  uVar2 = FUN_0009ae2c((int)(short)param_2[1],param_1);
  *(undefined *)(param_2 + 2) = uVar2;
  uVar1 = FUN_000af8fc((int)(short)param_2[1],param_1 + 4,param_3);
  *param_2 = uVar1;
  return;
}

