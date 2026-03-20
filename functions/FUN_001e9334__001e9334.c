/*
 * Program: n42.bin
 * Function: FUN_001e9334
 * Entry: 001e9334
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_001e9334(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  int local_30;
  int local_2c [4];
  
  iVar6 = 0;
  if ((param_3 != 0) && (param_5 != 0)) {
    puVar4 = (undefined4 *)(param_4 + -4);
    puVar5 = (uint *)(param_1 + -4);
    piVar3 = (int *)(param_2 + -4);
    do {
      puVar4 = puVar4 + 1;
      FUN_001e92ac(param_3,*puVar4,&local_30,local_2c);
      piVar3 = piVar3 + 1;
      puVar5 = puVar5 + 1;
      *puVar5 = *piVar3 - iVar6;
      uVar1 = *puVar5;
      uVar2 = uVar1 - local_2c[0];
      *puVar5 = uVar2;
      iVar6 = (uint)(-local_2c[0] - 1U < uVar2) + (uint)(-iVar6 - 1U < uVar1) + local_30;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return iVar6;
}

