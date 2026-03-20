/*
 * Program: n42.bin
 * Function: FUN_001109ec
 * Entry: 001109ec
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_001109ec(byte *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar3 = 0;
  if (((int)(uint)*param_1 < (int)param_3) &&
     (iVar4 = param_2 - 1, (int)param_3 < (int)(uint)param_1[iVar4])) {
    iVar4 = iVar4 - (param_2 >> 1);
    if ((int)(uint)param_1[iVar4] < (int)param_3) {
      iVar4 = iVar4 + (param_2 >> 1) + -1;
    }
    if ((int)param_3 < (int)(uint)param_1[iVar4]) {
      pbVar1 = param_1 + iVar4;
      do {
        iVar4 = iVar4 + -1;
        pbVar1 = pbVar1 + -1;
      } while ((int)param_3 < (int)(uint)*pbVar1);
    }
    uVar2 = (uint)param_1[iVar4];
    if (param_3 != uVar2) {
      uVar3 = ((param_3 - uVar2) * 0x10000) / (param_1[iVar4 + 1] - uVar2);
    }
  }
  return uVar3 + iVar4 * 0x10000;
}

