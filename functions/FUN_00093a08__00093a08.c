/*
 * Program: n42.bin
 * Function: FUN_00093a08
 * Entry: 00093a08
 * Exported by: ExportAllDecompiledFunctions.java
 */


bool FUN_00093a08(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = false;
  iVar2 = 0x10;
  do {
    iVar4 = *param_1;
    param_1 = param_1 + 1;
    iVar3 = *param_2;
    param_2 = param_2 + 1;
    if (iVar4 != iVar3) {
      bVar1 = true;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return !bVar1;
}

