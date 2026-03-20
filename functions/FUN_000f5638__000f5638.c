/*
 * Program: n42.bin
 * Function: FUN_000f5638
 * Entry: 000f5638
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f5638(code **param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = 0;
  while ((*param_1 == (code *)0x0 || (cVar1 = (**param_1)(), cVar1 != '\x01'))) {
    param_1 = param_1 + 2;
    bVar2 = bVar2 + 1;
    if (6 < bVar2) {
      if (_DAT_003fc364 != (code *)0x0) {
        (*_DAT_003fc364)(10,0,param_2);
      }
      (*(code *)&SUB_00faca3c)(0x6f);
      return;
    }
  }
  if (DAT_003fc3dc == '\0') {
    return;
  }
  if (_DAT_003fc364 == (code *)0x0) {
    return;
  }
  (*_DAT_003fc364)(10,bVar2,param_1);
  return;
}

