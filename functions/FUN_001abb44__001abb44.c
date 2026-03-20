/*
 * Program: n42.bin
 * Function: FUN_001abb44
 * Entry: 001abb44
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001abb44(int param_1,byte param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 4) {
    if (*(int *)(&UNK_003fc44c + (uint)param_2 * 0x70) < 3) {
      if ((_DAT_003fc3e0 != (code **)0x0) && (*_DAT_003fc3e0 != (code *)0x0)) {
        (**_DAT_003fc3e0)(4,0x39);
      }
      uVar1 = 0;
    }
    else {
      (&UNK_003fc44b)[(uint)param_2 * 0x70] = (char)(((param_1 % 0x2d0 & 0xffffU) * 0x78) / 0x2d0);
      uVar1 = 1;
    }
  }
  else {
    if ((_DAT_003fc3e0 != (code **)0x0) && (*_DAT_003fc3e0 != (code *)0x0)) {
      (**_DAT_003fc3e0)(4,0x38,param_2);
    }
    uVar1 = 0;
  }
  return uVar1;
}

