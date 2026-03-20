/*
 * Program: n42.bin
 * Function: FUN_000ab3b0
 * Entry: 000ab3b0
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000ab3b0(byte *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  
  uVar3 = 0;
  pbVar1 = param_1 + 1;
  uVar5 = 0;
  if (((int)(uint)*pbVar1 < (int)param_2) &&
     (uVar5 = *param_1 - 1, (int)param_2 < (int)(uint)pbVar1[*param_1 - 1])) {
    uVar5 = param_3 >> 0x10;
    if ((int)(uint)pbVar1[uVar5] < (int)param_2) {
      pbVar4 = pbVar1 + uVar5;
      uVar2 = uVar5;
      do {
        uVar5 = uVar2;
        pbVar4 = pbVar4 + 1;
        uVar2 = uVar5 + 1;
      } while ((int)(uint)*pbVar4 <= (int)param_2);
    }
    else if ((int)param_2 < (int)(uint)pbVar1[uVar5]) {
      pbVar4 = pbVar1 + uVar5;
      do {
        uVar5 = uVar5 - 1;
        pbVar4 = pbVar4 + -1;
      } while ((int)param_2 < (int)(uint)*pbVar4);
    }
    if (pbVar1[uVar5] != param_2) {
      uVar3 = ((param_2 - pbVar1[uVar5]) * 0x10000) /
              ((uint)pbVar1[uVar5 + 1] - (uint)pbVar1[uVar5]);
    }
  }
  return uVar3 + uVar5 * 0x10000;
}

