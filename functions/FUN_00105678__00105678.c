/*
 * Program: n42.bin
 * Function: FUN_00105678
 * Entry: 00105678
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00105678(int *param_1,int param_2)

{
  *param_1 = param_2;
  if (0 < param_2) {
    do {
      param_1 = param_1 + 1;
      *param_1 = 0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

