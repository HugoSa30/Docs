/*
 * Program: n42.bin
 * Function: FUN_000a7ac0
 * Entry: 000a7ac0
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000a7ac0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  param_2 = param_1 * 0x10000 + param_2;
  param_4 = param_3 * 0x10000 + param_4;
  iVar1 = param_2 - param_4;
  if (((param_2 < 0) && (0 < param_4)) && (0 < iVar1)) {
    iVar1 = -0x80000000;
  }
  else if (((0 < param_2) && (param_4 < 0)) && (iVar1 < 0)) {
    iVar1 = 0x7fffffff;
  }
  return iVar1;
}

