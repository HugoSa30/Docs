/*
 * Program: n42.bin
 * Function: calc1dim
 * Entry: 000ab248
 * Exported by: ExportAllDecompiledFunctions.java
 */


int calc1dim(ushort *param_1,uint param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar3 = 0;
  puVar1 = param_1 + 1;
  if (((int)(uint)*puVar1 < (int)param_2) &&
     (iVar5 = *param_1 - 1, (int)param_2 < (int)(uint)puVar1[iVar5])) {
    uVar2 = (uint)(*param_1 >> 1);
    iVar5 = iVar5 - uVar2;
    if ((int)(uint)puVar1[iVar5] < (int)param_2) {
      iVar5 = iVar5 + uVar2 + -1;
    }
    if ((int)param_2 < (int)(uint)puVar1[iVar5]) {
      puVar4 = puVar1 + iVar5;
      do {
        iVar5 = iVar5 + -1;
        puVar4 = puVar4 + -1;
      } while ((int)param_2 < (int)(uint)*puVar4);
    }
    if (puVar1[iVar5] != param_2) {
      uVar3 = ((param_2 - puVar1[iVar5]) * 0x10000) /
              ((uint)puVar1[iVar5 + 1] - (uint)puVar1[iVar5]);
    }
  }
  return uVar3 + iVar5 * 0x10000;
}

