/*
 * Program: n42.bin
 * Function: FUN_00103d98
 * Entry: 00103d98
 * Exported by: ExportAllDecompiledFunctions.java
 */


bool FUN_00103d98(void)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_00103af4();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(DAT_001c0008 + 0xc0000) == -0x5001f7eb;
  }
  return bVar2;
}

