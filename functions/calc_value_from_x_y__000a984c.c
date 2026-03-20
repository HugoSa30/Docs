/*
 * Program: n42.bin
 * Function: calc_value_from_x_y
 * Entry: 000a984c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined2 calc_value_from_x_y(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  undefined2 uVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  uVar1 = *param_1;
  uVar7 = (uint)param_1[1];
  iVar5 = 0;
  uVar8 = 0;
  puVar3 = param_1 + 2;
  if (((int)(uint)*puVar3 < (int)param_2) &&
     (iVar5 = uVar1 - 1, (int)param_2 < (int)(uint)puVar3[iVar5])) {
    iVar5 = iVar5 - (uint)(uVar1 >> 1);
    if ((int)(uint)puVar3[iVar5] < (int)param_2) {
      iVar5 = iVar5 + (uint)(uVar1 >> 1) + -1;
    }
    if ((int)param_2 < (int)(uint)puVar3[iVar5]) {
      puVar6 = puVar3 + iVar5;
      do {
        iVar5 = iVar5 + -1;
        puVar6 = puVar6 + -1;
      } while ((int)param_2 < (int)(uint)*puVar6);
    }
    if (puVar3[iVar5] != param_2) {
      uVar8 = ((param_2 - puVar3[iVar5]) * 0x10000) /
              ((uint)puVar3[iVar5 + 1] - (uint)puVar3[iVar5]);
    }
  }
  puVar3 = puVar3 + uVar1;
  iVar10 = 0;
  uVar9 = 0;
  if (((int)(uint)*puVar3 < (int)param_3) &&
     (iVar10 = uVar7 - 1, (int)param_3 < (int)(uint)puVar3[iVar10])) {
    uVar2 = (uint)(param_1[1] >> 1);
    iVar10 = iVar10 - uVar2;
    if ((int)(uint)puVar3[iVar10] < (int)param_3) {
      iVar10 = iVar10 + uVar2 + -1;
    }
    if ((int)param_3 < (int)(uint)puVar3[iVar10]) {
      puVar6 = puVar3 + iVar10;
      do {
        iVar10 = iVar10 + -1;
        puVar6 = puVar6 + -1;
      } while ((int)param_3 < (int)(uint)*puVar6);
    }
    if (puVar3[iVar10] != param_3) {
      uVar9 = ((param_3 - puVar3[iVar10]) * 0x10000) /
              ((uint)puVar3[iVar10 + 1] - (uint)puVar3[iVar10]);
    }
  }
  uVar4 = FUN_000aafb0(puVar3 + uVar7,uVar7,uVar8 + iVar5 * 0x10000,uVar9 + iVar10 * 0x10000);
  return uVar4;
}

