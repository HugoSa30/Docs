/*
 * Program: n42.bin
 * Function: FUN_00091740
 * Entry: 00091740
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00091740(void)

{
  if ((*(byte *)(_DAT_003f9f18 + -4) & 0xc0) == 0x80) {
    FUN_000955fc(0x400);
    FUN_00095610();
    *_DAT_003f9f1c = LAB_001c0040_1;
    _DAT_003f9f1c = _DAT_003f9f1c + 1;
    *_DAT_003f9f1c = LAB_001c0040_2;
    FUN_00091714();
    FUN_00090b44();
    FUN_00092958();
    FUN_00095b8c(10,2);
  }
  return;
}

