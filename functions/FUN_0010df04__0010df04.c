/*
 * Program: n42.bin
 * Function: FUN_0010df04
 * Entry: 0010df04
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010df04(void)

{
  char local_8 [4];
  
  FUN_001090b4(*_DAT_003fba9c,local_8);
  if (local_8[0] == *(char *)(_DAT_003fba9c + 1)) {
    local_8[0] = '\0';
    FUN_001090cc(*_DAT_003fba9c,local_8);
  }
  return;
}

