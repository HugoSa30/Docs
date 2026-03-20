/*
 * Program: n42.bin
 * Function: FUN_000e3760
 * Entry: 000e3760
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000e3760(undefined4 param_1,byte **param_2)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  byte bVar19;
  uint uVar18;
  byte bVar20;
  uint uVar21;
  int iVar22;
  
  if (*(ushort *)((int)param_2 + 6) < 2) {
    **param_2 = 0x10;
LAB_000e3f6c:
    *(undefined2 *)(param_2 + 2) = 1;
    *(undefined *)((int)param_2 + 10) = 2;
  }
  else {
    bVar3 = false;
    pbVar11 = *param_2;
    uVar14 = 1;
    if (9 < *pbVar11 - 0xf0) {
      *pbVar11 = 0x31;
      *(undefined2 *)(param_2 + 2) = 1;
      *(undefined *)((int)param_2 + 10) = 2;
      return;
    }
    iVar17 = *pbVar11 + 0x10;
    if (pbVar11[1] == 4) {
      uVar14 = iVar17 * 8 & 0x7f8;
      (&DAT_005bb5a1)[uVar14] = 0;
      (&DAT_005bb5a0)[uVar14] = 0;
LAB_000e3efc:
      if (bVar3) {
LAB_000e3f24:
        **param_2 = 0x11;
        *(undefined2 *)(param_2 + 2) = 1;
        *(undefined *)((int)param_2 + 10) = 2;
        uVar14 = iVar17 * 8 & 0x7f8;
        (&DAT_005bb5a1)[uVar14] = 0;
        (&DAT_005bb5a0)[uVar14] = 0;
        return;
      }
    }
    else {
      uVar8 = iVar17 * 8 & 0x7f8;
      pbVar10 = &DAT_005bb5a0 + uVar8;
      if ((&DAT_005bb5a1)[uVar8] != '\0') {
        *pbVar11 = 0x22;
        goto LAB_000e3f6c;
      }
      if (1 < *(ushort *)((int)param_2 + 6)) {
LAB_000e3800:
        do {
          pcVar12 = &DAT_005bb5a1 + uVar8;
          uVar15 = uVar14;
LAB_000e3814:
          while( true ) {
            if (bVar3) goto LAB_000e3f24;
            pbVar11 = *param_2;
            uVar14 = uVar15 + 1;
            bVar1 = pbVar11[uVar15 & 0xff];
            if (3 < bVar1) {
              if (bVar1 == 0xfa) {
                bVar1 = pbVar11[2];
                if (bVar1 < 0xb) {
                  (&DAT_005bb5a1)[uVar8] = bVar1;
                  uVar2 = *(ushort *)((int)param_2 + 6);
                  uVar14 = (uint)uVar2;
                  (&DAT_005bb5a0)[uVar8] = 0;
                  uVar15 = 0;
                  goto LAB_000e3d70;
                }
                bVar3 = true;
                if ((uVar14 & 0xff) < (uint)*(ushort *)((int)param_2 + 6)) goto LAB_000e3800;
                goto LAB_000e3efc;
              }
              if (bVar1 != 0xfb) goto LAB_000e3ec8;
              bVar1 = pbVar11[2];
              if (bVar1 < 0xb) {
                (&DAT_005bb5a1)[uVar8] = bVar1;
                uVar2 = *(ushort *)((int)param_2 + 6);
                uVar14 = (uint)uVar2;
                (&DAT_005bb5a0)[uVar8] = 0;
                uVar15 = 0;
                goto LAB_000e3e2c;
              }
              bVar3 = true;
              if ((uVar14 & 0xff) < (uint)*(ushort *)((int)param_2 + 6)) goto LAB_000e3800;
              goto LAB_000e3efc;
            }
            if (bVar1 != 3) break;
            uVar18 = 0;
            uVar21 = 0;
            uVar16 = (uint)(byte)(&DAT_005bb5a1)[uVar8];
            if (uVar16 != 0) {
              do {
                uVar18 = uVar18 + *(byte *)(*(int *)((int)&DAT_005bb5a4 + uVar8) + uVar21 * 8 + 2) &
                         0xff;
                uVar21 = uVar21 + 1 & 0xff;
              } while (uVar21 < uVar16);
            }
            uVar21 = uVar14 & 0xff;
            bVar1 = pbVar11[uVar21 + 2];
            bVar20 = pbVar11[uVar21 + 3];
            bVar19 = pbVar11[uVar21 + 4];
            if ((pbVar11[uVar14 & 0xff] - 1 != uVar18) || (9 < uVar16)) {
              bVar3 = true;
              if ((uint)*(ushort *)((int)param_2 + 6) <= (uVar14 & 0xff)) goto LAB_000e3efc;
              goto LAB_000e3800;
            }
            iVar6 = *(int *)((int)&DAT_005bb5a4 + uVar8);
            *(byte *)(iVar6 + uVar16 * 8 + 2) = pbVar11[uVar21 + 1];
            *(uint *)(iVar6 + uVar16 * 8 + 4) =
                 (uint)bVar1 << 0x10 | (uint)bVar20 << 8 | (uint)bVar19;
            if (uVar16 == 0) {
              (&DAT_005bb5a0)[uVar8] = 0;
            }
            else {
              *pbVar10 = 0;
            }
            *pcVar12 = *pcVar12 + '\x01';
            uVar15 = uVar15 + 6;
            if ((uint)*(ushort *)((int)param_2 + 6) <= (uVar15 & 0xff)) goto LAB_000e3efc;
          }
          if (bVar1 == 1) {
            uVar18 = 0;
            uVar21 = 0;
            uVar16 = (uint)(byte)(&DAT_005bb5a1)[uVar8];
            if (uVar16 != 0) {
              do {
                uVar18 = uVar18 + *(byte *)(*(int *)((int)&DAT_005bb5a4 + uVar8) + uVar21 * 8 + 2) &
                         0xff;
                uVar21 = uVar21 + 1 & 0xff;
              } while (uVar21 < uVar16);
            }
            if ((pbVar11[uVar14 & 0xff] - 1 == uVar18) && (uVar16 < 10)) {
              bVar1 = pbVar11[(uVar14 & 0xff) + 2];
              uVar18 = (uint)bVar1;
              if (bVar1 - 1 < 0x7f) {
                uVar18 = uVar18 + 0xff & 0xff;
LAB_000e3924:
                if (!bVar3) {
                  bVar19 = 0;
                  uVar21 = 0;
                  bVar20 = pbVar11[(uVar14 & 0xff) + 3];
                  if (bVar20 != 0) {
                    uVar16 = (uint)*(byte *)(uVar18 * 8 + 0xfeabd1);
                    if (uVar16 != 0) {
                      do {
                        bVar19 = bVar19 + *(char *)(*(int *)(uVar18 * 8 + 0xfeabd4) + uVar21 * 8);
                        uVar21 = uVar21 + 1 & 0xff;
                        if (bVar20 <= bVar19) goto LAB_000e3994;
                      } while (uVar21 < uVar16);
                    }
                  }
                  if (bVar19 < bVar20) {
                    bVar3 = true;
                    uVar15 = uVar14;
                    if ((uint)*(ushort *)((int)param_2 + 6) <= (uVar14 & 0xff)) goto LAB_000e3efc;
                    goto LAB_000e3814;
                  }
LAB_000e3994:
                  func_0x00fa9bc4(bVar1);
                  iVar9 = *(int *)((int)&DAT_005bb5a4 + uVar8);
                  uVar14 = (uint)(byte)(&DAT_005bb5a1)[uVar8];
                  iVar6 = iVar9 + uVar14 * 8;
                  iVar13 = *(int *)(uVar18 * 8 + 0xfeabd4) + uVar21 * 8;
                  *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar13 + -4);
                  *(undefined *)(iVar6 + 2) = *(undefined *)(iVar13 + -8);
                  *(ushort *)(iVar9 + uVar14 * 8) = (ushort)bVar1;
                  if (uVar14 == 0) {
                    (&DAT_005bb5a0)[uVar8] = *(undefined *)(uVar18 * 8 + 0xfeabd0);
                  }
                  else {
                    *pbVar10 = *pbVar10 & *(byte *)(uVar18 * 8 + 0xfeabd0);
                  }
                  *pcVar12 = *pcVar12 + '\x01';
                  uVar14 = uVar15 + 5;
                }
              }
              else {
                if (bVar1 - 0xa0 < 0x50) {
                  uVar18 = uVar18 + 0xdf & 0xff;
                  goto LAB_000e3924;
                }
                if (bVar1 - 0xfa < 5) {
                  uVar18 = uVar18 + 0xd5 & 0xff;
                  goto LAB_000e3924;
                }
                bVar3 = true;
              }
              uVar15 = uVar14;
              if ((uint)*(ushort *)((int)param_2 + 6) <= (uVar14 & 0xff)) goto LAB_000e3efc;
            }
            else {
              bVar3 = true;
              uVar15 = uVar14;
              if ((uint)*(ushort *)((int)param_2 + 6) <= (uVar14 & 0xff)) goto LAB_000e3efc;
            }
            goto LAB_000e3814;
          }
          if (bVar1 != 2) {
LAB_000e3ec8:
            bVar3 = true;
            if ((uint)*(ushort *)((int)param_2 + 6) <= (uVar14 & 0xff)) goto LAB_000e3efc;
            goto LAB_000e3800;
          }
          uVar18 = 0;
          uVar21 = 0;
          uVar16 = (uint)(byte)(&DAT_005bb5a1)[uVar8];
          if (uVar16 != 0) {
            do {
              uVar18 = uVar18 + *(byte *)(*(int *)((int)&DAT_005bb5a4 + uVar8) + uVar21 * 8 + 2) &
                       0xff;
              uVar21 = uVar21 + 1 & 0xff;
            } while (uVar21 < uVar16);
          }
          if ((pbVar11[uVar14 & 0xff] - 1 == uVar18) && (uVar16 < 10)) {
            sVar5 = *(short *)(pbVar11 + (uVar14 & 0xff) + 2);
            sVar4 = *(short *)(pbVar11 + (uVar14 & 0xff) + 2);
            for (uVar18 = 0; *(int *)(uVar18 * 8 + 0xfea2c4) != 0; uVar18 = uVar18 + 1 & 0xffff) {
              if (*(short *)(uVar18 * 8 + 0xfea2c0) == sVar4) {
                if (bVar3) goto LAB_000e3d0c;
                bVar20 = 0;
                uVar21 = 0;
                bVar1 = pbVar11[(uVar14 & 0xff) + 4];
                if (bVar1 == 0) goto LAB_000e3c84;
                uVar16 = (uint)*(byte *)(uVar18 * 8 + 0xfea2c3);
                if (uVar16 == 0) goto LAB_000e3c84;
                goto LAB_000e3c5c;
              }
            }
            bVar3 = true;
            goto LAB_000e3d0c;
          }
          bVar3 = true;
          if ((uint)*(ushort *)((int)param_2 + 6) <= (uVar14 & 0xff)) goto LAB_000e3efc;
        } while( true );
      }
    }
    **param_2 = (byte)iVar17 | 0xf0;
    *(undefined2 *)(param_2 + 2) = 1;
    *(undefined *)((int)param_2 + 10) = 1;
  }
  return;
LAB_000e3d70:
  if (bVar1 <= uVar15) goto LAB_000e3dd4;
  cVar7 = func_0x00fa74e4((*param_2)[uVar15 + 3],1,
                          *(int *)((int)&DAT_005bb5a4 + uVar8) + uVar15 * 8 + 4);
  if (cVar7 != '\x01') {
    bVar3 = true;
    goto LAB_000e3dd4;
  }
  iVar6 = *(int *)((int)&DAT_005bb5a4 + uVar8);
  *(undefined *)(iVar6 + uVar15 * 8 + 2) = 1;
  *(ushort *)(iVar6 + uVar15 * 8) = (ushort)(*param_2)[uVar15 + 3];
  uVar15 = uVar15 + 1 & 0xff;
  goto LAB_000e3d70;
LAB_000e3dd4:
  if (*(ushort *)((int)param_2 + 6) <= (uVar2 & 0xff)) goto LAB_000e3efc;
  goto LAB_000e3800;
LAB_000e3e2c:
  if (bVar1 <= uVar15) goto LAB_000e3e90;
  cVar7 = func_0x00fa74e4((*param_2)[uVar15 + 3],2,
                          *(int *)((int)&DAT_005bb5a4 + uVar8) + uVar15 * 8 + 4);
  if (cVar7 != '\x01') {
    bVar3 = true;
    goto LAB_000e3e90;
  }
  iVar6 = *(int *)((int)&DAT_005bb5a4 + uVar8);
  *(undefined *)(iVar6 + uVar15 * 8 + 2) = 2;
  *(ushort *)(iVar6 + uVar15 * 8) = (ushort)(*param_2)[uVar15 + 3];
  uVar15 = uVar15 + 1 & 0xff;
  goto LAB_000e3e2c;
LAB_000e3e90:
  if (*(ushort *)((int)param_2 + 6) <= (uVar2 & 0xff)) goto LAB_000e3efc;
  goto LAB_000e3800;
  while (uVar21 < uVar16) {
LAB_000e3c5c:
    bVar20 = bVar20 + *(char *)(*(int *)(uVar18 * 8 + 0xfea2c4) + uVar21 * 8);
    uVar21 = uVar21 + 1 & 0xff;
    if (bVar1 <= bVar20) goto LAB_000e3c8c;
  }
LAB_000e3c84:
  if (bVar20 < bVar1) {
    bVar3 = true;
    if ((uint)*(ushort *)((int)param_2 + 6) <= (uVar14 & 0xff)) goto LAB_000e3efc;
  }
  else {
LAB_000e3c8c:
    func_0x00fa93e4(sVar4);
    iVar6 = uVar18 * 8;
    iVar13 = *(int *)(iVar6 + 0xfea2c4) + uVar21 * 8;
    iVar9 = *(int *)((int)&DAT_005bb5a4 + uVar8);
    uVar14 = (uint)(byte)(&DAT_005bb5a1)[uVar8];
    iVar22 = iVar9 + uVar14 * 8;
    *(undefined4 *)(iVar22 + 4) = *(undefined4 *)(iVar13 + -4);
    *(undefined *)(iVar22 + 2) = *(undefined *)(iVar13 + -8);
    *(short *)(iVar9 + uVar14 * 8) = sVar5;
    if (uVar14 == 0) {
      (&DAT_005bb5a0)[uVar8] = *(undefined *)(iVar6 + 0xfea2c2);
    }
    else {
      *pbVar10 = *pbVar10 & *(byte *)(iVar6 + 0xfea2c2);
    }
    *pcVar12 = *pcVar12 + '\x01';
    uVar14 = uVar15 + 6;
LAB_000e3d0c:
    if ((uint)*(ushort *)((int)param_2 + 6) <= (uVar14 & 0xff)) goto LAB_000e3efc;
  }
  goto LAB_000e3800;
}

