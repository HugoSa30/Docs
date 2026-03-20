/*
 * Program: n42.bin
 * Function: FUN_000fba90
 * Entry: 000fba90
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fba90(void)

{
  _DAT_003fbcfc = *(int *)(_DAT_003fbcbc + 0x34);
  _DAT_003fbcb8 = *(int *)(_DAT_003fbcbc + 0x38);
  if ((_DAT_003fbcf0 & 0x102) != 0) {
    _DAT_003fbcb8 = _DAT_003fbcb8 + 4;
    _DAT_003fbcfc = _DAT_003fbcfc + -4;
  }
  return;
}

