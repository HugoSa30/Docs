/*
 * Program: n42.bin
 * Function: FUN_000b1798
 * Entry: 000b1798
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000b1798(uint param_1,uint param_2)

{
  if (param_2 == 0) {
    param_1 = 0xffffffff;
  }
  else {
    param_1 = param_1 / param_2;
  }
  return param_1;
}

