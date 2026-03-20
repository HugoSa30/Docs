/*
 * Program: n42.bin
 * Function: FUN_000948a4
 * Entry: 000948a4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000948a4(void)

{
  do {
    if ((_DAT_003fa188 & 0x80000000) != 0) {
      *_DAT_003fa18c = 0;
    }
    _DAT_003fa18c = _DAT_003fa18c + 0x2000;
    DAT_003fa179 = DAT_003fa179 + '\x01';
    _DAT_003fa188 = _DAT_003fa188 * 2;
  } while (_DAT_003fa188 != 0);
  return;
}

