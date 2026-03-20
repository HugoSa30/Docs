/*
 * Program: n42.bin
 * Function: FUN_001071cc
 * Entry: 001071cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001071cc(void)

{
  uint uVar1;
  
  uVar1 = _DAT_003fb96c & 0x80000000;
  _DAT_003fb954 = _DAT_003fb964;
  while (uVar1 == 0) {
    _DAT_003fb954 = _DAT_003fb954 + 0x8000;
    _DAT_003fb96c = _DAT_003fb96c * 2;
    uVar1 = _DAT_003fb96c & 0x80000000;
  }
  return;
}

