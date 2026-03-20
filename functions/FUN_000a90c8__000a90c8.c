/*
 * Program: n42.bin
 * Function: FUN_000a90c8
 * Entry: 000a90c8
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000a90c8(uint param_1,byte *param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
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
      pbVar1 = param_2 + iVar5;
      do {
        iVar5 = iVar5 + -1;
        pbVar1 = pbVar1 + -1;
      } while ((int)param_4 < (int)(uint)*pbVar1);
    }
    if (param_2[iVar5] != param_4) {
      uVar3 = ((param_4 - param_2[iVar5]) * 0x10000) /
              ((uint)param_2[iVar5 + 1] - (uint)param_2[iVar5]);
    }
  }
  uVar3 = uVar3 + iVar5 * 0x10000;
  puVar4 = (ushort *)(param_3 + (uVar3 >> 0x10) * 2);
  uVar2 = (uint)*puVar4;
  return uVar2 + ((int)((uVar3 & 0xffff) * (puVar4[1] - uVar2)) >> 0x10) & 0xffff;
}

