/*
 * Program: n42.bin
 * Function: FUN_001171fc
 * Entry: 001171fc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001171fc(int *param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)*param_1;
  *puVar1 = *puVar1;
  *(undefined *)(*param_1 + 1) = puVar1[1];
  *(undefined2 *)(param_1 + 2) = 2;
  *(undefined *)((int)param_1 + 10) = 1;
  return;
}

