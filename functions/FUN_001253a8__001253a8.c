/*
 * Program: n42.bin
 * Function: FUN_001253a8
 * Entry: 001253a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001253a8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0xb) {
    FUN_001251d0();
  }
  else if (iVar1 == 0x11) {
    FUN_001252dc();
  }
  else if (iVar1 == 0x1e) {
    if (pausez_w == 1) {
      FUN_0012506c();
    }
    else if (pausez_w == 0) {
      FUN_00124f7c();
    }
  }
  return;
}

