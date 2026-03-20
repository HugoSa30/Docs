/*
 * Program: n42.bin
 * Function: FUN_000b16e4
 * Entry: 000b16e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000b16e4(int param_1,int param_2)

{
  if (param_2 == 0) {
    if (param_1 < 0) {
      param_1 = -0x80000000;
    }
    else {
      param_1 = 0x7fffffff;
    }
  }
  else {
    param_1 = param_1 / param_2;
  }
  return param_1;
}

