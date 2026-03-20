/*
 * Program: n42.bin
 * Function: FUN_000b1538
 * Entry: 000b1538
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000b1538(int param_1,int param_2)

{
  int iVar1;
  
  param_2 = -param_2;
  iVar1 = param_1 + param_2;
  if (param_1 < 0) {
    if (param_2 < iVar1) {
      iVar1 = -0x80000000;
    }
  }
  else if (iVar1 < param_2) {
    iVar1 = 0x7fffffff;
  }
  return iVar1;
}

