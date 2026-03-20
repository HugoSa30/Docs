/*
 * Program: n42.bin
 * Function: FUN_000b24cc
 * Entry: 000b24cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000b24cc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_1 + (param_2 - (*param_1 >> 0x10)) * param_3;
  *param_1 = iVar1;
  return (int)(short)((uint)iVar1 >> 0x10);
}

