/*
 * Program: n42.bin
 * Function: FUN_001adcf8
 * Entry: 001adcf8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001adcf8(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  _DAT_003fc32c = (undefined2)param_1;
  if ((*_DAT_003fc2c0 != (code *)0x0) &&
     (cVar1 = (**_DAT_003fc2c0)(3,param_1,param_2), cVar1 != '\0')) {
    _DAT_003fc32c = 0;
  }
  return;
}

