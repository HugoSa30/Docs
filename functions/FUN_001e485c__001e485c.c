/*
 * Program: n42.bin
 * Function: FUN_001e485c
 * Entry: 001e485c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e485c(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  do {
    iVar6 = 0;
    if (0 < _DAT_00fe16cc) {
      piVar11 = (int *)&DAT_003fb80c;
      do {
        piVar11 = piVar11 + 1;
        *piVar11 = 0;
        iVar12 = 0;
        if (0 < _DAT_00fe16d0) {
          iVar13 = *(int *)(&DAT_00fe5bf4 + iVar6 * 4) + 0x100;
          do {
            *param_1 = (*param_1 * 2 + (uint)*(ushort *)(iVar13 + 8)) * 2 +
                       (uint)*(ushort *)(iVar13 + 0xc);
            if (0xb < *(ushort *)(iVar13 + 6)) {
              *piVar11 = *piVar11 + 1;
            }
            iVar13 = iVar13 + 0x10;
            iVar12 = iVar12 + 1;
          } while (iVar12 < _DAT_00fe16d0);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < _DAT_00fe16cc);
    }
    iVar12 = _DAT_00fe16d0;
    iVar6 = _DAT_00fe16cc;
    iVar13 = 0;
    if (0 < _DAT_00fe16cc) {
      piVar11 = (int *)&DAT_003fb80c;
      iVar14 = _DAT_00fe16cc;
      do {
        piVar11 = piVar11 + 1;
        iVar13 = iVar13 + (uint)(_DAT_00fe16d0 == *piVar11);
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
  } while (_DAT_00fe16cc != iVar13);
  _DAT_003fb890 = 0;
  iVar13 = 0;
  if (0 < _DAT_00fe16cc) {
    do {
      iVar14 = 0;
      if (0 < iVar12) {
        iVar9 = *(int *)(&DAT_00fe5bf4 + iVar13 * 4) + 0x100;
        do {
          iVar3 = _DAT_00fe16a0;
          if (*(short *)(iVar9 + 6) == 0xc) {
            iVar8 = _DAT_003fb890 * 0x18;
            *(int *)(&DAT_003fbc9c + iVar8) = _DAT_00fe16a0;
            *(int *)(&DAT_003fbc90 + iVar8) = iVar9;
            uVar1 = *(ushort *)(iVar9 + 10);
            *(ushort *)(&DAT_003fbca4 + iVar8) = uVar1;
            uVar2 = *(ushort *)(iVar9 + 0xe);
            *(ushort *)(&DAT_003fbca6 + iVar8) = uVar2;
            *(undefined2 *)(&DAT_003fbca0 + iVar8) = _DAT_00fe16c4;
            *(undefined2 *)(&DAT_003fbca2 + iVar8) = _DAT_00fe16c6;
            *(int *)(&DAT_003fbc94 + iVar8) = iVar13;
            *(int *)(&DAT_003fbc98 + iVar8) = iVar14;
            uVar5 = _DAT_00fe16b6;
            uVar4 = _DAT_00fe16b4;
            if ((((_DAT_00fe16b4 <= uVar1) && (uVar1 <= _DAT_00fe16b6)) && (_DAT_00fe16b4 <= uVar2))
               && (uVar2 <= _DAT_00fe16b6)) {
              *(int *)(&DAT_003fbc9c + iVar8) = _DAT_00fe16a4;
              *(ushort *)(&DAT_003fbca0 + iVar8) = uVar4;
              *(ushort *)(&DAT_003fbca2 + iVar8) = uVar5;
            }
            uVar5 = _DAT_00fe16ba;
            uVar4 = _DAT_00fe16b8;
            if (((_DAT_00fe16b8 <= uVar1) && (uVar1 <= _DAT_00fe16ba)) &&
               ((_DAT_00fe16b8 <= uVar2 && (uVar2 <= _DAT_00fe16ba)))) {
              *(int *)(&DAT_003fbc9c + iVar8) = _DAT_00fe16a8;
              *(ushort *)(&DAT_003fbca0 + iVar8) = uVar4;
              *(ushort *)(&DAT_003fbca2 + iVar8) = uVar5;
            }
            uVar5 = _DAT_00fe16be;
            uVar4 = _DAT_00fe16bc;
            if (((_DAT_00fe16bc <= uVar1) && (uVar1 <= _DAT_00fe16be)) &&
               ((_DAT_00fe16bc <= uVar2 && (uVar2 <= _DAT_00fe16be)))) {
              *(int *)(&DAT_003fbc9c + iVar8) = _DAT_00fe16ac;
              *(ushort *)(&DAT_003fbca0 + iVar8) = uVar4;
              *(ushort *)(&DAT_003fbca2 + iVar8) = uVar5;
            }
            uVar5 = _DAT_00fe16c2;
            uVar4 = _DAT_00fe16c0;
            if ((((_DAT_00fe16c0 <= uVar1) && (uVar1 <= _DAT_00fe16c2)) && (_DAT_00fe16c0 <= uVar2))
               && (uVar2 <= _DAT_00fe16c2)) {
              *(int *)(&DAT_003fbc9c + iVar8) = _DAT_00fe16b0;
              *(ushort *)(&DAT_003fbca0 + iVar8) = uVar4;
              *(ushort *)(&DAT_003fbca2 + iVar8) = uVar5;
            }
            if (*(int *)(&DAT_003fbc9c + iVar8) != iVar3) {
              _DAT_003fb890 = _DAT_003fb890 + 1;
            }
          }
          iVar9 = iVar9 + 0x10;
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar12);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar6);
  }
  uVar7 = 0;
  iVar6 = 0;
  if (0 < (int)_DAT_003fb890) {
    piVar11 = (int *)&DAT_003fbc9c;
    do {
      iVar12 = *piVar11;
      if (iVar12 == _DAT_00fe16a4) {
        uVar7 = uVar7 | 1;
      }
      else if (_DAT_00fe16a8 == iVar12) {
        uVar7 = uVar7 | 2;
      }
      else if (_DAT_00fe16ac == iVar12) {
        uVar7 = uVar7 | 4;
      }
      else if (_DAT_00fe16b0 == iVar12) {
        uVar7 = uVar7 | 8;
      }
      piVar11 = piVar11 + 6;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)_DAT_003fb890);
    if (uVar7 != 0) {
      if ((uVar7 & 3) == 3) {
        _pm_akt = 2;
      }
      else if ((uVar7 & 0xc) == 0xc) {
        _pm_akt = 1;
      }
    }
  }
  uVar10 = _DAT_003fb890;
  if (_pm_akt != 0) {
    if (_pm_akt == 2) {
      uVar7 = uVar7 & 0xc;
      _DAT_003fb86c = _DAT_00fe16a4;
      _DAT_003fb884 = _DAT_00fe16a8;
    }
    else {
      uVar7 = uVar7 & 3;
      _DAT_003fb86c = _DAT_00fe16ac;
      _DAT_003fb884 = _DAT_00fe16b0;
    }
    uVar10 = _DAT_00fe16d8;
    if (uVar7 != 0) {
      uVar10 = _DAT_00fe16d8 + 1;
    }
    uVar7 = 0;
    if (_DAT_003fb890 != 0) {
      piVar11 = (int *)&DAT_003fbc90;
      do {
        if ((_DAT_003fb86c == piVar11[3]) && (_DAT_003fb860 == 0)) {
          _DAT_003fb860 = *piVar11;
          _DAT_003fb864 = piVar11[1];
          _DAT_003fb868 = piVar11[2];
          _DAT_003fb86c = piVar11[3];
          _DAT_003fb870 = *(undefined2 *)(piVar11 + 4);
          _DAT_003fb872 = *(undefined2 *)((int)piVar11 + 0x12);
          _DAT_003fb874 = *(undefined2 *)(piVar11 + 5);
          _DAT_003fb876 = *(undefined2 *)((int)piVar11 + 0x16);
        }
        if ((_DAT_003fb884 == piVar11[3]) && (_DAT_003fb878 == 0)) {
          _DAT_003fb878 = *piVar11;
          _DAT_003fb87c = piVar11[1];
          _DAT_003fb880 = piVar11[2];
          _DAT_003fb884 = piVar11[3];
          _DAT_003fb888 = *(undefined2 *)(piVar11 + 4);
          _DAT_003fb88a = *(undefined2 *)((int)piVar11 + 0x12);
          _DAT_003fb88c = *(undefined2 *)(piVar11 + 5);
          _DAT_003fb88e = *(undefined2 *)((int)piVar11 + 0x16);
        }
        piVar11 = piVar11 + 6;
        uVar7 = uVar7 + 1;
      } while (uVar7 < _DAT_003fb890);
    }
  }
  _DAT_003fb890 = uVar10;
  return;
}

