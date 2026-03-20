/*
 * Program: n42.bin
 * Function: FUN_00141ad4
 * Entry: 00141ad4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00141ad4(undefined4 param_1,int param_2,undefined4 param_3,undefined *param_4,char *param_5
                 )

{
  char cVar1;
  int in_r12;
  
  *(undefined *)(in_r12 + -0x4b33) = 0;
  if (param_2 == 0) {
    cVar1 = DAT_005b8ac7;
    if (DAT_001cb25b == '\x01') {
      cVar1 = DAT_001cb25c;
    }
    *param_4 = (char)(((uint)(byte)((cVar1 == '\x01') << 1) << 8) >> 9);
  }
  else {
    *param_5 = DAT_003fb4cd;
  }
  DAT_005b8eca = DAT_001cb25e;
  if (*param_5 != '\0') {
    DAT_005b8eca = DAT_001cb25d;
  }
  if (nsllm < DAT_005b8eca) {
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
    if (nsllm < DAT_005b8eca) {
      DAT_003fb4ca = 1;
    }
  }
  else {
    DAT_003fb4ca = 0;
  }
  B_nsub = DAT_003fb4ca;
  return;
}

