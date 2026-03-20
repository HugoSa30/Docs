/*
 * Program: n42.bin
 * Function: FUN_000fc4cc
 * Entry: 000fc4cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000fc4cc(int param_1)

{
  undefined4 uVar1;
  
  if (_DAT_003fbcc8 == _DAT_003fbccc) {
    if (*(int *)(param_1 + 4) == _DAT_003fbcdc) {
      *(int *)(*(int *)(_DAT_003fbcbc + 0x60) + _DAT_003fbcdc * 0x10 + 4) = param_1;
      uVar1 = 0;
    }
    else {
      FUN_000fba18(0xb,param_1);
      uVar1 = 0xb;
    }
  }
  else {
    uVar1 = 10;
  }
  return uVar1;
}

