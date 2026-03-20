/*
 * Program: n42.bin
 * Function: FUN_001080c8
 * Entry: 001080c8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001080c8(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int in_TBLr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x28);
  iVar2 = *(int *)(param_1 + 4);
  *(uint *)(iVar2 + 0x24) = param_2;
  if (param_3 != 0) {
    *(int *)(iVar2 + 0x28) = in_TBLr;
    iVar1 = in_TBLr;
  }
  if (param_2 < (uint)(in_TBLr - iVar1)) {
    *(undefined4 *)(iVar2 + 0x24) = 0;
  }
  return;
}

