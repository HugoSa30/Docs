/*
 * Program: n42.bin
 * Function: FUN_000b167c
 * Entry: 000b167c
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000b167c(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = param_1 * param_2;
  if ((int)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20) != 0) {
    iVar1 = -1;
  }
  return iVar1;
}

