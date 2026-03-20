/*
 * Program: n42.bin
 * Function: FUN_00091c30
 * Entry: 00091c30
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00091c30(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = _DAT_00ffff80;
  if (param_1 != 5) {
    uVar1 = *(uint *)(param_1 * 4 + 0xffff84);
  }
  if ((uVar1 == 0) || (uVar1 == 0xffffffff)) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 ^ param_2 * 2;
  }
  return uVar1;
}

