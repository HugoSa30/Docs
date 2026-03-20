/*
 * Program: n42.bin
 * Function: FUN_000fba18
 * Entry: 000fba18
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000fba18(undefined4 param_1)

{
  if (_DAT_003fbd00 != (code **)0x0) {
    if ((*_DAT_003fbd00 != (code *)0x0) && ((_DAT_003fbcf0 & 0x1000) == 0)) {
      _DAT_003fbcf0 = _DAT_003fbcf0 | 0x1000;
      (**_DAT_003fbd00)();
      _DAT_003fbcf0 = _DAT_003fbcf0 & 0xffffefff;
    }
  }
  return param_1;
}

