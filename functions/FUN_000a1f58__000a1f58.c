/*
 * Program: n42.bin
 * Function: FUN_000a1f58
 * Entry: 000a1f58
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_000a1f58(uint param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  
  if (param_3 < (int)(uint)DAT_00011974) {
    if ((param_1 < _DAT_00011978) || (_DAT_0001197c < param_1)) {
      uVar1 = 1;
    }
    else {
      _DAT_003fa1d4 = param_1;
      uVar1 = FUN_000a1c14();
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

