/*
 * Program: n42.bin
 * Function: FUN_001afd30
 * Entry: 001afd30
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001afd30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  _DAT_003fc66c = (undefined2)param_1;
  if ((*(code **)(_DAT_003fc5d8 + 0xc) != (code *)0x0) &&
     (cVar1 = (**(code **)(_DAT_003fc5d8 + 0xc))(9,param_1,param_2,param_3,param_4), cVar1 != '\0'))
  {
    _DAT_003fc66c = 0;
  }
  return;
}

