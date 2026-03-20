/*
 * Program: n42.bin
 * Function: FUN_000a420c
 * Entry: 000a420c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a420c(void)

{
  char cVar1;
  uint in_MSR;
  undefined auStack_10 [4];
  
  if (DAT_003fa259 != '\0') {
    do {
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
    } while (DAT_003fa259 != '\0');
  }
  FUN_000a367c(1,2,auStack_10);
  return;
}

