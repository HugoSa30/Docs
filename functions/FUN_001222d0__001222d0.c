/*
 * Program: n42.bin
 * Function: FUN_001222d0
 * Entry: 001222d0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001222d0(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  _DAT_003fb2d8 = param_1;
  _DAT_003fb2dc = param_2;
  if (DAT_003fb2d4 == '\0') {
    if (param_2 < param_1) {
      uVar1 = 2;
    }
    else {
      DAT_003fb2d4 = '\x01';
      _DAT_003fb2d6 = 0;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

