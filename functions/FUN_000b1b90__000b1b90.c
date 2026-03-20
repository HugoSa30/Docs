/*
 * Program: n42.bin
 * Function: FUN_000b1b90
 * Entry: 000b1b90
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000b1b90(undefined2 *param_1,undefined2 *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined2 *puVar3;
  ushort *puVar4;
  int iVar5;
  
  *param_2 = *param_1;
  iVar5 = 2;
  puVar3 = param_2;
  do {
    puVar3[1] = param_1[1];
    param_1 = param_1 + 2;
    puVar3 = puVar3 + 2;
    *puVar3 = *param_1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar2 = 0;
  do {
    if (uVar2 + 1 < 5) {
      puVar4 = param_2 + uVar2;
      iVar5 = 5 - (uVar2 + 1);
      do {
        puVar4 = puVar4 + 1;
        if ((ushort)param_2[uVar2] < *puVar4) {
          uVar1 = *puVar4;
          *puVar4 = param_2[uVar2];
          param_2[uVar2] = uVar1;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return;
}

