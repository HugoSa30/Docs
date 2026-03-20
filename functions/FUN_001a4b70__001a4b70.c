/*
 * Program: n42.bin
 * Function: FUN_001a4b70
 * Entry: 001a4b70
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001a4b70(int param_1,char *param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  undefined uVar3;
  undefined *puVar4;
  int *piVar5;
  undefined *puVar6;
  
  param_1 = param_1 * 0xc;
  piVar5 = (int *)(*(int *)(DAT_005ba9f0 + 0x14) + param_1);
  puVar4 = (undefined *)(*(int *)(DAT_005ba9f0 + 0x18) + param_1);
  iVar2 = piVar5[1];
  bVar1 = 0;
  if (*(char *)(piVar5 + 2) != '\0') {
    puVar6 = (undefined *)(*piVar5 + -1);
    do {
      puVar6 = puVar6 + 1;
      _5(*puVar6,iVar2,8,DAT_003fbd5f == 0,DAT_003fbd5f);
      iVar2 = iVar2 + 8;
      bVar1 = bVar1 + 1;
    } while (bVar1 < *(byte *)(*(int *)(DAT_005ba9f0 + 0x14) + param_1 + 8));
  }
  FUN_0010f75c();
  if (DAT_003fbd5f == DAT_005ba9f0[2]) {
    DAT_005baa1c = **(undefined4 **)(DAT_005ba9f0 + 0xc);
    DAT_005baa20 = (code *)(*(undefined4 **)(DAT_005ba9f0 + 0xc))[1];
    DAT_005ba9fc = (uint)DAT_005ba9f0[3];
    iVar2 = 0xb;
  }
  else {
    if (*DAT_005ba9f0 == param_4) {
      DAT_005baa1c = **(undefined4 **)(DAT_005ba9f0 + 8);
      DAT_005baa20 = (code *)(*(undefined4 **)(DAT_005ba9f0 + 8))[1];
      DAT_005ba9fc = (uint)DAT_005ba9f0[1];
      uVar3 = *(undefined *)((int)piVar5 + 10);
      goto LAB_001a4ccc;
    }
    DAT_005baa1c = **(undefined4 **)(DAT_005ba9f0 + 4);
    DAT_005baa20 = (code *)(*(undefined4 **)(DAT_005ba9f0 + 4))[1];
    DAT_005ba9fc = 0;
    iVar2 = 9;
  }
  uVar3 = *(undefined *)((int)piVar5 + iVar2);
LAB_001a4ccc:
  puVar4[2] = uVar3;
  if (DAT_005ba9fc == 2) {
    if (*param_2 == -0x7f) {
      return;
    }
    puVar4[1] = *(undefined *)*piVar5;
    DAT_005baa00 = 1;
  }
  iVar2 = _5(uVar3,param_2,param_3,DAT_003fbd5f,param_4);
  if (iVar2 == 0) {
    iVar2 = (*DAT_005baa20)(puVar4[2],param_3);
    if (iVar2 == 0) {
      uVar3 = 0xc;
    }
    else {
      DAT_005ba9f6 = (undefined2)param_3;
      uVar3 = 0xd;
    }
  }
  else {
    uVar3 = 6;
  }
  *puVar4 = uVar3;
  return;
}

