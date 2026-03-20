/*
 * Program: n42.bin
 * Function: 7
 * Entry: 001008b0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 _(undefined2 *param_1)

{
  undefined2 uVar1;
  
  if (_DAT_003fb988 == 2) {
    uVar1 = (**(code **)(_DAT_003fb99c + 0x10))();
  }
  else {
    uVar1 = 4;
  }
  *param_1 = uVar1;
  _DAT_003fb988 = 0;
  return uVar1;
}

