/*
 * Program: n42.bin
 * Function: FUN_00117034
 * Entry: 00117034
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00117034(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = func_0xff209390();
  if (iVar1 == 0x20) {
    *(undefined *)*param_2 = 0x22;
  }
  else {
    cVar2 = FUN_0010c82c();
    if (cVar2 != '\x04') {
      *(undefined *)*param_2 = 0x22;
      *(undefined2 *)(param_2 + 2) = 1;
      *(undefined *)((int)param_2 + 10) = 2;
      return;
    }
    if (DAT_003fb270 == '\0') {
      if ((*(short *)((int)param_2 + 6) != 2) || (*(char *)(param_2 + 3) != -0x70)) {
        *(undefined *)*param_2 = 0x12;
        *(undefined2 *)(param_2 + 2) = 1;
        *(undefined *)((int)param_2 + 10) = 2;
        return;
      }
      cVar2 = ((undefined *)*param_2)[1];
      if (cVar2 == '\0') {
        cVar2 = FUN_001220a8();
        if (cVar2 == '\0') {
          *(undefined *)*param_2 = 0x22;
          *(undefined2 *)(param_2 + 2) = 1;
          *(undefined *)((int)param_2 + 10) = 2;
          return;
        }
      }
      else {
        if (cVar2 != '\x01') {
          *(undefined *)*param_2 = 0x12;
          *(undefined2 *)(param_2 + 2) = 1;
          *(undefined *)((int)param_2 + 10) = 2;
          return;
        }
        cVar2 = FUN_001220f4();
        if (cVar2 == '\0') {
          *(undefined *)*param_2 = 0x22;
          *(undefined2 *)(param_2 + 2) = 1;
          *(undefined *)((int)param_2 + 10) = 2;
          return;
        }
      }
    }
    if (DAT_003fb2c1 == '\0') {
      DAT_003fb270 = 0;
      if (*(short *)((int)param_2 + 6) == 2) {
        *(undefined2 *)(param_2 + 2) = 2;
      }
      else {
        *(undefined2 *)(param_2 + 2) = 0;
      }
      *(undefined *)((int)param_2 + 10) = 1;
      return;
    }
    DAT_003fb270 = '\x01';
    *(undefined *)*param_2 = 0x21;
  }
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined *)((int)param_2 + 10) = 2;
  return;
}

