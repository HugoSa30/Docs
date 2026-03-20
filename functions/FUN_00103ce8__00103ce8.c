/*
 * Program: n42.bin
 * Function: FUN_00103ce8
 * Entry: 00103ce8
 * Exported by: ExportAllDecompiledFunctions.java
 */


bool FUN_00103ce8(void)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_00103b88();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = *DAT_001c0008 == -0x5001f7eb;
  }
  return bVar2;
}

