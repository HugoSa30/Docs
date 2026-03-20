/*
 * Program: n42.bin
 * Function: FUN_00093310
 * Entry: 00093310
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00093310(uint param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  
  if (param_3 < (int)(uint)DAT_001c0488) {
    if ((param_1 < _DAT_001c048c) || (_DAT_001c0490 < param_1)) {
      uVar1 = 1;
    }
    else {
      _DAT_003fa19c = param_1;
      uVar1 = FUN_00093248();
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

