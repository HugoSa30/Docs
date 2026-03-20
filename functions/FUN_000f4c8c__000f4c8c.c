/*
 * Program: n42.bin
 * Function: FUN_000f4c8c
 * Entry: 000f4c8c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f4c8c(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (DAT_003fc33a == '\0') {
    uVar1 = 0;
  }
  else {
    _DAT_003fc310 = *(uint *)(_DAT_003fc2e8 + 8) & 0x3fffffff;
    uVar2 = _DAT_003fc310;
    if (_DAT_003fc310 < _DAT_003fc314) {
      uVar2 = _DAT_003fc310 + 0x40000000;
    }
    _DAT_003fc31c = _DAT_003fc310;
    _DAT_003fc304 = (*(code *)&SUB_000655d8)(uVar2 - _DAT_003fc314);
    _DAT_003fc314 = _DAT_003fc310;
    uVar1 = 1;
  }
  return uVar1;
}

