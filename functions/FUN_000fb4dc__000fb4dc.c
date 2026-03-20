/*
 * Program: n42.bin
 * Function: FUN_000fb4dc
 * Entry: 000fb4dc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000fb4dc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(_DAT_003fbcbc + 0x6c) + param_1 * 4) == -1) {
    FUN_000fba18(5,param_1);
    uVar1 = 5;
  }
  else {
    *(undefined4 *)(*(int *)(_DAT_003fbcbc + 0x6c) + param_1 * 4) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}

