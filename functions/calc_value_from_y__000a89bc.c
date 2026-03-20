/*
 * Program: n42.bin
 * Function: calc_value_from_y
 * Entry: 000a89bc
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint calc_value_from_y(ushort *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = *param_1;
  iVar5 = 0;
  uVar2 = 0;
  param_1 = param_1 + 1;
  if (((int)(uint)*param_1 < (int)param_2) &&
     (iVar5 = uVar1 - 1, (int)param_2 < (int)(uint)param_1[iVar5])) {
    iVar5 = iVar5 - (uint)(uVar1 >> 1);
    if ((int)(uint)param_1[iVar5] < (int)param_2) {
      iVar5 = iVar5 + (uint)(uVar1 >> 1) + -1;
    }
    if ((int)param_2 < (int)(uint)param_1[iVar5]) {
      puVar3 = param_1 + iVar5;
      do {
        iVar5 = iVar5 + -1;
        puVar3 = puVar3 + -1;
      } while ((int)param_2 < (int)(uint)*puVar3);
    }
    if (param_1[iVar5] != param_2) {
      uVar2 = ((param_2 - param_1[iVar5]) * 0x10000) /
              ((uint)param_1[iVar5 + 1] - (uint)param_1[iVar5]);
    }
  }
  uVar2 = uVar2 + iVar5 * 0x10000;
  uVar4 = (uint)param_1[(uint)uVar1 + (uVar2 >> 0x10)];
  return uVar4 + ((int)((uVar2 & 0xffff) * ((param_1 + (uint)uVar1 + (uVar2 >> 0x10))[1] - uVar4))
                 >> 0x10) & 0xffff;
}

