/*
 * Program: n42.bin
 * Function: FUN_000a91ac
 * Entry: 000a91ac
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000a91ac(uint param_1,short *param_2,int param_3,int param_4)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar3 = 0;
  if ((*param_2 < param_4) && (iVar5 = param_1 - 1, param_4 < param_2[iVar5])) {
    iVar5 = iVar5 - (param_1 >> 1);
    if (param_2[iVar5] < param_4) {
      iVar5 = iVar5 + (param_1 >> 1) + -1;
    }
    if (param_4 < param_2[iVar5]) {
      psVar1 = param_2 + iVar5;
      do {
        iVar5 = iVar5 + -1;
        psVar1 = psVar1 + -1;
      } while (param_4 < *psVar1);
    }
    if (param_2[iVar5] != param_4) {
      uVar3 = (uint)((param_4 - param_2[iVar5]) * 0x10000) /
              (uint)((int)param_2[iVar5 + 1] - (int)param_2[iVar5]);
    }
  }
  uVar3 = uVar3 + iVar5 * 0x10000;
  puVar4 = (ushort *)(param_3 + (uVar3 >> 0x10) * 2);
  uVar2 = (uint)*puVar4;
  return uVar2 + ((int)((uVar3 & 0xffff) * (puVar4[1] - uVar2)) >> 0x10) & 0xffff;
}

