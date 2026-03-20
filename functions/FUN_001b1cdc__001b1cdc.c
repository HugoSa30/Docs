/*
 * Program: n42.bin
 * Function: FUN_001b1cdc
 * Entry: 001b1cdc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b1cdc(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  _DAT_003fc8ca = (undefined2)param_1;
  if ((*_DAT_003fc880 != (code *)0x0) &&
     (cVar1 = (**_DAT_003fc880)(8,param_1,param_2), cVar1 != '\0')) {
    _DAT_003fc8ca = 0;
  }
  return;
}

