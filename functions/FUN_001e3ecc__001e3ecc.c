/*
 * Program: n42.bin
 * Function: FUN_001e3ecc
 * Entry: 001e3ecc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001e3ecc(undefined *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort **ppuVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  ushort *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  ushort uVar13;
  uint uVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined2 *puVar17;
  
  iVar4 = 1;
  uVar5 = 0;
  if (_DAT_00fe16cc != 0) {
    ppuVar3 = (ushort **)0xfe5bf0;
    do {
      ppuVar3 = ppuVar3 + 1;
      puVar8 = *ppuVar3;
      *puVar8 = 0x8460;
      uVar14 = 0;
      do {
        if ((*puVar8 & 0x100) != 0) break;
        uVar14 = uVar14 + 1;
      } while (uVar14 < 100);
      if ((*puVar8 & 0x100) == 0) {
        if (iVar4 != 0) {
          param_1[5] = 0;
          param_1[4] = 0;
          param_1[3] = 0;
          param_1[2] = 0;
          param_1[1] = 0;
        }
        iVar4 = 0;
        *param_1 = 0xa1;
        param_1[uVar5 + 1] = (char)uVar5 + '\x01';
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < _DAT_00fe16cc);
    if (iVar4 == 0) goto LAB_001e443c;
  }
  uVar14 = _DAT_00fe83f4;
  uVar5 = 0;
  if (_DAT_00fe83f4 != 0) {
    puVar9 = (undefined4 *)&UNK_00301ffc;
    puVar15 = (undefined4 *)0xfe7bf0;
    uVar5 = _DAT_00fe83f4;
    if ((_DAT_00fe83f4 & 1) == 0) {
LAB_001e3fd8:
      uVar5 = uVar5 >> 1;
      do {
        puVar9[1] = puVar15[1];
        puVar15 = puVar15 + 2;
        puVar9 = puVar9 + 2;
        *puVar9 = *puVar15;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      uVar5 = 0;
    }
    else {
      puVar15 = (undefined4 *)&DAT_00fe7bf4;
      puVar9 = (undefined4 *)&DAT_00302000;
      _DAT_00302000 = _DAT_00fe7bf4;
      uVar5 = _DAT_00fe83f4 - 1;
      if (uVar5 != 0) goto LAB_001e3fd8;
    }
    uVar5 = uVar14 - uVar5;
  }
  if (uVar5 < _DAT_00fe16c8) {
    puVar15 = (undefined4 *)(&UNK_00301ffc + uVar5 * 4);
    uVar10 = _DAT_00fe16c8 - uVar5;
    if ((uVar10 & 1) != 0) {
      puVar15 = (undefined4 *)(&DAT_00302000 + uVar5 * 4);
      *puVar15 = 0xffffffff;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_001e4060;
    }
    uVar10 = uVar10 >> 1;
    do {
      puVar15[1] = 0xffffffff;
      puVar15 = puVar15 + 2;
      *puVar15 = 0xffffffff;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
LAB_001e4060:
  uVar5 = 0;
  if (uVar14 != 0) {
    piVar11 = (int *)&UNK_00301ffc;
    piVar16 = (int *)0xfe7bf0;
    do {
      piVar11 = piVar11 + 1;
      piVar16 = piVar16 + 1;
      if (*piVar11 != *piVar16) {
        iVar4 = 0;
        *param_1 = 0xa2;
        param_1[1] = (char)(uVar5 >> 8);
        param_1[2] = (char)uVar5;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[3] = 0;
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar14);
  }
  uVar10 = _DAT_00fe16d0;
  uVar14 = _DAT_00fe16cc;
  if (uVar5 < _DAT_00fe16c8) {
    piVar11 = (int *)(&UNK_00301ffc + uVar5 * 4);
    do {
      piVar11 = piVar11 + 1;
      if (*piVar11 != -1) {
        iVar4 = 0;
        *param_1 = 0xa2;
        param_1[1] = (char)(uVar5 >> 8);
        param_1[2] = (char)uVar5;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[3] = 0;
        goto LAB_001e443c;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < _DAT_00fe16c8);
  }
  if (iVar4 != 0) {
    if (_DAT_00fe16cc != 0) {
      puVar15 = (undefined4 *)0xfe5bf0;
      uVar5 = _DAT_00fe16cc;
      do {
        puVar15 = puVar15 + 1;
        puVar6 = (undefined2 *)*puVar15;
        puVar6[0x14] = 0x80;
        puVar6[0x14] = 0;
        puVar6[0x14] = 0x100;
        puVar6[4] = 0;
        *(undefined4 *)(puVar6 + 0xe) = 0;
        if (uVar10 != 0) {
          puVar17 = puVar6 + 0x78;
          uVar7 = uVar10;
          do {
            puVar17[8] = 0;
            puVar17[9] = 0;
            puVar17[10] = 0x503;
            puVar17[0xb] = 0xffff;
            puVar17[0xc] = 0xffff;
            puVar17[0xe] = 0xffff;
            puVar17[0xd] = 0xffff;
            puVar17[0xf] = 0xffff;
            uVar7 = uVar7 - 1;
            puVar17 = puVar17 + 8;
          } while (uVar7 != 0);
        }
        *puVar6 = 0x460;
        *(undefined4 *)(puVar6 + 8) = 0xffffffff;
        *(undefined4 *)(puVar6 + 6) = 0xffffffff;
        *(undefined4 *)(puVar6 + 0xc) = 0x55555555;
        *(undefined4 *)(puVar6 + 0xe) = 0xaaaaaaaa;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    uVar5 = 0;
    if (uVar14 != 0) {
      piVar11 = (int *)0xfe5bf0;
      do {
        piVar11 = piVar11 + 1;
        iVar2 = *piVar11;
        uVar10 = 0;
        uVar14 = 0;
        iVar12 = *(int *)(iVar2 + 0x18);
        while (iVar12 != 0) {
          uVar14 = uVar14 + 1;
          if (0xfff < uVar14) {
            if (uVar14 == 0x1000) {
              if (iVar4 != 0) {
                param_1[5] = 0;
                param_1[4] = 0;
                param_1[3] = 0;
                param_1[2] = 0;
                param_1[1] = 0;
              }
              iVar4 = 0;
              *param_1 = 0xa3;
              param_1[uVar5 + 1] = 1;
            }
            break;
          }
          iVar12 = *(int *)(iVar2 + 0x18);
        }
        uVar14 = 0;
        if (_DAT_00fe16d0 != 0) {
          iVar2 = iVar2 + 0x100;
          do {
            uVar13 = *(ushort *)(iVar2 + 8);
            uVar1 = *(ushort *)(iVar2 + 0xc);
            *param_2 = (*param_2 * 2 + (uint)uVar13) * 2 + (uint)uVar1;
            if ((((*(short *)(iVar2 + 4) == 0x503) && (*(short *)(iVar2 + 6) == 0x504)) &&
                (uVar13 != 0xffff)) && ((uVar1 != 0xffff && (*(short *)(iVar2 + 10) != -1)))) {
              uVar10 = uVar10 + (*(short *)(iVar2 + 0xe) != -1);
            }
            iVar2 = iVar2 + 0x10;
            uVar14 = uVar14 + 1;
          } while (uVar14 < _DAT_00fe16d0);
        }
        if (_DAT_00fe16d0 != uVar10) {
          if (iVar4 != 0) {
            param_1[5] = 0;
            param_1[4] = 0;
            param_1[3] = 0;
            param_1[2] = 0;
            param_1[1] = 0;
          }
          iVar4 = 0;
          *param_1 = 0xa3;
          param_1[uVar5 + 1] = param_1[uVar5 + 1] | 2;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < _DAT_00fe16cc);
    }
    if (iVar4 != 0) {
      uVar5 = 0;
      do {
        if ((_DAT_00300000 & 0x400) != 0) break;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x1000);
      iVar12 = CONCAT22(_DAT_00300006,_DAT_00300008);
      if ((uVar5 == 0x1000) || (_DAT_00fe83f8 != iVar12)) {
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[1] = 0;
        *param_1 = 0xa4;
        if (uVar5 == 0x1000) {
          param_1[1] = 1;
        }
        if (_DAT_00fe83f8 != iVar12) {
          param_1[1] = param_1[1] | 2;
        }
        iVar4 = 0;
      }
    }
  }
LAB_001e443c:
  uVar14 = _DAT_00fe16d0;
  uVar5 = _DAT_00fe16cc;
  _DAT_00300000 = _DAT_00300000 & 0xfdff;
  if (iVar4 != 0) {
    if (_DAT_00fe16cc != 0) {
      piVar11 = (int *)0xfe5bf0;
      uVar10 = _DAT_00fe16cc;
      do {
        piVar11 = piVar11 + 1;
        iVar12 = *piVar11;
        *(undefined4 *)(iVar12 + 0x1c) = 0;
        uVar7 = 0;
        if (uVar14 != 0) {
          do {
            uVar13 = 0;
            do {
              iVar2 = iVar12 + uVar7 * 0x10 + (uint)uVar13 * 2;
              *(short *)(iVar2 + 0x100) = (short)iVar2 + 0x100;
              uVar13 = uVar13 + 1;
            } while (uVar13 < 8);
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar14);
        }
        *(undefined4 *)(iVar12 + 0x18) = 0xaaaaaaaa;
        *(undefined4 *)(iVar12 + 0x1c) = 0xaaaaaaaa;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    uVar14 = 0;
    if (uVar5 != 0) {
      piVar11 = (int *)0xfe5bf0;
      do {
        piVar11 = piVar11 + 1;
        iVar12 = *piVar11;
        uVar10 = 0;
        uVar5 = 0;
        iVar2 = *(int *)(iVar12 + 0x18);
        while (uVar7 = _DAT_00fe16d0, iVar2 != 0) {
          uVar5 = uVar5 + 1;
          if (0xfff < uVar5) {
            if (uVar5 == 0x1000) {
              if (iVar4 != 0) {
                param_1[5] = 0;
                param_1[4] = 0;
                param_1[3] = 0;
                param_1[2] = 0;
                param_1[1] = 0;
              }
              iVar4 = 0;
              *param_1 = 0xa3;
              param_1[uVar14 + 1] = 4;
              uVar7 = _DAT_00fe16d0;
            }
            break;
          }
          iVar2 = *(int *)(iVar12 + 0x18);
        }
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar5 = 0;
          if ((uint)*(ushort *)(iVar12 + 0x100) == (~(iVar12 + 0x100U) & 0xffff)) {
            do {
              uVar5 = uVar5 + 1;
              if (7 < (uVar5 & 0xffff)) break;
              iVar2 = iVar12 + (uVar5 * 2 & 0x1fffe);
            } while ((uint)*(ushort *)(iVar2 + 0x100) == (~(iVar2 + 0x100U) & 0xffff));
          }
          uVar10 = uVar10 + ((uVar5 & 0xffff) == 8);
          iVar12 = iVar12 + 0x10;
        }
        if (_DAT_00fe16d0 != uVar10) {
          if (iVar4 != 0) {
            param_1[5] = 0;
            param_1[4] = 0;
            param_1[3] = 0;
            param_1[2] = 0;
            param_1[1] = 0;
          }
          iVar4 = 0;
          *param_1 = 0xa3;
          param_1[uVar14 + 1] = param_1[uVar14 + 1] | 8;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < _DAT_00fe16cc);
    }
  }
  return iVar4;
}

