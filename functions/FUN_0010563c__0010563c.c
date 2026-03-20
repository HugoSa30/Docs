/*
 * Program: n42.bin
 * Function: FUN_0010563c
 * Entry: 0010563c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0010563c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  for (param_1 = param_1 + iVar1; (0 < iVar1 && (*param_1 == 0)); param_1 = param_1 + -1) {
    iVar1 = iVar1 + -1;
  }
  param_1[-iVar1] = iVar1;
  return;
}

