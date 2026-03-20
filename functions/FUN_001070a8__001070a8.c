/*
 * Program: n42.bin
 * Function: FUN_001070a8
 * Entry: 001070a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001070a8(void)

{
  do {
    if ((_DAT_003fb970 & 0x80000000) != 0) {
      *_DAT_003fb974 = 0;
    }
    _DAT_003fb974 = _DAT_003fb974 + 0x2000;
    DAT_003fb961 = DAT_003fb961 + '\x01';
    _DAT_003fb970 = _DAT_003fb970 * 2;
  } while (_DAT_003fb970 != 0);
  return;
}

