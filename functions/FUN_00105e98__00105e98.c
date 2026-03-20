/*
 * Program: n42.bin
 * Function: FUN_00105e98
 * Entry: 00105e98
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00105e98(int param_1,int param_2)

{
  _DAT_003f9a30 = _DAT_003f9a30 | 1;
  _DAT_003f9a38 = _DAT_003f9a38 | 1;
  FUN_00105ffc(&DAT_003f9a30,&DAT_003f9a38,param_1,param_2);
  *(byte *)(param_2 + param_1 + -1) = *(byte *)(param_2 + param_1 + -1) | 1;
  return;
}

