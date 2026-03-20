/*
 * Program: n42.bin
 * Function: FUN_001090cc
 * Entry: 001090cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001090cc(int param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  _5();
  iVar1 = *(int *)(param_1 + 4);
  if (*(char *)(iVar1 + 0x3a) == '\0') {
LAB_00109134:
    *(uint *)(*(int *)(param_1 + 4) + 0x3a) = *param_2 & 0xffff0000;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c) = param_3;
  }
  else {
    if (*(char *)param_2 != '\0') {
      if (*(char *)(iVar1 + 0x3b) == '\0') {
        uVar2 = 0;
        goto LAB_00109188;
      }
      *(undefined *)(iVar1 + 0x3b) = 0;
      _6();
      (**(code **)(*(int *)(param_1 + 4) + 0x1c))();
      _5();
      goto LAB_00109134;
    }
    *(undefined *)(iVar1 + 0x3a) = 0;
    *(char *)(iVar1 + 0x3b) = *(char *)((int)param_2 + 1);
    _4(param_1,0xf096d0);
    _5(param_1,0);
  }
  uVar2 = 1;
LAB_00109188:
  _6();
  return uVar2;
}

