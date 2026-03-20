/*
 * Program: n42.bin
 * Function: FUN_000aa4f8
 * Entry: 000aa4f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined2
FUN_000aa4f8(uint param_1,short *param_2,uint param_3,byte *param_4,undefined4 param_5,int param_6,
            uint param_7)

{
  undefined2 uVar1;
  short *psVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  uVar4 = 0;
  if ((*param_2 < param_6) && (iVar6 = param_1 - 1, param_6 < param_2[iVar6])) {
    iVar6 = iVar6 - (param_1 >> 1);
    if (param_2[iVar6] < param_6) {
      iVar6 = iVar6 + (param_1 >> 1) + -1;
    }
    if (param_6 < param_2[iVar6]) {
      psVar2 = param_2 + iVar6;
      do {
        iVar6 = iVar6 + -1;
        psVar2 = psVar2 + -1;
      } while (param_6 < *psVar2);
    }
    if (param_2[iVar6] != param_6) {
      uVar4 = (uint)((param_6 - param_2[iVar6]) * 0x10000) /
              (uint)((int)param_2[iVar6 + 1] - (int)param_2[iVar6]);
    }
  }
  iVar7 = 0;
  uVar5 = 0;
  if (((int)(uint)*param_4 < (int)param_7) &&
     (iVar7 = param_3 - 1, (int)param_7 < (int)(uint)param_4[iVar7])) {
    iVar7 = iVar7 - (param_3 >> 1);
    if ((int)(uint)param_4[iVar7] < (int)param_7) {
      iVar7 = iVar7 + (param_3 >> 1) + -1;
    }
    if ((int)param_7 < (int)(uint)param_4[iVar7]) {
      pbVar3 = param_4 + iVar7;
      do {
        iVar7 = iVar7 + -1;
        pbVar3 = pbVar3 + -1;
      } while ((int)param_7 < (int)(uint)*pbVar3);
    }
    if (param_4[iVar7] != param_7) {
      uVar5 = ((param_7 - param_4[iVar7]) * 0x10000) /
              ((uint)param_4[iVar7 + 1] - (uint)param_4[iVar7]);
    }
  }
  uVar1 = FUN_000aafb0(param_5,param_3,uVar4 + iVar6 * 0x10000,uVar5 + iVar7 * 0x10000);
  return uVar1;
}

