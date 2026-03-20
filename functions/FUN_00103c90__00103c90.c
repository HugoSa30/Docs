/*
 * Program: n42.bin
 * Function: FUN_00103c90
 * Entry: 00103c90
 * Exported by: ExportAllDecompiledFunctions.java
 */


bool FUN_00103c90(void)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_00103b88();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = DAT_001c0000 == *DAT_001c001c;
  }
  return bVar2;
}

