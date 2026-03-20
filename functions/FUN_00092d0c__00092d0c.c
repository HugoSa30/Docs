/*
 * Program: n42.bin
 * Function: FUN_00092d0c
 * Entry: 00092d0c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00092d0c(undefined2 *param_1)

{
  undefined2 uVar1;
  
  if (_DAT_003fa1a4 == 2) {
    uVar1 = (**(code **)(_DAT_003fa1bc + 0x10))();
  }
  else {
    uVar1 = 4;
  }
  *param_1 = uVar1;
  _DAT_003fa1a4 = 0;
  return uVar1;
}

