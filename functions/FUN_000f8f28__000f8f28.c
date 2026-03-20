/*
 * Program: n42.bin
 * Function: FUN_000f8f28
 * Entry: 000f8f28
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f8f28(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    if (_DAT_003fc720 == 0) {
      (*(code *)&SUB_00fb0fbc)(0x35,0);
      uVar1 = 0;
    }
    else if (*(int *)(&UNK_003fc724 + param_1 * 0x18) == 0) {
      (*(code *)&SUB_00fb0fbc)(0x36,param_1);
      uVar1 = 0;
    }
    else if (*(int *)(_DAT_003fc720 + param_1 * 0xc) == 0) {
      (*(code *)&SUB_00fb0fbc)(0x34,param_1);
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    (*(code *)&SUB_00fb0fbc)(0x33,param_1);
    uVar1 = 0;
  }
  return uVar1;
}

