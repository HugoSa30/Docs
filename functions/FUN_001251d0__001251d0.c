/*
 * Program: n42.bin
 * Function: FUN_001251d0
 * Entry: 001251d0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001251d0(int param_1)

{
  word wVar1;
  
  if ((ushort)zzylzag == *(ushort *)(param_1 + 6)) {
    if (misfirez_w < *(ushort *)(param_1 + 4)) goto LAB_00125244;
    func_0xff221d28(param_1 + 4);
    flgst_w = (word)(1 << (zzylzag & 0x3f));
  }
  if (*(ushort *)(param_1 + 4) <= misfirez_w) {
    return;
  }
LAB_00125244:
  if (zzylzag < *(byte *)(param_1 + 0xf)) {
    func_0xff221d28(param_1 + 2);
  }
  *(byte *)(param_1 + 0xf) = zzylzag;
  flgst_w = 0;
  wVar1 = pausez_w;
  if (*(short *)(param_1 + 6) == 3) {
    wVar1 = nwnumbz_w;
  }
  if (*(word *)(param_1 + 2) == wVar1) {
    func_0xff221d28(param_1 + 6);
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 2) = 0;
  }
  if (*(short *)(param_1 + 6) == 4) {
    *(undefined *)(param_1 + 8) = 1;
  }
  return;
}

