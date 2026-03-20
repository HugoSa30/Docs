/*
 * Program: n42.bin
 * Function: FUN_000a8fcc
 * Entry: 000a8fcc
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000a8fcc(uint param_1,char *param_2,int param_3,int param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar3 = 0;
  if ((*param_2 < param_4) && (iVar5 = param_1 - 1, param_4 < param_2[iVar5])) {
    iVar5 = iVar5 - (param_1 >> 1);
    if (param_2[iVar5] < param_4) {
      iVar5 = iVar5 + (param_1 >> 1) + -1;
    }
    if (param_4 < param_2[iVar5]) {
      pcVar1 = param_2 + iVar5;
      do {
        iVar5 = iVar5 + -1;
        pcVar1 = pcVar1 + -1;
      } while (param_4 < *pcVar1);
    }
    if (param_2[iVar5] != param_4) {
      uVar3 = (uint)((param_4 - param_2[iVar5]) * 0x10000) /
              (uint)((int)param_2[iVar5 + 1] - (int)param_2[iVar5]);
    }
  }
  uVar3 = uVar3 + iVar5 * 0x10000;
  pbVar4 = (byte *)(param_3 + (uVar3 >> 0x10));
  uVar2 = (uint)*pbVar4;
  return uVar2 + ((int)((uVar3 & 0xffff) * (pbVar4[1] - uVar2)) >> 0x10) & 0xff;
}

