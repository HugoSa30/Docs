/*
 * Program: n42.bin
 * Function: FUN_00127d24
 * Entry: 00127d24
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00127d24(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar2 = *param_1;
  iVar1 = *param_2;
  if (iVar2 == iVar1) {
    *param_3 = iVar2;
  }
  else if (iVar2 == *param_3) {
    *param_2 = iVar2;
  }
  else if (iVar1 == *param_3) {
    *param_1 = iVar1;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

