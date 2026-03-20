/*
 * Program: n42.bin
 * Function: FUN_00109008
 * Entry: 00109008
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00109008(int *param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  
  _5();
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined2 *)(iVar1 + 0x2e) = param_3;
  *(undefined2 *)(iVar1 + 0x3e) = 0;
  *(undefined *)(iVar1 + 0x42) = 1;
  *(undefined2 *)(*param_1 + 10) = *(undefined2 *)(param_1[1] + 0x36);
  _6();
  return;
}

