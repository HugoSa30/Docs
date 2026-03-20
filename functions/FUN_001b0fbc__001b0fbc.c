/*
 * Program: n42.bin
 * Function: FUN_001b0fbc
 * Entry: 001b0fbc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b0fbc(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  _DAT_003fc7e6 = (undefined2)param_1;
  if (((_DAT_003fc71c != 0) && (*(code **)(_DAT_003fc71c + 0x10) != (code *)0x0)) &&
     (cVar1 = (**(code **)(_DAT_003fc71c + 0x10))(2,param_1,param_2), cVar1 != '\0')) {
    _DAT_003fc7e6 = 0;
  }
  return;
}

