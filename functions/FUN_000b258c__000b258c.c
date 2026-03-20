/*
 * Program: n42.bin
 * Function: FUN_000b258c
 * Entry: 000b258c
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000b258c(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 * 0x10000;
  iVar2 = *param_1;
  if (iVar1 != iVar2) {
    if (iVar2 < iVar1) {
      param_3 = (uint)(iVar1 - iVar2) / param_3;
      if (param_3 == 0) {
        param_3 = 1;
      }
    }
    else {
      param_3 = (uint)(iVar2 + param_2 * -0x10000) / param_3;
      if (param_3 == 0) {
        param_3 = 1;
      }
      param_3 = -param_3;
    }
    iVar2 = iVar2 + param_3;
    *param_1 = iVar2;
  }
  return (int)(short)((uint)iVar2 >> 0x10);
}

