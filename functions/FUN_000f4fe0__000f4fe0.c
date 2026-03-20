/*
 * Program: n42.bin
 * Function: FUN_000f4fe0
 * Entry: 000f4fe0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f4fe0(void)

{
  uint uVar1;
  
  _DAT_003fc328 = _DAT_003fc328 + 1;
  if (_DAT_003fc2f8 == 9) {
    (*(code *)&SUB_00064e18)();
  }
  else if (_DAT_003fc2f8 == 10) {
    _DAT_003fc2f8 = 0xb;
    _DAT_003fc30c = *(uint *)(_DAT_003fc2e8 + 4) & 0x3fffffff;
    _DAT_003fc318 = _DAT_003fc30c;
    (*(code *)&SUB_00064e18)();
  }
  else {
    if (_DAT_003fc2f8 == 0xb) {
      _DAT_003fc2f8 = 0xc;
    }
    else if (_DAT_003fc2f8 != 0xc) {
      (*(code *)&SUB_00fadcf8)(0x36,_DAT_003fc2f8 & 0xffff);
      return;
    }
    _DAT_003fc308 = *(uint *)(_DAT_003fc2e8 + 4) & 0x3fffffff;
    uVar1 = _DAT_003fc308;
    if (_DAT_003fc308 < _DAT_003fc30c) {
      uVar1 = _DAT_003fc308 + 0x40000000;
    }
    _DAT_003fc318 = _DAT_003fc308;
    _DAT_003fc300 = (*(code *)&SUB_000655d8)(uVar1 - _DAT_003fc30c);
    _DAT_003fc30c = _DAT_003fc308;
    (*(code *)&SUB_00064d20)();
    (*(code *)&SUB_00064e18)();
  }
  return;
}

