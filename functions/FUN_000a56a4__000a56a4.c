/*
 * Program: n42.bin
 * Function: FUN_000a56a4
 * Entry: 000a56a4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a56a4(void)

{
  bool bVar1;
  uint in_TBLr;
  uint in_TBUr;
  undefined auStack_10 [12];
  
  if (DAT_003fa308 != '\0') {
    bVar1 = _DAT_003fa300 < in_TBUr;
    if (_DAT_003fa300 == in_TBUr) {
      bVar1 = _DAT_003fa304 < in_TBLr;
    }
    if (bVar1) {
      FUN_000a4030(_DAT_00016ecc,auStack_10);
      DAT_003fa308 = '\0';
    }
  }
  return;
}

