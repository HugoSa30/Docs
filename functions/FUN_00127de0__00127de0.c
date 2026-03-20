/*
 * Program: n42.bin
 * Function: FUN_00127de0
 * Entry: 00127de0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00127de0(void)

{
  uint uVar1;
  
  uVar1 = func_0xff210928(7,0,0);
  if ((((int)(uVar1 & 0xff) >> 6 & 1U) == 0) && (((int)(uVar1 & 0xff) >> 3 & 1U) != 0)) {
    _DAT_003fe95c = _DAT_003fe87b;
  }
  else {
    _DAT_003fe95c = _DAT_003fe885;
  }
  _DAT_003fe960 = _DAT_003fe95c;
  _DAT_003fe964 = _DAT_003fe95c;
  EwsNvBits = EwsNvBits | 8;
  return;
}

