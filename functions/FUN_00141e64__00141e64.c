/*
 * Program: n42.bin
 * Function: FUN_00141e64
 * Entry: 00141e64
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_00141e64(void)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (uint)tmot - (uint)tumg;
  if (iVar3 < -0x8000) {
    iVar3 = -0x8000;
  }
  else if (0x7fff < iVar3) {
    iVar3 = 0x7fff;
  }
  sVar1 = func_0xff2216a8((int)(short)iVar3,FWTMTU);
  uVar2 = (uint)tumg + (int)(sVar1 >> 8);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0xffff < (int)uVar2) {
    uVar2 = 0xffff;
  }
  return uVar2 & 0xff;
}

