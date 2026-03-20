/*
 * Program: n42.bin
 * Function: FUN_000e2e60
 * Entry: 000e2e60
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000e2e60(int param_1,int param_2)

{
  if (param_2 < 10000) {
    if (param_2 < 1) {
      param_2 = 1;
    }
  }
  else {
    param_2 = 9999;
  }
  if (param_1 == 0) {
    FUN_000f3ebc(2,param_2,0x28);
  }
  else if (param_1 == 1) {
    FUN_000f3ebc(3,param_2,0x28);
  }
  return;
}

