/*
 * Program: n42.bin
 * Function: FUN_001b2c98
 * Entry: 001b2c98
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001b2c98(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (_DAT_003fc978 < 2) {
    if ((_DAT_003fc914 != (code **)0x0) && (*_DAT_003fc914 != (code *)0x0)) {
      (**_DAT_003fc914)(0xd,1,0);
    }
    param_1 = 0;
  }
  else if ((int)param_1 < 6) {
    if ((int)param_2 < 6) {
      iVar1 = param_2 * 0x10;
      iVar2 = param_1 * 0x10;
      uVar3 = *(undefined4 *)(&DAT_003fc91c + iVar2);
      *(undefined4 *)(&DAT_003fc918 + iVar1) = *(undefined4 *)(&DAT_003fc918 + iVar2);
      *(undefined4 *)(&DAT_003fc91c + iVar1) = uVar3;
      uVar3 = *(undefined4 *)(&DAT_003fc924 + iVar2);
      *(undefined4 *)(&DAT_003fc920 + iVar1) = *(undefined4 *)(&DAT_003fc920 + iVar2);
      *(undefined4 *)(&DAT_003fc924 + iVar1) = uVar3;
    }
    else {
      if ((_DAT_003fc914 != (code **)0x0) && (*_DAT_003fc914 != (code *)0x0)) {
        (**_DAT_003fc914)(0xd,2,param_2 & 0xffff);
      }
      param_1 = 0;
    }
  }
  else {
    if ((_DAT_003fc914 != (code **)0x0) && (*_DAT_003fc914 != (code *)0x0)) {
      (**_DAT_003fc914)(0xd,2,param_1 & 0xffff);
    }
    param_1 = 0;
  }
  return param_1;
}

