/*
 * Program: n42.bin
 * Function: calc_value_from_y_2
 * Entry: 000a8abc
 * Exported by: ExportAllDecompiledFunctions.java
 */


int calc_value_from_y_2(short *param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  
  uVar2 = (uint)*param_1;
  iVar5 = 0;
  uVar3 = 0;
  param_1 = param_1 + 1;
  if ((*param_1 < param_2) && (iVar5 = uVar2 - 1, param_2 < param_1[iVar5])) {
    iVar5 = iVar5 - (uVar2 >> 1);
    if (param_1[iVar5] < param_2) {
      iVar5 = iVar5 + (uVar2 >> 1) + -1;
    }
    if (param_2 < param_1[iVar5]) {
      psVar4 = param_1 + iVar5;
      do {
        iVar5 = iVar5 + -1;
        psVar4 = psVar4 + -1;
      } while (param_2 < *psVar4);
    }
    if (param_1[iVar5] != param_2) {
      uVar3 = (uint)((param_2 - param_1[iVar5]) * 0x10000) /
              (uint)((int)param_1[iVar5 + 1] - (int)param_1[iVar5]);
    }
  }
  uVar3 = uVar3 + iVar5 * 0x10000;
  sVar1 = param_1[uVar2 + (uVar3 >> 0x10)];
  return (int)(short)(sVar1 + (short)((uVar3 & 0xffff) *
                                      ((int)(param_1 + uVar2 + (uVar3 >> 0x10))[1] - (int)sVar1) >>
                                     0x10));
}

