/*
 * Program: n42.bin
 * Function: FUN_000aff9c
 * Entry: 000aff9c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000aff9c(void)

{
  if (_DAT_003fc2f8 < 5) {
    _DAT_003fc2fc = 5;
    _DAT_003fc2f8 = 5;
    if (*(code **)(_DAT_003fc2c0 + 4) != (code *)0x0) {
      (**(code **)(_DAT_003fc2c0 + 4))(3,2,0,0);
    }
  }
  if (_DAT_003fc2f8 < 6) {
    _DAT_003fc2fc = 6;
    _DAT_003fc2f8 = 6;
    if (*(code **)(_DAT_003fc2c0 + 4) != (code *)0x0) {
      (**(code **)(_DAT_003fc2c0 + 4))(3,3,0,0);
    }
  }
  return;
}

