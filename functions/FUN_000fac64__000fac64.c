/*
 * Program: n42.bin
 * Function: FUN_000fac64
 * Entry: 000fac64
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000fac64(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(_DAT_003fbcbc + 0x18);
  puVar1 = _DAT_003fbcb8 + 1;
  *_DAT_003fbcb8 = _DAT_002fc014;
  _DAT_003fbcb8 = puVar1;
  _DAT_002fc014 = uVar2;
  FUN_000fab80();
  FUN_000fa9b0();
  _DAT_002fc014 = _DAT_003fbcb8[-1];
  _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
  return 0;
}

