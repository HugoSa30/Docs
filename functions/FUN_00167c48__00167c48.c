/*
 * Program: n42.bin
 * Function: FUN_00167c48
 * Entry: 00167c48
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00167c48(void)

{
  if (((nmot < DAT_001c1d78) || (ub <= DAT_001c1d79)) || (DAT_001c1d7a <= ub)) {
    B_desee = '\0';
  }
  else {
    B_desee = '\x01';
  }
  if ((B_desee != '\0') && (DAT_003fab3b == '\0')) {
    FUN_001aa7c8();
  }
  DAT_003fab3b = B_desee;
  return;
}

