/*
 * Program: n42.bin
 * Function: FUN_000a80a0
 * Entry: 000a80a0
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000a80a0(ushort *param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar3 = 0;
  uVar2 = (uint)*param_1;
  if (uVar2 < param_1[param_2 - 1]) {
    if (((int)uVar2 < (int)param_3) &&
       (iVar4 = param_2 - 1, (int)param_3 < (int)(uint)param_1[iVar4])) {
      iVar4 = iVar4 - (param_2 >> 1);
      if ((int)(uint)param_1[iVar4] < (int)param_3) {
        iVar4 = iVar4 + (param_2 >> 1) + -1;
      }
      if ((int)param_3 < (int)(uint)param_1[iVar4]) {
        puVar1 = param_1 + iVar4;
        do {
          iVar4 = iVar4 + -1;
          puVar1 = puVar1 + -1;
        } while ((int)param_3 < (int)(uint)*puVar1);
      }
      uVar2 = (uint)param_1[iVar4];
      if (param_3 != uVar2) {
        uVar3 = ((param_3 - uVar2) * 0x10000) / (param_1[iVar4 + 1] - uVar2);
      }
    }
  }
  else if (((int)param_3 < (int)uVar2) &&
          (iVar4 = param_2 - 1, (int)(uint)param_1[iVar4] < (int)param_3)) {
    iVar4 = iVar4 - (param_2 >> 1);
    if ((int)param_3 < (int)(uint)param_1[iVar4]) {
      iVar4 = iVar4 + (param_2 >> 1) + -1;
    }
    if ((int)(uint)param_1[iVar4] < (int)param_3) {
      puVar1 = param_1 + iVar4;
      do {
        iVar4 = iVar4 + -1;
        puVar1 = puVar1 + -1;
      } while ((int)(uint)*puVar1 < (int)param_3);
    }
    uVar2 = (uint)param_1[iVar4];
    if (param_3 != uVar2) {
      uVar3 = ((uVar2 - param_3) * 0x10000) / (uVar2 - param_1[iVar4 + 1]);
    }
  }
  return uVar3 + iVar4 * 0x10000;
}

