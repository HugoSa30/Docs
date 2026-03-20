/*
 * Program: n42.bin
 * Function: FUN_001960a8
 * Entry: 001960a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001960a8(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 local_10;
  
  uVar1 = (uint)mste;
  local_10 = (undefined2)((uint)rlroh_w * (uint)umsrln_w >> 0x10);
  uVar2 = func_0xff217b40(local_10,(uint)rlroh_w * (uint)umsrln_w & 0xffff,0x2155);
  iVar3 = (uVar2 & 0xffff) - uVar1;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xffff < iVar3) {
    iVar3 = 0xffff;
  }
  msdkalm_w = (word)iVar3;
  return;
}

