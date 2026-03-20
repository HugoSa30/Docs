/*
 * Program: n42.bin
 * Function: FUN_001aed08
 * Entry: 001aed08
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001aed08(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  _DAT_003fc35a = (undefined2)param_1;
  if (((_DAT_003fc350 != 0) && (*(code **)(_DAT_003fc350 + 4) != (code *)0x0)) &&
     (cVar1 = (**(code **)(_DAT_003fc350 + 4))(0xc,param_1,param_2), cVar1 != '\0')) {
    _DAT_003fc35a = 0;
  }
  return;
}

