/*
 * Program: n42.bin
 * Function: FUN_000a7d58
 * Entry: 000a7d58
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000a7d58(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  param_4 = param_3 * 0x10000 + param_4;
  param_1 = param_1 * param_2;
  iVar1 = param_4 + param_1;
  if ((param_1 < 1) || (param_4 <= iVar1)) {
    if ((param_1 < 0) && (param_4 < iVar1)) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  return iVar1;
}

