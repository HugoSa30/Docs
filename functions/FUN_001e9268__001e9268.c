/*
 * Program: n42.bin
 * Function: FUN_001e9268
 * Entry: 001e9268
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_001e9268(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    piVar2 = (int *)(param_1 + (param_2 + -1) * 4 + 4);
    iVar3 = param_2 + -1;
    do {
      piVar2 = piVar2 + -1;
      iVar4 = iVar3;
      if (*piVar2 != 0) break;
      iVar4 = iVar3 + -1;
      bVar1 = iVar3 != 0;
      iVar3 = iVar4;
    } while (bVar1);
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}

