/*
 * Program: n42.bin
 * Function: FUN_00141b64
 * Entry: 00141b64
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00141b64(int param_1,int param_2)

{
  if ((int)(uint)nsllm < param_1) {
    if (vfzg == 0) {
      if (B_fs != '\0') {
        B_nsub = DAT_003fb4ca;
        return;
      }
      if (param_2 == 0) {
        B_nsub = DAT_003fb4ca;
        return;
      }
    }
    else {
      if (vfzg == 0) {
        B_nsub = DAT_003fb4ca;
        return;
      }
      if (param_2 != 0) {
        B_nsub = DAT_003fb4ca;
        return;
      }
      if (B_fs == '\0') {
        B_nsub = DAT_003fb4ca;
        return;
      }
    }
    if ((int)(uint)nsllm < param_1) {
      DAT_003fb4ca = 1;
    }
  }
  else {
    DAT_003fb4ca = 0;
  }
  B_nsub = DAT_003fb4ca;
  return;
}

