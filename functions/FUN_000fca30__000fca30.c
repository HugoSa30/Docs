/*
 * Program: n42.bin
 * Function: FUN_000fca30
 * Entry: 000fca30
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fca30(void)

{
  int in_TBLr;
  
  if (_DAT_003fd7b4 == -0x65656566) {
    _DAT_003fd7b4 = 0x5aa5a5a5;
  }
  else {
    _DAT_003fd7b4 = -0x5aa5a5a6;
    (*(code *)&SUB_00faca3c)(0x72);
  }
  _DAT_003fd7ac = 0;
  _DAT_003f9c88 = 3;
  while( true ) {
    _DAT_003fd7ac = _DAT_003fd7ac + 1;
    _DAT_003fb6d0 = in_TBLr;
    if ((_DAT_002fc010 >> 0x1d & 1) == 0) {
      if (_DAT_003f9c88 == 0) {
        _DAT_003fd7b4 = 0x65656565;
        (*(code *)&SUB_00faca3c)(0x72);
      }
      else {
        _DAT_003f9c88 = _DAT_003f9c88 + -1;
      }
    }
    else {
      _DAT_003f9c88 = 3;
    }
    if (2000 < _DAT_003fd7ac) break;
    if (_DAT_003fd7b4 == 0x5aa5a5a5) {
      (*(code *)&SUB_000693f0)();
    }
    else {
      _DAT_003fd7b4 = -0x5aa5a5a6;
      (*(code *)&SUB_00faca3c)(0x72);
    }
    do {
    } while ((uint)(in_TBLr - _DAT_003fb6d0) < 0x9c4);
  }
  (*(code *)&SUB_00faca3c)(0x72);
  return;
}

