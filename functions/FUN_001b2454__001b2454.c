/*
 * Program: n42.bin
 * Function: FUN_001b2454
 * Entry: 001b2454
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001b2454(uint param_1,undefined4 param_2)

{
  int iVar1;
  code **ppcVar2;
  
  ppcVar2 = (code **)&DAT_003fc8d0;
  iVar1 = 8;
  do {
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(0x28,param_1,param_2);
    }
    ppcVar2 = ppcVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  (*(code *)&SUB_00fac71c)(0x28,param_1 & 0xffff,0,param_2);
  return;
}

