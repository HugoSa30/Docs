/*
 * Program: n42.bin
 * Function: FUN_00103e04
 * Entry: 00103e04
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00103e04(void)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_00103af4();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = DAT_001c0000 == *(int *)(_LAB_001c0018 + 0xc0000);
  }
  return bVar2;
}

