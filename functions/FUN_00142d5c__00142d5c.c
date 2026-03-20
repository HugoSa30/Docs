/*
 * Program: n42.bin
 * Function: FUN_00142d5c
 * Entry: 00142d5c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00142d5c(void)

{
  if (bbdcy == 0) {
    if (B_stend == '\0') {
      _DAT_003fa670 = 0;
    }
    else if (_DAT_003fa670 < _TWBDCY) {
      _DAT_003fa670 = _DAT_003fa670 + 1;
    }
    else {
      bbdcy = B_dcy;
      FUN_00142f24();
      if (_dcycnt != -1) {
        _dcycnt = _dcycnt + 1;
      }
    }
  }
  return;
}

