/*
 * Program: n42.bin
 * Function: FUN_001252dc
 * Entry: 001252dc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001252dc(int param_1)

{
  if (zzylzag == 0) {
    if (misfirez_w < *(ushort *)(param_1 + 4)) goto LAB_00125348;
    func_0xff221d28(param_1 + 4);
    flgst_w = ignitioz_w;
  }
  if (*(ushort *)(param_1 + 4) <= misfirez_w) {
    return;
  }
LAB_00125348:
  if (zzylzag < *(byte *)(param_1 + 0xf)) {
    func_0xff221d28(param_1 + 2);
  }
  *(byte *)(param_1 + 0xf) = zzylzag;
  flgst_w = 0;
  if (*(word *)(param_1 + 2) == nwnumbz_w) {
    *(undefined *)(param_1 + 8) = 1;
  }
  return;
}

