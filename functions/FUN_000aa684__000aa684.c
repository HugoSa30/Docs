/*
 * Program: n42.bin
 * Function: FUN_000aa684
 * Entry: 000aa684
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000aa684(uint param_1,ushort *param_2,uint param_3,char *param_4,undefined4 param_5,
                uint param_6,int param_7)

{
  char cVar1;
  ushort *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  uVar4 = 0;
  if (((int)(uint)*param_2 < (int)param_6) &&
     (iVar6 = param_1 - 1, (int)param_6 < (int)(uint)param_2[iVar6])) {
    iVar6 = iVar6 - (param_1 >> 1);
    if ((int)(uint)param_2[iVar6] < (int)param_6) {
      iVar6 = iVar6 + (param_1 >> 1) + -1;
    }
    if ((int)param_6 < (int)(uint)param_2[iVar6]) {
      puVar2 = param_2 + iVar6;
      do {
        iVar6 = iVar6 + -1;
        puVar2 = puVar2 + -1;
      } while ((int)param_6 < (int)(uint)*puVar2);
    }
    if (param_2[iVar6] != param_6) {
      uVar4 = ((param_6 - param_2[iVar6]) * 0x10000) /
              ((uint)param_2[iVar6 + 1] - (uint)param_2[iVar6]);
    }
  }
  iVar7 = 0;
  uVar5 = 0;
  if ((*param_4 < param_7) && (iVar7 = param_3 - 1, param_7 < param_4[iVar7])) {
    iVar7 = iVar7 - (param_3 >> 1);
    if (param_4[iVar7] < param_7) {
      iVar7 = iVar7 + (param_3 >> 1) + -1;
    }
    if (param_7 < param_4[iVar7]) {
      pcVar3 = param_4 + iVar7;
      do {
        iVar7 = iVar7 + -1;
        pcVar3 = pcVar3 + -1;
      } while (param_7 < *pcVar3);
    }
    if (param_4[iVar7] != param_7) {
      uVar5 = (uint)((param_7 - param_4[iVar7]) * 0x10000) /
              (uint)((int)param_4[iVar7 + 1] - (int)param_4[iVar7]);
    }
  }
  cVar1 = calc_ign_angle_full_load(param_5,param_3,uVar4 + iVar6 * 0x10000,uVar5 + iVar7 * 0x10000);
  return (int)cVar1;
}

