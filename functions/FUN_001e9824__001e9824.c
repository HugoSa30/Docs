/*
 * Program: n42.bin
 * Function: FUN_001e9824
 * Entry: 001e9824
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001e9824(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  int local_40;
  uint local_3c [4];
  
  iVar4 = param_4 * 2;
  if (iVar4 != 0) {
    puVar10 = (undefined4 *)(param_1 + -4);
    do {
      puVar10 = puVar10 + 1;
      *puVar10 = 0;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (param_4 == 0) {
    uVar6 = 0;
  }
  else {
    piVar5 = (int *)(param_2 + (param_4 + -1) * 4 + 4);
    iVar4 = param_4 + -1;
    do {
      piVar5 = piVar5 + -1;
      iVar7 = iVar4;
      if (*piVar5 != 0) break;
      iVar7 = iVar4 + -1;
      bVar1 = iVar4 != 0;
      iVar4 = iVar7;
    } while (bVar1);
    uVar6 = iVar7 + 1;
  }
  if (param_4 != 0) {
    piVar5 = (int *)(param_3 + (param_4 + -1) * 4 + 4);
    iVar4 = param_4 + -1;
    do {
      piVar5 = piVar5 + -1;
      param_4 = iVar4;
      if (*piVar5 != 0) break;
      param_4 = iVar4 + -1;
      bVar1 = iVar4 != 0;
      iVar4 = param_4;
    } while (bVar1);
    param_4 = param_4 + 1;
  }
  uVar8 = 0;
  if (uVar6 != 0) {
    piVar5 = (int *)(param_2 + -4);
    piVar3 = (int *)(param_1 + param_4 * 4);
    do {
      uVar11 = 0;
      piVar5 = piVar5 + 1;
      if ((*piVar5 != 0) && (param_4 != 0)) {
        puVar10 = (undefined4 *)(param_3 + -4);
        puVar9 = (uint *)(param_1 + uVar8 * 4);
        iVar4 = param_4;
        do {
          puVar10 = puVar10 + 1;
          FUN_001e92ac(*piVar5,*puVar10,&local_40,local_3c);
          uVar2 = uVar11 + *puVar9;
          *puVar9 = uVar2;
          *puVar9 = local_3c[0] + uVar2;
          uVar11 = (uint)(local_3c[0] + uVar2 < local_3c[0]) + (uint)(uVar2 < uVar11) + local_40;
          puVar9 = puVar9 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      *piVar3 = uVar11 + *piVar3;
      piVar3 = piVar3 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  return;
}

