/*
 * Program: n42.bin
 * Function: FUN_00100f94
 * Entry: 00100f94
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00100f94(uint param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  
  if (param_3 < (int)(uint)DAT_00f00b24) {
    if ((param_1 < DAT_005bd0c8) || (DAT_005bd0cc < param_1)) {
      uVar1 = 1;
    }
    else {
      _DAT_003fb9a8 = param_1;
      uVar1 = FUN_00100d90();
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

