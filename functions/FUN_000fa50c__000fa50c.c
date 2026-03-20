/*
 * Program: n42.bin
 * Function: FUN_000fa50c
 * Entry: 000fa50c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fa50c(void)

{
  code *pcVar1;
  
  do {
    _DAT_003fbcdc = _DAT_003fbce0;
    _DAT_003fbcd8 = _DAT_003fbcd4;
    _DAT_002fc014 = **(undefined4 **)(_DAT_003fbcbc + 0x44);
    pcVar1 = *_DAT_003fbcd4;
    _DAT_003fbcd4 = _DAT_003fbcd4 + 1;
    (*pcVar1)();
  } while (_DAT_003fbcec < 0x100);
  _DAT_003fbcec = _DAT_003fbcec & 0xff;
  return;
}

