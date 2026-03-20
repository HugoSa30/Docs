/*
 * Program: n42.bin
 * Function: FUN_00124f7c
 * Entry: 00124f7c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00124f7c(word *param_1)

{
  if ((ignitioz_w == *param_1) && (param_1[2] < misfirez_w)) {
    *param_1 = 0;
    func_0xff221d28(param_1 + 2);
    flgst_w = (word)(1 << (zzylzag & 0x3f));
  }
  else {
    func_0xff221d28(param_1);
    flgst_w = 0;
  }
  if (misfirez_w <= param_1[2]) {
    if (zzylzag < *(byte *)((int)param_1 + 0xf)) {
      func_0xff221d28(param_1 + 1);
    }
    *(byte *)((int)param_1 + 0xf) = zzylzag;
    if (param_1[1] == nwnumbz_w) {
      *(undefined *)(param_1 + 4) = 1;
    }
  }
  return;
}

