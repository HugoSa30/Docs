/*
 * Program: n42.bin
 * Function: FUN_00103a60
 * Entry: 00103a60
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00103a60(void)

{
  undefined4 uVar1;
  
  if ((((_DAT_00f00004 == 0x33333333) && (0xefffff < _DAT_00f00018)) && (_DAT_00f00018 < 0xf10000))
     && (((0xefffff < _DAT_00f00008 && (_DAT_00f00008 < 0xf10000)) &&
         ((0xf0ffff < _DAT_00f0001c && (_DAT_00f0001c < 0xff0000)))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

