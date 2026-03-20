/*
 * Program: n42.bin
 * Function: FUN_00103d40
 * Entry: 00103d40
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00103d40(void)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_00103a60();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = _DAT_00f00000 == *_DAT_00f00018;
  }
  return bVar2;
}

