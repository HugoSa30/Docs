/*
 * Program: n42.bin
 * Function: FUN_001e1b10
 * Entry: 001e1b10
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001e1b10(void)

{
  bool bVar1;
  undefined4 in_TBLr;
  
  bVar1 = false;
  if ((_DAT_0030500c >> 6 & 1) != 0) {
    bVar1 = (_DAT_0030500c >> 1 & 1) != 0;
    DAT_003fb834 = (undefined)_DAT_0030500e;
    _DAT_003fb828 = in_TBLr;
  }
  return bVar1;
}

