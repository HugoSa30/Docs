/*
 * Program: n42.bin
 * Function: FUN_000a4308
 * Entry: 000a4308
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a4308(void)

{
  char cVar1;
  uint in_MSR;
  
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  if (DAT_003fa25e == '\x01') {
    cVar1 = FUN_000a47e0();
    if (cVar1 == '\x01') {
      cVar1 = FUN_000a4820();
      if (cVar1 == '\x01') {
        FUN_000a4ba8();
      }
    }
    else {
      _DAT_003fa214 = _DAT_003fa214 + 1;
    }
  }
  return;
}

