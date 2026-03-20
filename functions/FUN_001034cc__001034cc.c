/*
 * Program: n42.bin
 * Function: FUN_001034cc
 * Entry: 001034cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001034cc(undefined4 param_1,undefined4 *param_2)

{
  short sVar1;
  undefined uVar2;
  
  if (*(short *)((int)param_2 + 6) == 8) {
    if (DAT_003f9f38 == '\0') {
      uVar2 = 0x22;
    }
    else {
      FUN_00104370();
      _();
      DAT_003f9f38 = '\0';
      sVar1 = _(&UNK_003f9fd8);
      if (sVar1 == 0) {
        *(undefined2 *)(param_2 + 2) = 0;
        uVar2 = 1;
        goto LAB_00103568;
      }
      uVar2 = 0x72;
    }
  }
  else {
    uVar2 = 0x12;
  }
  *(undefined *)*param_2 = uVar2;
  *(undefined2 *)(param_2 + 2) = 1;
  uVar2 = 2;
LAB_00103568:
  *(undefined *)((int)param_2 + 10) = uVar2;
  return;
}

