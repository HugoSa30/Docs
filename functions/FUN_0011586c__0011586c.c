/*
 * Program: n42.bin
 * Function: FUN_0011586c
 * Entry: 0011586c
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_0011586c(ushort *param_1,ushort *param_2)

{
  int iVar1;
  
  if (param_2 < param_1) {
    param_1 = param_2;
  }
  iVar1 = 0;
  for (; param_1 < param_2; param_1 = param_1 + 2) {
    iVar1 = iVar1 + (uint)*param_1 + (uint)param_1[1];
  }
  return iVar1;
}

