/*
 * Program: n42.bin
 * Function: FUN_0011b804
 * Entry: 0011b804
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011b804(undefined4 param_1,undefined4 *param_2)

{
  if (*(short *)((int)param_2 + 6) == 0) {
    if ((_DAT_003fffe8 == -0x44bb1e97) && (nmot == 0)) {
      (**(code **)(_DAT_003fbd60 + 0x24))(0xf1b7d4);
    }
    else {
      _DAT_003fffe8 = 0;
    }
    B_fa = 0;
    B_bt = 0;
    (**(code **)(_DAT_003fbd60 + 0x28))();
    *(undefined2 *)(param_2 + 2) = 0;
    *(undefined *)((int)param_2 + 10) = 1;
  }
  else {
    *(undefined *)*param_2 = 0x10;
    *(undefined2 *)(param_2 + 2) = 1;
    *(undefined *)((int)param_2 + 10) = 2;
  }
  return;
}

