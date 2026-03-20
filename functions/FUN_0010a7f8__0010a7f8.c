/*
 * Program: n42.bin
 * Function: FUN_0010a7f8
 * Entry: 0010a7f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_0010a7f8(uint param_1)

{
  if ((param_1 & 0x80000) == 0) {
    param_1 = param_1 >> 0x15;
  }
  else {
    param_1 = param_1 >> 1 & 0x3ffff | param_1 >> 3 & 0x1ffc0000;
  }
  return param_1;
}

