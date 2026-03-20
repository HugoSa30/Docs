/*
 * Program: n42.bin
 * Function: FUN_0011aee0
 * Entry: 0011aee0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0011aee0(undefined4 param_1,undefined4 *param_2)

{
  byte bVar1;
  
  if (*(short *)((int)param_2 + 6) == 0) {
    *(undefined *)*param_2 = 0x11;
    *(undefined2 *)(param_2 + 2) = 1;
    *(undefined *)((int)param_2 + 10) = 2;
  }
  else {
    bVar1 = *(byte *)(param_2 + 3);
    if (bVar1 - 1 < 0x7f) {
      FUN_0011abf8(0);
    }
    else if ((bVar1 < 0x80) || (0x9f < bVar1)) {
      if (bVar1 - 0xa0 < 0x50) {
        FUN_0011abf8(1);
      }
      else if (bVar1 - 0xf0 < 10) {
        FUN_0011ad80(param_2);
      }
      else {
        *(undefined *)*param_2 = 0x11;
        *(undefined2 *)(param_2 + 2) = 1;
        *(undefined *)((int)param_2 + 10) = 2;
      }
    }
  }
  return;
}

