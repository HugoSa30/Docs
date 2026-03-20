/*
 * Program: n42.bin
 * Function: FUN_000a87cc
 * Entry: 000a87cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000a87cc(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  
  bVar1 = *param_1;
  iVar5 = 0;
  uVar2 = 0;
  param_1 = param_1 + 1;
  if (((int)(uint)*param_1 < (int)param_2) &&
     (iVar5 = bVar1 - 1, (int)param_2 < (int)(uint)param_1[iVar5])) {
    iVar5 = iVar5 - (uint)(bVar1 >> 1);
    if ((int)(uint)param_1[iVar5] < (int)param_2) {
      iVar5 = iVar5 + (uint)(bVar1 >> 1) + -1;
    }
    if ((int)param_2 < (int)(uint)param_1[iVar5]) {
      pbVar3 = param_1 + iVar5;
      do {
        iVar5 = iVar5 + -1;
        pbVar3 = pbVar3 + -1;
      } while ((int)param_2 < (int)(uint)*pbVar3);
    }
    if (param_1[iVar5] != param_2) {
      uVar2 = ((param_2 - param_1[iVar5]) * 0x10000) /
              ((uint)param_1[iVar5 + 1] - (uint)param_1[iVar5]);
    }
  }
  uVar2 = uVar2 + iVar5 * 0x10000;
  uVar4 = (uint)param_1[(uVar2 >> 0x10) + (uint)bVar1];
  return uVar4 + ((int)((uVar2 & 0xffff) * ((param_1 + (uVar2 >> 0x10) + (uint)bVar1)[1] - uVar4))
                 >> 0x10) & 0xff;
}

