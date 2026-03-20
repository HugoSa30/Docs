/*
 * Program: n42.bin
 * Function: FUN_000b0050
 * Entry: 000b0050
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b0050(void)

{
  if (_DAT_003fc2f8 < 7) {
    _DAT_003fc2fc = 7;
    _DAT_003fc2f8 = 7;
    if (*(code **)(_DAT_003fc2c0 + 4) != (code *)0x0) {
      (**(code **)(_DAT_003fc2c0 + 4))(3,4,0,0);
    }
    if (*(code **)(_DAT_003fc2c0 + 4) != (code *)0x0) {
      (**(code **)(_DAT_003fc2c0 + 4))(3,5,0,0);
    }
  }
  return;
}

