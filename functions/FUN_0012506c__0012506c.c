/*
 * Program: n42.bin
 * Function: FUN_0012506c
 * Entry: 0012506c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0012506c(word *param_1)

{
  bool bVar1;
  
  if ((ignitioz_w == *param_1) && (param_1[2] < misfirez_w)) {
    bVar1 = (randreg_w >> 6 & 1) != 0;
    *(bool *)(param_1 + 7) = bVar1;
    if (bVar1) {
      randreg_w = randreg_w >> 1 | 0x8000;
    }
    else {
      randreg_w = randreg_w >> 1;
    }
    if ((randreg_w & 1) != 0) {
      *param_1 = 0;
      func_0xff221d28(param_1 + 2);
      flgst_w = (word)(1 << (zzylzag & 0x3f));
    }
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

