/*
 * Program: n42.bin
 * Function: FUN_000fc7b0
 * Entry: 000fc7b0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fc7b0(void)

{
  _DAT_002fc014 = *(undefined4 *)(_DAT_003fbcbc + 0x18);
  if (_DAT_003fbccc == _DAT_003fbcc8) {
    if (*_DAT_003fbcd4 == 0) {
      _DAT_003fbcd4 = (int *)&DAT_003fbcc0;
    }
    _DAT_002fc014 = **(undefined4 **)(_DAT_003fbcbc + 0x44);
  }
  else {
    if (_DAT_003fbcf4 != 0) {
      (***(code ***)(_DAT_003fbcf4 + 0x14))();
    }
    if (_DAT_003fbccc != 0) {
      FUN_000fb74c(_DAT_003fbccc);
    }
    _DAT_003fbcec = _DAT_003fbcec | 0xff00;
  }
  return;
}

