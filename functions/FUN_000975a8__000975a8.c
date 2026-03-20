/*
 * Program: n42.bin
 * Function: FUN_000975a8
 * Entry: 000975a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000975a8(void)

{
  char in_r12;
  
  DAT_003fa0fa = in_r12 + '\x01';
  if (DAT_003fa0fa == '\0') {
    DAT_003fa0fa = in_r12 + '\x02';
  }
  if (_DAT_003f9ef0 != 0) {
    FUN_00092534();
  }
  return;
}

