/*
 * Program: n42.bin
 * Function: FUN_00096c0c
 * Entry: 00096c0c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00096ce8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00096c0c(void)

{
  if ((_DAT_002fc280 >> 0x13 & 1) != 0) {
    _DAT_002fc280 = _DAT_002fc280 & 0xff7fffff | 0x800000;
    do {
      do {
        _DAT_002fc284 = _DAT_002fc284 & 0xfffd7fff | 0x28000;
        FUN_00096a68(2);
      } while ((_DAT_002fc284 >> 0xf & 1) != 0);
    } while ((_DAT_002fc284 >> 0x11 & 1) != 0);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  do {
  } while( true );
}

