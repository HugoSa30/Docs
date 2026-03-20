/*
 * Program: n42.bin
 * Function: FUN_00109dc4
 * Entry: 00109dc4
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_00109dc4(uint param_1)

{
  return (param_1 & 7) << 8 | (param_1 & 0x18) << 3;
}

