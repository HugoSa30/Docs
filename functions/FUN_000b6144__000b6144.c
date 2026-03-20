/*
 * Program: n42.bin
 * Function: FUN_000b6144
 * Entry: 000b6144
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b6144(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  if (B_mdstop == 0) {
    zzyllfb = zzyldmd - tskdelay;
    if ((char)zzyllfb < -0x10) {
      zzyllfb = 0xf0;
    }
    if ((char)zzyllfb < '\0') {
      zzyllfb = zzyllfb + 4;
      if ('\x18' < (char)zzyllfb) {
        zzyllfb = 0x18;
      }
      if (((char)zzyllfb < '\0') && (zzyllfb = zzyllfb + 4, '\x18' < (char)zzyllfb)) {
        zzyllfb = 0x18;
      }
    }
    (&DAT_005b8d60)[stimiwri] = B_stimhelp;
    fVar2 = _tsk_f;
    uVar12 = stimiwri + 1;
    if (0xff < uVar12) {
      uVar12 = 0xff;
    }
    stimiwri = (byte)uVar12;
    uVar15 = (uint)tsklen;
    if (uVar15 < (uVar12 & 0xff)) {
      stimiwri = 0;
    }
    B_mdstim = (&DAT_005b8d60)[stimiread];
    uVar12 = stimiread + 1;
    if (0xff < uVar12) {
      uVar12 = 0xff;
    }
    stimiread = (byte)uVar12;
    if (uVar15 < (uVar12 & 0xff)) {
      stimiread = 0;
    }
    *(float *)(&UNK_003fa720 + (uint)tskiwri * 4) = _tsk_f;
    fVar6 = _DAT_003fa808;
    fVar5 = _DAT_003fa7fc;
    _tskyx3_f = _DAT_003fa7dc;
    fVar1 = _DAT_003fa7ac;
    fVar3 = _DAT_003fa79c;
    uVar12 = tskiwri + 1;
    if (100 < (uVar12 & 0xff)) {
      uVar12 = 100;
    }
    tskiwri = (byte)uVar12;
    if (uVar15 < (uVar12 & 0xff)) {
      tskiwri = 0;
    }
    fVar4 = fVar2 * fVar2 * fVar2;
    _DAT_003fa838 = _DAT_003fa83c;
    _DAT_003fa798 = _DAT_003fa79c;
    _DAT_003fa79c = _DAT_003fa83c;
    dVar17 = (double)_DAT_003fa7dc;
    _DAT_003fa7d8 = _DAT_003fa7dc;
    _DAT_003fa7dc = fVar3;
    _DAT_003fa7f8 = _DAT_003fa7fc;
    _DAT_003fa7fc = _tskyx3_f;
    _DAT_003fa804 = _DAT_003fa808;
    _DAT_003fa808 = fVar5;
    _DAT_003fa7a8 = _DAT_003fa7ac;
    _DAT_003fa7ac = fVar6;
    _DAT_003fa7b0 = _DAT_003fa7b4;
    _DAT_003fa7b4 = fVar1;
    dVar18 = (double)(float)z2_f;
    uVar12 = (uint)tskixmz;
    _lunw_f = (float)(dVar18 * (double)((fVar2 - *(float *)(&UNK_003fa720 + uVar12 * 4)) / fVar4));
    if (_lunw_f <= _DAT_0001bd30) {
      _lunw_f = -_lunw_f;
    }
    uVar13 = 0;
    pbVar9 = &tskiyp1;
    uVar10 = (uint)tskiyp1;
    dVar19 = (double)*(float *)(&UNK_003fa720 + uVar10 * 4);
    uVar11 = (uint)tskiy;
    dVar20 = (double)*(float *)(&UNK_003fa720 + uVar11 * 4);
    _DAT_003fa83c = fVar4;
    do {
      if (uVar13 == 1) {
        if (B_nmntkomp == 0) {
          fVar2 = *(float *)(&UNK_003fa720 + (uint)tskinpz2 * 4);
          fVar3 = *(float *)(&UNK_003fa720 + (uint)tskinmz2 * 4);
          if (fVar2 <= _tsmxkomp_f) {
            if (fVar3 <= _tsmxkomp_f) {
              fVar2 = fVar2 - fVar3;
            }
            else {
              fVar2 = fVar2 - _tsmxkomp_f;
            }
          }
          else {
            fVar2 = _DAT_0001bd30;
            if (fVar3 <= _tsmxkomp_f) {
              fVar2 = _tsmxkomp_f - fVar3;
            }
          }
        }
        else {
          fVar2 = *(float *)(&UNK_003fa720 + (uint)tskinpz2 * 4) -
                  *(float *)(&UNK_003fa720 + (uint)tskinmz2 * 4);
        }
        fVar2 = fVar2 * _DAT_0001bd28;
      }
      else {
        fVar2 = _DAT_0001bd30;
        if (uVar13 == 2) {
          if (B_nmntkomp == 0) {
            dVar21 = (double)_tsmxkomp_f;
            dVar16 = (double)*(float *)(&UNK_003fa720 + (uint)tskiym1 * 4);
            if (dVar20 <= dVar21) {
              if (dVar16 <= dVar21) {
                fVar2 = (float)(dVar20 - dVar16);
              }
              else {
                fVar2 = (float)(dVar20 - dVar21);
              }
            }
            else if (dVar16 <= dVar21) {
              fVar2 = (float)(dVar21 - dVar16);
            }
          }
          else {
            fVar2 = (float)(dVar20 - (double)*(float *)(&UNK_003fa720 + (uint)tskiym1 * 4));
          }
        }
        else if (uVar13 == 3) {
          if (B_nmntkomp == 0) {
            dVar16 = (double)_tsmxkomp_f;
            if (dVar19 <= dVar16) {
              if (dVar20 <= dVar16) {
                fVar2 = (float)(dVar19 - dVar20);
              }
              else {
                fVar2 = (float)(dVar19 - dVar16);
              }
            }
            else if (dVar20 <= dVar16) {
              fVar2 = (float)(dVar16 - dVar20);
            }
          }
          else {
            fVar2 = (float)(dVar19 - dVar20);
          }
        }
        else if (uVar13 == 4) {
          if (B_nmntkomp == 0) {
            dVar21 = (double)_tsmxkomp_f;
            dVar16 = (double)*(float *)(&UNK_003fa720 + (uint)tskiyp2 * 4);
            if (dVar16 <= dVar21) {
              if (dVar19 <= dVar21) {
                fVar2 = (float)(dVar16 - dVar19);
              }
              else {
                fVar2 = (float)(dVar16 - dVar21);
              }
            }
            else if (dVar19 <= dVar21) {
              fVar2 = (float)(dVar21 - dVar19);
            }
          }
          else {
            fVar2 = (float)((double)*(float *)(&UNK_003fa720 + (uint)tskiyp2 * 4) - dVar19);
          }
        }
        else if (B_nmntkomp == 0) {
          fVar3 = *(float *)(&UNK_003fa720 + (uint)tskiyp3 * 4);
          fVar1 = *(float *)(&UNK_003fa720 + (uint)tskiyp2 * 4);
          if (fVar3 <= _tsmxkomp_f) {
            if (fVar1 <= _tsmxkomp_f) {
              fVar2 = fVar3 - fVar1;
            }
            else {
              fVar2 = fVar3 - _tsmxkomp_f;
            }
          }
          else if (fVar1 <= _tsmxkomp_f) {
            fVar2 = _tsmxkomp_f - fVar1;
          }
        }
        else {
          fVar2 = *(float *)(&UNK_003fa720 + (uint)tskiyp3 * 4) -
                  *(float *)(&UNK_003fa720 + (uint)tskiyp2 * 4);
        }
      }
      *(float *)(&UNK_003fa698 + uVar13 * 4) = fVar2;
      uVar13 = uVar13 + 1 & 0xff;
    } while (uVar13 < 5);
    uVar14 = (uint)tskinpz2;
    uVar13 = (uint)tskinmz2;
    if (DAT_001c1170 == '\0') {
      if (B_nmntkomp == 0) {
        fVar2 = *(float *)(&UNK_003fa720 + uVar14 * 4);
        fVar3 = *(float *)(&UNK_003fa720 + uVar13 * 4);
        if (fVar2 <= _tsmxkomp_f) {
          if (fVar3 <= _tsmxkomp_f) {
            dVar16 = (double)((fVar2 - fVar3) * _DAT_0001bd28);
          }
          else {
            dVar16 = (double)((fVar2 - _tsmxkomp_f) * _DAT_0001bd28);
          }
        }
        else if (fVar3 <= _tsmxkomp_f) {
          dVar16 = (double)((_tsmxkomp_f - fVar3) * _DAT_0001bd28);
        }
        else {
          dVar16 = (double)_DAT_0001bd30;
        }
      }
      else {
        dVar16 = (double)((*(float *)(&UNK_003fa720 + uVar14 * 4) -
                          *(float *)(&UNK_003fa720 + uVar13 * 4)) * _DAT_0001bd28);
      }
    }
    else if (DAT_001c1171 < nmot) {
      if (B_nmntkomp == 0) {
        fVar2 = *(float *)(&UNK_003fa720 + uVar14 * 4);
        fVar3 = *(float *)(&UNK_003fa720 + uVar13 * 4);
        if (fVar2 <= _tsmxkomp_f) {
          if (fVar3 <= _tsmxkomp_f) {
            dVar16 = (double)((fVar2 - fVar3) * _DAT_0001bd28);
          }
          else {
            dVar16 = (double)((fVar2 - _tsmxkomp_f) * _DAT_0001bd28);
          }
        }
        else if (fVar3 <= _tsmxkomp_f) {
          dVar16 = (double)((_tsmxkomp_f - fVar3) * _DAT_0001bd28);
        }
        else {
          dVar16 = (double)_DAT_0001bd30;
        }
      }
      else {
        dVar16 = (double)((*(float *)(&UNK_003fa720 + uVar14 * 4) -
                          *(float *)(&UNK_003fa720 + uVar13 * 4)) * _DAT_0001bd28);
      }
    }
    else {
      dVar16 = (double)FUN_000b6098(&UNK_003fa7bc,&UNK_003fa698);
    }
    fVar7 = _DAT_003fa858;
    fVar4 = _DAT_003fa820;
    fVar6 = _DAT_003fa810;
    fVar5 = _DAT_003fa7ec;
    fVar1 = _DAT_003fa7e4;
    _tsknx3_f = _DAT_003fa7a4;
    fVar3 = _DAT_003fa78c;
    _luts_f = _DAT_003fa784;
    _tdkomp_f = (float)dVar16;
    _dtsk_f = (float)(dVar19 - dVar20);
    fVar2 = _DAT_0001bd30;
    if (_DAT_0001bd30 != (float)dVar17) {
      fVar2 = (float)(dVar18 * (double)(float)((double)(float)((double)_dtsk_f - dVar16) / dVar17));
    }
    _DAT_003fa84c = _DAT_003fa850;
    _DAT_003fa780 = _DAT_003fa784;
    _DAT_003fa784 = _DAT_003fa850;
    _DAT_003fa854 = _DAT_003fa858;
    _DAT_003fa858 = _luts_f;
    _DAT_003fa7e0 = _DAT_003fa7e4;
    _DAT_003fa7e4 = fVar7;
    _DAT_003fa7e8 = _DAT_003fa7ec;
    _DAT_003fa7ec = fVar1;
    _DAT_003fa830 = _DAT_003fa834;
    _DAT_003fa834 = fVar5;
    _DAT_003fa824 = _DAT_003fa828;
    _DAT_003fa7a0 = _DAT_003fa7a4;
    _DAT_003fa7a4 = _DAT_003fa828;
    _DAT_003fa81c = _DAT_003fa820;
    _DAT_003fa820 = _tsknx3_f;
    _DAT_003fa80c = _DAT_003fa810;
    _DAT_003fa810 = fVar4;
    _DAT_003fa788 = _DAT_003fa78c;
    _DAT_003fa78c = fVar6;
    _DAT_003fa814 = _DAT_003fa818;
    _DAT_003fa818 = fVar3;
    if (_tsknx3_f == _DAT_0001bd30) {
      _tsknx3_f = _tskll_f;
    }
    uVar8 = (uint)(char)zzyllfb;
    _DAT_003fa828 = (float)dVar17;
    _DAT_003fa850 = fVar2;
    *(float *)(&UNK_003fa6e8 + uVar8 * 4) = _luts_f;
    tskiyp3 = tskiyp3 + 1;
    if (100 < tskiyp3) {
      tskiyp3 = 100;
    }
    if (uVar15 < tskiyp3) {
      tskiyp3 = 0;
    }
    tskiyp2 = tskiyp2 + 1;
    if (100 < tskiyp2) {
      tskiyp2 = 100;
    }
    if (uVar15 < tskiyp2) {
      tskiyp2 = 0;
    }
    uVar10 = uVar10 + 1;
    if (100 < (uVar10 & 0xff)) {
      uVar10 = 100;
    }
    *pbVar9 = (byte)uVar10;
    if (uVar15 < (uVar10 & 0xff)) {
      *pbVar9 = 0;
    }
    uVar11 = uVar11 + 1;
    if (100 < (uVar11 & 0xff)) {
      uVar11 = 100;
    }
    tskiy = (byte)uVar11;
    if (uVar15 < (uVar11 & 0xff)) {
      tskiy = 0;
    }
    tskiym1 = tskiym1 + 1;
    if (100 < tskiym1) {
      tskiym1 = 100;
    }
    if (uVar15 < tskiym1) {
      tskiym1 = 0;
    }
    uVar13 = uVar13 + 1;
    if (100 < (uVar13 & 0xff)) {
      uVar13 = 100;
    }
    tskinmz2 = (byte)uVar13;
    if (uVar15 < (uVar13 & 0xff)) {
      tskinmz2 = 0;
    }
    uVar14 = uVar14 + 1;
    if (100 < (uVar14 & 0xff)) {
      uVar14 = 100;
    }
    tskinpz2 = (byte)uVar14;
    if (uVar15 < (uVar14 & 0xff)) {
      tskinpz2 = 0;
    }
    uVar12 = uVar12 + 1;
    if (100 < (uVar12 & 0xff)) {
      uVar12 = 100;
    }
    tskixmz = (byte)uVar12;
    if (uVar15 < (uVar12 & 0xff)) {
      tskixmz = 0;
    }
    if (uVar8 < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x000b6d00 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar8 * 4 + 0x26d0c))();
      return;
    }
    _fluts_f = *(undefined4 *)(&flutszyl_f + (char)zzyllfb * 4);
    _dluts_f = _DAT_0001bd30;
    if (_DAT_0001bd30 != _tskyx3_f) {
      _dluts_f = (float)z2_f * ((_dtsk_f - _tdkomp_f) / _tskyx3_f);
    }
    _dluts_f = _luts_f - _dluts_f;
    _tsknp1_f = *(undefined4 *)(&UNK_003fa720 + (uint)tskinp1 * 4);
    _tskn_f = *(undefined4 *)(&UNK_003fa720 + (uint)tskin * 4);
    _tsknm1_f = *(undefined4 *)(&UNK_003fa720 + (uint)tskinm1 * 4);
    _tsknm2_f = *(undefined4 *)(&UNK_003fa720 + (uint)tskinm2 * 4);
    uVar12 = tskinp1 + 1;
    if (100 < (uVar12 & 0xff)) {
      uVar12 = 100;
    }
    tskinp1 = (byte)uVar12;
    uVar15 = (uint)tsklen;
    if (uVar15 < (uVar12 & 0xff)) {
      tskinp1 = 0;
    }
    uVar12 = tskin + 1;
    if (100 < (uVar12 & 0xff)) {
      uVar12 = 100;
    }
    tskin = (byte)uVar12;
    if (uVar15 < (uVar12 & 0xff)) {
      tskin = 0;
    }
    uVar12 = tskinm1 + 1;
    if (100 < (uVar12 & 0xff)) {
      uVar12 = 100;
    }
    tskinm1 = (byte)uVar12;
    if (uVar15 < (uVar12 & 0xff)) {
      tskinm1 = 0;
    }
    uVar12 = tskinm2 + 1;
    if (100 < (uVar12 & 0xff)) {
      uVar12 = 100;
    }
    tskinm2 = (byte)uVar12;
    if (uVar15 < (uVar12 & 0xff)) {
      tskinm2 = 0;
    }
  }
  return;
}

