/*
 * Program: n42.bin
 * Function: FUN_000b4f34
 * Entry: 000b4f34
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000b4f34(short *param_1)

{
  short sVar2;
  int iVar1;
  
  sVar2 = (short)((int)(0x1000 - (uint)(ushort)param_1[7]) >> 1);
  param_1[8] = sVar2;
  iVar1 = (int)((int)sVar2 * (uint)(ushort)param_1[0xb]) >> 0xb;
  if (iVar1 < -0x8000) {
    iVar1 = -0x8000;
  }
  else if (iVar1 < 0x8000) {
    iVar1 = (int)(short)iVar1;
  }
  else {
    iVar1 = 0x7fff;
  }
  FUN_000b22f0(param_1 + 0x12,iVar1,0x1000,0,0xd2f);
  *param_1 = (short)((uint)*(undefined4 *)(param_1 + 0x12) >> 0x10) * 2;
  return;
}

