/*
 * Program: n42.bin
 * Function: FUN_0010ef98
 * Entry: 0010ef98
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0010ef98(int param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = (undefined *)(param_1 + -1);
  puVar2 = (undefined *)(param_2 + -1);
  for (; param_3 != 0; param_3 = param_3 + 0xff & 0xff) {
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar1;
  }
  return;
}

