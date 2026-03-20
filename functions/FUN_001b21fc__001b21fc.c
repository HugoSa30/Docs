/*
 * Program: n42.bin
 * Function: FUN_001b21fc
 * Entry: 001b21fc
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001b21fc(void)

{
  char cVar1;
  ushort uVar2;
  
  uVar2 = 0;
  do {
    cVar1 = (*(code *)&SUB_00fb1fcc)(uVar2 & 0xff);
    if (cVar1 == '\0') {
      return 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return 1;
}

