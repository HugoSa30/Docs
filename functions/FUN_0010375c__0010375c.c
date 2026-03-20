/*
 * Program: n42.bin
 * Function: FUN_0010375c
 * Entry: 0010375c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0010375c(undefined4 param_1,undefined4 *param_2)

{
  if (*(short *)((int)param_2 + 6) == 0) {
    FUN_0010c780();
    *(undefined2 *)(param_2 + 2) = 0;
    *(undefined *)((int)param_2 + 10) = 1;
  }
  else {
    *(undefined *)*param_2 = 0x12;
    *(undefined2 *)(param_2 + 2) = 1;
    *(undefined *)((int)param_2 + 10) = 2;
  }
  return;
}

