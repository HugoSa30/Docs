/*
 * Program: n42.bin
 * Function: FUN_000a7c80
 * Entry: 000a7c80
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000a7c80(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                ,int param_8)

{
  int iVar1;
  
  param_4 = param_3 * 0x10000 + param_4;
  param_6 = param_5 * 0x10000 + param_6;
  param_8 = param_7 * 0x10000 + param_8;
  param_1 = param_1 * param_2;
  iVar1 = param_4 + param_1;
  if ((((param_1 < 1) || (param_4 <= iVar1)) && (iVar1 <= param_8)) &&
     (((param_1 < 0 && (param_4 < iVar1)) || (param_8 = iVar1, iVar1 < param_6)))) {
    param_8 = param_6;
  }
  return param_8;
}

