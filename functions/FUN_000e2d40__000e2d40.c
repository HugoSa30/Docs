/*
 * Program: n42.bin
 * Function: FUN_000e2d40
 * Entry: 000e2d40
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_000e2d40(int param_1,dword *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    *param_2 = tnwie_l;
    if (synstate < 3) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (param_1 == 1) {
    *param_2 = tnwia2_l;
    if (synstate < 3) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

