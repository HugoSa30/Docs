/*
 * Program: n42.bin
 * Function: FUN_001e99c4
 * Entry: 001e99c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001e99c4(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 int param_6,int *param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined auStack_764 [124];
  undefined4 uStack_6e4;
  undefined4 local_6e0 [33];
  undefined auStack_65c [132];
  undefined auStack_5d8 [132];
  undefined auStack_554 [264];
  undefined auStack_44c [264];
  undefined auStack_344 [264];
  undefined auStack_23c [264];
  undefined auStack_134 [272];
  
  if (param_6 != 0) {
    puVar7 = (undefined4 *)(param_2 + -4);
    puVar9 = &uStack_6e4;
    iVar2 = param_6;
    do {
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
      *puVar9 = *puVar7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_001e9824(auStack_554,local_6e0,param_2,param_6);
  FUN_001e9400(auStack_65c,auStack_554,param_6 * 2,param_5,param_6);
  FUN_001e9824(auStack_44c,auStack_65c,param_2,param_6);
  FUN_001e9400(auStack_5d8,auStack_44c,param_6 * 2,param_5,param_6);
  if (param_6 != 0) {
    puVar7 = param_1 + -1;
    iVar2 = param_6;
    do {
      puVar7 = puVar7 + 1;
      *puVar7 = 0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *param_1 = 1;
  if (param_4 == 0) {
    iVar2 = 0;
  }
  else {
    piVar4 = (int *)(param_3 + (param_4 + -1) * 4 + 4);
    iVar3 = param_4 + -1;
    do {
      piVar4 = piVar4 + -1;
      iVar2 = iVar3;
      if (*piVar4 != 0) break;
      iVar2 = iVar3 + -1;
      bVar1 = iVar3 != 0;
      iVar3 = iVar2;
    } while (bVar1);
    iVar2 = iVar2 + 1;
  }
  *param_7 = *param_7 + 1;
  iVar3 = iVar2 + -1;
  if (-1 < iVar3) {
    puVar5 = (uint *)(param_3 + iVar3 * 4 + 4);
    do {
      puVar5 = puVar5 + -1;
      uVar10 = *puVar5;
      uVar8 = 0x20;
      if (iVar2 + -1 == iVar3) {
        for (; uVar10 >> 0x1e == 0; uVar10 = uVar10 << 2) {
          uVar8 = uVar8 - 2;
        }
      }
      uVar6 = 0;
      if (uVar8 != 0) {
        do {
          FUN_001e9824(auStack_344,param_1,param_1,param_6);
          FUN_001e9400(param_1,auStack_344,param_6 * 2,param_5,param_6);
          FUN_001e9824(auStack_23c,param_1,param_1,param_6);
          FUN_001e9400(param_1,auStack_23c,param_6 * 2,param_5,param_6);
          if (uVar10 >> 0x1e != 0) {
            FUN_001e9824(auStack_134,param_1,auStack_764 + (uVar10 >> 0x1e) * 0x84,param_6);
            FUN_001e9400(param_1,auStack_134,param_6 * 2,param_5,param_6);
          }
          uVar6 = uVar6 + 2;
          uVar10 = uVar10 << 2;
        } while (uVar6 < uVar8);
      }
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return;
}

