/*
 * Program: n42.bin
 * Function: FUN_000b1710
 * Entry: 000b1710
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000b1710(int param_1,int param_2)

{
  if (param_2 == 0) {
    if (param_1 < 0) {
      param_1 = -0x8000;
    }
    else {
      param_1 = 0x7fff;
    }
  }
  else {
    param_1 = param_1 / param_2;
    if (param_1 < -0x8000) {
      param_1 = -0x8000;
    }
    else if (0x7fff < param_1) {
      param_1 = 0x7fff;
    }
  }
  return param_1;
}

