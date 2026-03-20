/*
 * Program: n42.bin
 * Function: FUN_000b1c28
 * Entry: 000b1c28
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000b1c28(undefined2 *param_1,undefined2 *param_2)

{
  short sVar1;
  uint uVar2;
  undefined2 *puVar3;
  short *psVar4;
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
      psVar4 = param_2 + uVar2;
      iVar5 = 5 - (uVar2 + 1);
      do {
        psVar4 = psVar4 + 1;
        if ((short)param_2[uVar2] < *psVar4) {
          sVar1 = *psVar4;
          *psVar4 = param_2[uVar2];
          param_2[uVar2] = sVar1;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return;
}

