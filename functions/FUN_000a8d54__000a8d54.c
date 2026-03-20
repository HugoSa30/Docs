/*
 * Program: n42.bin
 * Function: FUN_000a8d54
 * Entry: 000a8d54
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined2 FUN_000a8d54(uint param_1,byte *param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  if (((int)(uint)*param_2 < (int)param_4) &&
     (iVar3 = param_1 - 1, (int)param_4 < (int)(uint)param_2[iVar3])) {
    iVar3 = iVar3 - (param_1 >> 1);
    if ((int)(uint)param_2[iVar3] < (int)param_4) {
      iVar3 = iVar3 + (param_1 >> 1) + -1;
    }
    if ((int)param_4 < (int)(uint)param_2[iVar3]) {
      pbVar1 = param_2 + iVar3;
      do {
        iVar3 = iVar3 + -1;
        pbVar1 = pbVar1 + -1;
      } while ((int)param_4 < (int)(uint)*pbVar1);
    }
    if (param_2[iVar3] != param_4) {
      uVar2 = ((param_4 - param_2[iVar3]) * 0x10000) /
              ((uint)param_2[iVar3 + 1] - (uint)param_2[iVar3]);
    }
  }
  return *(undefined2 *)(param_3 + (uVar2 + iVar3 * 0x10000 >> 0x10) * 2);
}

