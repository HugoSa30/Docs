/*
 * Program: n42.bin
 * Function: FUN_000d1c2c
 * Entry: 000d1c2c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000d1c2c(void)

{
  char cVar1;
  
  if (DAT_005b8d12 == '\0') {
    (*(code *)&SUB_00faec64)(0x1c7b0);
    cVar1 = (*(code *)&SUB_00faee04)();
    if (cVar1 == '\0') {
      DAT_005b8d12 = '\0';
      (*(code *)&SUB_00faed80)();
    }
    else {
      DAT_005b8d12 = '\x01';
    }
    if (DAT_005b8d12 == '\0') {
      FUN_000b33fc();
    }
    else {
      FUN_000b3540();
    }
  }
  else {
    FUN_000b3540();
  }
  return;
}

