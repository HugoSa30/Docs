/*
 * Program: n42.bin
 * Function: FUN_000b5508
 * Entry: 000b5508
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000b5508(int param_1)

{
  if (param_1 < -0x7fff) {
    param_1 = -0x7fff;
  }
  else if (0x7fff < param_1) {
    param_1 = 0x7fff;
  }
  return (int)(short)param_1;
}

