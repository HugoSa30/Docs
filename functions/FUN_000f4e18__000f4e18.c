/*
 * Program: n42.bin
 * Function: FUN_000f4e18
 * Entry: 000f4e18
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f4e18(void)

{
  _DAT_003fc334 = _DAT_003fc334 + -1;
  if (_DAT_003fc334 == 0) {
    _DAT_003fc334 = 5;
    (*(code *)&SUB_00fadd68)();
  }
  if (*(code **)(_DAT_003fc2c0 + 4) != (code *)0x0) {
    (**(code **)(_DAT_003fc2c0 + 4))(3,0xc,0,0);
  }
  return;
}

