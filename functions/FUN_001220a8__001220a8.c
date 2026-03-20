/*
 * Program: n42.bin
 * Function: FUN_001220a8
 * Entry: 001220a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001220a8(void)

{
  undefined4 uVar1;
  
  if ((DAT_003fb2c0 & 4) == 0) {
    if ((DAT_003fb2c0 & 0x10) == 0x10) {
      DAT_003fb2c1 = 0;
    }
    else {
      DAT_003fb2c1 = 4;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

