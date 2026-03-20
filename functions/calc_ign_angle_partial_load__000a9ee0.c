/*
 * Program: n42.bin
 * Function: calc_ign_angle_partial_load
 * Entry: 000a9ee0
 * Exported by: ExportAllDecompiledFunctions.java
 */


int calc_ign_angle_partial_load
              (uint param_1,byte *param_2,uint param_3,byte *param_4,undefined4 param_5,uint axis_x,
              uint axis_y)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  uVar3 = 0;
  if (((int)(uint)*param_2 < (int)axis_x) &&
     (iVar5 = param_1 - 1, (int)axis_x < (int)(uint)param_2[iVar5])) {
    iVar5 = iVar5 - (param_1 >> 1);
    if ((int)(uint)param_2[iVar5] < (int)axis_x) {
      iVar5 = iVar5 + (param_1 >> 1) + -1;
    }
    if ((int)axis_x < (int)(uint)param_2[iVar5]) {
      pbVar2 = param_2 + iVar5;
      do {
        iVar5 = iVar5 + -1;
        pbVar2 = pbVar2 + -1;
      } while ((int)axis_x < (int)(uint)*pbVar2);
    }
    if (param_2[iVar5] != axis_x) {
      uVar3 = ((axis_x - param_2[iVar5]) * 0x10000) /
              ((uint)param_2[iVar5 + 1] - (uint)param_2[iVar5]);
    }
  }
  iVar6 = 0;
  uVar4 = 0;
  if (((int)(uint)*param_4 < (int)axis_y) &&
     (iVar6 = param_3 - 1, (int)axis_y < (int)(uint)param_4[iVar6])) {
    iVar6 = iVar6 - (param_3 >> 1);
    if ((int)(uint)param_4[iVar6] < (int)axis_y) {
      iVar6 = iVar6 + (param_3 >> 1) + -1;
    }
    if ((int)axis_y < (int)(uint)param_4[iVar6]) {
      pbVar2 = param_4 + iVar6;
      do {
        iVar6 = iVar6 + -1;
        pbVar2 = pbVar2 + -1;
      } while ((int)axis_y < (int)(uint)*pbVar2);
    }
    if (param_4[iVar6] != axis_y) {
      uVar4 = ((axis_y - param_4[iVar6]) * 0x10000) /
              ((uint)param_4[iVar6 + 1] - (uint)param_4[iVar6]);
    }
  }
  cVar1 = calc_ign_angle_full_load(param_5,param_3,uVar3 + iVar5 * 0x10000,uVar4 + iVar6 * 0x10000);
  return (int)cVar1;
}

