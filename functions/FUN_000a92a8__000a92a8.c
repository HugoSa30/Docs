/*
 * Program: n42.bin
 * Function: FUN_000a92a8
 * Entry: 000a92a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000a92a8(uint param_1,ushort *param_2,int param_3,uint param_4)

{
  short sVar1;
  ushort *puVar2;
  uint uVar3;
  short *psVar4;
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
      puVar2 = param_2 + iVar5;
      do {
        iVar5 = iVar5 + -1;
        puVar2 = puVar2 + -1;
      } while ((int)param_4 < (int)(uint)*puVar2);
    }
    if (param_2[iVar5] != param_4) {
      uVar3 = ((param_4 - param_2[iVar5]) * 0x10000) /
              ((uint)param_2[iVar5 + 1] - (uint)param_2[iVar5]);
    }
  }
  uVar3 = uVar3 + iVar5 * 0x10000;
  psVar4 = (short *)(param_3 + (uVar3 >> 0x10) * 2);
  sVar1 = *psVar4;
  return (int)(short)(sVar1 + (short)((uVar3 & 0xffff) * ((int)psVar4[1] - (int)sVar1) >> 0x10));
}

