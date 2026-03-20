/*
 * Program: n42.bin
 * Function: FUN_000b5534
 * Entry: 000b5534
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000b5534(short **param_1,short **param_2)

{
  short sVar1;
  ushort uVar2;
  short sVar5;
  uint uVar3;
  ushort *puVar4;
  short *psVar6;
  ushort uVar7;
  int iVar8;
  short sVar9;
  
  psVar6 = param_1[7];
  if (psVar6 == (short *)0x0) {
    if ((ushort)*param_1[4] == 0) {
      *param_2[4] = -0x8000;
    }
    else {
      iVar8 = ((int)((uint)(ushort)*param_1[4] * (int)**param_2) >> 10) + 0x8000;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0xffff < iVar8) {
        iVar8 = 0xffff;
      }
      *param_2[4] = (short)iVar8;
    }
  }
  else {
    sVar5 = **param_2;
    *param_2[1] = sVar5 + -0x8000;
    sVar5 = calc_value_from_y(psVar6,sVar5 + -0x8000);
    *param_2[4] = sVar5;
  }
  if (*(byte *)param_2[7] < 2) {
    psVar6 = param_1[8];
    if (psVar6 == (short *)0x0) {
      if ((ushort)*param_1[5] == 0) {
        *param_2[5] = -0x8000;
      }
      else {
        iVar8 = (uint)(ushort)*param_2[5] +
                ((int)((uint)(ushort)*param_1[5] * (int)**param_2) >> 10);
        if (iVar8 < 0) {
          uVar7 = 0;
        }
        else if (iVar8 < 0x10000) {
          uVar7 = (ushort)iVar8;
        }
        else {
          uVar7 = 0xffff;
        }
        *param_2[5] = uVar7;
      }
    }
    else {
      sVar5 = **param_2;
      *param_2[1] = sVar5 + -0x8000;
      uVar3 = calc_value_from_y(psVar6,sVar5 + -0x8000);
      iVar8 = (uint)(ushort)*param_2[5] + (uVar3 & 0xffff) + -0x8000;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0xffff < iVar8) {
        iVar8 = 0xffff;
      }
      *param_2[5] = (short)iVar8;
    }
    uVar7 = *param_1[2];
    uVar2 = *param_1[3];
    if (uVar2 < uVar7) {
      puVar4 = (ushort *)param_2[5];
      if (uVar7 < *puVar4) {
        *puVar4 = uVar7;
        *(byte *)param_2[7] = *(byte *)param_2[7] | 1;
      }
      else if (*puVar4 < uVar2) {
        *puVar4 = uVar2;
        *(byte *)param_2[7] = *(byte *)param_2[7] | 1;
      }
      else {
        *(byte *)param_2[7] = *(byte *)param_2[7] & 0xfe;
      }
    }
  }
  psVar6 = param_1[9];
  if (psVar6 == (short *)0x0) {
    if (*param_1[6] == 0) {
      *param_2[6] = -0x8000;
    }
    else {
      iVar8 = ((int)param_1[6] * ((int)**param_2 - (int)*param_2[2]) >> 10) + 0x8000;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0xffff < iVar8) {
        iVar8 = 0xffff;
      }
      *param_2[6] = (short)iVar8;
    }
  }
  else {
    sVar5 = (**param_2 - *param_2[2]) + -0x8000;
    *param_2[1] = sVar5;
    sVar5 = calc_value_from_y(psVar6,sVar5);
    *param_2[6] = sVar5;
  }
  iVar8 = (uint)(ushort)*param_2[5] + (uint)(ushort)*param_2[4] + (uint)(ushort)*param_2[6] +
          -0x18000;
  if (iVar8 < -0x7fff) {
    iVar8 = -0x7fff;
  }
  else if (0x7fff < iVar8) {
    iVar8 = 0x7fff;
  }
  psVar6 = param_2[3];
  sVar9 = (short)iVar8;
  *psVar6 = sVar9;
  sVar5 = **param_1;
  sVar1 = *param_1[1];
  if (sVar1 < sVar5) {
    if (sVar5 < sVar9) {
      *psVar6 = sVar5;
      *(byte *)param_2[7] = *(byte *)param_2[7] | 4;
    }
    else if (sVar9 < sVar1) {
      *psVar6 = sVar1;
      *(byte *)param_2[7] = *(byte *)param_2[7] | 2;
    }
    else {
      *(byte *)param_2[7] = *(byte *)param_2[7] & 0xf9;
    }
  }
  else {
    *(byte *)param_2[7] = *(byte *)param_2[7] & 0xf9;
  }
  *param_2[2] = **param_2;
  return (int)*param_2[3];
}

