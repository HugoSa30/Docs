/*
 * Program: n42.bin
 * Function: FUN_00115710
 * Entry: 00115710
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00115710(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = _DAT_001ce718;
  if (param_2 < param_1) {
    param_1 = param_2;
  }
  while( true ) {
    if (param_2 <= param_1) {
      _DAT_001ce718 = iVar1;
      return (int *)0x0;
    }
    iVar3 = *param_1;
    _DAT_001ce718 = iVar1;
    *param_1 = iVar1;
    iVar2 = _DAT_001ce71c;
    if (*param_1 != iVar1) break;
    *param_1 = _DAT_001ce71c;
    if (*param_1 != iVar2) {
      return param_1;
    }
    *param_1 = iVar3;
    param_1 = param_1 + 1;
    iVar1 = _DAT_001ce718;
  }
  return param_1;
}

