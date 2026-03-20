/*
 * Program: n42.bin
 * Function: FUN_00103c38
 * Entry: 00103c38
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00103c38(void)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_00103a60();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = *_DAT_00f00008 == -0x5001f7eb;
  }
  return bVar2;
}

