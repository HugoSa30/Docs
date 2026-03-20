/*
 * Program: n42.bin
 * Function: FUN_000b7a98
 * Entry: 000b7a98
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000b7d74) */
/* WARNING: Removing unreachable block (ram,0x000b7cb0) */
/* WARNING: Removing unreachable block (ram,0x000b7c40) */
/* WARNING: Removing unreachable block (ram,0x000b7cfc) */
/* WARNING: Removing unreachable block (ram,0x000b7de8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b7a98(void)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ENUM_005b8c95 EVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  undefined uVar14;
  uint uVar15;
  
  if (B_mdstop != 0) {
    return;
  }
  if (B_milstp == 0) {
    FUN_000b1d28(&DAT_003fa970);
    ivzarv_w = _DAT_003fa970;
    FUN_000b1d28(&DAT_003fa96e);
    ivzkat_w = _DAT_003fa96e;
    FUN_000b1d28(&DAT_003fa968);
    ivzabg_w = _DAT_003fa968;
    if (B_ainten == 0) {
      FUN_000b1d28(&DAT_003fa966);
      ivzaint_w = _DAT_003fa966;
      if (DAT_005b854e <= _DAT_003fa966) {
        uVar8 = anzinten + 1;
        if (0xff < uVar8) {
          uVar8 = 0xff;
        }
        anzinten = (byte)uVar8;
        B_ainten = (uint)FAINTEN <= (uVar8 & 0xff);
        _DAT_003fa966 = 0;
        ivzaint_w = 0;
      }
    }
  }
  EVar5 = B_milstp;
  uVar10 = (uint)(char)zzyllfb;
  uVar8 = uVar10;
  if ((int)uVar10 < 0) {
    uVar8 = 0;
  }
  if (((B_milstp == 0) && (B_mderk != 0)) && (((int)(uint)flgtiab >> (uVar8 & 0x3f) & 1U) == 0)) {
    uVar8 = (uint)kswf;
    uVar11 = _DAT_003fa96a + uVar8;
    if (0xffff < uVar11) {
      uVar11 = 0xffff;
    }
    _DAT_003fa96a = (ushort)uVar11;
    uVar11 = uVar10;
    if ((int)uVar10 < 0) {
      uVar11 = 0;
    }
    if ((0xaa >> (uVar11 & 0x3f) & 1U) == 0) {
      uVar11 = _DAT_003fa97e + uVar8;
      if (0xffff < uVar11) {
        uVar11 = 0xffff;
      }
      _DAT_003fa97e = (ushort)uVar11;
      fzkats1_w = _DAT_003fa97e;
    }
    else {
      uVar11 = _DAT_003fa974 + uVar8;
      if (0xffff < uVar11) {
        uVar11 = 0xffff;
      }
      _DAT_003fa974 = (ushort)uVar11;
      fzkats2_w = _DAT_003fa974;
    }
    if (uVar8 + (ushort)(&DAT_005b975e)[uVar10] < 0x10000) {
      uVar9 = (undefined2)(uVar8 + (ushort)(&DAT_005b975e)[uVar10]);
    }
    else {
      uVar9 = 0xffff;
    }
    fzkats_w = _DAT_003fa96a;
    (&DAT_005b975e)[uVar10] = uVar9;
    uVar8 = _DAT_003fa96c + 1;
    if (0xffff < uVar8) {
      uVar8 = 0xffff;
    }
    _DAT_003fa96c = (ushort)uVar8;
    if ((ushort)(&DAT_005b973e)[uVar10] + 1 < 0x10000) {
      uVar9 = (undefined2)((ushort)(&DAT_005b973e)[uVar10] + 1);
    }
    else {
      uVar9 = 0xffff;
    }
    fzabgs_w = _DAT_003fa96c;
    (&DAT_005b973e)[uVar10] = uVar9;
    uVar8 = _DAT_003fa97c + 1;
    if (0xffff < uVar8) {
      uVar8 = 0xffff;
    }
    _DAT_003fa97c = (ushort)uVar8;
    if (nmot < aftnmn) {
      aftnmn = nmot;
    }
    if (aftnmx < nmot) {
      aftnmx = nmot;
    }
    if (rl < aftrlmn) {
      aftrlmn = rl;
    }
    if (aftrlmx < rl) {
      aftrlmx = rl;
    }
    fzarv_w = _DAT_003fa97c;
    if (tmot < TMWUC) {
      B_aftklt = B_aftklt;
    }
    else {
      B_aftwrm = B_aftwrm;
    }
  }
  if (DAT_005b854a <= ivzabg_w) {
    DAT_005b8c7d = 1;
    DAT_005b971c = fzabgs_w;
    uVar8 = 0;
    do {
      (&DAT_005b971e)[uVar8] = (&DAT_005b973e)[uVar8];
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < 4);
    _DAT_003fa968 = 0;
    ivzabg_w = 0;
    _DAT_003fa96c = 0;
    fzabgs_w = 0;
    uVar8 = 0;
    do {
      (&DAT_005b973e)[uVar8] = 0;
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < 4);
  }
  if ((B_ivzkat1 == 0) || (TMASKIV1 < DAT_005b8554)) {
    DAT_005b8c7f = false;
  }
  else {
    DAT_005b8c7f = true;
  }
  uVar1 = _AHEKSB1;
  if ((bool)DAT_005b8c7f) {
    uVar1 = _AHEKS1B1;
  }
  bVar2 = uVar1 < fzkats1_w;
  uVar1 = _AHEKSB2;
  if ((bool)DAT_005b8c7f) {
    uVar1 = _AHEKS1B2;
  }
  bVar3 = uVar1 < fzkats2_w;
  if ((bVar2) || (bVar3)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    B_blkmd = B_blkmd;
    B_mdkat = B_mdkat;
  }
  uVar8 = uVar10;
  if ((int)uVar10 < 0) {
    uVar8 = 0;
  }
  uVar8 = 0xaa >> (uVar8 & 0x3f) & 1;
  if (uVar8 == 0) {
    DAT_005b9736 = fzkats1_w >> 3;
  }
  else {
    DAT_005b9738 = fzkats2_w >> 3;
  }
  if ((bVar4) && ((B_nopg >> 1 & 1) != 0)) {
    uVar11 = 0;
    do {
      if (uVar8 == 0) {
        uVar1 = DAT_005b9736;
        if (bVar2) goto LAB_000b812c;
      }
      else {
        uVar1 = DAT_005b9738;
        if (bVar3) {
LAB_000b812c:
          if (uVar1 <= (ushort)(&DAT_005b975e)[uVar11 & 0xff]) {
            flgkat_w = flgkat_w | (ushort)(1 << (uVar11 & 0x3f));
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while ((uVar11 & 0xff) < 4);
  }
  if ((bool)DAT_005b8c7f) {
    uVar8 = -(((uint)ivzkat_w < (uint)DAT_005b854e * (uint)FASKIV1) - 1);
  }
  else {
    uVar8 = ivzkat_w < DAT_005b854e ^ 1;
  }
  DAT_005b8c81 = bVar2;
  DAT_005b8c82 = bVar3;
  DAT_005b8c83 = bVar4;
  if (uVar8 == 0) {
    DAT_005b8c85 = '\0';
  }
  else {
    if (!bVar4) {
      B_blkmd = 0;
      B_mdkat = 0;
    }
    if (B_mdkat == 0) {
      uVar11 = 0;
      uVar8 = (uint)flgtiab;
      do {
        sVar6 = (byte)(&DAT_005b8d88)[uVar11 & 0xff] - 1;
        if (sVar6 < 1) {
          sVar6 = 0;
        }
        (&DAT_005b8d88)[uVar11 & 0xff] = (char)sVar6;
        if (((int)uVar8 >> (uVar11 & 0x3f) & 1U) == 0) {
          flgkat_w = flgkat_w & ~(ushort)(1 << (uVar11 & 0x3f));
        }
        uVar11 = uVar11 + 1;
      } while ((uVar11 & 0xff) < 4);
    }
    DAT_005b8c85 = '\x01';
  }
  if ((bVar2) && (DAT_003fa977 == '\0')) {
    DAT_003fa976 = true;
  }
  else {
    DAT_003fa976 = false;
  }
  if ((bVar3) && (DAT_003fa965 == '\0')) {
    DAT_003fa964 = true;
  }
  else {
    DAT_003fa964 = false;
  }
  DAT_003fa965 = bVar3;
  DAT_003fa977 = bVar2;
  if (((bool)DAT_003fa976) || ((bool)DAT_003fa964)) {
LAB_000b8320:
    if (B_ainten != 0) {
      uVar11 = 0;
      uVar8 = (uint)flgtiabm;
      do {
        if (((int)uVar8 >> (uVar11 & 0x3f) & 1U) != 0) {
          DAT_005b8d9c = (0xaa >> (uVar11 & 0x3f) & 1U) != 0;
          uVar13 = (uint)(byte)DAT_005b8d9c;
          uVar1 = (&DAT_005b975e)[uVar11 & 0xff];
          uVar15 = (int)(uint)flgkat_w >> (uVar11 & 0x3f) & 1;
          if (uVar15 == 0) {
            if (DAT_005b8c85 == '\0') {
              cVar12 = '\0';
            }
            else {
              cVar12 = -1;
            }
          }
          else if (*(ushort *)(uVar13 * 2 + 0x1c17e6) < uVar1) {
            cVar12 = (&DAT_005b8da0)[uVar11 & 0xff] == '\0';
          }
          else if (DAT_005b8c85 == '\0') {
            cVar12 = '\0';
          }
          else {
            cVar12 = -1;
          }
          uVar7 = (short)cVar12 + (ushort)(byte)(&DAT_005b8d88)[uVar11 & 0xff];
          if ((short)uVar7 < 1) {
            uVar7 = 0;
          }
          if (0xff < uVar7) {
            uVar7 = 0xff;
          }
          (&DAT_005b8d88)[uVar11 & 0xff] = (char)uVar7;
          if (uVar15 == 0) {
            if (DAT_005b8c85 == '\0') {
              cVar12 = '\0';
            }
            else {
              cVar12 = -1;
            }
          }
          else if (*(ushort *)(uVar13 * 2 + 0x1c17e6) < uVar1) {
            cVar12 = (&DAT_005b8da0)[uVar11 & 0xff] == '\0';
          }
          else if (DAT_005b8c85 == '\0') {
            cVar12 = '\0';
          }
          else {
            cVar12 = -1;
          }
          if ((cVar12 == '\x01') && (uVar8 = uVar8 & ~(1 << (uVar11 & 0x3f)), 0xff < uVar8)) {
            uVar8 = 0xff;
          }
          if (((*(ushort *)(uVar13 * 2 + 0x1c17e6) < uVar1) &&
              ((ushort)DAT_005b8564 < (uVar7 & 0xff))) &&
             ((byte)(&DAT_005b8d98)[uVar13] < *(byte *)(uVar13 + 0x1c17f0))) {
            uVar15 = (byte)(&DAT_005b8d98)[uVar13] + 1;
            if (uVar15 < 0x100) {
              uVar14 = (undefined)uVar15;
            }
            else {
              uVar14 = 0xff;
            }
            (&DAT_005b8d98)[uVar13] = uVar14;
            uVar13 = (uint)flgtiab;
            uVar15 = 1 << (uVar11 & 0x3f);
            flgtiab = flgtiab | (byte)uVar15;
            if (0xff < (uVar13 | uVar15 & 0xffff)) {
              flgtiab = 0xff;
            }
          }
        }
        uVar11 = uVar11 + 1;
      } while ((uVar11 & 0xff) < 4);
      flgtiabm = (byte)uVar8;
    }
  }
  else if (bVar4) {
    if (DAT_005b8c85 == '\0') goto LAB_000b86a8;
    goto LAB_000b8320;
  }
  cVar12 = DAT_005b8c85;
  if (DAT_005b8c85 != '\0') {
    B_ivzkat1 = 0;
    _DAT_003fa96e = 0;
    ivzkat_w = 0;
    _DAT_003fa96a = 0;
    fzkats_w = 0;
    _DAT_003fa97e = 0;
    fzkats1_w = 0;
    _DAT_003fa974 = 0;
    fzkats2_w = 0;
    uVar8 = 0;
    do {
      (&DAT_005b975e)[uVar8] = 0;
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < 4);
    if (cVar12 != '\0') {
      flgtiabm = 0xff;
    }
  }
LAB_000b86a8:
  if ((flgtiab == 0) || (MILANTI != '\x01')) {
    B_milmd = 0;
  }
  else {
    B_milmd = B_milmd;
  }
  if (DAT_005b854c <= ivzarv_w) {
    B_mdarv = ahearv_w < fzarv_w;
    _DAT_003fa97c = 0;
    fzarv_w = 0;
    _DAT_003fa970 = 0;
    ivzarv_w = 0;
  }
  if (((CWDALA & 1) != 0) && (EVar5 == 0)) {
    _zzuend_l = _zzuend_l + 1;
    if (_zzuend_l == -1) {
      _zzuend_l = -2;
    }
    DAT_005b8c7e = B_mderk;
    if (B_mderk != 0) {
      if (*(ushort *)(&UNK_003fd812 + uVar10 * 2) + 1 < 0x10000) {
        uVar9 = (undefined2)(*(ushort *)(&UNK_003fd812 + uVar10 * 2) + 1);
      }
      else {
        uVar9 = 0xffff;
      }
      *(undefined2 *)(&UNK_003fd812 + uVar10 * 2) = uVar9;
    }
  }
  return;
}

