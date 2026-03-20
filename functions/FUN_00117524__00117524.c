/*
 * Program: n42.bin
 * Function: FUN_00117524
 * Entry: 00117524
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00117524(int param_1)

{
  DAT_003fb274 = 0;
  if (param_1 == 0x7a) {
    DAT_003fb274 = (DAT_003fbe95 & 1) << 2 | (DAT_003fbe94 & 1) << 1 | DAT_003fbe93 & 1;
  }
  return;
}

