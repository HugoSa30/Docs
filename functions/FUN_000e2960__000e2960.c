/*
 * Program: n42.bin
 * Function: FUN_000e2960
 * Entry: 000e2960
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e2960(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  
  uVar1 = FUN_000b17f4(_FUKEDK,rlp_w);
  uVar2 = FUN_000a7f20(_ZUKEDK,uVar1 & 0xffff,_DAT_003fadc0,_DAT_003fadc0 & 0xffff);
  _DAT_003fadc0 = (ushort)((uint)uVar2 >> 0x10);
  drkuked_w = _DAT_003fadc0;
  iVar4 = (uVar1 & 0xffff) - (uint)_DAT_003fadc0;
  if (iVar4 < -0x8000) {
    iVar4 = -0x8000;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  rkukedk_w = (word)iVar4;
  _DAT_003fadc0 = uVar2;
  uVar3 = FUN_000a90c8(ZKRLSOLDK,&DAT_001c640f,0x1c6416,nmot);
  _DAT_003fadc8 = FUN_000a7f20(uVar3,rlsol_w,_DAT_003fadc8,_DAT_003fadc8 & 0xffff);
  uVar2 = _DAT_003fadc8;
  _DAT_003fadc8 = (word)(_DAT_003fadc8 >> 0x10);
  rlsolfdk_w = _DAT_003fadc8;
  drlsoldk_w = (short)(_DAT_003fadc8 - _DAT_003fadc6) >> 1;
  _DAT_003fadc6 = _DAT_003fadc8;
  _DAT_003fadc8 = uVar2;
  return;
}

