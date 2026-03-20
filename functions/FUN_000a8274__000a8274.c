/*
 * Program: n42.bin
 * Function: FUN_000a8274
 * Entry: 000a8274
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000a8274(ushort *param_1,int param_2,uint param_3)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  
  uVar8 = (uint)*param_1;
  uVar3 = (uint)param_1[1];
  puVar5 = param_1 + 2;
  puVar7 = puVar5 + uVar8;
  iVar6 = 0;
  uVar4 = 0;
  if (((int)(uint)*puVar7 < (int)param_3) &&
     (iVar6 = uVar3 - 1, (int)param_3 < (int)(uint)puVar7[iVar6])) {
    uVar1 = (uint)(param_1[1] >> 1);
    iVar6 = iVar6 - uVar1;
    if ((int)(uint)puVar7[iVar6] < (int)param_3) {
      iVar6 = iVar6 + uVar1 + -1;
    }
    if ((int)param_3 < (int)(uint)puVar7[iVar6]) {
      puVar10 = puVar7 + iVar6;
      do {
        iVar6 = iVar6 + -1;
        puVar10 = puVar10 + -1;
      } while ((int)param_3 < (int)(uint)*puVar10);
    }
    if (puVar7[iVar6] != param_3) {
      uVar4 = ((param_3 - puVar7[iVar6]) * 0x10000) /
              ((uint)puVar7[iVar6 + 1] - (uint)puVar7[iVar6]);
    }
  }
  uVar4 = uVar4 + iVar6 * 0x10000;
  uVar1 = uVar4 & 0xffff;
  puVar10 = puVar5 + uVar8 + uVar3 + (uVar4 >> 0x10);
  puVar7 = puVar10 + 1;
  uVar4 = (uint)(puVar7 + uVar3 * (uVar8 - 1))[-1];
  iVar9 = ((int)((puVar7[uVar3 * (uVar8 - 1)] - uVar4) * uVar1) >> 0x10) + uVar4;
  iVar6 = ((int)(((uint)*puVar7 - (uint)*puVar10) * uVar1) >> 0x10) + (uint)*puVar10;
  if (iVar6 < iVar9) {
    if (param_2 < iVar9) {
      if (iVar6 < param_2) {
        do {
          iVar9 = iVar6;
          puVar2 = puVar5;
          puVar5 = puVar2 + 1;
          puVar10 = puVar10 + uVar3;
          puVar7 = puVar7 + uVar3;
          iVar6 = ((int)(((uint)*puVar7 - (uint)*puVar10) * uVar1) >> 0x10) + (uint)*puVar10;
        } while (iVar6 < param_2);
        if (iVar9 == iVar6) {
          uVar3 = (uint)*puVar5;
        }
        else {
          uVar3 = (uint)*puVar2;
          uVar3 = (int)((param_2 - iVar9) * (*puVar5 - uVar3)) / (iVar6 - iVar9) + uVar3 & 0xffff;
        }
      }
      else {
        uVar3 = (uint)*puVar5;
      }
    }
    else {
      uVar3 = (uint)puVar5[uVar8 - 1];
    }
  }
  else if (iVar9 < param_2) {
    if (param_2 < iVar6) {
      do {
        iVar9 = iVar6;
        puVar2 = puVar5;
        puVar5 = puVar2 + 1;
        puVar10 = puVar10 + uVar3;
        puVar7 = puVar7 + uVar3;
        iVar6 = ((int)(((uint)*puVar7 - (uint)*puVar10) * uVar1) >> 0x10) + (uint)*puVar10;
      } while (param_2 < iVar6);
      if (iVar9 == iVar6) {
        uVar3 = (uint)*puVar5;
      }
      else {
        uVar3 = (uint)*puVar2;
        uVar3 = (int)((param_2 - iVar9) * (*puVar5 - uVar3)) / (iVar6 - iVar9) + uVar3 & 0xffff;
      }
    }
    else {
      uVar3 = (uint)*puVar5;
    }
  }
  else {
    uVar3 = (uint)puVar5[uVar8 - 1];
  }
  return uVar3;
}

