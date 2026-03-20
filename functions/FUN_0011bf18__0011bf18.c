/*
 * Program: n42.bin
 * Function: FUN_0011bf18
 * Entry: 0011bf18
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011bf18(undefined4 param_1,int *param_2)

{
  if (*(short *)((int)param_2 + 6) == 0) {
    *(undefined *)*param_2 = 0xef;
    *(undefined *)(*param_2 + 1) = 0x8f;
    *(undefined2 *)(param_2 + 2) = 2;
    *(undefined *)((int)param_2 + 10) = 1;
  }
  else {
    (**(code **)(_DAT_003fbd60 + 0x28))();
    *(undefined *)((int)param_2 + 10) = 3;
  }
  return;
}

