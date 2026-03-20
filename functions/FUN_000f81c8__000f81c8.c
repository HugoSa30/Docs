/*
 * Program: n42.bin
 * Function: FUN_000f81c8
 * Entry: 000f81c8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f81c8(ushort param_1,int param_2)

{
  if (19000 < param_1) {
    param_1 = 19000;
  }
  if (param_1 < 100) {
    param_1 = 100;
  }
  *(short *)(*(int *)(_DAT_003fc674 + param_2 * 0xc + 4) + 2) =
       (short)(((uint)param_1 * 10000) / ((uint)_DAT_003fc6d8 << 2));
  *(ushort *)(&UNK_003fc680 + param_2 * 0xc) = param_1;
  return 1;
}

