/*
 * Program: n42.bin
 * Function: FUN_00106a54
 * Entry: 00106a54
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00106a54(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  
  if (param_3 < 1) {
    _dr_errId = (code **)(param_3 * 0xc + 0xf060a4);
    uVar1 = (**_dr_errId)();
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

