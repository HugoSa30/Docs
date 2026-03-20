/*
 * Program: n42.bin
 * Function: FUN_000938dc
 * Entry: 000938dc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000938dc(void)

{
  undefined4 uVar1;
  
  if (((((_DAT_00f00018 < &DAT_00f00000) || ((int *)0xffffff < _DAT_00f00018)) ||
       (*_DAT_00f00018 != _DAT_00f00000)) ||
      ((((_DAT_00f00004 != 0x33333333 || (_DAT_00f00020 < 0xf00000)) ||
        ((0xffffff < _DAT_00f00020 || ((_DAT_00f00024 < 0xf00000 || (0xffffff < _DAT_00f00024))))))
       || (uRam00f00028 < 0xf00000)))) ||
     (((0xffffff < uRam00f00028 || (uRam00f0002c < 0xf00000)) || (0xffffff < uRam00f0002c)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

