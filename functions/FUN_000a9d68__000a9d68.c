/*
 * Program: n42.bin
 * Function: FUN_000a9d68
 * Entry: 000a9d68
 * Exported by: ExportAllDecompiledFunctions.java
 */


byte FUN_000a9d68(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  
  bVar1 = *param_1;
  uVar3 = (uint)param_1[1];
  iVar9 = 0;
  uVar4 = 0;
  pbVar8 = param_1 + 2;
  if (((int)(uint)*pbVar8 < (int)param_2) &&
     (iVar9 = bVar1 - 1, (int)param_2 < (int)(uint)pbVar8[iVar9])) {
    iVar9 = iVar9 - (uint)(bVar1 >> 1);
    if ((int)(uint)pbVar8[iVar9] < (int)param_2) {
      iVar9 = iVar9 + (uint)(bVar1 >> 1) + -1;
    }
    if ((int)param_2 < (int)(uint)pbVar8[iVar9]) {
      pbVar6 = pbVar8 + iVar9;
      do {
        iVar9 = iVar9 + -1;
        pbVar6 = pbVar6 + -1;
      } while ((int)param_2 < (int)(uint)*pbVar6);
    }
    if (pbVar8[iVar9] != param_2) {
      uVar4 = ((param_2 - pbVar8[iVar9]) * 0x10000) /
              ((uint)pbVar8[iVar9 + 1] - (uint)pbVar8[iVar9]);
    }
  }
  pbVar8 = pbVar8 + bVar1;
  iVar7 = 0;
  uVar5 = 0;
  if (((int)(uint)*pbVar8 < (int)param_3) &&
     (iVar7 = uVar3 - 1, (int)param_3 < (int)(uint)pbVar8[iVar7])) {
    uVar2 = (uint)(param_1[1] >> 1);
    iVar7 = iVar7 - uVar2;
    if ((int)(uint)pbVar8[iVar7] < (int)param_3) {
      iVar7 = iVar7 + uVar2 + -1;
    }
    if ((int)param_3 < (int)(uint)pbVar8[iVar7]) {
      pbVar6 = pbVar8 + iVar7;
      do {
        iVar7 = iVar7 + -1;
        pbVar6 = pbVar6 + -1;
      } while ((int)param_3 < (int)(uint)*pbVar6);
    }
    if (pbVar8[iVar7] != param_3) {
      uVar5 = ((param_3 - pbVar8[iVar7]) * 0x10000) /
              ((uint)pbVar8[iVar7 + 1] - (uint)pbVar8[iVar7]);
    }
  }
  return pbVar8[(uVar4 + iVar9 * 0x10000 >> 0x10) * uVar3 +
                (uVar5 + iVar7 * 0x10000 >> 0x10) + uVar3];
}

