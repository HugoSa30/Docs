/*
 * Program: n42.bin
 * Function: FUN_00108320
 * Entry: 00108320
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00108320(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(iVar3 + 4) = *param_2;
  *(undefined4 *)(iVar3 + 8) = uVar1;
  *(undefined4 *)(iVar3 + 0xc) = uVar2;
  return;
}

