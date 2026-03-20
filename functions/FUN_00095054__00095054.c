/*
 * Program: n42.bin
 * Function: FUN_00095054
 * Entry: 00095054
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00095054(void)

{
  int in_r11;
  undefined4 uVar1;
  
  if (in_r11 < (int)(uint)_DAT_003fa212) {
    FUN_00094824();
    DAT_003fa17a = 6;
    uVar1 = 0x10;
  }
  else {
    DAT_003fa17a = 0;
    uVar1 = 0x89;
    FUN_00094980();
  }
  return uVar1;
}

