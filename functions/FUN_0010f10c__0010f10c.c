/*
 * Program: n42.bin
 * Function: FUN_0010f10c
 * Entry: 0010f10c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0010f10c(uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined uVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  short sVar11;
  char cVar12;
  ushort uVar14;
  uint uVar13;
  byte *pbVar15;
  byte *pbVar16;
  int *piVar17;
  byte local_30;
  byte local_2f [7];
  
  pbVar15 = &local_30;
  FUN_0010a2c4(param_1,&local_30);
  uVar10 = (uint)*DAT_005baa10;
  pbVar9 = (byte *)(*(int *)(DAT_005baa10 + 8) + uVar10 * 4);
  for (; uVar10 < DAT_005baa10[2]; uVar10 = uVar10 + 1 & 0xff) {
    if (*pbVar9 == param_1) {
      if (pbVar9[2] == 0) break;
      bVar1 = pbVar9[3];
      if ((bVar1 == local_30) || (bVar1 == 0xff)) {
        if ((bVar1 == 0xff) && (iVar4 = FUN_0010b1e0(local_30), iVar4 == 0)) {
          return;
        }
        pbVar15 = local_2f;
        break;
      }
    }
    pbVar9 = pbVar9 + 4;
  }
  pbVar3 = DAT_005baa10;
  if (DAT_005baa10[2] == uVar10) {
    return;
  }
  bVar1 = *pbVar15;
  bVar7 = bVar1 & 0x30;
  uVar10 = bVar1 & 0xf;
  pbVar16 = pbVar15 + 1;
  if (bVar7 == 0x30) {
    iVar4 = *(int *)(DAT_005baa10 + 0xc);
    uVar10 = (uint)*(byte *)(iVar4 + (uint)pbVar9[1] * 0xc + 1);
    piVar17 = (int *)(*(int *)(DAT_005baa10 + 0x10) + uVar10 * 0x18);
    if (*(char *)((int)piVar17 + 0xd) != '\x10') {
      piVar17[5] = 9;
      if (*(char *)((int)piVar17 + 0xd) == ' ') {
        FUN_0010ef68(uVar10,1);
      }
      *(undefined *)((int)piVar17 + 0xd) = 0;
      return;
    }
    if ((bVar1 & 0xf) == 0) {
      *(byte *)((int)piVar17 + 0x11) = *pbVar16;
      uVar10 = (uint)pbVar15[2] / (uint)pbVar3[3];
      uVar14 = (ushort)uVar10;
      if (uVar10 * pbVar3[3] < (uint)pbVar15[2]) {
        uVar14 = uVar14 + 1;
      }
      *(ushort *)((int)piVar17 + 10) = uVar14 & 0xff;
      *(char *)((int)piVar17 + 0x12) = (char)uVar14;
      *(undefined *)((int)piVar17 + 0xd) = 0x20;
      return;
    }
    if (*(char *)((int)piVar17 + 0x13) == '\0') {
      piVar17[5] = 10;
      *(undefined *)((int)piVar17 + 0xd) = 0;
      FUN_0010ef68(uVar10,1);
      return;
    }
    *(char *)((int)piVar17 + 0x13) = *(char *)((int)piVar17 + 0x13) + -1;
    *(undefined2 *)((int)piVar17 + 10) = *(undefined2 *)(*(int *)(iVar4 + uVar10 * 0xc + 4) + 0xe);
    iVar4 = -7;
LAB_0010f6b8:
    piVar17[5] = iVar4;
  }
  else {
    uVar13 = (uint)pbVar9[1];
    piVar17 = (int *)(*(int *)(DAT_005baa10 + 0x10) + uVar13 * 0x18);
    if (pbVar9[2] == 0x81) {
      if (bVar7 == 0x20) {
        uVar5 = (**(code **)(DAT_005baa10 + 0x14))(param_1);
        while ((*(byte *)((int)piVar17 + 0xe) != uVar5 || (*(char *)((int)piVar17 + 0xd) != '\x02'))
              ) {
          piVar17 = piVar17 + 6;
          uVar13 = uVar13 + 1 & 0xff;
          if (DAT_005baa25 <= uVar13) {
            return;
          }
        }
      }
      else {
        uVar5 = (uint)DAT_005baa28;
        uVar13 = uVar13 + uVar5 & 0xff;
        piVar17 = piVar17 + uVar5 * 6;
        DAT_005baa28 = (byte)(uVar5 + 1);
        if ((uint)DAT_005baa10[4] == (uVar5 + 1 & 0xff)) {
          return;
        }
      }
    }
    pbVar3 = DAT_005baa10;
    bVar2 = *(byte *)(piVar17 + 3);
    pbVar8 = (byte *)(*(int *)(DAT_005baa10 + 0xc) + uVar13 * 0xc);
    if ((bVar2 & 0x82) != 0x82) {
      return;
    }
    *(byte *)(piVar17 + 3) = bVar2 | 0x20;
    if (bVar7 == 0x20) {
LAB_0010f418:
      if ((bVar1 & 0x30) == 0) {
        *(short *)(piVar17 + 2) = (short)uVar10;
        *(short *)((int)piVar17 + 6) = (short)uVar10;
        FUN_0010ef98(pbVar16,*piVar17,uVar10);
        FUN_0010ef68(uVar13,1);
        if (*(code **)(pbVar8 + 8) == (code *)0x0) {
          return;
        }
        (**(code **)(pbVar8 + 8))();
        return;
      }
      if (bVar7 == 0x10) {
        DAT_005baa27 = DAT_005baa27 + '\x01';
        *(ushort *)(piVar17 + 2) = (ushort)(uVar10 << 8) | (ushort)*pbVar16;
        sVar11 = 5;
        if (pbVar9[2] == 0) {
          sVar11 = 6;
        }
        FUN_0010ef98(pbVar15 + 2,*piVar17,sVar11);
        *(short *)((int)piVar17 + 6) = sVar11;
        if (*(ushort *)(piVar17 + 1) < (ushort)(sVar11 * 2 + 1U)) {
          *(byte *)(piVar17 + 3) = *(byte *)(piVar17 + 3) | 8;
        }
        *(undefined *)((int)piVar17 + 0x12) = *(undefined *)(*(int *)(pbVar8 + 4) + 1);
        *(undefined *)((int)piVar17 + 0x13) = *(undefined *)(*(int *)(pbVar8 + 4) + 2);
        *(undefined *)(piVar17 + 4) = 1;
        if (*(code **)(pbVar8 + 8) != (code *)0x0) {
          (**(code **)(pbVar8 + 8))();
        }
        if ((*pbVar8 & 1) == 0) {
          *(undefined2 *)((int)piVar17 + 10) = *(undefined2 *)(*(int *)(pbVar8 + 4) + 0xc);
          piVar17[5] = -6;
          *(undefined *)((int)piVar17 + 0xd) = 2;
          return;
        }
        *(undefined *)((int)piVar17 + 0xd) = 1;
        *(undefined2 *)((int)piVar17 + 10) = *(undefined2 *)(*(int *)(pbVar8 + 4) + 0x10);
        if ((*(byte *)(piVar17 + 3) & 8) != 0) {
          return;
        }
        if (*(char *)((int)piVar17 + 0x12) != '\0') {
          return;
        }
        FUN_0010fa10(uVar13);
        return;
      }
      if (bVar7 != 0x20) {
        return;
      }
      if (*(char *)((int)piVar17 + 0xd) != '\x02') {
        iVar4 = 9;
        goto LAB_0010f6b8;
      }
      if (uVar10 == *(byte *)(piVar17 + 4)) {
        *(byte *)(piVar17 + 4) = *(byte *)(piVar17 + 4) + 1 & 0xf;
        if (pbVar9[2] == 0) {
          uVar10 = 7;
        }
        else {
          uVar10 = 6;
        }
        if (*(ushort *)((int)piVar17 + 6) + uVar10 < (uint)*(ushort *)(piVar17 + 2)) {
          if ((*(char *)((int)piVar17 + 0x11) != '\0') && ((*pbVar8 & 1) != 0)) {
            cVar12 = *(char *)((int)piVar17 + 0x11) + -1;
            *(char *)((int)piVar17 + 0x11) = cVar12;
            if (cVar12 == '\0') {
              *(undefined *)((int)piVar17 + 0xd) = 1;
              *(undefined2 *)((int)piVar17 + 10) = *(undefined2 *)(*(int *)(pbVar8 + 4) + 0x10);
            }
            else {
              *(undefined2 *)((int)piVar17 + 10) = *(undefined2 *)(*(int *)(pbVar8 + 4) + 0xc);
              piVar17[5] = -6;
            }
          }
        }
        else {
          uVar10 = (uint)*(ushort *)(piVar17 + 2) - (uint)*(ushort *)((int)piVar17 + 6);
          *(undefined *)((int)piVar17 + 0xd) = 0;
          *(undefined2 *)((int)piVar17 + 10) = 0;
          DAT_005baa27 = DAT_005baa27 + -1;
          FUN_0010ef68(uVar13,1);
        }
        FUN_0010ef98(pbVar16,*piVar17 + (uint)*(ushort *)((int)piVar17 + 6),uVar10 & 0xff);
        *(ushort *)((int)piVar17 + 6) = *(short *)((int)piVar17 + 6) + ((ushort)uVar10 & 0xff);
        return;
      }
      piVar17[5] = 9;
      *(undefined *)((int)piVar17 + 0xd) = 0;
    }
    else {
      if (*(char *)((int)piVar17 + 0xd) == '\0') {
        if (pbVar9[2] == 0) {
          bVar2 = pbVar9[3];
          *(byte *)((int)piVar17 + 0xf) = bVar2;
          *(byte *)((int)piVar17 + 0xe) = bVar2;
        }
        else {
          uVar6 = (**(code **)(pbVar3 + 0x14))(param_1);
          *(undefined *)((int)piVar17 + 0xe) = uVar6;
          *(byte *)((int)piVar17 + 0xf) = local_30;
        }
        goto LAB_0010f418;
      }
      piVar17[5] = 9;
      *(undefined *)((int)piVar17 + 0xd) = 0;
      *(byte *)(piVar17 + 3) = bVar2 & 0xd7;
      if (DAT_005baa27 == '\0') {
        return;
      }
    }
    DAT_005baa27 = DAT_005baa27 + -1;
  }
  return;
}

