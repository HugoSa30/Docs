/*
 * Program: n42.bin
 * Function: calc_value_from_x_y_2
 * Entry: 000a96d0
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined calc_value_from_x_y_2(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  
  bVar1 = *param_1;
  uVar6 = (uint)param_1[1];
  iVar5 = 0;
  uVar7 = 0;
  pbVar3 = param_1 + 2;
  if (((int)(uint)*pbVar3 < (int)param_2) &&
     (iVar5 = bVar1 - 1, (int)param_2 < (int)(uint)pbVar3[iVar5])) {
    iVar5 = iVar5 - (uint)(bVar1 >> 1);
    if ((int)(uint)pbVar3[iVar5] < (int)param_2) {
      iVar5 = iVar5 + (uint)(bVar1 >> 1) + -1;
    }
    if ((int)param_2 < (int)(uint)pbVar3[iVar5]) {
      pbVar9 = pbVar3 + iVar5;
      do {
        iVar5 = iVar5 + -1;
        pbVar9 = pbVar9 + -1;
      } while ((int)param_2 < (int)(uint)*pbVar9);
    }
    if (pbVar3[iVar5] != param_2) {
      uVar7 = ((param_2 - pbVar3[iVar5]) * 0x10000) /
              ((uint)pbVar3[iVar5 + 1] - (uint)pbVar3[iVar5]);
    }
  }
  pbVar3 = pbVar3 + bVar1;
  iVar10 = 0;
  uVar8 = 0;
  if (((int)(uint)*pbVar3 < (int)param_3) &&
     (iVar10 = uVar6 - 1, (int)param_3 < (int)(uint)pbVar3[iVar10])) {
    uVar2 = (uint)(param_1[1] >> 1);
    iVar10 = iVar10 - uVar2;
    if ((int)(uint)pbVar3[iVar10] < (int)param_3) {
      iVar10 = iVar10 + uVar2 + -1;
    }
    if ((int)param_3 < (int)(uint)pbVar3[iVar10]) {
      pbVar9 = pbVar3 + iVar10;
      do {
        iVar10 = iVar10 + -1;
        pbVar9 = pbVar9 + -1;
      } while ((int)param_3 < (int)(uint)*pbVar9);
    }
    if (pbVar3[iVar10] != param_3) {
      uVar8 = ((param_3 - pbVar3[iVar10]) * 0x10000) /
              ((uint)pbVar3[iVar10 + 1] - (uint)pbVar3[iVar10]);
    }
  }
  uVar4 = calc_vanos_optimal(pbVar3 + uVar6,uVar6,uVar7 + iVar5 * 0x10000,uVar8 + iVar10 * 0x10000);
  return uVar4;
}

