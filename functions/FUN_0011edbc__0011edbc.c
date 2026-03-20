/*
 * Program: n42.bin
 * Function: FUN_0011edbc
 * Entry: 0011edbc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011edbc(undefined4 param_1,int *param_2)

{
  if (DAT_003f9b69 == '\x01') {
    DAT_003fb26a = FUN_00120b2c(7);
    if (DAT_003fb26a == 0) {
      *(undefined *)*param_2 = 0;
      *(undefined *)(*param_2 + 1) = 0;
      *(undefined *)(*param_2 + 2) = 0;
      *(undefined *)(*param_2 + 3) = 0;
      *(undefined *)(*param_2 + 4) = 0;
      *(undefined *)(*param_2 + 5) = 0;
      *(undefined2 *)(param_2 + 2) = 6;
      *(undefined *)((int)param_2 + 10) = 1;
    }
    else {
      _DAT_003fb26c = &UNK_003fb250;
      _DAT_003fb26c = (undefined *)FUN_00120e30(&UNK_003fb250,*param_2);
      *(undefined2 *)(param_2 + 2) = 6;
      if (DAT_003fb26a < 4) {
        *(undefined *)((int)param_2 + 10) = 1;
        DAT_003f9b69 = '\x01';
      }
      else {
        DAT_003fb26a = DAT_003fb26a - 3;
        *(undefined *)((int)param_2 + 10) = 4;
        DAT_003f9b69 = '\0';
      }
    }
  }
  else {
    _DAT_003fb26c = (undefined *)FUN_00120e30(_DAT_003fb26c,*param_2);
    *(undefined2 *)(param_2 + 2) = 6;
    if (DAT_003fb26a < 4) {
      *(undefined *)((int)param_2 + 10) = 1;
      DAT_003f9b69 = '\x01';
    }
    else {
      DAT_003fb26a = DAT_003fb26a - 3;
      *(undefined *)((int)param_2 + 10) = 4;
      DAT_003f9b69 = '\0';
    }
  }
  return;
}

