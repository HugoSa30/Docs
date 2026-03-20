/*
 * Program: n42.bin
 * Function: FUN_001abc28
 * Entry: 001abc28
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001abc28(byte param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    if (_DAT_003fc5a8 == 0) {
      if ((_DAT_003fc3e0 != (code **)0x0) && (*_DAT_003fc3e0 != (code *)0x0)) {
        (**_DAT_003fc3e0)(4,0x3a,0);
      }
      uVar1 = 0;
    }
    else if (*(int *)(&UNK_003fc44c + (uint)param_1 * 0x70) == 0) {
      if ((_DAT_003fc3e0 != (code **)0x0) && (*_DAT_003fc3e0 != (code *)0x0)) {
        (**_DAT_003fc3e0)(4,0x3b,param_1);
      }
      uVar1 = 0;
    }
    else if (*(int *)(_DAT_003fc5a8 + (uint)param_1 * 0xc) == 0) {
      if ((_DAT_003fc3e0 != (code **)0x0) && (*_DAT_003fc3e0 != (code *)0x0)) {
        (**_DAT_003fc3e0)(4,0x3b,param_1);
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    if ((_DAT_003fc3e0 != (code **)0x0) && (*_DAT_003fc3e0 != (code *)0x0)) {
      (**_DAT_003fc3e0)(4,0x38,param_1);
    }
    uVar1 = 0;
  }
  return uVar1;
}

