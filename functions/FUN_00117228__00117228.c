/*
 * Program: n42.bin
 * Function: FUN_00117228
 * Entry: 00117228
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00117228(int *param_1)

{
  undefined uVar1;
  undefined uVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)*param_1;
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  B_bt = 1;
  t_bttim = 0x14;
  *(undefined *)*param_1 = *puVar3;
  *(undefined *)(*param_1 + 1) = uVar1;
  *(undefined *)(*param_1 + 2) = uVar2;
  *(undefined2 *)(param_1 + 2) = 3;
  *(undefined *)((int)param_1 + 10) = 1;
  return;
}

