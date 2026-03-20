/*
 * Program: n42.bin
 * Function: FUN_000b13bc
 * Entry: 000b13bc
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000b13bc(uint param_1,uint param_2)

{
  if ((int)param_1 < 0) {
    param_1 = -param_1;
  }
  if (param_2 < param_1) {
    param_1 = param_2;
  }
  return param_1;
}

