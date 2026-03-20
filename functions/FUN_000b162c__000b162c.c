/*
 * Program: n42.bin
 * Function: FUN_000b162c
 * Entry: 000b162c
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000b162c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)((ulonglong)((longlong)param_1 * (longlong)param_2) >> 0x20);
  iVar2 = param_1 * param_2;
  if ((longlong)param_1 * (longlong)param_2 < 0) {
    if ((iVar1 < -1) || (-1 < iVar2)) {
      iVar2 = -0x80000000;
    }
  }
  else if ((0 < iVar1) || (iVar2 < 0)) {
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}

