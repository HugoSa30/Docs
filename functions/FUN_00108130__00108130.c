/*
 * Program: n42.bin
 * Function: FUN_00108130
 * Entry: 00108130
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00108130(undefined4 *param_1)

{
  int iVar1;
  int in_TBLr;
  
  if ((*(ushort *)((undefined *)*param_1 + 0xc) >> 5 & 1) == 0) {
    if ((undefined *)*param_1 == &DAT_00305000) {
      iVar1 = 1;
    }
    else {
      iVar1 = 3;
    }
    if (((int)(uint)DAT_00305014 >> iVar1 & 1U) != 0) {
      iVar1 = param_1[1];
      if ((uint)(in_TBLr - *(int *)(param_1[1] + 0x28)) <= *(int *)(iVar1 + 0x24) - 1U) {
        return;
      }
      *(undefined4 *)(iVar1 + 0x24) = 0;
      (**(code **)(iVar1 + 0xc))();
      return;
    }
  }
  *(int *)(param_1[1] + 0x28) = in_TBLr;
  return;
}

