/*
 * Program: n42.bin
 * Function: FUN_0010be24
 * Entry: 0010be24
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010be24(void)

{
  uint uVar1;
  
  if (DAT_003fbe20 == '\0') {
    _DAT_003fbe28 = 0;
  }
  else {
    DAT_003fbd75 = 1;
    uVar1 = (**(code **)(_DAT_003fbd60 + 8))();
    if (uVar1 <= *_DAT_003fbdec) {
      FUN_0010bbf8();
      _DAT_003fbe28 = 0xf0bea0;
    }
  }
  return;
}

