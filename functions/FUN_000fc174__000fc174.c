/*
 * Program: n42.bin
 * Function: FUN_000fc174
 * Entry: 000fc174
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000fc174(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_TBLr;
  
  puVar1 = _DAT_003fbcb8 + 1;
  *_DAT_003fbcb8 = _DAT_002fc014;
  _DAT_003fbcb8 = puVar1;
  param_1 = param_1 * 8;
  *(int *)(*(int *)(_DAT_003fbcbc + 100) + param_1) = in_TBLr + param_2;
  *(uint *)(*(int *)(_DAT_003fbcbc + 100) + param_1 + 4) =
       ~*(uint *)(*(int *)(_DAT_003fbcbc + 100) + param_1);
  _DAT_002fc014 = _DAT_003fbcb8[-1];
  _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
  return 0;
}

