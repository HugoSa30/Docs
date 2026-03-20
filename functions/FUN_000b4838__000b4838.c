/*
 * Program: n42.bin
 * Function: FUN_000b4838
 * Entry: 000b4838
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000b4838(word param_1)

{
  DAT_005b9ad8 = inisynmon;
  inisynmon = param_1;
  if (drrev_sta == 3) {
    FUN_000fa6bc(0x1e58c);
  }
  FUN_000fa6bc(0x1e5cc);
  return;
}

