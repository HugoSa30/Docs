/*
 * Program: n42.bin
 * Function: FUN_001e8f08
 * Entry: 001e8f08
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001e8f08(int param_1,undefined param_2,int param_3)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
    puVar1 = (undefined *)(param_1 + -1);
    do {
      puVar1 = puVar1 + 1;
      *puVar1 = param_2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

