/*
 * Program: n42.bin
 * Function: FUN_0011fab4
 * Entry: 0011fab4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0011fab4(undefined4 param_1,byte **param_2)

{
  if (*(short *)((int)param_2 + 6) == 1) {
    (*param_2)[1] = 0;
    (*param_2)[2] = 0;
    (*param_2)[3] = 0;
    (*param_2)[4] = 0;
    if (**param_2 < 0x39) {
                    /* WARNING: Could not emulate address calculation at 0x0011fb14 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)**param_2 * 4 + 0xf1fb20))();
      return;
    }
    *(undefined2 *)(param_2 + 2) = 0;
    *(undefined *)((int)param_2 + 10) = 3;
  }
  else {
    *(undefined2 *)(param_2 + 2) = 0;
    *(undefined *)((int)param_2 + 10) = 3;
  }
  return;
}

