/*
 * Program: n42.bin
 * Function: FUN_0012f604
 * Entry: 0012f604
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0012f604(void)

{
  char cVar1;
  
  func_0xff2233fc();
  (*(code *)&SUB_00faec64)(0x1c7b0);
  cVar1 = (*(code *)&SUB_00faee04)();
  if (cVar1 == '\0') {
    DAT_005b8d12 = 0;
    (*(code *)&SUB_00faed80)();
  }
  else {
    DAT_005b8d12 = 1;
  }
  if (B_pwf != '\0') {
    DAT_003fdc74 = 0;
  }
  return;
}

