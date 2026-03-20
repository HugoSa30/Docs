/*
 * Program: n42.bin
 * Function: FUN_000964c4
 * Entry: 000964c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000964c4(int param_1)

{
  uint unaff_r31;
  
  if (unaff_r31 <= (uint)((param_1 - _DAT_003f9f54) + _DAT_003f9f4c * 3)) {
    _DAT_003f9f60 = _DAT_003f9f64 + 1;
    DAT_003f9f50 = 0;
    FUN_00096088();
    if (DAT_003f9f45 != '\0') {
      DAT_003f9f45 = '\0';
      FUN_00096674();
    }
  }
  return;
}

