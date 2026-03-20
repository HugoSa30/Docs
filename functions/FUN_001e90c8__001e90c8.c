/*
 * Program: n42.bin
 * Function: FUN_001e90c8
 * Entry: 001e90c8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001e90c8(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + -4);
    do {
      puVar1 = puVar1 + 1;
      *puVar1 = 0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

