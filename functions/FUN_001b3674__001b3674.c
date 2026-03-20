/*
 * Program: n42.bin
 * Function: FUN_001b3674
 * Entry: 001b3674
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_001b3674(uint param_1)

{
  undefined uVar1;
  
  if (_DAT_003fc978 < 2) {
    if ((_DAT_003fc914 != (code **)0x0) && (*_DAT_003fc914 != (code *)0x0)) {
      (**_DAT_003fc914)(0xd,1,param_1 & 0xffff);
    }
    uVar1 = 0;
  }
  else if ((int)param_1 < 6) {
    uVar1 = (&DAT_003fc924)[param_1 * 0x10];
  }
  else {
    if ((_DAT_003fc914 != (code **)0x0) && (*_DAT_003fc914 != (code *)0x0)) {
      (**_DAT_003fc914)(0xd,2,param_1 & 0xffff);
    }
    uVar1 = 0;
  }
  return uVar1;
}

