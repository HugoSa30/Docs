/*
 * Program: n42.bin
 * Function: FUN_000a8eec
 * Entry: 000a8eec
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000a8eec(uint param_1,byte *param_2,int param_3,uint param_4)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar3 = 0;
  if (((int)(uint)*param_2 < (int)param_4) &&
     (iVar5 = param_1 - 1, (int)param_4 < (int)(uint)param_2[iVar5])) {
    iVar5 = iVar5 - (param_1 >> 1);
    if ((int)(uint)param_2[iVar5] < (int)param_4) {
      iVar5 = iVar5 + (param_1 >> 1) + -1;
    }
    if ((int)param_4 < (int)(uint)param_2[iVar5]) {
      pbVar2 = param_2 + iVar5;
      do {
        iVar5 = iVar5 + -1;
        pbVar2 = pbVar2 + -1;
      } while ((int)param_4 < (int)(uint)*pbVar2);
    }
    if (param_2[iVar5] != param_4) {
      uVar3 = ((param_4 - param_2[iVar5]) * 0x10000) /
              ((uint)param_2[iVar5 + 1] - (uint)param_2[iVar5]);
    }
  }
  uVar3 = uVar3 + iVar5 * 0x10000;
  pcVar4 = (char *)(param_3 + (uVar3 >> 0x10));
  cVar1 = *pcVar4;
  return (int)(char)(cVar1 + (char)((uVar3 & 0xffff) * ((int)pcVar4[1] - (int)cVar1) >> 0x10));
}

