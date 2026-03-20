/*
 * Program: n42.bin
 * Function: FUN_000d844c
 * Entry: 000d844c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d844c(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_000a7f20(_ZWDKM1 * 2,wdksp_w,_DAT_003fad94,_DAT_003fad94 & 0xffff);
  _DAT_003fad94 = (undefined2)((uint)uVar2 >> 0x10);
  uVar1 = _DAT_003fad94;
  _DAT_003fad94 = uVar2;
  _DAT_003fad98 = FUN_000a7f20(_ZWDKM2 * 2,uVar1,_DAT_003fad98,_DAT_003fad98 & 0xffff);
  uVar2 = _DAT_003fad98;
  _DAT_003fad98 = (word)(_DAT_003fad98 >> 0x10);
  wdkbap_w = _DAT_003fad98;
  _DAT_003fad98 = uVar2;
  return;
}

