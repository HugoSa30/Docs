/*
 * Program: n42.bin
 * Function: FUN_000ab53c
 * Entry: 000ab53c
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000ab53c(ushort *param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  
  uVar3 = 0;
  puVar1 = param_1 + 1;
  uVar5 = 0;
  if (((int)(uint)*puVar1 < (int)param_2) &&
     (uVar5 = *param_1 - 1, (int)param_2 < (int)(uint)puVar1[*param_1 - 1])) {
    uVar5 = param_3 >> 0x10;
    if ((int)(uint)puVar1[uVar5] < (int)param_2) {
      puVar4 = puVar1 + uVar5;
      uVar2 = uVar5;
      do {
        uVar5 = uVar2;
        puVar4 = puVar4 + 1;
        uVar2 = uVar5 + 1;
      } while ((int)(uint)*puVar4 <= (int)param_2);
    }
    else if ((int)param_2 < (int)(uint)puVar1[uVar5]) {
      puVar4 = puVar1 + uVar5;
      do {
        uVar5 = uVar5 - 1;
        puVar4 = puVar4 + -1;
      } while ((int)param_2 < (int)(uint)*puVar4);
    }
    if (puVar1[uVar5] != param_2) {
      uVar3 = ((param_2 - puVar1[uVar5]) * 0x10000) /
              ((uint)puVar1[uVar5 + 1] - (uint)puVar1[uVar5]);
    }
  }
  return uVar3 + uVar5 * 0x10000;
}

