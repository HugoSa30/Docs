/*
 * Program: n42.bin
 * Function: FUN_0011dc5c
 * Entry: 0011dc5c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0011dc5c(undefined4 param_1,char **param_2)

{
  if (*(short *)((int)param_2 + 6) == 0) {
    FUN_00124548();
    *(undefined2 *)(param_2 + 2) = 0;
    *(undefined *)((int)param_2 + 10) = 1;
    return;
  }
  if (*(short *)((int)param_2 + 6) == 1) {
    if (**param_2 == '\x01') {
      FUN_00124548();
      *(undefined2 *)(param_2 + 2) = 0;
      *(undefined *)((int)param_2 + 10) = 1;
      return;
    }
    if (**param_2 == '\x02') {
      FUN_00124548();
      *(undefined *)((int)param_2 + 10) = 3;
      return;
    }
  }
  **param_2 = '\x12';
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined *)((int)param_2 + 10) = 2;
  return;
}

