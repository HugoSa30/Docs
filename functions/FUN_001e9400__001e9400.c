/*
 * Program: n42.bin
 * Function: FUN_001e9400
 * Entry: 001e9400
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001e9400(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_154;
  uint local_150 [67];
  uint local_44;
  uint local_40;
  
  if (param_5 == 0) {
    iVar10 = 0;
  }
  else {
    piVar8 = (int *)(param_4 + (param_5 + -1) * 4 + 4);
    iVar14 = param_5 + -1;
    do {
      piVar8 = piVar8 + -1;
      iVar10 = iVar14;
      if (*piVar8 != 0) break;
      iVar10 = iVar14 + -1;
      bVar1 = iVar14 != 0;
      iVar14 = iVar10;
    } while (bVar1);
    iVar10 = iVar10 + 1;
  }
  if (iVar10 != 0) {
    uVar9 = *(uint *)(param_4 + iVar10 * 4 + -4);
    iVar14 = 0x20;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 >> 1;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    iVar14 = 0x20 - (0x20 - iVar14);
    if (iVar10 != 0) {
      puVar7 = &uStack_154;
      iVar11 = iVar10;
      do {
        puVar7 = puVar7 + 1;
        *puVar7 = 0;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    puVar6 = local_150 + param_3 + -2;
    uVar9 = FUN_001e915c(local_150,param_2,iVar14,param_3);
    puVar6[2] = uVar9;
    FUN_001e915c(param_1,param_4,iVar14,iVar10);
    iVar11 = *(int *)(param_1 + iVar10 * 4 + -4);
    param_3 = param_3 - iVar10;
    if (-1 < param_3) {
      puVar6 = local_150 + param_3 + iVar10;
      puVar15 = local_150 + param_3;
      do {
        uVar12 = *puVar6;
        uVar9 = uVar12;
        if (iVar11 != -1) {
          uVar13 = iVar11 + 1;
          uVar9 = uVar13 >> 0x10;
          uVar2 = uVar13 & 0xffff;
          local_44 = puVar6[-1];
          local_40 = *puVar6;
          if (uVar9 == 0xffff) {
            uVar4 = local_40 >> 0x10;
          }
          else {
            uVar4 = local_40 / (uVar9 + 1);
          }
          uVar5 = (uVar4 & 0xffff) * uVar2;
          local_44 = puVar6[-1] + uVar5 * -0x10000;
          if (uVar5 * -0x10000 - 1 < local_44) {
            local_40 = local_40 - 1;
          }
          local_40 = (local_40 - (uVar5 >> 0x10)) - (uVar4 & 0xffff) * uVar9;
          while ((uVar9 < local_40 || ((local_40 == uVar9 && (uVar2 << 0x10 <= local_44))))) {
            local_44 = local_44 + uVar2 * -0x10000;
            if (uVar2 * -0x10000 - 1 < local_44) {
              local_40 = local_40 - 1;
            }
            local_40 = local_40 - uVar9;
            uVar4 = uVar4 + 1;
          }
          if (uVar9 == 0xffff) {
            uVar5 = local_40 & 0xffff;
          }
          else {
            uVar5 = (local_40 * 0x10000 + (local_44 >> 0x10)) / (uVar9 + 1);
          }
          iVar3 = (uVar5 & 0xffff) * uVar2;
          uVar9 = (uVar5 & 0xffff) * uVar9;
          local_44 = local_44 - iVar3;
          if (-iVar3 - 1U < local_44) {
            local_40 = local_40 - 1;
          }
          local_44 = local_44 + uVar9 * -0x10000;
          if (uVar9 * -0x10000 - 1 < local_44) {
            local_40 = local_40 - 1;
          }
          local_40 = local_40 - (uVar9 >> 0x10);
          while ((local_40 != 0 || (uVar13 <= local_44))) {
            local_44 = local_44 - uVar13;
            if (-uVar13 - 1 < local_44) {
              local_40 = local_40 + -1;
            }
            uVar5 = uVar5 + 1;
          }
          uVar9 = uVar4 * 0x10000 + (uVar5 & 0xffff);
        }
        iVar3 = FUN_001e9334(puVar15,puVar15,uVar9,param_1,iVar10);
        uVar12 = uVar12 - iVar3;
        *puVar6 = uVar12;
        if (uVar12 != 0) goto LAB_001e9784;
        iVar3 = FUN_001e9210(puVar15,param_1,iVar10);
        while (-1 < iVar3) {
LAB_001e9784:
          do {
            iVar3 = FUN_001e90ec(puVar15,puVar15,param_1,iVar10);
            uVar9 = *puVar6;
            *puVar6 = uVar9 - iVar3;
          } while (uVar9 - iVar3 != 0);
          iVar3 = FUN_001e9210(puVar15,param_1,iVar10);
        }
        puVar6 = puVar6 + -1;
        puVar15 = puVar15 + -1;
        param_3 = param_3 + -1;
      } while (-1 < param_3);
    }
    if (param_5 != 0) {
      puVar7 = (undefined4 *)(param_1 + -4);
      do {
        puVar7 = puVar7 + 1;
        *puVar7 = 0;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    FUN_001e91b4(param_1,local_150,iVar14,iVar10);
  }
  return;
}

