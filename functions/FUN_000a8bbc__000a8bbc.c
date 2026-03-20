/*
 * Program: n42.bin
 * Function: FUN_000a8bbc
 * Entry: 000a8bbc
 * Exported by: ExportAllDecompiledFunctions.java
 */


byte FUN_000a8bbc(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  
  bVar1 = *param_1;
  iVar4 = 0;
  uVar2 = 0;
  param_1 = param_1 + 1;
  if (((int)(uint)*param_1 < (int)param_2) &&
     (iVar4 = bVar1 - 1, (int)param_2 < (int)(uint)param_1[iVar4])) {
    iVar4 = iVar4 - (uint)(bVar1 >> 1);
    if ((int)(uint)param_1[iVar4] < (int)param_2) {
      iVar4 = iVar4 + (uint)(bVar1 >> 1) + -1;
    }
    if ((int)param_2 < (int)(uint)param_1[iVar4]) {
      pbVar3 = param_1 + iVar4;
      do {
        iVar4 = iVar4 + -1;
        pbVar3 = pbVar3 + -1;
      } while ((int)param_2 < (int)(uint)*pbVar3);
    }
    if (param_1[iVar4] != param_2) {
      uVar2 = ((param_2 - param_1[iVar4]) * 0x10000) /
              ((uint)param_1[iVar4 + 1] - (uint)param_1[iVar4]);
    }
  }
  return param_1[(uint)bVar1 + (uVar2 + iVar4 * 0x10000 >> 0x10)];
}

