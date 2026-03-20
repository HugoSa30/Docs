/*
 * Program: n42.bin
 * Function: FUN_0012e59c
 * Entry: 0012e59c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012e59c(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (int)((uint)nmot_w * (uint)FWFNDK) >> 7;
  if (uVar3 < 0x8000) {
    if ((int)uVar3 < -0x8000) {
      uVar3 = 0xffff8000;
    }
  }
  else {
    uVar3 = 0x7fff;
  }
  uVar1 = func_0xff21984c(&KFWFRLDK,rlp_w,evhubi_w);
  iVar2 = (int)(short)((ushort)(uVar1 >> 1) & 0x7fff) + (int)(short)uVar3;
  if (iVar2 < -0x8000) {
    iVar2 = -0x8000;
  }
  else if (0x7fff < iVar2) {
    iVar2 = 0x7fff;
  }
  wfdk_w = (word)iVar2;
  fbansdk_w = 0x2000;
  fbansdk = 0x20;
  drkakdk_w = 0;
  _DAT_003fadc6 = 0;
  return;
}

