/*
 * Program: n42.bin
 * Function: FUN_000a7f84
 * Entry: 000a7f84
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000a7f84(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  param_4 = param_3 * 0x10000 + param_4;
  iVar1 = param_2 * 0x10000;
  if (param_4 < iVar1) {
    param_1 = ((uint)(iVar1 - param_4) >> 0x10) * param_1;
    if (param_1 == 0) {
      param_1 = 1;
    }
    param_4 = param_4 + param_1;
  }
  else if (iVar1 < param_4) {
    param_1 = ((uint)(param_4 + param_2 * -0x10000) >> 0x10) * param_1;
    if (param_1 == 0) {
      param_1 = 1;
    }
    param_4 = param_4 - param_1;
  }
  return param_4;
}

