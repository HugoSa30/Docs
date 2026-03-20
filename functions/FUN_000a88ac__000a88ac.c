/*
 * Program: n42.bin
 * Function: FUN_000a88ac
 * Entry: 000a88ac
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000a88ac(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  
  uVar3 = (uint)*param_1;
  iVar5 = 0;
  uVar2 = 0;
  param_1 = param_1 + 1;
  if ((*param_1 < param_2) && (iVar5 = uVar3 - 1, param_2 < param_1[iVar5])) {
    iVar5 = iVar5 - (uVar3 >> 1);
    if (param_1[iVar5] < param_2) {
      iVar5 = iVar5 + (uVar3 >> 1) + -1;
    }
    if (param_2 < param_1[iVar5]) {
      pcVar4 = param_1 + iVar5;
      do {
        iVar5 = iVar5 + -1;
        pcVar4 = pcVar4 + -1;
      } while (param_2 < *pcVar4);
    }
    if (param_1[iVar5] != param_2) {
      uVar2 = (uint)((param_2 - param_1[iVar5]) * 0x10000) /
              (uint)((int)param_1[iVar5 + 1] - (int)param_1[iVar5]);
    }
  }
  uVar2 = uVar2 + iVar5 * 0x10000;
  cVar1 = param_1[(uVar2 >> 0x10) + uVar3];
  return (int)(char)(cVar1 + (char)((uVar2 & 0xffff) *
                                    ((int)(param_1 + (uVar2 >> 0x10) + uVar3)[1] - (int)cVar1) >>
                                   0x10));
}

