/*
 * Program: n42.bin
 * Function: FUN_00090904
 * Entry: 00090904
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00090904(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  
  if (param_3 < (int)(uint)LAB_001c00f8_1) {
    _DAT_003fa10c = (code **)(&LAB_001c0114 + param_3 * 0xc);
    uVar1 = (**_DAT_003fa10c)(param_1);
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

