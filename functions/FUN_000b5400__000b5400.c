/*
 * Program: n42.bin
 * Function: FUN_000b5400
 * Entry: 000b5400
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b5400(void)

{
  uint uVar1;
  uint in_TBLr;
  
  if (in_TBLr < _DAT_003fb6dc) {
    uVar1 = in_TBLr + ~_DAT_003fb6dc + 1;
  }
  else {
    uVar1 = in_TBLr - _DAT_003fb6dc;
  }
  _DAT_003fb6d4 = in_TBLr;
  if (4999 < uVar1) {
    FUN_000a4308();
    _DAT_003fb6dc = _DAT_003fb6d4;
  }
  _DAT_003fb6d8 = _DAT_003fa064 + 200000;
  if (_DAT_003fa064 < 0xfffcf2c0) {
    if (_DAT_003fb6d8 <= _DAT_003fb6d4) {
      FUN_000f1a30();
    }
  }
  else if ((_DAT_003fb6d4 < _DAT_003fa064) && (_DAT_003fb6d8 <= _DAT_003fb6d4)) {
    FUN_000f1a30();
  }
  return;
}

