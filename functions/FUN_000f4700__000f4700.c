/*
 * Program: n42.bin
 * Function: FUN_000f4700
 * Entry: 000f4700
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f4700(uint *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (_DAT_003fc2f8 < 5) {
    uVar1 = 0;
  }
  else {
    if (param_2 == 1) {
      *param_1 = *_DAT_003fc2e8 & 0x3fffffff;
    }
    else {
      *param_1 = *_DAT_003fc2f4 & 0x3fffffff;
    }
    uVar2 = (*(code *)&SUB_000655d8)(*param_1);
    *param_1 = uVar2;
    uVar1 = 1;
  }
  return uVar1;
}

