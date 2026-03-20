/*
 * Program: n42.bin
 * Function: FUN_00122430
 * Entry: 00122430
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00122430(void)

{
  undefined4 uVar1;
  
  if ((DAT_003fb2c0 & 0xe7) == 0) {
    FUN_00122140(4);
    _DAT_003fb2e4 = _DAT_003fb2c4;
    _DAT_003fb2e8 = _DAT_003fb2c4 + 0x100;
    if (_DAT_003fb2c8 < _DAT_003fb2e8) {
      _DAT_003fb2e8 = _DAT_003fb2c8;
    }
    _DAT_003fb2e2 = 0;
    DAT_003fb2e0 = 1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

