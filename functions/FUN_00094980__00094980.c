/*
 * Program: n42.bin
 * Function: FUN_00094980
 * Entry: 00094980
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00094980(void)

{
  uint uVar1;
  
  uVar1 = _DAT_003fa184 & 0x80000000;
  _DAT_003fa16c = _DAT_003fa17c;
  while (uVar1 == 0) {
    _DAT_003fa16c = _DAT_003fa16c + 0x8000;
    _DAT_003fa184 = _DAT_003fa184 * 2;
    uVar1 = _DAT_003fa184 & 0x80000000;
  }
  return;
}

