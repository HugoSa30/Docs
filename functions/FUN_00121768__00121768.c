/*
 * Program: n42.bin
 * Function: FUN_00121768
 * Entry: 00121768
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00121768(undefined4 param_1,undefined4 *param_2)

{
  if (*(short *)((int)param_2 + 6) == 1) {
    FUN_00135ca4();
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

