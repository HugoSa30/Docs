/*
 * Program: n42.bin
 * Function: FUN_000f9008
 * Entry: 000f9008
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f9008(uint param_1)

{
  undefined4 uVar1;
  
  if ((int)param_1 < 0x20) {
    if (_DAT_003fc7f4 == 0) {
      if ((_DAT_003fc7f0 != (code **)0x0) && (*_DAT_003fc7f0 != (code *)0x0)) {
        (**_DAT_003fc7f0)(7,0x35,0);
      }
      uVar1 = 0;
    }
    else if (*(int *)(&UNK_003fc7f8 + param_1 * 4) == 0) {
      if ((_DAT_003fc7f0 != (code **)0x0) && (*_DAT_003fc7f0 != (code *)0x0)) {
        (**_DAT_003fc7f0)(7,0x34,0);
      }
      uVar1 = 0;
    }
    else if (*(int *)(_DAT_003fc7f4 + param_1 * 0xc) == 0) {
      if ((_DAT_003fc7f0 != (code **)0x0) && (*_DAT_003fc7f0 != (code *)0x0)) {
        (**_DAT_003fc7f0)(7,0x34,param_1 & 0xff);
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    if ((_DAT_003fc7f0 != (code **)0x0) && (*_DAT_003fc7f0 != (code *)0x0)) {
      (**_DAT_003fc7f0)(7,0x33,param_1 & 0xff);
    }
    uVar1 = 0;
  }
  return uVar1;
}

