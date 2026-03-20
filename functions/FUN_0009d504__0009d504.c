/*
 * Program: n42.bin
 * Function: FUN_0009d504
 * Entry: 0009d504
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0009d504(int param_1,short *param_2,short *param_3)

{
  ushort uVar1;
  
  if (param_3 == (short *)0x0) {
    for (uVar1 = *(ushort *)(param_1 * 4 + 0xec00); 0xf < uVar1; uVar1 = uVar1 - 0x10) {
      if (*param_2 != 0) {
        return 0;
      }
      if (param_2[1] != 0) {
        return 0;
      }
      if (param_2[2] != 0) {
        return 0;
      }
      if (param_2[3] != 0) {
        return 0;
      }
      if (param_2[4] != 0) {
        return 0;
      }
      if (param_2[5] != 0) {
        return 0;
      }
      if (param_2[6] != 0) {
        return 0;
      }
      if (param_2[7] != 0) {
        return 0;
      }
      param_2 = param_2 + 8;
    }
  }
  else {
    for (uVar1 = *(ushort *)(param_1 * 4 + 0xec00); 0xf < uVar1; uVar1 = uVar1 - 0x10) {
      if (*param_2 != *param_3) {
        return 0;
      }
      if (param_2[1] != param_3[1]) {
        return 0;
      }
      if (param_2[2] != param_3[2]) {
        return 0;
      }
      if (param_2[3] != param_3[3]) {
        return 0;
      }
      if (param_2[4] != param_3[4]) {
        return 0;
      }
      if (param_2[5] != param_3[5]) {
        return 0;
      }
      if (param_2[6] != param_3[6]) {
        return 0;
      }
      if (param_2[7] != param_3[7]) {
        return 0;
      }
      param_2 = param_2 + 8;
      param_3 = param_3 + 8;
    }
  }
  return 1;
}

