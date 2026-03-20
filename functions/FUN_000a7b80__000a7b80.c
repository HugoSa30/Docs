/*
 * Program: n42.bin
 * Function: FUN_000a7b80
 * Entry: 000a7b80
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000a7b80(int param_1,int param_2,ushort param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    if (param_1 < 0) {
      iVar1 = -0x8000;
    }
    else {
      iVar1 = 0x7fff;
    }
  }
  else {
    iVar1 = (param_1 * 0x10000 + param_2) / (int)(uint)param_3;
    if (iVar1 < 0x8000) {
      if (iVar1 < -0x8000) {
        iVar1 = -0x8000;
      }
    }
    else {
      iVar1 = 0x7fff;
    }
  }
  return (int)(short)iVar1;
}

