/*
 * Program: n42.bin
 * Function: FUN_001a1974
 * Entry: 001a1974
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001a1974(void)

{
  undefined *puVar1;
  char cVar2;
  
  puVar1 = &DAT_003fbc20;
  for (cVar2 = DAT_00fa9c80; cVar2 != '\0'; cVar2 = cVar2 + -1) {
    puVar1[8] = 0xff;
    puVar1[9] = 0xff;
    puVar1 = puVar1 + 0xc;
  }
  return;
}

