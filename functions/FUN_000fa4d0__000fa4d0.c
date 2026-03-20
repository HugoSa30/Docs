/*
 * Program: n42.bin
 * Function: FUN_000fa4d0
 * Entry: 000fa4d0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fa4d0(void)

{
  _DAT_002fc200 =
       _DAT_002fc200 & 0x8b | (ushort)(0x100 << (*(int *)(_DAT_003fbcbc + 0x14) - 1U >> 1 & 0x3f));
  return;
}

