/*
 * Program: n42.bin
 * Function: FUN_000f3a8c
 * Entry: 000f3a8c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000f3a8c(uint param_1,char *param_2,undefined *param_3)

{
  *param_2 = '\x01' - ((DAT_005bae18 & 1 << (param_1 & 0x3f)) == 0);
  *param_3 = 0;
  return;
}

