/*
 * Program: n42.bin
 * Function: FUN_001e60e8
 * Entry: 001e60e8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_001e60e8(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  char cVar6;
  int iVar5;
  byte bVar7;
  undefined uVar8;
  int *piVar9;
  int iVar10;
  short *psVar11;
  short sVar13;
  int iVar12;
  undefined4 *puVar14;
  byte *pbVar15;
  code *pcVar16;
  ushort uVar18;
  int iVar17;
  uint uVar19;
  ushort uVar21;
  uint uVar20;
  undefined auStack_60 [4];
  undefined4 local_5c;
  byte local_50;
  byte local_4f;
  undefined local_4e;
  undefined local_4d;
  int local_4c;
  int local_48 [4];
  
  _DAT_003fb8d4 = FUN_001e85f4();
  if (param_1 == 0) {
    if ((_DAT_003fb8d4 & 1) != 0) {
      iVar10 = (uint)DAT_00fe1699 * 0x28;
      iVar10 = (**(code **)(iVar10 + 0xfe1640))
                         (**(undefined4 **)(iVar10 + 0xfe1624),**(undefined4 **)(iVar10 + 0xfe1628))
      ;
      if (iVar10 != **(int **)((uint)DAT_00fe1699 * 0x28 + 0xfe162c)) {
        puVar14 = *(undefined4 **)((uint)DAT_00fe1699 * 0x28 + 0xfe1624);
        DAT_003fb8c9 = DAT_00fe1699;
        DAT_003fb8ca = (char)((uint)*puVar14 >> 0x18);
        DAT_003fb8cb = (char)((uint)*puVar14 >> 0x10);
        DAT_003fb8cc = (char)((uint)*puVar14 >> 8);
        DAT_003fb8cd = (char)*puVar14;
        return '\x19';
      }
      (&UNK_003fbc4d)[(uint)DAT_00fe1699 * 2] = 1;
    }
    if ((_DAT_003fb8d4 & 2) != 0) {
      puVar14 = &local_5c;
      puVar3 = (undefined *)FUN_001e8604(&DAT_003f9800,auStack_60);
      if (&DAT_003f9800 < puVar3) {
        DAT_003fb8c9 = 0;
        DAT_003fb8ca = 0;
        DAT_003fb8cb = 0;
        DAT_003fb8cc = &DAT_003f9800 < puVar3;
        return '\x02';
      }
      uVar20 = 0x400000U - (int)puVar14 >> 2;
      uVar19 = 0;
      if (uVar20 != 0) {
        do {
          *(undefined4 *)(&DAT_003f9800 + (uVar19 & 0xffff) * 4) = puVar14[uVar19 & 0xffff];
          uVar19 = uVar19 + 1;
        } while ((uVar19 & 0xffff) < uVar20);
      }
      puVar4 = (undefined4 *)FUN_001e8604(puVar14,0x3ffffc);
      if (puVar14 < puVar4) {
        DAT_003fb8c9 = 0;
        DAT_003fb8ca = 0;
        DAT_003fb8cb = 0;
        DAT_003fb8cc = puVar14 < puVar4;
        return '\x02';
      }
      uVar19 = 0;
      if (uVar20 != 0) {
        do {
          iVar10 = (uVar19 & 0xffff) * 4;
          puVar14[uVar19 & 0xffff] = *(undefined4 *)(&DAT_003f9800 + iVar10);
          *(undefined4 *)(&DAT_003f9800 + iVar10) = 0;
          uVar19 = uVar19 + 1;
        } while ((uVar19 & 0xffff) < uVar20);
      }
    }
    _DAT_003fb8d4 = FUN_001e85f4();
    if (((_DAT_003fb8d4 & 4) != 0) && ((_DAT_002fc004 & 4) != 0)) {
      FUN_001e85fc();
      FUN_001e8600();
      uVar18 = 0;
      do {
        uVar18 = uVar18 + 1;
      } while (uVar18 < 0x800);
      _DAT_002fc004 = 0x1ff06;
      return -0x7a;
    }
  }
  if ((_DAT_003fb8d4 & 8) != 0) {
    _DAT_00300004 = 0xffa0;
    puVar3 = (undefined *)FUN_001e8604(&DAT_00302000,&UNK_003037fc);
    if (&DAT_00302000 < puVar3) {
      DAT_003fb8c9 = (char)((uint)puVar3 >> 0x18);
      DAT_003fb8ca = (char)((uint)puVar3 >> 0x10);
      DAT_003fb8cb = (char)((uint)puVar3 >> 8);
      DAT_003fb8cc = (char)puVar3;
      return -0x60;
    }
  }
  if ((_DAT_003fb8d4 & 0x10) != 0) {
    if ((short)_DAT_00304810 < 0) {
      _DAT_00304810 = _DAT_00304810 & 0x7fff;
    }
    if ((_DAT_00304810 >> 0xd & 1) == 1) {
      _DAT_00304810 = _DAT_00304810 & 0xdfff;
    }
    _DAT_00304a02 = 0x3f;
    _DAT_00304a00 = 0x3f;
    if ((short)_DAT_00304c10 < 0) {
      _DAT_00304c10 = _DAT_00304c10 & 0x7fff;
    }
    if ((_DAT_00304c10 >> 0xd & 1) == 1) {
      _DAT_00304c10 = _DAT_00304c10 & 0xdfff;
    }
    _DAT_00304e02 = 0x3f;
    _DAT_00304e00 = 0x3f;
    local_50 = -1 < (short)_DAT_00304810;
    if ((_DAT_00304810 >> 0xd & 1) == 0) {
      local_50 = local_50 | 2;
    }
    local_4f = -1 < (short)_DAT_00304c10;
    if ((_DAT_00304c10 >> 0xd & 1) == 0) {
      local_4f = local_4f | 2;
    }
    if ((local_50 != 0) || (local_4f != 0)) {
      _DAT_0030480c = 0x2100;
      _DAT_0030480e = 0x2101;
      _DAT_00304a00 = 0x3f;
      _DAT_00304a02 = 0x3f;
      _DAT_00304c0c = 0x2100;
      _DAT_00304c0e = 0x2101;
      _DAT_00304e00 = 0x3f;
      _DAT_00304e02 = 0x3f;
      DAT_003fb8c9 = local_50;
      DAT_003fb8ca = local_4f;
      return -0x7f;
    }
  }
  _DAT_00304c0e = 0;
  _DAT_0030480e = 0;
  _DAT_00304c0a = 0;
  _DAT_0030480a = 0;
  _DAT_00304800 = _DAT_00304800 & 0x7fff;
  _DAT_00304c00 = _DAT_00304c00 & 0x7fff;
  uVar18 = 0;
  sVar13 = 0;
  while( true ) {
    iVar10 = (uint)uVar18 * 2;
    *(short *)(&UNK_00304e20 + iVar10) = sVar13;
    *(short *)(&DAT_00304e00 + iVar10) = sVar13;
    *(short *)(&DAT_00304a20 + iVar10) = sVar13;
    *(short *)(&DAT_00304a00 + iVar10) = sVar13;
    uVar18 = uVar18 + 1;
    sVar13 = sVar13 + 1;
    if (0xf < uVar18) break;
    if (sVar13 == 4) {
      sVar13 = 0x30;
    }
  }
  _DAT_00304e40 = 0x3f;
  _DAT_00304a40 = 0x3f;
  _DAT_00304c0c = 0x2100;
  _DAT_0030480c = 0x2100;
  if ((_DAT_003fb8d4 & 0x10) != 0) {
    uVar18 = 0;
    _DAT_00306806 = _DAT_00306806 | 0x8000;
    while (-1 < (short)_DAT_00306806) {
      _DAT_00306806 = _DAT_00306806 | 0x8000;
      uVar18 = uVar18 + 1;
      if (100 < uVar18) {
        _DAT_0030480c = 0x2100;
        _DAT_00304a40 = 0x3f;
        _DAT_00304c0c = 0x2100;
        _DAT_00304e40 = 0x3f;
        DAT_003fb8c9 = 1;
        return -0x80;
      }
    }
    if (99 < uVar18) {
      _DAT_0030480c = 0x2100;
      _DAT_00304a40 = 0x3f;
      _DAT_00304c0c = 0x2100;
      _DAT_00304e40 = 0x3f;
      DAT_003fb8c9 = 1;
      return -0x80;
    }
    bVar1 = (short)_DAT_00306806 < 0;
    if (bVar1) {
      _DAT_00306806 = _DAT_00306806 & 0x7fff;
    }
    if (99 < bVar1) {
      _DAT_0030480c = 0x2100;
      _DAT_00304a40 = 0x3f;
      _DAT_00304c0c = 0x2100;
      _DAT_00304e40 = 0x3f;
      DAT_003fb8c9 = 2;
      return -0x80;
    }
    bVar1 = _DAT_00306816 != 0xf;
    if (bVar1) {
      _DAT_00306816 = 0xf;
    }
    if (99 < bVar1) {
      _DAT_0030480c = 0x2100;
      _DAT_00304a40 = 0x3f;
      _DAT_00304c0c = 0x2100;
      _DAT_00304e40 = 0x3f;
      DAT_003fb8c9 = 3;
      return -0x80;
    }
    _DAT_00306806 = _DAT_00306806 | 0x1000;
    uVar18 = 0;
    if (_DAT_00306816 == 0xf) {
      do {
        uVar18 = uVar18 + 1;
      } while (uVar18 < 0x65);
      _DAT_0030480c = 0x2100;
      _DAT_00304a40 = 0x3f;
      _DAT_00304c0c = 0x2100;
      _DAT_00304e40 = 0x3f;
      DAT_003fb8c9 = 4;
      return -0x80;
    }
  }
  if ((_DAT_003fb8d4 & 0x10) != 0) {
    uVar21 = 0;
    uVar18 = (ushort)DAT_00f07e5c;
    if (uVar18 != 0) {
      do {
        cVar6 = FUN_001e5ef8(uVar21 & 0xff);
        if (cVar6 != '@') {
          return cVar6;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar18);
    }
  }
  if (((_DAT_003fb8d4 & 0x10) == 0) || (cVar6 = FUN_001e7a60(&DAT_003fb8c9), cVar6 != '\0')) {
    if ((_DAT_003fb8d4 & 0x20) != 0) {
      local_4d = 0;
      local_4e = 0;
      uVar18 = 0;
      if (DAT_00fe16e2 != 0) {
        do {
          iVar10 = (uint)uVar18 * 0xf;
          if (((*(byte *)(iVar10 + 0xfe16e4) & 0x80) == 0x80) &&
             ((DAT_00fe16e1 | 0x80) != *(byte *)(iVar10 + 0xfe16e4))) {
            cVar6 = FUN_001e5c94(uVar18 & 0xff,&local_4e,&local_4d);
            if (cVar6 == '\0') {
              DAT_003fb8c9 = (char)uVar18;
              DAT_003fb8ca = *(undefined *)(iVar10 + 0xfe16e5);
              DAT_003fb8cb = (char)*(undefined2 *)(iVar10 + 0xfe16ef);
              DAT_003fb8cc = local_4e;
              DAT_003fb8cd = 0;
              return -0x57;
            }
            (&DAT_003fb808)[(uint)uVar18 * 2] = local_4e;
            (&UNK_003fb809)[(uint)uVar18 * 2] = local_4d;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < DAT_00fe16e2);
      }
    }
    FUN_001e8948();
    if ((_DAT_003fb8d4 & 0x200) != 0) {
      local_48[0] = 0;
      local_4c = 0;
      cVar6 = FUN_001e5dcc(2,&local_4c,local_48);
      if ((((cVar6 != '\0') || (cVar6 = FUN_001e5dcc(4,&local_4c,local_48), cVar6 != '\0')) ||
          (cVar6 = FUN_001e5dcc(5,&local_4c,local_48), cVar6 != '\0')) &&
         (uVar20 = 0, 2 < (uint)(local_48[0] - local_4c))) {
        do {
          psVar11 = (short *)((local_48[0] - (1 << ((uVar20 & 0xffff) + 1 & 0x3f))) + -2);
          sVar13 = *(short *)((uVar20 & 0xffff) * 2 + 0xfe1726);
          if (*psVar11 != sVar13) {
            DAT_003fb8c9 = (char)uVar20 + '\x01';
            DAT_003fb8ca = (char)((ushort)sVar13 >> 8);
            DAT_003fb8cb = (char)sVar13;
            DAT_003fb8cc = (char)((ushort)*psVar11 >> 8);
            DAT_003fb8cd = (char)*psVar11;
            _DAT_003fb8d0 = _DAT_00fe1754;
            return 'X';
          }
          uVar20 = uVar20 + 1;
        } while (((uint)(1 << ((uVar20 & 0xffff) + 1 & 0x3f)) < (uint)(local_48[0] - local_4c)) &&
                ((uVar20 & 0xff) <= (uint)DAT_00fe1724));
      }
    }
    if (((_DAT_003fb8d4 & 0x40) != 0) && (uVar20 = 0, DAT_00fe160c != 0)) {
      do {
        iVar10 = uVar20 * 8;
        pbVar15 = *(byte **)(iVar10 + 0xfe1610);
        iVar12 = *(int *)(iVar10 + 0xfe1614);
        if ((iVar12 != 0) && (pbVar15 != (byte *)0x0)) {
          uVar18 = 1;
          if (1 < *pbVar15) {
            do {
              iVar2 = (uint)uVar18 * 2;
              (&UNK_003fbc4d)[iVar2] = 0;
              (&DAT_003fbc4c)[iVar2] = 0;
              iVar17 = iVar12 + (uint)uVar18 * 0x28;
              pcVar16 = *(code **)(iVar17 + 0x20);
              if ((*(char *)(iVar17 + 0x1c) == '\x01') && (pcVar16 != (code *)0x0)) {
                if (*(char *)(iVar17 + 0x10) != '\0') {
                  for (piVar9 = **(int ***)(iVar17 + 4); piVar9 <= **(int ***)(iVar17 + 8);
                      piVar9 = piVar9 + 1) {
                    if (*piVar9 != -1) {
                      uVar8 = 0;
                      goto LAB_001e6bc0;
                    }
                  }
                  uVar8 = 1;
LAB_001e6bc0:
                  (&DAT_003fbc4c)[iVar2] = uVar8;
                }
                if ((&DAT_003fbc4c)[iVar2] == '\0') {
                  iVar5 = (*pcVar16)(**(undefined4 **)(iVar17 + 4),**(undefined4 **)(iVar17 + 8));
                  if (iVar5 != **(int **)(iVar17 + 0xc)) {
                    puVar14 = *(undefined4 **)(iVar17 + 4);
                    DAT_003fb8c9 = (char)uVar18;
                    DAT_003fb8ca = (char)((uint)*puVar14 >> 0x18);
                    DAT_003fb8cb = (char)((uint)*puVar14 >> 0x10);
                    DAT_003fb8cc = (char)((uint)*puVar14 >> 8);
                    DAT_003fb8cd = (char)*puVar14;
                    _DAT_003fb8d0 = *(undefined4 *)(iVar17 + 0x24);
                    return '\x1f';
                  }
                  (&UNK_003fbc4d)[iVar2] = 1;
                }
              }
              else {
                (&UNK_003fbc4d)[iVar2] = 1;
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 < *pbVar15);
          }
          bVar7 = FUN_001e1500(*(undefined4 *)(iVar10 + 0xfe1614),
                               *(undefined4 *)(uVar20 * 8 + 0xfe1610));
          if ((uint)*pbVar15 != (uint)bVar7) {
            DAT_003fb8c9 = (char)uVar20;
            DAT_003fb8ca = bVar7;
            _DAT_003fb8d0 = *(undefined4 *)(iVar12 + (uint)bVar7 * 0x28 + 0x24);
            return 'P';
          }
        }
        uVar20 = uVar20 + 1 & 0xffff;
      } while (uVar20 < DAT_00fe160c);
    }
    if ((_DAT_003fb8d4 & 0x80) != 0) {
      iVar10 = 0;
      uVar20 = 0;
      if ((DAT_003fb964 == '\x01') || (DAT_003fb964 == '\x03')) {
        uVar20 = _DAT_003fb95c & 0xffff8000;
        iVar10 = uVar20 + (_DAT_003fb960 & 0xffff8000 ^ 0xffffffff) + 1;
      }
      if ((DAT_003fb970 == '\x01') || (DAT_003fb970 == '\x03')) {
        uVar20 = _DAT_003fb968 & 0xffff8000;
        iVar10 = uVar20 + (_DAT_003fb96c & 0xffff8000 ^ 0xffffffff) + 1;
      }
      if ((DAT_003fb97c == '\x01') || (DAT_003fb97c == '\x03')) {
        uVar20 = _DAT_003fb974 & 0xffff8000;
        iVar10 = uVar20 + (_DAT_003fb978 & 0xffff8000 ^ 0xffffffff) + 1;
      }
      if ((DAT_003fb988 == '\x01') || (DAT_003fb988 == '\x03')) {
        uVar20 = _DAT_003fb980 & 0xffff8000;
        iVar10 = uVar20 + (_DAT_003fb984 & 0xffff8000 ^ 0xffffffff) + 1;
      }
      if (599 < _DAT_003fb994) {
        iVar10 = _DAT_003fb990;
        uVar20 = _DAT_003fb98c;
      }
      if (((uVar20 != 0) || (iVar10 != 0)) &&
         (uVar19 = FUN_001e8604(uVar20,iVar10 + -4), uVar20 < uVar19)) {
        DAT_003fb8c9 = (char)(uVar19 >> 0x18);
        DAT_003fb8ca = (char)(uVar19 >> 0x10);
        DAT_003fb8cb = (char)(uVar19 >> 8);
        DAT_003fb8cc = (char)uVar19;
        return '\x03';
      }
    }
    _DAT_003fb8d4 = FUN_001e85f4();
    cVar6 = '@';
  }
  else {
    cVar6 = -0x58;
  }
  return cVar6;
}

