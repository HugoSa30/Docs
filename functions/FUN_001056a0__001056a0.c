/*
 * Program: n42.bin
 * Function: FUN_001056a0
 * Entry: 001056a0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001056a0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1 + 1;
  if (0 < iVar2) {
    param_1 = param_1 + -1;
    piVar1 = (int *)(param_2 + -4);
    do {
      param_1 = param_1 + 1;
      piVar1 = piVar1 + 1;
      *piVar1 = *param_1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

