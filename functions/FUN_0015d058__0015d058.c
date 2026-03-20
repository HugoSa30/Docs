/*
 * Program: n42.bin
 * Function: FUN_0015d058
 * Entry: 0015d058
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0015fad0) */
/* WARNING: Removing unreachable block (ram,0x0015e018) */
/* WARNING: Removing unreachable block (ram,0x0015d0f0) */
/* WARNING: Removing unreachable block (ram,0x0015e7c4) */
/* WARNING: Removing unreachable block (ram,0x0016021c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0015d058(void)

{
  byte bVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ushort local_140;
  ushort local_13c;
  ushort local_138;
  ushort local_134;
  ushort local_130 [68];
  byte *local_a8;
  byte *local_a4;
  byte *local_80;
  byte *local_70;
  ushort local_6c [2];
  ushort *local_68;
  ushort local_64 [2];
  ushort *local_60;
  ushort local_5c [2];
  ushort *local_58;
  ushort local_54 [2];
  ushort *local_50;
  
  uVar4 = _DAT_003fdf4e;
  uVar3 = _DAT_003fdf4c;
  local_138 = _DAT_003fdf4a;
  local_140 = _DAT_003fdf48;
  local_134 = _DAT_003fdf4e;
  local_13c = _DAT_003fdf4c;
  if ((DAT_005b961a & 0x2000) == 0) {
    local_140 = _DAT_003fdf48 & 0xd0fc | 0x2002;
    local_13c = _DAT_003fdf4c & 0xd0fc | 0x2002;
    local_138 = _DAT_003fdf4a & 0xd0fc | 0x2002;
    local_134 = _DAT_003fdf4e & 0xd0fc | 0x2002;
  }
  else {
    if (B_sa != '\0') {
      if ((DAT_005bb906 & 0x40) == 0) {
        DAT_005b8710 = 0;
      }
      uVar9 = (uint)DAT_005b8710 + (uint)_ml_w;
      if (0xffff < uVar9) {
        uVar9 = 0xffff;
      }
      DAT_005b8710 = (ushort)uVar9;
    }
    if (_DAT_001cf01a < DAT_005b8710) {
      DAT_005b86f4 = DAT_005b86f4 | 8;
    }
    else {
      DAT_005b86f4 = DAT_005b86f4 & 0xf7;
    }
    if (B_lsh == '\0') {
      local_140 = _DAT_003fdf48 & 0xd0fc | 0x2002;
      local_13c = _DAT_003fdf4c & 0xd0fc | 0x2002;
    }
    else {
      if ((((B_mdarv == 0) && ((DAT_003fdf93 & 1) == 0)) && ((DAT_003fdfb9 & 1) == 0)) &&
         ((((DAT_003fdfbb & 1) == 0 && (B_dsls == '\0')) &&
          (((DAT_003fdfc9 & 1) == 0 && (B_dtest == '\0')))))) {
        DAT_005bb906 = DAT_005bb906 & 0xfb;
      }
      else {
        DAT_005bb906 = DAT_005bb906 | 4;
      }
      if (((DAT_005bb906 & 4) == 0) && (B_edkvs == '\0')) {
        DAT_005b86f6 = DAT_005b86f6 & 0xfe;
      }
      else {
        DAT_005b86f6 = DAT_005b86f6 | 1;
      }
      if (((((DAT_003fdf5b & 1) == 0) && ((DAT_003fdf5b >> 1 & 1) != 0)) &&
          ((DAT_003fdf1f >> 1 & 1) != 0)) &&
         (((DAT_003fdf1f & 1) == 0 && ((DAT_003fdf1b & 1) == 0)))) {
        DAT_005b86f6 = DAT_005b86f6 | 8;
      }
      else {
        DAT_005b86f6 = DAT_005b86f6 & 0xf7;
      }
      if ((DAT_001ceff1 & 0x10) == 0) {
        if (((_DAT_001cf012 < _ml_w) && ((DAT_005b86f2 & 0x10) != 0)) &&
           (((DAT_005b86f6 & 1) == 0 && (((lrshkebAusBits & B_lrhk) != 0 && (B_fa == '\0')))))) {
          DAT_005b86f6 = DAT_005b86f6 | 2;
        }
        else {
          DAT_005b86f6 = DAT_005b86f6 & 0xfd;
        }
      }
      else if ((((_DAT_001cf012 < _ml_w) && ((DAT_005b86f2 & 0x10) != 0)) &&
               ((DAT_005b86f6 & 1) == 0)) && (((lrshkebAusBits & B_lrhkp) != 0 && (B_fa == '\0'))))
      {
        DAT_005b86f6 = DAT_005b86f6 | 2;
      }
      else {
        DAT_005b86f6 = DAT_005b86f6 & 0xfd;
      }
      local_70 = &DAT_005bb908;
      if (DAT_001ceff9 < ushk) {
        DAT_005bb905 = DAT_001ceff5;
        DAT_005bb908 = DAT_005bb908 & 0xef;
      }
      else if (DAT_005bb905 == '\0') {
        DAT_005bb908 = DAT_005bb908 | 0x10;
      }
      else {
        DAT_005bb905 = DAT_005bb905 + -1;
      }
      if (((_DAT_001cf00e < lamsons_w) || (_ml_w < _DAT_001cf018)) || ((DAT_005b86f5 & 8) != 0)) {
        DAT_005bb904 = DAT_001ceff7;
        DAT_005bb908 = DAT_005bb908 & 0xf7;
      }
      else if (DAT_005bb904 == '\0') {
        DAT_005bb908 = DAT_005bb908 | 8;
      }
      else {
        DAT_005bb904 = DAT_005bb904 + -1;
      }
      if ((((B_cwlshvl == '\0') || ((DAT_005b86f6 & 1) != 0)) || ((DAT_005b86f6 & 8) == 0)) ||
         (((DAT_005bb908 & 8) == 0 || ((DAT_005b86f3 & 0x10) == 0)))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && ((DAT_005bb908 & 0x10) == 0)) {
        DAT_005b86f3 = DAT_005b86f3 | 4;
      }
      else {
        DAT_005b86f3 = DAT_005b86f3 & 0xfb;
      }
      if ((DAT_005b86f0 & 0x10) == 0) {
        DAT_005bb909 = DAT_005bb909 & 0xfd;
      }
      else {
        DAT_005bb909 = DAT_005bb909 | 2;
      }
      if ((DAT_005b86f3 & 4) == 0) {
        if (((DAT_005b86f0 & 4) != 0) && ((DAT_005b86f5 & 0x10) != 0)) {
          DAT_005b86f0 = DAT_005b86f0 | 0x10;
        }
      }
      else {
        DAT_005b86f0 = DAT_005b86f0 & 0xef;
      }
      if (((bVar2) && ((DAT_005bb908 & 0x10) != 0)) && ((DAT_005b86f0 & 0x10) == 0)) {
        DAT_005b86f0 = DAT_005b86f0 | 4;
      }
      else {
        DAT_005b86f0 = DAT_005b86f0 & 0xfb;
      }
      if ((DAT_005bb907 & 0x40) == 0) {
        DAT_005b9076 = DAT_005b9076 & 0xf7;
      }
      else {
        DAT_005b9076 = DAT_005b9076 | 8;
      }
      if ((DAT_005bb907 & 0x80) == 0) {
        DAT_005bb908 = DAT_005bb908 & 0xfe;
      }
      else {
        DAT_005bb908 = DAT_005bb908 | 1;
      }
      if (B_sbbhk == '\0') {
        DAT_005bb958 = _DAT_001cf020;
        DAT_005b86f2 = DAT_005b86f2 & 0xef;
      }
      else if (DAT_005bb958 == 0) {
        DAT_005b86f2 = DAT_005b86f2 | 0x10;
      }
      else {
        DAT_005bb958 = DAT_005bb958 + -1;
      }
      if (((_DAT_003fdf48 & 1) == 0) && ((DAT_003fdf49 >> 1 & 1) != 0)) {
        DAT_005bb908 = DAT_005bb908 | 0x80;
      }
      else {
        DAT_005bb908 = DAT_005bb908 & 0x7f;
      }
      local_a4 = &DAT_003fdbb7;
      if (((DAT_005bb908 & 0x80) == 0) || ((DAT_005bb909 & 1) != 0)) {
        if (((DAT_005b86f5 & 8) != 0) && ((DAT_005bb908 & 0x40) == 0)) {
          DAT_003fdbb8 = usrhk;
          DAT_003fdbb7 = DAT_003fdbb7 | 0x10;
        }
      }
      else {
        DAT_003fdbb7 = DAT_003fdbb7 & 0xef;
      }
      if ((((DAT_005b86f6 & 0x10) == 0) || ((DAT_005b86f6 & 0x20) == 0)) &&
         ((DAT_003fdbb7 & 0x10) != 0)) {
        DAT_005b86f9 = DAT_003fdbb8;
      }
      else {
        DAT_005b86f9 = usrhk;
      }
      if ((DAT_005bb908 & 0x80) == 0) {
        DAT_005bb909 = DAT_005bb909 & 0xfe;
      }
      else {
        DAT_005bb909 = DAT_005bb909 | 1;
      }
      if ((DAT_005b86f5 & 8) == 0) {
        DAT_005bb908 = DAT_005bb908 & 0xbf;
      }
      else {
        DAT_005bb908 = DAT_005bb908 | 0x40;
      }
      if (ushk < DAT_005b86f9) {
        DAT_005bb907 = DAT_005bb907 & 0xdf;
        DAT_005bb8fd = DAT_001ceff8;
      }
      else if (DAT_005bb8fd == '\0') {
        DAT_005bb907 = DAT_005bb907 | 0x20;
      }
      else {
        DAT_005bb8fd = DAT_005bb8fd + -1;
      }
      if (DAT_005b86f9 < ushk) {
        DAT_005bb907 = DAT_005bb907 & 0xef;
        DAT_005bb8fe = DAT_001ceff8;
      }
      else if (DAT_005bb8fe == '\0') {
        DAT_005bb907 = DAT_005bb907 | 0x10;
      }
      else {
        DAT_005bb8fe = DAT_005bb8fe + -1;
      }
      if ((DAT_005b9076 & 8) == 0) {
        if (((DAT_005b86f2 & 0x10) != 0) && ((DAT_005bb907 & 0x10) != 0)) {
          DAT_005b86f6 = DAT_005b86f6 | 0x20;
        }
      }
      else {
        DAT_005b86f6 = DAT_005b86f6 & 0xdf;
      }
      if ((DAT_005b9076 & 8) == 0) {
        if (((DAT_005b86f2 & 0x10) != 0) && ((DAT_005bb907 & 0x20) != 0)) {
          DAT_005b86f6 = DAT_005b86f6 | 0x10;
        }
      }
      else {
        DAT_005b86f6 = DAT_005b86f6 & 0xef;
      }
      if (((DAT_005b86f6 & 0x10) == 0) || ((DAT_005b86f6 & 0x20) == 0)) {
        DAT_005bb907 = DAT_005bb907 & 0x7f;
      }
      else {
        DAT_005bb907 = DAT_005bb907 | 0x80;
      }
      if (((DAT_005bb907 & 0x80) == 0) || ((DAT_005bb908 & 1) != 0)) {
        DAT_005b86f0 = DAT_005b86f0 & 0xfe;
      }
      else {
        DAT_005b86f0 = DAT_005b86f0 | 1;
      }
      if (((DAT_005bb907 & 0x80) == 0) || ((DAT_005b86f5 & 8) != 0)) {
        DAT_005bb907 = DAT_005bb907 & 0xbf;
        DAT_005bb95e = _DAT_001cf022;
      }
      else if (DAT_005bb95e == 0) {
        DAT_005bb907 = DAT_005bb907 | 0x40;
      }
      else {
        DAT_005bb95e = DAT_005bb95e + -1;
      }
      if (((B_fa == '\0') || (DAT_003fc1a6 == '\0')) && ((DAT_001ceff1 & 4) == 0)) {
        DAT_005bb906 = DAT_005bb906 & 0xdf;
        DAT_005b86f4 = DAT_005b86f4 & 0xfd;
      }
      else {
        if (((DAT_005bb908 & 4) == 0) || ((DAT_005b86f2 & 0x10) == 0)) {
          DAT_005bb906 = DAT_005bb906 & 0xdf;
        }
        else if ((DAT_005bb906 & 0x20) == 0) {
          DAT_005b86f4 = DAT_005b86f4 | 2;
          DAT_005bb906 = DAT_005bb906 | 0x20;
        }
        if ((((DAT_005b86f6 & 0x10) != 0) && ((DAT_005b86f6 & 0x20) != 0)) ||
           ((DAT_005b86f5 & 8) != 0)) {
          DAT_005b86f4 = DAT_005b86f4 & 0xfd;
        }
      }
      if (B_lr == '\0') {
        DAT_005bb954 = 0;
        DAT_005bb908 = DAT_005bb908 & 0xfb;
      }
      else if (DAT_005bb954 < _DAT_001cf01c) {
        DAT_005bb954 = DAT_005bb954 + 1;
      }
      else {
        DAT_005bb908 = DAT_005bb908 | 4;
      }
      if (((DAT_005b86f6 & 2) != 0) &&
         ((((DAT_005b86f6 & 0x10) == 0 || ((DAT_005b86f6 & 0x20) == 0)) &&
          ((DAT_005b86f7 & 0x20) == 0)))) {
        if (((DAT_005b9076 & 8) == 0) && ((DAT_005b86f5 & 0x10) == 0)) {
          DAT_005b92c0 = DAT_005b92c0 + 1;
        }
        else {
          DAT_005b92c0 = 0;
        }
        if (_DAT_001cf01e < DAT_005b92c0) {
          DAT_005bb906 = DAT_005bb906 | 2;
        }
        else {
          DAT_005bb906 = DAT_005bb906 & 0xfd;
        }
      }
      if ((((DAT_005b86f6 & 0x10) == 0) || ((DAT_005b86f6 & 0x20) == 0)) &&
         (((DAT_005b9076 & 8) == 0 && ((DAT_005b86f5 & 0x10) == 0)))) {
        if ((DAT_005bb906 & 2) != 0) {
          DAT_005b86f6 = DAT_005b86f6 | 0x80;
        }
      }
      else {
        DAT_005b86f6 = DAT_005b86f6 & 0x7f;
      }
      if ((_DAT_001cf016 < _ml_w) && (_ml_w < _DAT_001cf014)) {
        DAT_005b86f4 = DAT_005b86f4 | 1;
      }
      else {
        DAT_005b86f4 = DAT_005b86f4 & 0xfe;
      }
      if ((((B_evloc == '\0') || ((DAT_005b86f6 & 1) != 0)) || ((DAT_005b86f4 & 1) == 0)) ||
         (((DAT_005b86f5 & 8) != 0 || ((DAT_005b86f2 & 0x10) == 0)))) {
        DAT_005b86f3 = DAT_005b86f3 & 0xfe;
      }
      else {
        DAT_005b86f3 = DAT_005b86f3 | 1;
      }
      if ((DAT_005b86f3 & 1) == 0) {
        DAT_005b9076 = DAT_005b9076 & 0xfb;
        DAT_005b86f6 = DAT_005b86f6 & 0xbf;
      }
      else {
        if ((DAT_005b86f4 & 2) == 0) {
          DAT_005b9076 = DAT_005b9076 & 0xfb;
        }
        else {
          DAT_005b9076 = DAT_005b9076 | 4;
        }
        if ((DAT_005b86f6 & 0x80) == 0) {
          DAT_005b86f6 = DAT_005b86f6 & 0xbf;
        }
        else {
          DAT_005b86f6 = DAT_005b86f6 | 0x40;
        }
      }
      uVar9 = (uint)lamsbg_w;
      iVar8 = DAT_005b870a - uVar9;
      if (iVar8 < -0x8000) {
        iVar8 = -0x8000;
      }
      else if (0x7fff < iVar8) {
        iVar8 = 0x7fff;
      }
      sVar6 = (short)iVar8;
      if (sVar6 < 0) {
        if (sVar6 != -0x8000) {
          sVar6 = -sVar6;
          goto LAB_0015de48;
        }
        sVar6 = 0x7fff;
LAB_0015de50:
        if ((DAT_005b86f5 & 0x20) == 0) goto LAB_0015de90;
        if (DAT_001ceff2 < DAT_005bb903) {
          DAT_005bb906 = DAT_005bb906 | 1;
        }
        else {
          DAT_005bb903 = DAT_005bb903 + 1;
        }
      }
      else {
LAB_0015de48:
        if (0x29 < sVar6) goto LAB_0015de50;
LAB_0015de90:
        DAT_005bb903 = 0;
        DAT_005bb906 = DAT_005bb906 & 0xfe;
      }
      if ((DAT_005bb907 & 4) == 0) {
        DAT_005bb907 = DAT_005bb907 & 0xf7;
      }
      else {
        DAT_005bb907 = DAT_005bb907 | 8;
      }
      if ((((DAT_005b9076 & 4) == 0) && ((DAT_005b86f6 & 0x40) == 0)) && ((DAT_005b86f0 & 4) == 0))
      {
        DAT_005bb907 = DAT_005bb907 & 0xfb;
      }
      else {
        DAT_005bb907 = DAT_005bb907 | 4;
      }
      if ((((DAT_005b86f5 & 0x20) == 0) || (0x29 < sVar6)) || ((DAT_005bb907 & 8) == 0)) {
        DAT_005b86f5 = DAT_005b86f5 & 0xbf;
      }
      else {
        DAT_005b86f5 = DAT_005b86f5 | 0x40;
      }
      if ((DAT_005b86f5 & 0x20) == 0) {
LAB_0015dfbc:
        if ((DAT_005bb908 & 2) == 0) {
LAB_0015e1d4:
          DAT_005b8700 = 0x1000;
          DAT_005b9076 = DAT_005b9076 & 0xfd;
        }
        else {
          DAT_005b8706 = 0x1000;
          _DAT_005bb9bc = 0x8000000;
        }
      }
      else {
        if ((DAT_005bb908 & 2) != 0) {
          if ((DAT_005b86f5 & 0x20) == 0) goto LAB_0015dfbc;
          if ((DAT_005bb908 & 2) != 0) {
            uVar9 = (uint)DAT_005b870e + (uint)_DAT_001cf002;
            if (0xffff < uVar9) {
              uVar9 = 0xffff;
            }
            uVar7 = (uint)DAT_005b870e - (uint)_DAT_001ceffe;
            if ((int)uVar7 < 0) {
              uVar7 = 0;
            }
            else if (0xffff < (int)uVar7) {
              uVar7 = 0xffff;
            }
            uVar7 = uVar7 & 0xffff;
            if (uVar7 < _DAT_001cf00c) {
              uVar7 = (uint)_DAT_001cf00c;
            }
            DAT_005bb960 = _DAT_001cf010;
            if ((DAT_005b9076 & 4) != 0) {
              DAT_005bb960 = _DAT_001cf00a;
            }
            if (((DAT_005b86f6 & 0x10) == 0) || ((DAT_005b86f6 & 0x20) != 0)) {
              DAT_005bb964 = -0x800;
              DAT_005b8700 = (ushort)uVar7;
            }
            else {
              DAT_005bb964 = 0x800;
              DAT_005b8700 = (ushort)uVar9;
            }
            _DAT_005bb9bc =
                 func_0xff217c80(DAT_005bb960,(int)DAT_005bb964,(int)DAT_005bb9bc,
                                 _DAT_005bb9bc & 0xffff,(short)((int)uVar7 >> 1),(uVar7 & 1) << 0xf,
                                 (ushort)(uVar9 >> 1) & 0x7fff,(uVar9 & 1) << 0xf);
            uVar9 = (int)_DAT_005bb9bc >> 0xf & 0xffff;
            DAT_005b8706 = (ushort)((int)_DAT_005bb9bc >> 0xf);
            if (((DAT_005b86f6 & 0x10) == 0) || ((DAT_005b86f6 & 0x20) != 0)) {
              if (DAT_005b8700 < uVar9) {
                DAT_005b9076 = DAT_005b9076 & 0xfd;
              }
              else {
                DAT_005b9076 = DAT_005b9076 | 2;
              }
            }
            else if (uVar9 < DAT_005b8700) {
              DAT_005b9076 = DAT_005b9076 & 0xfd;
            }
            else {
              DAT_005b9076 = DAT_005b9076 | 2;
            }
            goto LAB_0015e1e8;
          }
          goto LAB_0015e1d4;
        }
        if ((DAT_005b86f0 & 4) == 0) {
          uVar9 = 0x1000;
        }
        DAT_005b8706 = (ushort)uVar9;
        _DAT_005bb9bc = uVar9 << 0xf;
        DAT_005b870e = DAT_005b8706;
      }
LAB_0015e1e8:
      if (((DAT_005b86f5 & 0x40) == 0) || ((DAT_005b9076 & 2) == 0)) {
        DAT_005b86f5 = DAT_005b86f5 & 0xef;
        DAT_005bb956 = _DAT_001cf024;
      }
      else if (DAT_005bb956 == 0) {
        DAT_005b86f5 = DAT_005b86f5 | 0x10;
      }
      else {
        DAT_005bb956 = DAT_005bb956 + -1;
      }
      if (((DAT_005b86f5 & 0x10) != 0) &&
         (((DAT_005b86f4 & 2) != 0 || ((DAT_005b86f6 & 0x80) != 0)))) {
        DAT_005b86f5 = DAT_005b86f5 | 8;
      }
      if ((DAT_005b86f5 & 0x20) == 0) {
        DAT_005bb908 = DAT_005bb908 & 0xfd;
      }
      else {
        DAT_005bb908 = DAT_005bb908 | 2;
      }
      if (((((DAT_005b86f5 & 0x10) == 0) &&
           ((((DAT_005b86f6 & 0x10) == 0 || ((DAT_005b86f6 & 0x20) == 0)) &&
            ((DAT_005bb907 & 4) != 0)))) && ((DAT_005bb906 & 1) == 0)) &&
         (((DAT_005bb909 & 2) != 0 || ((DAT_005b86f0 & 0x10) == 0)))) {
        if ((DAT_005bb907 & 4) != 0) {
          DAT_005b86f5 = DAT_005b86f5 | 0x20;
        }
      }
      else {
        DAT_005b86f5 = DAT_005b86f5 & 0xdf;
      }
      if (((DAT_005b86f6 & 0x10) == 0) || ((DAT_005b86f6 & 0x20) == 0)) {
        if ((DAT_005bb907 & 4) == 0) {
          DAT_005b870a = 0x1000;
        }
        else {
          DAT_005b870a = DAT_005b8706;
        }
      }
      else {
        DAT_005b870a = 0x1000;
      }
      if (B_atmtpk == '\0') {
        DAT_005bb95c = 300;
        DAT_005bb909 = DAT_005bb909 & 0xfb;
      }
      else if (DAT_005bb95c == 0) {
        DAT_005bb909 = DAT_005bb909 | 4;
      }
      else {
        DAT_005bb95c = DAT_005bb95c + -1;
      }
      if ((B_hsha == '\0') || ((DAT_005bb909 & 4) == 0)) {
        DAT_005b86f3 = DAT_005b86f3 & 0xef;
      }
      else {
        DAT_005b86f3 = DAT_005b86f3 | 0x10;
      }
      if (B_sa == '\0') {
        DAT_005bb901 = DAT_001ceff3;
        DAT_005bb906 = DAT_005bb906 & 0x7f;
        DAT_005bb907 = DAT_005bb907 & 0xfe;
      }
      else if (DAT_005bb901 == '\0') {
        if (DAT_001ceffc < ushk) {
          if (((B_cwlshsch == '\0') || ((DAT_005b9076 & 1) == 0)) ||
             (((DAT_005b86f3 & 0x10) == 0 ||
              (((DAT_005b86f6 & 8) == 0 || ((DAT_005b86f4 & 8) == 0)))))) {
            DAT_005bb906 = DAT_005bb906 & 0x7f;
          }
          else {
            DAT_005bb906 = DAT_005bb906 | 0x80;
          }
          DAT_005bb907 = DAT_005bb907 & 0xfe;
        }
        else {
          if ((((B_cwlshsch == '\0') || ((DAT_005b9076 & 1) == 0)) || ((DAT_005b86f3 & 0x10) == 0))
             || (((DAT_005b86f6 & 8) == 0 || ((DAT_005b86f4 & 8) == 0)))) {
            DAT_005bb907 = DAT_005bb907 & 0xfe;
          }
          else {
            DAT_005bb907 = DAT_005bb907 | 1;
          }
          DAT_005bb906 = DAT_005bb906 & 0x7f;
        }
      }
      else {
        DAT_005bb901 = DAT_005bb901 + -1;
      }
      if ((DAT_005bb906 & 0x80) == 0) {
        DAT_005b86f5 = DAT_005b86f5 & 0xfd;
        DAT_005bb900 = DAT_001ceff4;
      }
      else if (DAT_005bb900 == '\0') {
        DAT_005b86f5 = DAT_005b86f5 | 2;
        DAT_003fdbb7 = DAT_003fdbb7 | 4;
      }
      else {
        DAT_005bb900 = DAT_005bb900 + -1;
      }
      if ((DAT_005bb907 & 1) == 0) {
        DAT_005bb902 = DAT_001ceff4;
      }
      else if (DAT_005bb902 == '\0') {
        DAT_003fdbb7 = DAT_003fdbb7 & 0xfb;
      }
      else {
        DAT_005bb902 = DAT_005bb902 + -1;
      }
      if (((DAT_005bb907 & 2) == 0) && ((B_sa != '\0' || ((DAT_005b86f5 & 0x40) != 0)))) {
        DAT_005b86f1 = DAT_005b86f1 & 0xfe;
      }
      else if ((DAT_005bb902 == '\0') || ((DAT_005b86f5 & 2) != 0)) {
        DAT_005b86f1 = DAT_005b86f1 | 1;
      }
      if ((DAT_005b86f5 & 0x80) == 0) {
        DAT_005bb8ff = DAT_001ceff6;
        DAT_005bb908 = DAT_005bb908 & 0xdf;
      }
      else if (DAT_005bb8ff == '\0') {
        DAT_005bb908 = DAT_005bb908 | 0x20;
      }
      else {
        DAT_005bb8ff = DAT_005bb8ff + -1;
      }
      if (((DAT_005bb908 & 0x20) == 0) || ((DAT_005b86f4 & 8) == 0)) {
        DAT_005b86f5 = DAT_005b86f5 & 0xfb;
      }
      else {
        DAT_005b86f5 = DAT_005b86f5 | 4;
      }
      if (((DAT_005b86f5 & 4) == 0) || ((DAT_005bb906 & 8) != 0)) {
        if ((DAT_005b86f5 & 1) != 0) {
          DAT_005b86fb = 0;
        }
        DAT_005b86f5 = DAT_005b86f5 & 0xfe;
      }
      else {
        uVar9 = DAT_005b86fb + 1;
        if (0xff < uVar9) {
          uVar9 = 0xff;
        }
        DAT_005b86fb = (byte)uVar9;
        uVar5 = func_0xff217fe8(_DAT_001cf008,DAT_005b9077,_DAT_005bb962);
        DAT_005bb962 = (byte)((ushort)uVar5 >> 8);
        DAT_003fdbba = DAT_005bb962;
        _DAT_005bb962 = uVar5;
        if (DAT_005bb962 < DAT_001ceffb) {
          if (DAT_005b86fb < DAT_001ceff0) {
            if ((DAT_005b86f5 & 1) != 0) {
              DAT_005b86fb = 0;
            }
            DAT_005b86f5 = DAT_005b86f5 & 0xfe;
          }
          else {
            DAT_005b86f5 = DAT_005b86f5 | 1;
            DAT_003fdbb7 = DAT_003fdbb7 | 1;
          }
        }
        else {
          if ((DAT_005b86f5 & 1) != 0) {
            DAT_005b86fb = 0;
          }
          DAT_005b86f5 = DAT_005b86f5 & 0xfe;
          DAT_003fdbb7 = DAT_003fdbb7 & 0xfe;
        }
      }
      if ((DAT_005b86f5 & 1) == 0) {
        DAT_005b86f2 = DAT_005b86f2 & 0xfb;
      }
      else {
        DAT_005b86f2 = DAT_005b86f2 | 4;
      }
      if ((DAT_005b86f5 & 4) == 0) {
        DAT_005bb906 = DAT_005bb906 & 0xf7;
      }
      else {
        DAT_005bb906 = DAT_005bb906 | 8;
      }
      if (((((*local_a4 & 1) == 0) && ((*local_a4 & 4) == 0)) && ((DAT_005b86f6 & 0x10) != 0)) &&
         (((DAT_005b86f6 & 0x20) != 0 && ((DAT_005b86f5 & 8) == 0)))) {
        DAT_005b86f6 = DAT_005b86f6 | 4;
      }
      else {
        DAT_005b86f6 = DAT_005b86f6 & 0xfb;
      }
      if (((DAT_005b86f6 & 0x10) == 0) && ((DAT_005b86f5 & 8) != 0)) {
        DAT_005b86f1 = DAT_005b86f1 | 4;
      }
      else {
        DAT_005b86f1 = DAT_005b86f1 & 0xfb;
      }
      if (((((B_vlsumrb & 1) == 0) && ((DAT_001ceff1 & 8) == 0)) || ((DAT_005b86f1 & 1) != 0)) &&
         (((DAT_005b86f6 & 0x20) == 0 && ((DAT_005b86f5 & 8) != 0)))) {
        DAT_005b86f4 = DAT_005b86f4 | 0x20;
      }
      else {
        DAT_005b86f4 = DAT_005b86f4 & 0xdf;
      }
      if ((DAT_005b86f5 & 2) == 0) {
        DAT_005b86f2 = DAT_005b86f2 & 0xfe;
      }
      else {
        DAT_005b86f2 = DAT_005b86f2 | 1;
      }
      if ((DAT_005b86f1 & 4) != 0) {
        DAT_005b86f1 = DAT_005b86f1 | 2;
      }
      if (((DAT_005b86f1 & 2) != 0) && (DAT_005bb95a != 0)) {
        DAT_005bb95a = DAT_005bb95a + -1;
      }
      if (((DAT_005b86f1 & 4) == 0) ||
         ((DAT_005bb95a != 0 && ((DAT_003fc1c7 != '\0' || (DAT_003fc1c8 == '\0')))))) {
        DAT_005b86f4 = DAT_005b86f4 & 0xef;
      }
      else {
        DAT_005b86f4 = DAT_005b86f4 | 0x10;
      }
      if ((DAT_005b86f6 & 4) == 0) {
        if ((DAT_005b86f2 & 4) == 0) {
          if ((DAT_005b86f4 & 0x10) == 0) {
            if ((DAT_005b86f4 & 0x20) == 0) {
              if ((DAT_005b86f2 & 1) != 0) {
                local_140 = local_140 & 0xf0fe | 0x401;
                goto LAB_0015ec7c;
              }
            }
            else {
              local_140 = local_140 & 0xd0fc | 0x2203;
            }
          }
          else {
            local_140 = local_140 & 0xd0fc | 0x2103;
          }
        }
        else {
          local_140 = local_140 & 0xd0fc | 0x2803;
        }
      }
      else {
        local_140 = local_140 & 0xf0fe;
LAB_0015ec7c:
        local_140 = local_140 & 0xdffd | 0x2002;
      }
      if ((DAT_005b86f3 & 4) == 0) {
        if ((DAT_005b86f0 & 0x10) != 0) {
          local_13c = uVar3 & 0xd0fc | 0x2103;
        }
      }
      else {
        local_13c = uVar3 & 0xd0fc | 0x2002;
      }
    }
    if (B_lsh2 == '\0') {
      local_138 = local_138 & 0xd0fc | 0x2002;
      local_134 = uVar4 & 0xd0fc | 0x2002;
    }
    else {
      if (((DAT_005bb906 & 4) == 0) && (B_edkvs2 == '\0')) {
        DAT_005b86f8 = DAT_005b86f8 & 0xfe;
      }
      else {
        DAT_005b86f8 = DAT_005b86f8 | 1;
      }
      if (((((DAT_003fdf5d & 1) == 0) && ((DAT_003fdf5d >> 1 & 1) != 0)) &&
          ((DAT_003fdf21 >> 1 & 1) != 0)) &&
         (((DAT_003fdf21 & 1) == 0 && ((DAT_003fdf1d & 1) == 0)))) {
        DAT_005b86f8 = DAT_005b86f8 | 8;
      }
      else {
        DAT_005b86f8 = DAT_005b86f8 & 0xf7;
      }
      if ((DAT_001ceff1 & 0x10) == 0) {
        if (((_DAT_001cf012 < _ml_w) && ((DAT_005b86f2 & 0x20) != 0)) &&
           (((DAT_005b86f8 & 1) == 0 && (((B_lrhkzp2 & B_lrhk2) != 0 && (B_fa == '\0')))))) {
          DAT_005b86f8 = DAT_005b86f8 | 2;
        }
        else {
          DAT_005b86f8 = DAT_005b86f8 & 0xfd;
        }
      }
      else if ((((_DAT_001cf012 < _ml_w) && ((DAT_005b86f2 & 0x20) != 0)) &&
               ((DAT_005b86f8 & 1) == 0)) && (((B_lrhkzp2 & B_lrhkp2) != 0 && (B_fa == '\0')))) {
        DAT_005b86f8 = DAT_005b86f8 | 2;
      }
      else {
        DAT_005b86f8 = DAT_005b86f8 & 0xfd;
      }
      if (DAT_001ceff9 < ushk2) {
        DAT_005bb912 = DAT_001ceff5;
        DAT_005bb915 = DAT_005bb915 & 0xfd;
      }
      else if (DAT_005bb912 == '\0') {
        DAT_005bb915 = DAT_005bb915 | 2;
      }
      else {
        DAT_005bb912 = DAT_005bb912 + -1;
      }
      local_80 = &DAT_005b86f7;
      if (((_DAT_001cf00e < lamsons2_w) || (_ml_w < _DAT_001cf018)) || ((DAT_005b86f7 & 8) != 0)) {
        DAT_005bb911 = DAT_001ceff7;
        DAT_005bb915 = DAT_005bb915 & 0xfe;
      }
      else if (DAT_005bb911 == '\0') {
        DAT_005bb915 = DAT_005bb915 | 1;
      }
      else {
        DAT_005bb911 = DAT_005bb911 + -1;
      }
      if ((((B_cwlshvl == '\0') || ((DAT_005b86f8 & 8) == 0)) || ((DAT_005b86f8 & 1) != 0)) ||
         (((DAT_005bb915 & 1) == 0 || ((DAT_005b86f3 & 0x20) == 0)))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && ((DAT_005bb915 & 2) == 0)) {
        DAT_005b86f3 = DAT_005b86f3 | 8;
      }
      else {
        DAT_005b86f3 = DAT_005b86f3 & 0xf7;
      }
      if ((DAT_005b86f0 & 0x20) == 0) {
        DAT_005bb915 = DAT_005bb915 & 0xbf;
      }
      else {
        DAT_005bb915 = DAT_005bb915 | 0x40;
      }
      if ((DAT_005b86f3 & 8) == 0) {
        if (((DAT_005b86f0 & 8) != 0) && ((DAT_005b86f7 & 0x10) != 0)) {
          DAT_005b86f0 = DAT_005b86f0 | 0x20;
        }
      }
      else {
        DAT_005b86f0 = DAT_005b86f0 & 0xdf;
      }
      if (((bVar2) && ((DAT_005bb915 & 2) != 0)) && ((DAT_005b86f0 & 0x20) == 0)) {
        DAT_005b86f0 = DAT_005b86f0 | 8;
      }
      else {
        DAT_005b86f0 = DAT_005b86f0 & 0xf7;
      }
      if ((DAT_005bb914 & 8) == 0) {
        DAT_005b9076 = DAT_005b9076 & 0x7f;
      }
      else {
        DAT_005b9076 = DAT_005b9076 | 0x80;
      }
      if ((DAT_005bb914 & 0x10) == 0) {
        DAT_005bb914 = DAT_005bb914 & 0xdf;
      }
      else {
        DAT_005bb914 = DAT_005bb914 | 0x20;
      }
      if (B_sbbhk2 == '\0') {
        DAT_005bb968 = _DAT_001cf020;
        DAT_005b86f2 = DAT_005b86f2 & 0xdf;
      }
      else if (DAT_005bb968 == 0) {
        DAT_005b86f2 = DAT_005b86f2 | 0x20;
      }
      else {
        DAT_005bb968 = DAT_005bb968 + -1;
      }
      if (((_DAT_003fdf4a & 1) == 0) && ((DAT_003fdf4b >> 1 & 1) != 0)) {
        DAT_005bb915 = DAT_005bb915 | 0x10;
      }
      else {
        DAT_005bb915 = DAT_005bb915 & 0xef;
      }
      if (((DAT_005bb915 & 0x10) == 0) || ((DAT_005bb915 & 0x20) != 0)) {
        if (((DAT_005b86f7 & 8) != 0) && ((DAT_005bb915 & 8) == 0)) {
          DAT_003fdbb9 = usrhk2;
          DAT_003fdbb7 = DAT_003fdbb7 | 0x20;
        }
      }
      else {
        DAT_003fdbb7 = DAT_003fdbb7 & 0xdf;
      }
      if ((((DAT_005b86f8 & 0x10) == 0) || ((DAT_005b86f8 & 0x20) == 0)) &&
         ((DAT_003fdbb7 & 0x20) != 0)) {
        DAT_005b86fa = DAT_003fdbb9;
      }
      else {
        DAT_005b86fa = usrhk2;
      }
      if ((DAT_005bb915 & 0x10) == 0) {
        DAT_005bb915 = DAT_005bb915 & 0xdf;
      }
      else {
        DAT_005bb915 = DAT_005bb915 | 0x20;
      }
      if ((DAT_005b86f7 & 8) == 0) {
        DAT_005bb915 = DAT_005bb915 & 0xf7;
      }
      else {
        DAT_005bb915 = DAT_005bb915 | 8;
      }
      if (ushk2 < DAT_005b86fa) {
        DAT_005bb914 = DAT_005bb914 & 0xfb;
        DAT_005bb90a = DAT_001ceff8;
      }
      else if (DAT_005bb90a == '\0') {
        DAT_005bb914 = DAT_005bb914 | 4;
      }
      else {
        DAT_005bb90a = DAT_005bb90a + -1;
      }
      if (DAT_005b86fa < ushk2) {
        DAT_005bb914 = DAT_005bb914 & 0xfd;
        DAT_005bb90b = DAT_001ceff8;
      }
      else if (DAT_005bb90b == '\0') {
        DAT_005bb914 = DAT_005bb914 | 2;
      }
      else {
        DAT_005bb90b = DAT_005bb90b + -1;
      }
      if ((DAT_005b9076 & 0x80) == 0) {
        if (((DAT_005b86f2 & 0x20) != 0) && ((DAT_005bb914 & 2) != 0)) {
          DAT_005b86f8 = DAT_005b86f8 | 0x20;
        }
      }
      else {
        DAT_005b86f8 = DAT_005b86f8 & 0xdf;
      }
      if ((DAT_005b9076 & 0x80) == 0) {
        if (((DAT_005b86f2 & 0x20) != 0) && ((DAT_005bb914 & 4) != 0)) {
          DAT_005b86f8 = DAT_005b86f8 | 0x10;
        }
      }
      else {
        DAT_005b86f8 = DAT_005b86f8 & 0xef;
      }
      if (((DAT_005b86f8 & 0x10) == 0) || ((DAT_005b86f8 & 0x20) == 0)) {
        DAT_005bb914 = DAT_005bb914 & 0xef;
      }
      else {
        DAT_005bb914 = DAT_005bb914 | 0x10;
      }
      if (((DAT_005bb914 & 0x10) == 0) || ((DAT_005bb914 & 0x20) != 0)) {
        DAT_005b86f0 = DAT_005b86f0 & 0xfd;
      }
      else {
        DAT_005b86f0 = DAT_005b86f0 | 2;
      }
      if (((DAT_005bb914 & 0x10) == 0) || ((DAT_005b86f7 & 8) != 0)) {
        DAT_005bb914 = DAT_005bb914 & 0xf7;
        DAT_005bb96a = _DAT_001cf022;
      }
      else if (DAT_005bb96a == 0) {
        DAT_005bb914 = DAT_005bb914 | 8;
      }
      else {
        DAT_005bb96a = DAT_005bb96a + -1;
      }
      if (((B_fa == '\0') || (DAT_003fc1a7 == '\0')) && ((DAT_001ceff1 & 4) == 0)) {
        DAT_005bb913 = DAT_005bb913 & 0xf7;
        DAT_005b86f4 = DAT_005b86f4 & 0xfb;
      }
      else {
        if (((DAT_005bb914 & 0x80) == 0) || ((DAT_005b86f2 & 0x20) == 0)) {
          DAT_005bb913 = DAT_005bb913 & 0xf7;
        }
        else if ((DAT_005bb913 & 8) == 0) {
          DAT_005b86f4 = DAT_005b86f4 | 4;
          DAT_005bb913 = DAT_005bb913 | 8;
        }
        if ((((DAT_005b86f8 & 0x10) != 0) && ((DAT_005b86f8 & 0x20) != 0)) ||
           ((DAT_005b86f7 & 8) != 0)) {
          DAT_005b86f4 = DAT_005b86f4 & 0xfb;
        }
      }
      if (B_lr2 == '\0') {
        DAT_005bb972 = 0;
        DAT_005bb914 = DAT_005bb914 & 0x7f;
      }
      else if (_DAT_001cf01c < DAT_005bb972) {
        DAT_005bb914 = DAT_005bb914 | 0x80;
      }
      else {
        DAT_005bb972 = DAT_005bb972 + 1;
      }
      if (((DAT_005b86f8 & 0x10) == 0) || ((DAT_005b86f8 & 0x20) == 0)) {
        if (((DAT_005b86f8 & 2) != 0) && ((DAT_005b86f5 & 0x20) == 0)) {
          if (_DAT_001cf01e < DAT_005b92be) {
            DAT_005b86f8 = DAT_005b86f8 | 0x80;
          }
          else {
            DAT_005b92be = DAT_005b92be + 1;
          }
        }
      }
      else {
        DAT_005b86f8 = DAT_005b86f8 & 0x7f;
      }
      if (((DAT_005b86f7 & 0x10) != 0) || ((DAT_005b9076 & 0x80) != 0)) {
        DAT_005b92be = 0;
        DAT_005b86f8 = DAT_005b86f8 & 0x7f;
      }
      if ((((B_evloc == '\0') || ((DAT_005b86f8 & 1) != 0)) || ((DAT_005b86f4 & 1) == 0)) ||
         (((DAT_005b86f7 & 8) != 0 || ((DAT_005b86f2 & 0x20) == 0)))) {
        DAT_005b86f3 = DAT_005b86f3 & 0xfd;
      }
      else {
        DAT_005b86f3 = DAT_005b86f3 | 2;
      }
      if ((DAT_005b86f3 & 2) == 0) {
        DAT_005b9076 = DAT_005b9076 & 0xdf;
        DAT_005b86f8 = DAT_005b86f8 & 0xbf;
      }
      else {
        if ((DAT_005b86f4 & 4) == 0) {
          DAT_005b9076 = DAT_005b9076 & 0xdf;
        }
        else {
          DAT_005b9076 = DAT_005b9076 | 0x20;
        }
        if ((DAT_005b86f8 & 0x80) == 0) {
          DAT_005b86f8 = DAT_005b86f8 & 0xbf;
        }
        else {
          DAT_005b86f8 = DAT_005b86f8 | 0x40;
        }
      }
      uVar9 = (uint)lamsbg2_w;
      iVar8 = DAT_005b8708 - uVar9;
      if (iVar8 < -0x8000) {
        iVar8 = -0x8000;
      }
      else if (0x7fff < iVar8) {
        iVar8 = 0x7fff;
      }
      sVar6 = (short)iVar8;
      if (sVar6 < 0) {
        if (sVar6 != -0x8000) {
          sVar6 = -sVar6;
          goto LAB_0015f900;
        }
        sVar6 = 0x7fff;
LAB_0015f908:
        if ((DAT_005b86f7 & 0x20) == 0) goto LAB_0015f948;
        if (DAT_001ceff2 < DAT_005bb90f) {
          DAT_005bb913 = DAT_005bb913 | 1;
        }
        else {
          DAT_005bb90f = DAT_005bb90f + 1;
        }
      }
      else {
LAB_0015f900:
        if (0x29 < sVar6) goto LAB_0015f908;
LAB_0015f948:
        DAT_005bb90f = 0;
        DAT_005bb913 = DAT_005bb913 & 0xfe;
      }
      if ((DAT_005bb913 & 0x80) == 0) {
        DAT_005bb914 = DAT_005bb914 & 0xfe;
      }
      else {
        DAT_005bb914 = DAT_005bb914 | 1;
      }
      if ((((DAT_005b9076 & 0x20) == 0) && ((DAT_005b86f8 & 0x40) == 0)) &&
         ((DAT_005b86f0 & 8) == 0)) {
        DAT_005bb913 = DAT_005bb913 & 0x7f;
      }
      else {
        DAT_005bb913 = DAT_005bb913 | 0x80;
      }
      if ((((DAT_005b86f7 & 0x20) == 0) || (0x29 < sVar6)) || ((DAT_005bb914 & 1) == 0)) {
        DAT_005b86f7 = DAT_005b86f7 & 0xbf;
      }
      else {
        DAT_005b86f7 = DAT_005b86f7 | 0x40;
      }
      if ((DAT_005b86f7 & 0x20) == 0) {
LAB_0015fa74:
        if ((DAT_005bb914 & 0x40) == 0) {
LAB_0015fc84:
          DAT_005b86fe = 0x1000;
          DAT_005b9076 = DAT_005b9076 & 0xbf;
        }
        else {
          DAT_005b8704 = 0x1000;
          _DAT_005bb9c0 = 0x8000000;
        }
      }
      else {
        if ((DAT_005bb914 & 0x40) != 0) {
          if ((DAT_005b86f7 & 0x20) == 0) goto LAB_0015fa74;
          if ((DAT_005bb914 & 0x40) != 0) {
            uVar9 = (uint)DAT_005b870c + (uint)_DAT_001cf004;
            if (0xffff < uVar9) {
              uVar9 = 0xffff;
            }
            uVar7 = (uint)DAT_005b870c - (uint)_DAT_001cf000;
            if ((int)uVar7 < 0) {
              uVar7 = 0;
            }
            else if (0xffff < (int)uVar7) {
              uVar7 = 0xffff;
            }
            uVar7 = uVar7 & 0xffff;
            if (uVar7 < _DAT_001cf00c) {
              uVar7 = (uint)_DAT_001cf00c;
            }
            DAT_005bb960 = _DAT_001cf010;
            if ((DAT_005b9076 & 0x20) != 0) {
              DAT_005bb960 = _DAT_001cf00a;
            }
            if (((DAT_005b86f8 & 0x10) == 0) || ((DAT_005b86f8 & 0x20) != 0)) {
              DAT_005bb964 = -0x800;
              DAT_005b86fe = (ushort)uVar7;
            }
            else {
              DAT_005bb964 = 0x800;
              DAT_005b86fe = (ushort)uVar9;
            }
            _DAT_005bb9c0 =
                 func_0xff217c80(DAT_005bb960,(int)DAT_005bb964,(int)DAT_005bb9c0,
                                 _DAT_005bb9c0 & 0xffff,(short)((int)uVar7 >> 1),(uVar7 & 1) << 0xf,
                                 (ushort)(uVar9 >> 1) & 0x7fff,(uVar9 & 1) << 0xf);
            uVar9 = (int)_DAT_005bb9c0 >> 0xf & 0xffff;
            DAT_005b8704 = (ushort)((int)_DAT_005bb9c0 >> 0xf);
            if (((DAT_005b86f8 & 0x10) == 0) || ((DAT_005b86f8 & 0x20) != 0)) {
              if (DAT_005b86fe < uVar9) {
                DAT_005b9076 = DAT_005b9076 & 0xbf;
              }
              else {
                DAT_005b9076 = DAT_005b9076 | 0x40;
              }
            }
            else if (uVar9 < DAT_005b86fe) {
              DAT_005b9076 = DAT_005b9076 & 0xbf;
            }
            else {
              DAT_005b9076 = DAT_005b9076 | 0x40;
            }
            goto LAB_0015fc98;
          }
          goto LAB_0015fc84;
        }
        if ((DAT_005b86f0 & 8) == 0) {
          uVar9 = 0x1000;
        }
        DAT_005b8704 = (ushort)uVar9;
        _DAT_005bb9c0 = uVar9 << 0xf;
        DAT_005b870c = DAT_005b8704;
      }
LAB_0015fc98:
      if (((DAT_005b86f7 & 0x40) == 0) || ((DAT_005b9076 & 0x40) == 0)) {
        DAT_005b86f7 = DAT_005b86f7 & 0xef;
        DAT_005bb966 = _DAT_001cf024;
      }
      else if (DAT_005bb966 == 0) {
        DAT_005b86f7 = DAT_005b86f7 | 0x10;
      }
      else {
        DAT_005bb966 = DAT_005bb966 + -1;
      }
      if ((DAT_005b86f7 & 0x20) == 0) {
        DAT_005bb914 = DAT_005bb914 & 0xbf;
      }
      else {
        DAT_005bb914 = DAT_005bb914 | 0x40;
      }
      if (((((DAT_005b86f7 & 0x10) != 0) ||
           ((((DAT_005b86f8 & 0x10) != 0 && ((DAT_005b86f8 & 0x20) != 0)) ||
            ((DAT_005bb913 & 0x80) == 0)))) || ((DAT_005bb913 & 1) != 0)) ||
         (((DAT_005bb915 & 0x40) == 0 && ((DAT_005b86f0 & 0x20) != 0)))) {
        DAT_005b86f7 = DAT_005b86f7 & 0xdf;
      }
      if (((DAT_005b86f8 & 0x10) == 0) || ((DAT_005b86f8 & 0x20) == 0)) {
        if ((DAT_005bb913 & 0x80) == 0) {
          DAT_005b8708 = 0x1000;
        }
        else {
          DAT_005b8708 = DAT_005b8704;
        }
      }
      else {
        DAT_005b8708 = 0x1000;
      }
      if (B_atmtpk2 == '\0') {
        DAT_005bb96e = 300;
        DAT_005bb915 = DAT_005bb915 & 0x7f;
      }
      else if (DAT_005bb96e == 0) {
        DAT_005bb915 = DAT_005bb915 | 0x80;
      }
      else {
        DAT_005bb96e = DAT_005bb96e + -1;
      }
      if ((B_hsha2 == '\0') || ((DAT_005bb915 & 0x80) == 0)) {
        DAT_005b86f3 = DAT_005b86f3 & 0xdf;
      }
      else {
        DAT_005b86f3 = DAT_005b86f3 | 0x20;
      }
      if (B_sa == '\0') {
        DAT_005bb90d = DAT_001ceff3;
        DAT_005bb913 = DAT_005bb913 & 0xcf;
      }
      else if (DAT_005bb90d == '\0') {
        if (DAT_001ceffc < ushk2) {
          if (((B_cwlshsch == '\0') || ((DAT_005b9076 & 0x10) == 0)) ||
             (((DAT_005b86f3 & 0x20) == 0 ||
              (((DAT_005b86f8 & 8) == 0 || ((DAT_005b86f4 & 8) == 0)))))) {
            DAT_005bb913 = DAT_005bb913 & 0xef;
          }
          else {
            DAT_005bb913 = DAT_005bb913 | 0x10;
          }
          DAT_005bb913 = DAT_005bb913 & 0xdf;
        }
        else {
          if ((((B_cwlshsch == '\0') || ((DAT_005b9076 & 0x10) == 0)) ||
              ((DAT_005b86f3 & 0x20) == 0)) ||
             (((DAT_005b86f8 & 8) == 0 || ((DAT_005b86f4 & 8) == 0)))) {
            DAT_005bb913 = DAT_005bb913 & 0xdf;
          }
          else {
            DAT_005bb913 = DAT_005bb913 | 0x20;
          }
          DAT_005bb913 = DAT_005bb913 & 0xef;
        }
      }
      else {
        DAT_005bb90d = DAT_005bb90d + -1;
      }
      if ((DAT_005bb913 & 0x10) == 0) {
        DAT_005b86f7 = 0;
        DAT_005bb90c = DAT_001ceff4;
      }
      else if (DAT_005bb90c == '\0') {
        DAT_005b86f7 = DAT_005b86f7 | 2;
        DAT_003fdbb7 = DAT_003fdbb7 | 8;
      }
      else {
        DAT_005bb90c = DAT_005bb90c + -1;
      }
      if ((DAT_005bb913 & 0x20) == 0) {
        DAT_005bb90e = DAT_001ceff4;
      }
      else if (DAT_005bb90e == '\0') {
        DAT_003fdbb7 = DAT_003fdbb7 & 0xf7;
      }
      else {
        DAT_005bb90e = DAT_005bb90e + -1;
      }
      bVar1 = *local_80;
      local_a8 = &DAT_005b86f1;
      if (((DAT_005bb913 & 0x40) == 0) && ((B_sa != '\0' || ((bVar1 & 0x40) != 0)))) {
        DAT_005b86f1 = DAT_005b86f1 & 0xf7;
      }
      else if ((DAT_005bb90e == '\0') || ((DAT_005b86f7 & 2) != 0)) {
        DAT_005b86f1 = DAT_005b86f1 | 8;
      }
      if ((bVar1 & 0x80) == 0) {
        DAT_005bb910 = DAT_001ceff6;
        DAT_005bb915 = DAT_005bb915 & 0xfb;
      }
      else if (DAT_005bb910 == '\0') {
        DAT_005bb915 = DAT_005bb915 | 4;
      }
      else {
        DAT_005bb910 = DAT_005bb910 + -1;
      }
      if (((DAT_005bb915 & 4) == 0) || ((DAT_005b86f4 & 8) == 0)) {
        DAT_005b86f7 = bVar1 & 0xfb;
      }
      else {
        DAT_005b86f7 = bVar1 | 4;
      }
      if (((DAT_005b86f7 & 4) == 0) || ((DAT_005bb913 & 2) != 0)) {
        if ((DAT_005b86f7 & 1) != 0) {
          DAT_005b86fc = 0;
        }
        DAT_005b86f7 = DAT_005b86f7 & 0xfe;
      }
      else {
        uVar9 = DAT_005b86fc + 1;
        if (0xff < uVar9) {
          uVar9 = 0xff;
        }
        DAT_005b86fc = (byte)uVar9;
        uVar5 = func_0xff217fe8(_DAT_001cf008,DAT_005b9078,_DAT_005bb970);
        DAT_005bb970 = (byte)((ushort)uVar5 >> 8);
        DAT_003fdbbb = DAT_005bb970;
        _DAT_005bb970 = uVar5;
        if (DAT_005bb970 < DAT_001ceffb) {
          if (DAT_005b86fc < DAT_001ceff0) {
            if ((DAT_005b86f7 & 1) != 0) {
              DAT_005b86fc = 0;
            }
            DAT_005b86f7 = DAT_005b86f7 & 0xfe;
          }
          else {
            DAT_005b86f7 = DAT_005b86f7 | 1;
            DAT_003fdbb7 = DAT_003fdbb7 | 2;
          }
        }
        else {
          if ((DAT_005b86f7 & 1) != 0) {
            DAT_005b86fc = 0;
          }
          DAT_005b86f7 = DAT_005b86f7 & 0xfe;
          DAT_003fdbb7 = DAT_003fdbb7 & 0xfd;
        }
      }
      if ((DAT_005b86f7 & 1) == 0) {
        DAT_005b86f2 = DAT_005b86f2 & 0xf7;
      }
      else {
        DAT_005b86f2 = DAT_005b86f2 | 8;
      }
      if ((DAT_005b86f7 & 4) == 0) {
        DAT_005bb913 = DAT_005bb913 & 0xfd;
      }
      else {
        DAT_005bb913 = DAT_005bb913 | 2;
      }
      if (((((DAT_003fdbb7 & 2) == 0) && ((DAT_003fdbb7 & 8) == 0)) && ((DAT_005b86f8 & 0x10) != 0))
         && (((DAT_005b86f8 & 0x20) != 0 && ((DAT_005b86f7 & 8) == 0)))) {
        DAT_005b86f8 = DAT_005b86f8 | 4;
      }
      else {
        DAT_005b86f8 = DAT_005b86f8 & 0xfb;
      }
      if (((DAT_005b86f8 & 0x10) == 0) && ((DAT_005b86f7 & 8) != 0)) {
        DAT_005b86f1 = DAT_005b86f1 | 0x20;
      }
      else {
        DAT_005b86f1 = DAT_005b86f1 & 0xdf;
      }
      if (((((B_vlsumrb & 2) == 0) && ((DAT_001ceff1 & 8) == 0)) || ((DAT_005b86f1 & 8) != 0)) &&
         (((DAT_005b86f8 & 0x20) == 0 && ((DAT_005b86f7 & 8) != 0)))) {
        DAT_005b86f4 = DAT_005b86f4 | 0x80;
      }
      else {
        DAT_005b86f4 = DAT_005b86f4 & 0x7f;
      }
      if ((DAT_005b86f7 & 2) == 0) {
        DAT_005b86f2 = DAT_005b86f2 & 0xfd;
      }
      else {
        DAT_005b86f2 = DAT_005b86f2 | 2;
      }
      if ((DAT_005b86f1 & 0x20) != 0) {
        DAT_005b86f1 = DAT_005b86f1 | 0x10;
      }
      if (((*local_a8 & 0x10) != 0) && (DAT_005bb96c != 0)) {
        DAT_005bb96c = DAT_005bb96c + -1;
      }
      if (((*local_a8 & 0x20) == 0) ||
         ((DAT_005bb96c != 0 && ((DAT_003fc1c7 != '\0' || (DAT_003fc1c8 == '\0')))))) {
        DAT_005b86f4 = DAT_005b86f4 & 0xbf;
      }
      else {
        DAT_005b86f4 = DAT_005b86f4 | 0x40;
      }
      if ((DAT_005b86f8 & 4) == 0) {
        if ((DAT_005b86f2 & 8) == 0) {
          if ((DAT_005b86f4 & 0x40) == 0) {
            if ((DAT_005b86f4 & 0x80) == 0) {
              if ((DAT_005b86f2 & 2) != 0) {
                local_138 = local_138 & 0xf0fe | 0x401;
                goto LAB_001606b0;
              }
            }
            else {
              local_138 = local_138 & 0xd0fc | 0x2203;
            }
          }
          else {
            local_138 = local_138 & 0xd0fc | 0x2103;
          }
        }
        else {
          local_138 = local_138 & 0xd0fc | 0x2803;
        }
      }
      else {
        local_138 = local_138 & 0xf0fe;
LAB_001606b0:
        local_138 = local_138 & 0xdffd | 0x2002;
      }
      if ((DAT_005b86f3 & 8) == 0) {
        if ((DAT_005b86f0 & 0x20) != 0) {
          local_134 = uVar4 & 0xd0fc | 0x2103;
        }
      }
      else {
        local_134 = uVar4 & 0xd0fc | 0x2002;
      }
    }
  }
  local_130[0] = local_140;
  local_6c[0] = local_140;
  local_68 = local_130;
  func_0xff222958(0x73,local_6c);
  local_130[0] = local_13c;
  local_64[0] = local_13c;
  local_60 = local_130;
  func_0xff222958(0x75,local_64);
  local_130[0] = local_138;
  local_5c[0] = local_138;
  local_58 = local_130;
  func_0xff222958(0x74,local_5c);
  local_130[0] = local_134;
  local_54[0] = local_134;
  local_50 = local_130;
  func_0xff222958(0x76,local_54);
  if ((((DAT_001ceff1 & 4) == 0) && (DAT_003fc1a6 == '\0')) && (DAT_003fc1a7 == '\0')) {
    DAT_005b8702 = 0;
  }
  else {
    DAT_005b8702 = _DAT_001cf006;
  }
  if (B_sa == '\0') {
    DAT_005bb906 = DAT_005bb906 & 0xbf;
    if ((DAT_005b86f5 & 0x40) == 0) {
      DAT_005bb907 = DAT_005bb907 & 0xfd;
      goto LAB_00160a0c;
    }
  }
  else {
    DAT_005bb906 = DAT_005bb906 | 0x40;
  }
  DAT_005bb907 = DAT_005bb907 | 2;
LAB_00160a0c:
  if ((B_sa == '\0') && ((DAT_005b86f7 & 0x40) == 0)) {
    DAT_005bb913 = DAT_005bb913 & 0xbf;
  }
  else {
    DAT_005bb913 = DAT_005bb913 | 0x40;
  }
  return;
}

