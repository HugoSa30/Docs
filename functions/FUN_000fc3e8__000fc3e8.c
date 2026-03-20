/*
 * Program: n42.bin
 * Function: FUN_000fc3e8
 * Entry: 000fc3e8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000fc3e8(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = _DAT_003fbcb8 + 1;
  *_DAT_003fbcb8 = _DAT_002fc014;
  _DAT_003fbcb8 = puVar1;
  _DAT_003fbd08 = _DAT_003fbd08 + (*(int *)(param_1 + 8) - _DAT_003fbd0c);
  _DAT_003fbd0c = *(int *)(param_1 + 8);
  _DAT_002fc014 = _DAT_003fbcb8[-1];
  _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
  return 0;
}

