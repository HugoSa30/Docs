/*
 * Program: n42.bin
 * Function: FUN_000b22f0
 * Entry: 000b22f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000b22f0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  param_5 = param_5 << 0x10;
  param_4 = param_4 << 0x10;
  param_2 = param_2 * param_3;
  iVar1 = *param_1 + param_2;
  if (*param_1 < 0) {
    iVar2 = param_4;
    if (param_2 < iVar1) goto LAB_000b2348;
  }
  else {
    iVar2 = param_5;
    if (iVar1 < param_2) goto LAB_000b2348;
  }
  iVar2 = param_4;
  if ((param_4 <= iVar1) && (iVar2 = iVar1, param_5 < iVar1)) {
    iVar2 = param_5;
  }
LAB_000b2348:
  *param_1 = iVar2;
  return (int)(short)((uint)iVar2 >> 0x10);
}

