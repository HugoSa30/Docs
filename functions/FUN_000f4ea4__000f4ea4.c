/*
 * Program: n42.bin
 * Function: FUN_000f4ea4
 * Entry: 000f4ea4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f4ea4(void)

{
  if (_DAT_003fc2fc < 0xb) {
    if (_DAT_003fc2fc == 10) {
      _DAT_003fc2fc = 0xb;
      _DAT_003fc314 = *(uint *)(_DAT_003fc2e8 + 8) & 0x3fffffff;
      _DAT_003fc31c = _DAT_003fc314;
      if (*(code **)(_DAT_003fc2c0 + 4) != (code *)0x0) {
        (**(code **)(_DAT_003fc2c0 + 4))(3,0xd,0,0);
      }
    }
    else if (_DAT_003fc2fc == 4) {
      (*(code *)&SUB_00fadcf8)(0x37,4);
    }
    else if ((_DAT_003fc2fc == 9) && (*(code **)(_DAT_003fc2c0 + 4) != (code *)0x0)) {
      (**(code **)(_DAT_003fc2c0 + 4))(3,0xd,0,0);
    }
  }
  else {
    if (_DAT_003fc2fc == 0xb) {
      _DAT_003fc2fc = 0xc;
    }
    else if (_DAT_003fc2fc != 0xc) {
      return;
    }
    (*(code *)&SUB_00064c8c)();
    if (*(code **)(_DAT_003fc2c0 + 4) != (code *)0x0) {
      (**(code **)(_DAT_003fc2c0 + 4))(3,0xd,0,0);
    }
  }
  return;
}

