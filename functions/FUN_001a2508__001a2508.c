/*
 * Program: n42.bin
 * Function: FUN_001a2508
 * Entry: 001a2508
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001a2508(short *param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  ushort *puVar14;
  ushort *puVar15;
  uint uVar16;
  char cVar17;
  
  puVar9 = (ushort *)(param_1 + 4);
  puVar14 = (ushort *)(param_1 + 0xb);
  uVar3 = 0;
  if (param_1[3] != 0) {
    do {
      iVar7 = (uint)*puVar9 * 10;
      iVar5 = (uint)*puVar9 * 0xc;
      piVar11 = *(int **)(&DAT_00fa9cb2 + iVar7);
      piVar10 = piVar11 + 7;
      uVar16 = 0;
      piVar2 = piVar11;
      puVar15 = puVar14;
      for (uVar8 = (uint)puVar9[3]; uVar8 != 0; uVar8 = uVar8 - 1) {
        bVar1 = *(byte *)puVar15;
        uVar13 = (uint)bVar1;
        uVar4 = (uint)DAT_00fa9cae;
        piVar12 = piVar2;
        if (uVar4 < uVar16 + uVar13) {
          piVar12 = (int *)((int)piVar2 + 0x2b);
          piVar10 = (int *)((int)piVar2 + 0x47);
          uVar16 = 0;
          piVar11 = piVar12;
        }
        if (uVar13 != 0) {
          iVar6 = *(int *)(puVar15 + 1);
          piVar2 = piVar11 + -1;
          do {
            piVar11 = piVar2;
            piVar2 = piVar11 + 1;
            *piVar2 = iVar6;
            iVar6 = iVar6 + 1;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
          piVar11 = piVar11 + 2;
        }
        if (uVar16 < uVar4 - 1) {
          *(byte *)piVar10 = (char)uVar16 + bVar1;
          piVar10 = (int *)((int)piVar10 + 1);
        }
        uVar16 = uVar16 + *(byte *)puVar15;
        puVar15 = puVar15 + 3;
        piVar2 = piVar12;
      }
      (&UNK_003fbc25)[iVar5] = 0x20;
      (&UNK_003fbc26)[iVar5] = *(undefined *)(iVar7 + 0xfa9cb1);
      (&DAT_003fbc27)[iVar5] = (char)puVar9[4];
      uVar16 = (uint)puVar9[5];
      if (uVar16 == 0xff) {
        *(undefined2 *)(&DAT_003fbc2a + iVar5) = 0xffff;
        cVar17 = '\0';
      }
      else {
        if (uVar16 != 0) {
          uVar16 = uVar16 + 0xffff & 0xffff;
        }
        uVar8 = (uint)*(ushort *)(iVar7 + 0xfa9cb6);
        uVar16 = uVar8 + uVar8 * (uVar16 / uVar8);
        *(short *)(&DAT_003fbc2a + iVar5) = (short)uVar16;
        cVar17 = (char)((uVar16 & 0xffff) / uVar8) + -1;
      }
      (&DAT_003fbc29)[iVar5] = cVar17;
      (&DAT_003fbc28)[iVar5] = 1;
      *(undefined4 *)(&DAT_003fbc20 + iVar5) = *(undefined4 *)(puVar9 + 1);
      (&DAT_003fbc24)[iVar5] = (&DAT_003fbc24)[iVar5] | 0x81;
      puVar14 = puVar15 + 7;
      uVar3 = uVar3 + 1;
      puVar9 = puVar15;
    } while (uVar3 < (ushort)param_1[3]);
  }
  DAT_003fbc78 = DAT_003fbc78 | 0x86;
  if (*param_1 == -1) {
    *_DAT_003fbc84 = 0xfe;
    _DAT_003fbc84[1] = 0x20;
  }
  return 1;
}

