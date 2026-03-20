/*
 * Program: n42.bin
 * Function: FUN_0011b484
 * Entry: 0011b484
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011b484(undefined4 param_1,char **param_2)

{
  char cVar1;
  
  if (DAT_003fb2a0 == '\x01') {
    *(undefined2 *)((int)param_2 + 6) = 1;
    **param_2 = '\x01';
    DAT_003fb2a0 = '\0';
  }
  if (*(short *)((int)param_2 + 6) == 1) {
    if (**param_2 != '\x01') {
      **param_2 = '\x12';
      *(undefined2 *)(param_2 + 2) = 1;
      *(undefined *)((int)param_2 + 10) = 2;
      return;
    }
    cVar1 = FUN_0010c82c();
    if (cVar1 == '\x04') {
      if (DAT_003fb2d4 == '\0') {
        **param_2 = '\"';
        *(undefined2 *)(param_2 + 2) = 1;
        *(undefined *)((int)param_2 + 10) = 2;
        return;
      }
      if (DAT_003fb2d4 != '\x01') {
        if (_DAT_003fb2a2 == _DAT_003fb2d6) {
          **param_2 = '\x01';
          *(undefined2 *)(param_2 + 2) = 1;
          *(undefined *)((int)param_2 + 10) = 1;
        }
        else {
          **param_2 = '\x12';
          *(undefined2 *)(param_2 + 2) = 1;
          *(undefined *)((int)param_2 + 10) = 2;
        }
        FUN_001222ac();
        return;
      }
      **param_2 = '!';
      *(undefined2 *)(param_2 + 2) = 1;
      *(undefined *)((int)param_2 + 10) = 2;
      DAT_003fb2a0 = 1;
      return;
    }
    **param_2 = '\x11';
  }
  else {
    **param_2 = '\x10';
  }
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined *)((int)param_2 + 10) = 2;
  return;
}

