/*
 * Program: n42.bin
 * Function: FUN_001056cc
 * Entry: 001056cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_001056cc(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  else {
    uVar1 = param_1[iVar2];
    iVar2 = (iVar2 + -1) * 0x20;
    while (uVar1 = uVar1 >> 1, uVar1 != 0) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

