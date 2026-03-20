/*
 * Program: n42.bin
 * Function: FUN_001e1aac
 * Entry: 001e1aac
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001e1aac(void)

{
  undefined4 uVar1;
  undefined4 in_TBLr;
  
  if ((((int)(uint)_DAT_0030500c >> 8 & 1U) == 0) || (((int)(uint)_DAT_0030500c >> 7 & 1U) == 0)) {
    uVar1 = 0;
  }
  else {
    FUN_001e1a08(1);
    uVar1 = 1;
    _DAT_003fb828 = in_TBLr;
  }
  return uVar1;
}

