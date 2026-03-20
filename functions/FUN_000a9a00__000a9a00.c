/*
 * Program: n42.bin
 * Function: FUN_000a9a00
 * Entry: 000a9a00
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000a9a00(short *param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = (uint)*param_1;
  uVar4 = (uint)param_1[1];
  iVar2 = 0;
  uVar5 = 0;
  param_1 = param_1 + 2;
  if ((*param_1 < param_2) && (iVar2 = uVar6 - 1, param_2 < param_1[iVar2])) {
    iVar2 = iVar2 - (uVar6 >> 1);
    if (param_1[iVar2] < param_2) {
      iVar2 = iVar2 + (uVar6 >> 1) + -1;
    }
    if (param_2 < param_1[iVar2]) {
      psVar3 = param_1 + iVar2;
      do {
        iVar2 = iVar2 + -1;
        psVar3 = psVar3 + -1;
      } while (param_2 < *psVar3);
    }
    if (param_1[iVar2] != param_2) {
      uVar5 = (uint)((param_2 - param_1[iVar2]) * 0x10000) /
              (uint)((int)param_1[iVar2 + 1] - (int)param_1[iVar2]);
    }
  }
  param_1 = param_1 + uVar6;
  iVar7 = 0;
  uVar6 = 0;
  if ((*param_1 < param_3) && (iVar7 = uVar4 - 1, param_3 < param_1[iVar7])) {
    iVar7 = iVar7 - (uVar4 >> 1);
    if (param_1[iVar7] < param_3) {
      iVar7 = iVar7 + (uVar4 >> 1) + -1;
    }
    if (param_3 < param_1[iVar7]) {
      psVar3 = param_1 + iVar7;
      do {
        iVar7 = iVar7 + -1;
        psVar3 = psVar3 + -1;
      } while (param_3 < *psVar3);
    }
    if (param_1[iVar7] != param_3) {
      uVar6 = (uint)((param_3 - param_1[iVar7]) * 0x10000) /
              (uint)((int)param_1[iVar7 + 1] - (int)param_1[iVar7]);
    }
  }
  sVar1 = FUN_000ab038(param_1 + uVar4,uVar4,uVar5 + iVar2 * 0x10000,uVar6 + iVar7 * 0x10000);
  return (int)sVar1;
}

