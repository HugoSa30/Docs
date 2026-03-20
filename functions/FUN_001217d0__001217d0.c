/*
 * Program: n42.bin
 * Function: FUN_001217d0
 * Entry: 001217d0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001217d0(undefined4 param_1,char **param_2)

{
  if (nmot_w == 0) {
    if (*(short *)((int)param_2 + 6) == 0) {
      _DAT_003fffd4 = _DAT_003fffd4 | 0x9160000;
      (**(code **)(_DAT_003fbd60 + 0x24))(0xf2465c);
      FUN_0012469c();
      *(undefined2 *)(param_2 + 2) = 0;
      *(undefined *)((int)param_2 + 10) = 1;
      return;
    }
    if (*(short *)((int)param_2 + 6) == 1) {
      if (**param_2 == '\x01') {
        _DAT_003fffd4 = _DAT_003fffd4 | 0x9160000;
        (**(code **)(_DAT_003fbd60 + 0x24))(0xf2465c);
        FUN_0012469c();
        *(undefined2 *)(param_2 + 2) = 0;
        *(undefined *)((int)param_2 + 10) = 1;
        return;
      }
      if (**param_2 == '\x02') {
        _DAT_003fffd4 = _DAT_003fffd4 | 0x9160000;
        (**(code **)(_DAT_003fbd60 + 0x24))(0xf2465c);
        FUN_0012469c();
        *(undefined *)((int)param_2 + 10) = 3;
        return;
      }
    }
    **param_2 = '\x12';
  }
  else {
    **param_2 = '\"';
  }
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined *)((int)param_2 + 10) = 2;
  return;
}

