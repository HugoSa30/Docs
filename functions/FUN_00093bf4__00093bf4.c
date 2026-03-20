/*
 * Program: n42.bin
 * Function: FUN_00093bf4
 * Entry: 00093bf4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00093bf4(void)

{
  char cVar1;
  
  FUN_00096a68(300);
  _DAT_003fffec = 0x5a78aa23;
  _DAT_003f9e6c = 0;
  cVar1 = FUN_000936c4();
  if (((cVar1 != '\x01') && (cVar1 = FUN_00093744(), cVar1 != '\x01')) &&
     (cVar1 = FUN_0009398c(), cVar1 != '\x01')) {
    cVar1 = FUN_00093aa4();
    if (cVar1 == '\x01') {
      _DAT_003fffec = 0;
      (*_DAT_00fc0020)();
      return;
    }
    cVar1 = FUN_00093824();
    if (((cVar1 == '\x01') && (cVar1 = FUN_00093a50(), cVar1 != '\0')) &&
       (cVar1 = FUN_00093b9c(), cVar1 == '\0')) {
      _DAT_003fffec = 0;
      _DAT_003ffff0 = 2;
      FUN_00093638();
      FUN_00096db0();
      FUN_00096bd4();
      FUN_000928b0();
      return;
    }
    cVar1 = FUN_000938dc();
    if (cVar1 == '\x01') {
      _DAT_003fffec = 0;
      _DAT_003ffff0 = 2;
      (*_DAT_00f00020)();
      return;
    }
  }
  FUN_00093638();
  FUN_00096db0();
  FUN_00096bd4();
  FUN_00092714();
  return;
}

