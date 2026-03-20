/*
 * Program: n42.bin
 * Function: FUN_000b4db4
 * Entry: 000b4db4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000b4db4(short *param_1)

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
  if (((ushort)param_1[1] < (ushort)param_1[5]) && (*(char *)((int)param_1 + 0x1d) != '\0')) {
    *(uint *)(param_1 + 0x14) = (uint)((ushort)param_1[6] >> 1) << 0x10;
  }
  else {
    FUN_000b22f0(param_1 + 0x14,(int)param_1[0xb],0x1000,0,0x7ffe);
  }
  param_1[3] = (short)((uint)*(undefined4 *)(param_1 + 0x14) >> 0x10) * 2;
  return;
}

