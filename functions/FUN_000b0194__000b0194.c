/*
 * Program: n42.bin
 * Function: FUN_000b0194
 * Entry: 000b0194
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000b0194(undefined4 param_1,int param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  code **ppcVar2;
  
  if (param_2 == 1) {
    ppcVar2 = (code **)&DAT_003fc8cc;
    iVar1 = 8;
    do {
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(0x28,1,0,0);
      }
      ppcVar2 = ppcVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  else if (param_2 == 2) {
    if (*(code **)(&DAT_003fc8cc + (char)param_4 * 8) != (code *)0x0) {
      (**(code **)(&DAT_003fc8cc + (char)param_4 * 8))(0x28,2,param_3,param_4);
    }
  }
  else if ((param_2 == 3) && (*(code **)(&DAT_003fc8cc + (char)param_3 * 8) != (code *)0x0)) {
    (**(code **)(&DAT_003fc8cc + (char)param_3 * 8))(0x28,3,0,param_4);
  }
  return;
}

