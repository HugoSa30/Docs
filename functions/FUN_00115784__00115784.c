/*
 * Program: n42.bin
 * Function: FUN_00115784
 * Entry: 00115784
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00115784(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = _DAT_001ce718;
  iVar3 = *param_1;
  *param_1 = _DAT_001ce718;
  iVar2 = _DAT_001ce71c;
  if ((*param_1 == iVar1) && (*param_1 = _DAT_001ce71c, *param_1 == iVar2)) {
    *param_1 = iVar3;
    param_1 = (int *)0x0;
  }
  return param_1;
}

