/*
 * Program: n42.bin
 * Function: FUN_00097790
 * Entry: 00097790
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_00097790(uint param_1)

{
  if (DAT_003fa0fb == '\x01') {
    param_1 = FUN_00096048();
    param_1 = param_1 & 0xff;
  }
  else if (DAT_003fa0fb == '\x02') {
    param_1 = FUN_00097604();
    param_1 = param_1 & 0xff;
  }
  return param_1;
}

