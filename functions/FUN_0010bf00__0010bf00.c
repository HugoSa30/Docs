/*
 * Program: n42.bin
 * Function: FUN_0010bf00
 * Entry: 0010bf00
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010bf00(void)

{
  if (DAT_003fbd6c != '\0') {
    if (DAT_003fbe1b != **(char **)(_DAT_003fbd68 + 8)) {
      DAT_003fbe30 = 1;
      DAT_003fbe31 = **(char **)(_DAT_003fbd68 + 8);
    }
    if (DAT_003fbe21 == '\0') {
      _DAT_003fbe28 = 0;
    }
    else {
      FUN_0010bc80();
      _DAT_003fbe28 = 0xf0bedc;
    }
  }
  return;
}

