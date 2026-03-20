/*
 * Program: n42.bin
 * Function: FUN_001b23b4
 * Entry: 001b23b4
 * Exported by: ExportAllDecompiledFunctions.java
 */


bool FUN_001b23b4(undefined2 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(&DAT_003fc8d0 + param_3 * 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0x28,param_1,param_2);
    (*(code *)&SUB_00fac71c)(0x28,param_1,0,param_2);
  }
  return pcVar1 != (code *)0x0;
}

