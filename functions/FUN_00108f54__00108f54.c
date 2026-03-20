/*
 * Program: n42.bin
 * Function: FUN_00108f54
 * Entry: 00108f54
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00108f54(int *param_1,ushort *param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  
  _5();
  iVar2 = param_1[1];
  *(ushort **)(iVar2 + 0x10) = param_2;
  *(undefined2 *)(iVar2 + 0x2c) = param_3;
  if ((undefined *)*param_1 == &DAT_00305000) {
    iVar1 = 1;
  }
  else {
    iVar1 = 3;
  }
  if (((int)(uint)DAT_00305014 >> iVar1 & 1U) != 0) {
    if (*(char *)(iVar2 + 0x44) == '\0') {
      uVar3 = *param_2;
    }
    else {
      uVar3 = *(byte *)param_2 | 0xff00;
    }
    *(ushort *)((undefined *)*param_1 + 0xe) = uVar3;
  }
  *(undefined2 *)(iVar2 + 0x40) = 0;
  *(undefined *)(iVar2 + 0x42) = 2;
  *(undefined2 *)(*param_1 + 10) = *(undefined2 *)(param_1[1] + 0x36);
  _6();
  return;
}

