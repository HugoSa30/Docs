/*
 * Program: n42.bin
 * Function: FUN_00110958
 * Entry: 00110958
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_00110958(byte *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar2 = 0;
  pbVar1 = param_1 + 1;
  if (((int)(uint)*pbVar1 < (int)param_2) &&
     (iVar5 = *param_1 - 1, (int)param_2 < (int)(uint)pbVar1[iVar5])) {
    uVar4 = (uint)(*param_1 >> 1);
    iVar5 = iVar5 - uVar4;
    if ((int)(uint)pbVar1[iVar5] < (int)param_2) {
      iVar5 = iVar5 + uVar4 + -1;
    }
    if ((int)param_2 < (int)(uint)pbVar1[iVar5]) {
      pbVar3 = pbVar1 + iVar5;
      do {
        iVar5 = iVar5 + -1;
        pbVar3 = pbVar3 + -1;
      } while ((int)param_2 < (int)(uint)*pbVar3);
    }
    uVar4 = (uint)pbVar1[iVar5];
    if (param_2 != uVar4) {
      uVar2 = ((param_2 - uVar4) * 0x10000) / (pbVar1[iVar5 + 1] - uVar4);
    }
  }
  return uVar2 + iVar5 * 0x10000;
}

