/*
 * Program: n42.bin
 * Function: FUN_001e9210
 * Entry: 001e9210
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001e9210(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  if (param_3 != 0) {
    puVar1 = (uint *)(param_1 + param_3 * 4);
    puVar2 = (uint *)(param_2 + param_3 * 4);
    do {
      param_3 = param_3 + -1;
      puVar1 = puVar1 + -1;
      puVar2 = puVar2 + -1;
      if (*puVar2 < *puVar1) {
        return 1;
      }
      if (*puVar1 < *puVar2) {
        return 0xffffffff;
      }
    } while (param_3 != 0);
  }
  return 0;
}

