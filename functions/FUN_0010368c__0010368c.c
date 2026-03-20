/*
 * Program: n42.bin
 * Function: FUN_0010368c
 * Entry: 0010368c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010368c(undefined4 param_1,char **param_2)

{
  if (*(short *)((int)param_2 + 6) == 1) {
    if (nmot_w == 0) {
      if (**param_2 == '\x01') {
        (**(code **)(_DAT_003fbd60 + 0x24))(0xf0365c);
        **param_2 = '\x01';
        *(undefined2 *)(param_2 + 2) = 1;
        *(undefined *)((int)param_2 + 10) = 1;
        return;
      }
      **param_2 = '\x12';
    }
    else {
      **param_2 = '\"';
    }
  }
  else {
    **param_2 = '\x12';
  }
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined *)((int)param_2 + 10) = 2;
  return;
}

