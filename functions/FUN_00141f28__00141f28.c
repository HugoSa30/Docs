/*
 * Program: n42.bin
 * Function: FUN_00141f28
 * Entry: 00141f28
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00142008) */

uint FUN_00141f28(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (uint)twslpst_w + (uint)tumgslp * -0x20;
  if (iVar2 < -0x8000) {
    iVar2 = -0x8000;
  }
  else if (0x7fff < iVar2) {
    iVar2 = 0x7fff;
  }
  iVar2 = (short)iVar2 + -0x2586;
  if (iVar2 < -0x8000) {
    iVar2 = -0x8000;
  }
  else if (0x7fff < iVar2) {
    iVar2 = 0x7fff;
  }
  uVar1 = func_0xff2189bc(&DAT_001ce070,tabst_w);
  uVar1 = (uint)tumgslp * 0x20 + (int)(short)((int)(short)iVar2 * (uVar1 & 0xffff) >> 8);
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0xffff < (int)uVar1) {
    uVar1 = 0xffff;
  }
  uVar1 = (uVar1 & 0xffff) + 0x2586;
  if (0xffff < uVar1) {
    uVar1 = 0xffff;
  }
  return uVar1 & 0xffff;
}

