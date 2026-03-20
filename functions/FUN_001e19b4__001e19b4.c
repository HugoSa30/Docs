/*
 * Program: n42.bin
 * Function: FUN_001e19b4
 * Entry: 001e19b4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001e19b4(undefined2 param_1)

{
  bool bVar1;
  undefined4 in_TBLr;
  
  bVar1 = (_DAT_0030500c >> 8 & 1) != 0;
  if (bVar1) {
    _DAT_0030500e = param_1;
    _DAT_003fb828 = in_TBLr;
  }
  return bVar1;
}

