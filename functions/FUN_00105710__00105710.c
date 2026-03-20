/*
 * Program: n42.bin
 * Function: FUN_00105710
 * Entry: 00105710
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00105710(int *param_1,int *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  ushort local_40;
  
  iVar10 = *param_1;
  param_1 = param_1 + 1;
  iVar11 = *param_2;
  param_2 = param_2 + 1;
  puVar13 = (uint *)(param_3 + 4);
  FUN_00105678(param_3,iVar10 + iVar11);
  iVar9 = iVar10;
  if (0 < iVar10) {
    do {
      uVar14 = 0;
      iVar12 = iVar11;
      if (0 < iVar11) {
        do {
          _();
          uVar1 = *(ushort *)param_2;
          uVar2 = *(ushort *)param_1;
          uVar6 = (uint)uVar2 * (uint)*(ushort *)((int)param_2 + 2);
          uVar5 = (uint)*(ushort *)((int)param_1 + 2) * (uint)uVar1 + uVar6;
          local_40 = (ushort)(uVar5 >> 0x10);
          if (uVar5 < uVar6) {
            uVar6 = local_40 | 0x10000;
          }
          else {
            uVar6 = (uint)local_40;
          }
          uVar4 = (uint)*(ushort *)((int)param_1 + 2) * (uint)*(ushort *)((int)param_2 + 2);
          uVar5 = uVar5 * 0x10000 + uVar4;
          uVar7 = uVar5 + uVar14;
          uVar8 = *puVar13;
          *puVar13 = uVar7 + uVar8;
          uVar14 = (uint)(uVar7 + uVar8 < uVar7) + (uint)(uVar7 < uVar14) +
                   (uVar5 < uVar4) + uVar6 + (uint)uVar2 * (uint)uVar1;
          param_2 = param_2 + 1;
          puVar13 = puVar13 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      param_2 = param_2 + -iVar11;
      iVar12 = 0;
      if (uVar14 != 0) {
        puVar3 = puVar13 + -1;
        do {
          puVar13 = puVar3;
          uVar5 = puVar13[1];
          puVar13[1] = uVar14 + uVar5;
          uVar14 = (uint)(uVar14 + uVar5 < uVar14);
          iVar12 = iVar12 + 1;
          puVar3 = puVar13 + 1;
        } while (uVar14 != 0);
        puVar13 = puVar13 + 2;
      }
      param_1 = param_1 + 1;
      puVar13 = puVar13 + (1 - (iVar11 + iVar12));
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  FUN_0010563c(puVar13 + (-1 - iVar10));
  return 0;
}

