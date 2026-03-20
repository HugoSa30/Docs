/*
 * Program: n42.bin
 * Function: FUN_0010fbbc
 * Entry: 0010fbbc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0010fbbc(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined uVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined *puVar10;
  byte *pbVar11;
  short sVar12;
  ushort uVar13;
  int *piVar14;
  byte local_40;
  byte local_3f [15];
  
  pbVar11 = &local_40;
  piVar14 = (int *)(*(int *)(DAT_005baa10 + 0x10) + param_1 * 0x18);
  pcVar9 = (char *)(*(int *)(DAT_005baa10 + 0xc) + param_1 * 0xc);
  puVar10 = (undefined *)(*(int *)(DAT_005baa10 + 8) + param_1 * 4);
  if (puVar10[2] == '\x01') {
    uVar6 = (**(code **)(DAT_005baa10 + 0x18))(*(undefined *)((int)piVar14 + 0xe));
    local_40 = *(byte *)((int)piVar14 + 0xf);
    pbVar11 = local_3f;
    sVar12 = 6;
  }
  else {
    uVar6 = FUN_0010a1f8(*puVar10);
    if ((puVar10[2] == -0x7e) && ((*(byte *)((int)piVar14 + 0xe) & 0xf0) == 0xe0)) {
      uVar6 = uVar6 & 0xffffff00 | (uint)*(byte *)((int)piVar14 + 0xe);
    }
    sVar12 = 7;
  }
  FUN_0010ef98(*piVar14 + (uint)*(ushort *)((int)piVar14 + 6),pbVar11 + 1,sVar12);
  *pbVar11 = *(byte *)(piVar14 + 4) | 0x20;
  cVar1 = *(char *)(piVar14 + 4);
  uVar2 = *(undefined *)((int)piVar14 + 0xd);
  uVar3 = *(undefined *)((int)piVar14 + 0x13);
  cVar4 = *(char *)((int)piVar14 + 0x11);
  iVar8 = piVar14[5];
  sVar5 = *(short *)((int)piVar14 + 6);
  *(byte *)(piVar14 + 4) = cVar1 + 1U & 0xf;
  *(ushort *)((int)piVar14 + 10) = (ushort)*(byte *)((int)piVar14 + 0x12);
  uVar13 = sVar5 + sVar12;
  *(ushort *)((int)piVar14 + 6) = uVar13;
  if (uVar13 < *(ushort *)(piVar14 + 2)) {
    if (*pcVar9 == '\x01') {
      if ((cVar4 != '\0') &&
         (*(char *)((int)piVar14 + 0x11) = cVar4 + -1, (char)(cVar4 + -1) == '\0')) {
        *(undefined *)((int)piVar14 + 0x13) = *(undefined *)(*(int *)(pcVar9 + 4) + 2);
        *(undefined *)((int)piVar14 + 0xd) = 0x10;
        *(undefined2 *)((int)piVar14 + 10) = *(undefined2 *)(*(int *)(pcVar9 + 4) + 8);
        piVar14[5] = -4;
      }
    }
  }
  else {
    *(undefined *)((int)piVar14 + 0xd) = 0;
  }
  iVar7 = FUN_0010f76c(*puVar10,&local_40,uVar6);
  if (iVar7 == 0) {
    if (*(ushort *)(piVar14 + 2) <= *(ushort *)((int)piVar14 + 6)) {
      DAT_005baa26 = DAT_005baa26 + -1;
      FUN_0010ef68(param_1,1);
    }
  }
  else {
    *(char *)(piVar14 + 4) = cVar1;
    *(undefined *)((int)piVar14 + 0xd) = uVar2;
    *(undefined *)((int)piVar14 + 0x13) = uVar3;
    piVar14[5] = iVar8;
    *(char *)((int)piVar14 + 0x11) = cVar4;
    *(short *)((int)piVar14 + 6) = sVar5;
    *(undefined2 *)((int)piVar14 + 10) = 0;
  }
  return;
}

