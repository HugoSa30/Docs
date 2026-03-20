/*
 * Program: n42.bin
 * Function: FUN_001b3728
 * Entry: 001b3728
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001b3728(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (_DAT_003fc978 < 2) {
    if ((_DAT_003fc914 != (code **)0x0) && (*_DAT_003fc914 != (code *)0x0)) {
      (**_DAT_003fc914)(0xd,1,param_1 & 0xffff);
    }
    uVar2 = 0;
  }
  else if ((int)param_1 < 6) {
    if (param_1 == 1) {
      param_3 = ((param_3 & 0xffff) + 0x1e) / 0x3c;
    }
    iVar1 = param_1 * 0x10;
    *(undefined4 *)(&DAT_003fc918 + iVar1) = param_2;
    (&DAT_003fc924)[iVar1] = (char)param_1;
    (&DAT_003fc91c)[iVar1] = (char)param_3;
    *(undefined4 *)(&DAT_003fc920 + iVar1) = param_4;
    uVar2 = 1;
  }
  else {
    if ((_DAT_003fc914 != (code **)0x0) && (*_DAT_003fc914 != (code *)0x0)) {
      (**_DAT_003fc914)(0xd,2,param_1 & 0xffff);
    }
    uVar2 = 0;
  }
  return uVar2;
}

