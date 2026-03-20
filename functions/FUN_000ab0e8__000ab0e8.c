/*
 * Program: n42.bin
 * Function: FUN_000ab0e8
 * Entry: 000ab0e8
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000ab0e8(byte *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar3 = 0;
  pbVar1 = param_1 + 1;
  if (((int)(uint)*pbVar1 < (int)param_2) &&
     (iVar5 = *param_1 - 1, (int)param_2 < (int)(uint)pbVar1[iVar5])) {
    uVar2 = (uint)(*param_1 >> 1);
    iVar5 = iVar5 - uVar2;
    if ((int)(uint)pbVar1[iVar5] < (int)param_2) {
      iVar5 = iVar5 + uVar2 + -1;
    }
    if ((int)param_2 < (int)(uint)pbVar1[iVar5]) {
      pbVar4 = pbVar1 + iVar5;
      do {
        iVar5 = iVar5 + -1;
        pbVar4 = pbVar4 + -1;
      } while ((int)param_2 < (int)(uint)*pbVar4);
    }
    if (pbVar1[iVar5] != param_2) {
      uVar3 = ((param_2 - pbVar1[iVar5]) * 0x10000) /
              ((uint)pbVar1[iVar5 + 1] - (uint)pbVar1[iVar5]);
    }
  }
  return uVar3 + iVar5 * 0x10000;
}

