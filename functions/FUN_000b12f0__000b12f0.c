/*
 * Program: n42.bin
 * Function: FUN_000b12f0
 * Entry: 000b12f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_000b12f0(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = _DAT_00011e70 + *(int *)(_DAT_00011e78 + param_1 * 4);
  sVar1 = FUN_000a180c(iVar2,iVar2 + *(int *)(_DAT_00011e7c + param_1 * 4) + -1);
  return sVar1 == 0;
}

