/*
 * Program: n42.bin
 * Function: FUN_000ceed4
 * Entry: 000ceed4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000ceed4(void)

{
  if ((B_tprel >> 3 & 1) != 0) {
    B_ale = B_ale & 0xfe;
  }
  return;
}

