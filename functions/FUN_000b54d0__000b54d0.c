/*
 * Program: n42.bin
 * Function: FUN_000b54d0
 * Entry: 000b54d0
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000b54d0(uint param_1)

{
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  else if (0xffff < (int)param_1) {
    param_1 = 0xffff;
  }
  return param_1 & 0xffff;
}

