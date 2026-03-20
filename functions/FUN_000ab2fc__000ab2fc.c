/*
 * Program: n42.bin
 * Function: FUN_000ab2fc
 * Entry: 000ab2fc
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000ab2fc(short *param_1,int param_2)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar3 = 0;
  psVar1 = param_1 + 1;
  if ((*psVar1 < param_2) && (iVar5 = (int)*param_1 - 1, param_2 < psVar1[iVar5])) {
    uVar2 = (uint)(int)*param_1 >> 1;
    iVar5 = iVar5 - uVar2;
    if (psVar1[iVar5] < param_2) {
      iVar5 = iVar5 + uVar2 + -1;
    }
    if (param_2 < psVar1[iVar5]) {
      psVar4 = psVar1 + iVar5;
      do {
        iVar5 = iVar5 + -1;
        psVar4 = psVar4 + -1;
      } while (param_2 < *psVar4);
    }
    if (psVar1[iVar5] != param_2) {
      uVar3 = (uint)((param_2 - psVar1[iVar5]) * 0x10000) /
              (uint)((int)psVar1[iVar5 + 1] - (int)psVar1[iVar5]);
    }
  }
  return uVar3 + iVar5 * 0x10000;
}

