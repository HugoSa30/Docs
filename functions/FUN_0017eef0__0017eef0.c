/*
 * Program: n42.bin
 * Function: FUN_0017eef0
 * Entry: 0017eef0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017eef0(void)

{
  ushort uVar1;
  uint uVar2;
  undefined2 local_50;
  ushort local_4c [2];
  ushort local_48 [2];
  ushort *local_44;
  
  local_50 = _DAT_003fdfb8;
  uVar1 = local_50;
  if (B_stend == '\0') {
    DAT_005b8b94 = 0;
  }
  else if (DAT_005b8b94 != 0xffff) {
    DAT_005b8b94 = DAT_005b8b94 + 1;
  }
  if (B_fates == '\0') {
    _DAT_003fb6e4 = 0;
  }
  else if (_DAT_003fb6e4 != 0xffff) {
    _DAT_003fb6e4 = _DAT_003fb6e4 + 1;
  }
  if ((B_lr2 == 0) || (B_lr != 0)) {
    DAT_003fb6f0 = (B_edkvs & 1) << 2 | (B_lr & 1) << 1 | DAT_003fb6f0 & 0xf9;
  }
  else {
    DAT_003fb6f0 = (B_edkvs2 & 1) << 2 | (B_lr2 & 1) << 1 | DAT_003fb6f0 & 0xf9;
  }
  local_50._1_1_ = (byte)_DAT_003fdfb8;
  if ((((((((B_cdswe & 0x200) == 0) || (B_fa != '\0')) && (B_fates == '\0')) ||
        ((((byte)local_50 >> 1 & 1) != 0 || ((DAT_003fb6f0 >> 1 & 1) == 0)))) ||
       (((DAT_003fb6f0 >> 2 & 1) != 0 || (((DAT_003fdf0d & 1) != 0 || ((DAT_003fdfb7 & 1) != 0))))))
      || ((B_sidk & 1) != 0)) ||
     (((((DAT_003fdfbb & 1) != 0 || ((B_silm & 1) != 0)) || ((DAT_003fdfc9 & 1) != 0)) ||
      (((DAT_003fdfc1 & 1) != 0 || (B_enws != 0)))))) {
    DAT_003fb6f0 = (B_ko & 1) << 3 | DAT_003fb6f0 & 0xf7;
    B_dtes = '\0';
    DAT_003fc1de = '\0';
    B_dtevio = B_dtevio & ~(B_dteabr|B_dtebel);
  }
  else {
    if (((((B_rkaz == '\0') && (B_rkat == '\0')) && ((B_frao == '\0' && (B_frau == '\0')))) ||
        (DAT_003fc1ec == '\0')) ||
       ((B_fates == '\0' && ((uint)DAT_005b8b94 < (uint)_TTEINI + (uint)_TTEGAI)))) {
      B_dtevio = B_dtevio & ~B_dtebel;
    }
    else if ((_DAT_001d2a0c < (short)ftead_w) || ((short)ftead_w < _DAT_001d2a0e)) {
      if (DAT_005b8b90 == '\0') {
        if ((B_dtevio & B_dtevio) == 0) {
          _tc6tesw = ftead_w + 0x8000;
          if (_DAT_001d2a0c < (short)ftead_w) {
            tc6tesc = 0x81;
            if (_DAT_001d2a0c < 0) {
              _tc6tess = _DAT_001d2a0c + -0x8000;
            }
            else {
              _tc6tess = _DAT_001d2a0c + -0x8000;
            }
          }
          else {
            tc6tesc = 1;
            if (_DAT_001d2a0e < 0) {
              _tc6tess = _DAT_001d2a0e + -0x8000;
            }
            else {
              _tc6tess = _DAT_001d2a0e + -0x8000;
            }
          }
        }
        B_dtevio = B_dtevio | (B_dtebel|B_dtevio);
      }
      else {
        DAT_005b8b90 = DAT_005b8b90 + -1;
        B_dtevio = B_dtevio & ~B_dtevio | B_dtebel;
      }
    }
    else {
      B_dtevio = B_dtevio & ~B_dtevio | B_dtebel;
      DAT_005b8b90 = DAT_001d2a09;
    }
    if ((DAT_003fb6f0 >> 3 & 1) == B_ko) {
      if (DAT_005b8b92 == '\0') {
        DAT_003fb6f0 = DAT_003fb6f0 & 0xef;
      }
      else {
        DAT_005b8b92 = DAT_005b8b92 + -1;
        DAT_003fb6f0 = DAT_003fb6f0 & 0xef | 0x10;
      }
    }
    else {
      DAT_003fb6f0 = (B_ko & 1) << 3 | DAT_003fb6f0 & 0xe7 | 0x10;
      DAT_005b8b92 = DAT_001d2a0b;
    }
    if (((((B_ll != '\0') && (B_edmtksnm == '\0')) && (B_lowra == '\0')) &&
        (((DAT_001d2a0a < tmot && (vfzg == 0)) &&
         ((DAT_001d2a08 <= fho && ((B_kh == '\0' && (B_kw == '\0')))))))) &&
       ((B_dsls == '\0' &&
        (((((DAT_003fb6f0 >> 4 & 1) == 0 && ((B_dtevio & B_dteabr) == 0)) &&
          ((DAT_003fdfdf & 1) == 0)) && (((DAT_003fdf53 & 1) == 0 && (B_mdarv == 0)))))))) {
      if (B_fates == '\0') {
        if ((_DAT_001d2a10 <= DAT_005b8b94) && (DAT_003fc197 != '\0')) {
LAB_0017f510:
          if (B_dtes == '\0') {
            nsdter = nsol;
            midter = milsol_w;
            _DAT_003fb6ec = mdverl_w;
            _DAT_003fb6ee = 0;
            B_dtes = '\x01';
          }
          if (DAT_005b96f4 == 0) {
            if (DAT_003fc1de == '\0') {
              _DAT_003fb6e8 = nmot_w;
              _DAT_003fb6ea = 0;
              DAT_005b8b96 = 0;
              DAT_003fc1de = '\x01';
            }
          }
          else {
            DAT_003fc1de = '\0';
          }
          goto LAB_0017f618;
        }
      }
      else if (_DAT_001d2a12 <= _DAT_003fb6e4) goto LAB_0017f510;
    }
    B_dtes = '\0';
    DAT_003fc1de = '\0';
    B_dtevio = B_dtevio & ~B_dteabr;
  }
LAB_0017f618:
  DAT_003fc1dd = B_dtes;
  if (DAT_003fc1de == '\0') {
    DAT_005b8b96 = 0;
    B_dtest = '\0';
    DAT_003fc1df = '\0';
    DAT_005b8b8f = 0;
  }
  else {
    if (B_dtest == '\0') {
      if (_DAT_001cb676 <= DAT_005b8b96) {
        B_dtest = '\x01';
        DAT_005b8b96 = 0;
        DAT_005b96c2 = 0;
        DAT_003fb6f0 = DAT_003fb6f0 & 0xfe;
      }
      if (B_dtest == '\0') {
        DAT_005b8b8f = 0;
        goto LAB_0017f844;
      }
    }
    uVar2 = (uint)DAT_005b8b96;
    if (uVar2 < _DAT_001cb674) {
      DAT_005b8b8f = 0xff;
    }
    else {
      DAT_005b8b8f = 0;
    }
    if ((_DAT_001cb678 <= uVar2) && (DAT_003fc1df == '\0')) {
      DAT_005b96c2 = 0;
      DAT_005b96ca = DAT_005b96c8;
      DAT_003fc1df = '\x01';
    }
    if ((uint)_DAT_001cb678 + (uint)_DAT_001cb67a <= uVar2) {
      if ((DAT_003fb6f0 & 1) == 0) {
        DAT_005b8b93 = DAT_005b8b93 + 1;
      }
      DAT_005b8b96 = 0;
      B_dtest = '\0';
      DAT_003fc1df = '\0';
      DAT_005b8b8f = 0;
      if (DAT_001d2a07 < DAT_005b8b93) {
        tc6tesc = 0x88;
        if (DAT_005b96c2 < 0) {
          _tc6tesw = -DAT_005b96c2;
          if (_DAT_001cb672 < 0) {
            _tc6tess = -_DAT_001cb672;
          }
          else {
            _tc6tess = _DAT_001cb672;
          }
        }
        else {
          _tc6tesw = DAT_005b96c2;
          if (_DAT_001cb670 < 0) {
            _tc6tess = -_DAT_001cb670;
          }
          else {
            _tc6tess = _DAT_001cb670;
          }
        }
      }
    }
  }
LAB_0017f844:
  if ((((B_cdswe & 0x200) == 0) || ((B_dtevio & B_dtevio) != 0)) || (DAT_001d2a06 < DAT_005b91f0)) {
    local_50 = _DAT_003fdfb8 & 0xd0fc | 0x2002;
  }
  else {
    local_50 = uVar1;
    if (DAT_001d2a07 < DAT_005b8b93) {
      local_50 = _DAT_003fdfb8 & 0xd0fc | 0x2203;
    }
  }
  local_4c[0] = local_50;
  local_44 = local_4c;
  local_48[0] = local_50;
  func_0xff222958(0xab,local_48);
  if (((DAT_003fc1de == '\0') && (DAT_005b91f0 <= DAT_001d2a06)) && (DAT_005b8b93 <= DAT_001d2a07))
  {
    if ((B_dtes == '\0') && (B_fates != '\0')) {
      DAT_005b8b91 = 1;
    }
    else {
      DAT_005b8b91 = 5;
    }
  }
  else if ((DAT_001d2a06 < DAT_005b91f0) || (DAT_001d2a07 < DAT_005b8b93)) {
    DAT_005b8b91 = 6;
  }
  else {
    DAT_005b8b91 = 0;
  }
  return;
}

