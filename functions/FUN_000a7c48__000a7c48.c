/*
 * Program: n42.bin
 * Function: FUN_000a7c48
 * Entry: 000a7c48
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000a7c48(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  param_3 = param_3 + (param_1 * param_2 >> 0x10);
  if (param_3 < 0x8000) {
    if (param_3 < -0x8000) {
      iVar1 = -0x8000;
    }
    else {
      iVar1 = (int)(short)param_3;
    }
  }
  else {
    iVar1 = 0x7fff;
  }
  return iVar1;
}

