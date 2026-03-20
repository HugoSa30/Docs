/*
 * Program: n42.bin
 * Function: FUN_000b11ac
 * Entry: 000b11ac
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b11ac(uint param_1)

{
  uint uVar1;
  
  _DAT_003f98d0 = _DAT_003fa0dc;
  param_1 = param_1 ^ _DAT_003fa0dc * 2;
  uVar1 = _DAT_003fa0dc & 0x80000000;
  _DAT_003fa0dc = param_1;
  if (uVar1 != 0) {
    _DAT_003fa0dc = param_1 ^ 0x80000005;
  }
  return;
}

