/*
 * Program: n42.bin
 * Function: FUN_001b2344
 * Entry: 001b2344
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001b2344(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  code **ppcVar2;
  
  ppcVar2 = (code **)&DAT_003fc8cc;
  iVar1 = 8;
  do {
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(0x28,param_1,param_2,param_3);
    }
    ppcVar2 = ppcVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

