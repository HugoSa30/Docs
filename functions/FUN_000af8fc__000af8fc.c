/*
 * Program: n42.bin
 * Function: FUN_000af8fc
 * Entry: 000af8fc
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000af8fc(int param_1,short *param_2,byte *param_3)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  
  iVar3 = (int)*param_2;
  psVar2 = param_2 + 1;
  param_2 = param_2 + iVar3 + 1;
  if (psVar2[iVar3 + -1] <= param_1) {
    return (int)param_2[iVar3 + -1];
  }
  if (*psVar2 < param_1) {
    uVar5 = iVar3 - 1;
    if ((int)(uint)*param_3 < (int)uVar5) {
      uVar5 = (uint)*param_3;
    }
    if (param_1 < psVar2[uVar5]) {
      psVar4 = psVar2 + uVar5;
      do {
        psVar4 = psVar4 + -1;
        uVar5 = uVar5 - 1;
      } while (param_1 < *psVar4);
    }
    else {
      psVar4 = psVar2 + uVar5;
      uVar1 = uVar5;
      do {
        uVar5 = uVar1;
        psVar4 = psVar4 + 1;
        uVar1 = uVar5 + 1;
      } while (*psVar4 < param_1);
    }
    *param_3 = (byte)uVar5;
    return (int)(short)((short)((((int)param_2[uVar5] - (int)param_2[uVar5 + 1]) *
                                (param_1 - psVar2[uVar5])) /
                               ((int)psVar2[uVar5] - (int)psVar2[uVar5 + 1])) + param_2[uVar5]);
  }
  return (int)*param_2;
}

