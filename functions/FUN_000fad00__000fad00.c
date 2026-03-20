/*
 * Program: n42.bin
 * Function: FUN_000fad00
 * Entry: 000fad00
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fad00(void)

{
  _DAT_002fc200 =
       _DAT_002fc200 & 0x47 | (ushort)(0x100 << (*(int *)(_DAT_003fbcbc + 0x14) - 1U >> 1 & 0x3f));
  return;
}

