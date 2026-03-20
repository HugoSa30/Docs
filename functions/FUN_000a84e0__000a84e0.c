/*
 * Program: n42.bin
 * Function: FUN_000a84e0
 * Entry: 000a84e0
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000a84e0(ushort *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar8 = (uint)*param_1;
  uVar10 = (uint)param_1[1];
  puVar7 = param_1 + 2;
  puVar4 = puVar7 + uVar8;
  iVar9 = 0;
  uVar6 = 0;
  if (((int)(uint)*puVar7 < (int)param_3) &&
     (iVar9 = uVar8 - 1, (int)param_3 < (int)(uint)puVar7[iVar9])) {
    uVar1 = (uint)(*param_1 >> 1);
    iVar9 = iVar9 - uVar1;
    if ((int)(uint)puVar7[iVar9] < (int)param_3) {
      iVar9 = iVar9 + uVar1 + -1;
    }
    if ((int)param_3 < (int)(uint)puVar7[iVar9]) {
      puVar3 = puVar7 + iVar9;
      do {
        iVar9 = iVar9 + -1;
        puVar3 = puVar3 + -1;
      } while ((int)param_3 < (int)(uint)*puVar3);
    }
    if (puVar7[iVar9] != param_3) {
      uVar6 = ((param_3 - puVar7[iVar9]) * 0x10000) /
              ((uint)puVar7[iVar9 + 1] - (uint)puVar7[iVar9]);
    }
  }
  uVar6 = uVar6 + iVar9 * 0x10000;
  uVar1 = uVar6 & 0xffff;
  puVar7 = puVar7 + uVar8 + uVar10 + uVar10 * (uVar6 >> 0x10);
  puVar3 = puVar7 + uVar10;
  iVar2 = ((int)(((uint)puVar3[uVar10 - 1] - (uint)puVar3[-1]) * uVar1) >> 0x10) + (uint)puVar3[-1];
  iVar9 = ((int)(((uint)*puVar3 - (uint)*puVar7) * uVar1) >> 0x10) + (uint)*puVar7;
  if (iVar9 < iVar2) {
    if (param_2 < iVar2) {
      if (iVar9 < param_2) {
        do {
          iVar2 = iVar9;
          puVar5 = puVar4;
          puVar4 = puVar5 + 1;
          puVar7 = puVar7 + 1;
          puVar3 = puVar3 + 1;
          iVar9 = ((int)(((uint)*puVar3 - (uint)*puVar7) * uVar1) >> 0x10) + (uint)*puVar7;
        } while (iVar9 < param_2);
        if (iVar2 == iVar9) {
          uVar6 = (uint)*puVar4;
        }
        else {
          uVar6 = (uint)*puVar5;
          uVar6 = (int)((param_2 - iVar2) * (*puVar4 - uVar6)) / (iVar9 - iVar2) + uVar6 & 0xffff;
        }
      }
      else {
        uVar6 = (uint)*puVar4;
      }
    }
    else {
      uVar6 = (uint)puVar4[uVar10 - 1];
    }
  }
  else if (iVar2 < param_2) {
    if (param_2 < iVar9) {
      do {
        iVar2 = iVar9;
        puVar5 = puVar4;
        puVar4 = puVar5 + 1;
        puVar7 = puVar7 + 1;
        puVar3 = puVar3 + 1;
        iVar9 = ((int)(((uint)*puVar3 - (uint)*puVar7) * uVar1) >> 0x10) + (uint)*puVar7;
      } while (param_2 < iVar9);
      if (iVar2 == iVar9) {
        uVar6 = (uint)*puVar4;
      }
      else {
        uVar6 = (uint)*puVar5;
        uVar6 = (int)((param_2 - iVar2) * (*puVar4 - uVar6)) / (iVar9 - iVar2) + uVar6 & 0xffff;
      }
    }
    else {
      uVar6 = (uint)*puVar4;
    }
  }
  else {
    uVar6 = (uint)puVar4[uVar10 - 1];
  }
  return uVar6;
}

