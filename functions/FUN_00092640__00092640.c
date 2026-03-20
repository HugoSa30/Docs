/*
 * Program: n42.bin
 * Function: FUN_00092640
 * Entry: 00092640
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00092640(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *param_1;
  while (iVar1 != 0) {
    (*(code *)param_1[uVar2])();
    uVar2 = uVar2 + 1 & 0xff;
    iVar1 = param_1[uVar2];
  }
  return;
}

