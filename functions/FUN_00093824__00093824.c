/*
 * Program: n42.bin
 * Function: FUN_00093824
 * Entry: 00093824
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00093824(void)

{
  undefined4 uVar1;
  
  if (((((_DAT_00fc0018 < 0xf00000) || (0xffffff < _DAT_00fc0018)) ||
       (*(int *)(_DAT_00fc0018 + 0xc0000) != _DAT_00fc0000)) ||
      ((((_DAT_00fc0004 != 0x33333333 || (_DAT_00fc0020 < 0xf00000)) ||
        ((0xffffff < _DAT_00fc0020 || ((_DAT_00fc0024 < 0xf00000 || (0xffffff < _DAT_00fc0024))))))
       || (_DAT_00fc0028 < 0xf00000)))) ||
     (((0xffffff < _DAT_00fc0028 || (_DAT_00fc002c < 0xf00000)) || (0xffffff < _DAT_00fc002c)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

