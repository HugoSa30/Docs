/*
 * Program: n42.bin
 * Function: FUN_000b339c
 * Entry: 000b339c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b339c(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000a7f20(0x3333,ubsq_w,_DAT_003f9c8c,_DAT_003f9c8c & 0xffff);
  _DAT_003f9c8c = uVar1;
  uVar1 = _DAT_003f9c8c;
  _DAT_003f9c8c = (word)((uint)uVar1 >> 0x10);
  ubsqf_w = _DAT_003f9c8c;
  ubsqf = (byte)((uint)uVar1 >> 0x18);
  _DAT_003f9c8c = uVar1;
  return;
}

