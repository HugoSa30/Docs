/*
 * Program: n42.bin
 * Function: FUN_001b22d0
 * Entry: 001b22d0
 * Exported by: ExportAllDecompiledFunctions.java
 */


bool FUN_001b22d0(undefined2 param_1,undefined2 param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(&DAT_003fc8cc + param_4 * 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0x28,param_1,param_2,param_3);
  }
  return pcVar1 != (code *)0x0;
}

