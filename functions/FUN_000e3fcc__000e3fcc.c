/*
 * Program: n42.bin
 * Function: FUN_000e3fcc
 * Entry: 000e3fcc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e3fcc(void)

{
  if (B_kl15 == 0) {
    _tnachl_w = 0;
    _B_nlale = _B_nlale & 0xbfff | 0x8000;
  }
  else {
    _B_nlale = _B_nlale & 0x7fff;
  }
  return;
}

