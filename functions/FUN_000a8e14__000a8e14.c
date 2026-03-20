/*
 * Program: n42.bin
 * Function: FUN_000a8e14
 * Entry: 000a8e14
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined2 FUN_000a8e14(uint param_1,short *param_2,int param_3,int param_4)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  if ((*param_2 < param_4) && (iVar3 = param_1 - 1, param_4 < param_2[iVar3])) {
    iVar3 = iVar3 - (param_1 >> 1);
    if (param_2[iVar3] < param_4) {
      iVar3 = iVar3 + (param_1 >> 1) + -1;
    }
    if (param_4 < param_2[iVar3]) {
      psVar1 = param_2 + iVar3;
      do {
        iVar3 = iVar3 + -1;
        psVar1 = psVar1 + -1;
      } while (param_4 < *psVar1);
    }
    if (param_2[iVar3] != param_4) {
      uVar2 = (uint)((param_4 - param_2[iVar3]) * 0x10000) /
              (uint)((int)param_2[iVar3 + 1] - (int)param_2[iVar3]);
    }
  }
  return *(undefined2 *)(param_3 + (uVar2 + iVar3 * 0x10000 >> 0x10) * 2);
}

