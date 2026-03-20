/*
 * Program: n42.bin
 * Function: FUN_001e8f28
 * Entry: 001e8f28
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001e8f28(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined *)(param_2 + -1);
    puVar1 = (undefined *)(param_1 + -1);
    do {
      puVar2 = puVar2 + 1;
      puVar1 = puVar1 + 1;
      *puVar1 = *puVar2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

