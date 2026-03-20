/*
 * Program: n42.bin
 * Function: FUN_000a8c78
 * Entry: 000a8c78
 * Exported by: ExportAllDecompiledFunctions.java
 */


ushort FUN_000a8c78(ushort *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  
  uVar1 = *param_1;
  iVar4 = 0;
  uVar2 = 0;
  param_1 = param_1 + 1;
  if (((int)(uint)*param_1 < (int)param_2) &&
     (iVar4 = uVar1 - 1, (int)param_2 < (int)(uint)param_1[iVar4])) {
    iVar4 = iVar4 - (uint)(uVar1 >> 1);
    if ((int)(uint)param_1[iVar4] < (int)param_2) {
      iVar4 = iVar4 + (uint)(uVar1 >> 1) + -1;
    }
    if ((int)param_2 < (int)(uint)param_1[iVar4]) {
      puVar3 = param_1 + iVar4;
      do {
        iVar4 = iVar4 + -1;
        puVar3 = puVar3 + -1;
      } while ((int)param_2 < (int)(uint)*puVar3);
    }
    if (param_1[iVar4] != param_2) {
      uVar2 = ((param_2 - param_1[iVar4]) * 0x10000) /
              ((uint)param_1[iVar4 + 1] - (uint)param_1[iVar4]);
    }
  }
  return param_1[(uVar2 + iVar4 * 0x10000 >> 0x10) + (uint)uVar1];
}

