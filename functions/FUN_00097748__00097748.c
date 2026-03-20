/*
 * Program: n42.bin
 * Function: FUN_00097748
 * Entry: 00097748
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_00097748(uint param_1)

{
  if (DAT_003fa0fb == '\x01') {
    param_1 = FUN_00096004();
    param_1 = param_1 & 0xff;
  }
  else if (DAT_003fa0fb == '\x02') {
    param_1 = FUN_000975e8();
    param_1 = param_1 & 0xff;
  }
  return param_1;
}

