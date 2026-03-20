/*
 * Program: n42.bin
 * Function: FUN_000ac604
 * Entry: 000ac604
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000ac604(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)lamnswl_w;
  iVar2 = lamkh_w - uVar1;
  if (iVar2 < -0x8000) {
    iVar2 = -0x8000;
  }
  else if (0x7fff < iVar2) {
    iVar2 = 0x7fff;
  }
  iVar2 = (int)((int)(short)iVar2 * (uint)flamkh * 0x100) >> 0x10;
  if (iVar2 < -0x8000) {
    iVar2 = -0x8000;
  }
  else if (0x7fff < iVar2) {
    iVar2 = 0x7fff;
  }
  iVar2 = uVar1 + (int)(short)iVar2;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xffff < iVar2) {
    iVar2 = 0xffff;
  }
  lamkhe_w = (word)iVar2;
  iVar2 = lamkh2_w - uVar1;
  if (iVar2 < -0x8000) {
    iVar2 = -0x8000;
  }
  else if (0x7fff < iVar2) {
    iVar2 = 0x7fff;
  }
  iVar2 = (int)((int)(short)iVar2 * (uint)flamkh * 0x100) >> 0x10;
  if (iVar2 < -0x8000) {
    iVar2 = -0x8000;
  }
  else if (0x7fff < iVar2) {
    iVar2 = 0x7fff;
  }
  iVar2 = uVar1 + (int)(short)iVar2;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xffff < iVar2) {
    iVar2 = 0xffff;
  }
  lamkhe2_w = (word)iVar2;
  return;
}

