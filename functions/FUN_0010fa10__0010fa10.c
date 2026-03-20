/*
 * Program: n42.bin
 * Function: FUN_0010fa10
 * Entry: 0010fa10
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0010fa10(int param_1)

{
  undefined uVar1;
  undefined uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined local_28;
  undefined local_27 [15];
  
  iVar9 = *(int *)(DAT_005baa10 + 0x10) + param_1 * 0x18;
  iVar5 = *(int *)(DAT_005baa10 + 0xc) + param_1 * 0xc;
  puVar7 = (undefined *)(*(int *)(DAT_005baa10 + 8) + (uint)*(byte *)(iVar5 + 1) * 4);
  uVar1 = *puVar7;
  puVar6 = &local_28;
  if (puVar7[2] == '\x01') {
    local_28 = *(undefined *)(iVar9 + 0xe);
    puVar6 = local_27;
    uVar4 = (**(code **)(DAT_005baa10 + 0x18))(*(undefined *)(iVar9 + 0xf));
  }
  else {
    uVar4 = FUN_0010a1f8(uVar1);
    if ((puVar7[2] == -0x7e) && ((*(byte *)(iVar9 + 0xe) & 0xf0) == 0xe0)) {
      uVar4 = uVar4 & 0xffffff00 | *(byte *)(iVar9 + 0xe) - 8;
    }
  }
  if ((*(byte *)(iVar9 + 0xc) & 8) == 8) {
    if (*(char *)(iVar9 + 0x13) == '\0') {
      *(undefined4 *)(iVar9 + 0x14) = 10;
      *(undefined *)(iVar9 + 0xd) = 0;
      *(byte *)(iVar9 + 0xc) = *(byte *)(iVar9 + 0xc) & 0xf7;
      DAT_005baa27 = DAT_005baa27 + -1;
      return;
    }
    *(char *)(iVar9 + 0x13) = *(char *)(iVar9 + 0x13) + -1;
    *puVar6 = 0x31;
    *(undefined2 *)(iVar9 + 10) = *(undefined2 *)(*(int *)(iVar5 + 4) + 0x10);
  }
  else {
    *puVar6 = 0x30;
    iVar8 = *(int *)(iVar5 + 4);
    *(undefined2 *)(iVar9 + 10) = *(undefined2 *)(iVar8 + 10);
    *(undefined4 *)(iVar9 + 0x14) = 0xfffffffb;
    *(undefined *)(iVar9 + 0x13) = *(undefined *)(iVar8 + 2);
    *(undefined *)(iVar9 + 0x11) = **(undefined **)(iVar5 + 4);
    *(undefined *)(iVar9 + 0xd) = 2;
  }
  puVar6[1] = *(undefined *)(iVar9 + 0x11);
  puVar6[2] = *(undefined *)(iVar9 + 0x12);
  uVar3 = *(undefined2 *)(iVar9 + 10);
  uVar2 = *(undefined *)(iVar9 + 0xd);
  *(undefined2 *)(iVar9 + 10) = 0;
  *(undefined *)(iVar9 + 0xd) = 1;
  iVar5 = FUN_0010f76c(uVar1,&local_28,uVar4);
  if (iVar5 == 0) {
    *(undefined2 *)(iVar9 + 10) = uVar3;
    *(undefined *)(iVar9 + 0xd) = uVar2;
  }
  return;
}

