/*
 * Program: n42.bin
 * Function: FUN_000d0988
 * Entry: 000d0988
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000d18c0) */
/* WARNING: Removing unreachable block (ram,0x000d139c) */
/* WARNING: Removing unreachable block (ram,0x000d1800) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d0988(void)

{
  ENUM_005b90d0 EVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  
  uVar9 = upwg1_w >> 2 & 0xff;
  upwg2d_w = upwg2_w * 2;
  uVar5 = (uint)upwg2d_w;
  if (uVar5 < 0x400) {
    uVar8 = (int)uVar5 >> 2 & 0xff;
  }
  else {
    uVar8 = 0xff;
  }
  if (B_ubpvg == '\0') {
    B_pwgbwf = B_pwgbwf & (B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf);
    DAT_003fae20 = TUPWG1O;
    DAT_003fae21 = TUPWG2O;
    DAT_003fae22 = TUPWG12;
    DAT_003fae23 = TUPWG1U;
    DAT_003fae24 = TUPWG2U;
    if (B_pwgnotfr == '\0') {
      B_bwf = B_bwf & ~(B_dupw|B_dupw12|B_upwg1o|B_upwg1u) | B_hopakt;
    }
    else {
      B_bwf = B_bwf & ~(B_dupw|B_dupw12|B_hopakt|B_upwg1o|B_upwg1u);
    }
  }
  else {
    if (UPWG1O < uVar9) {
      B_bwf = B_bwf | B_upwg1o;
      if (DAT_003fae20 == '\0') {
        B_pwgbwf = B_pwgbwf | B_upw1mx;
      }
      else {
        DAT_003fae20 = DAT_003fae20 + -1;
      }
    }
    else {
      B_bwf = B_bwf & ~B_upwg1o;
      DAT_003fae20 = TUPWG1O;
    }
    if (UPWG2O < uVar8) {
      if (DAT_003fae21 == '\0') {
        B_pwgbwf = B_pwgbwf | (B_upwg2o|B_upw2mx);
      }
      else {
        DAT_003fae21 = DAT_003fae21 + -1;
        B_pwgbwf = B_pwgbwf | B_upwg2o;
      }
    }
    else {
      B_pwgbwf = B_pwgbwf & (B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf);
      DAT_003fae21 = TUPWG2O;
    }
    if ((((B_bwf & B_upwg1o) == 0) &&
        ((B_pwgbwf & B_upwg2o) ==
         ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf))) &&
       (B_pwgnotfr == '\0')) {
      uVar3 = uVar9;
      if (uVar9 <= UPWG12U) {
        uVar3 = (uint)UPWG12U;
      }
      uVar4 = uVar8;
      if (uVar8 <= UPWG12U) {
        uVar4 = (uint)UPWG12U;
      }
      iVar7 = uVar3 - uVar4;
      if (iVar7 < -0x80) {
        iVar7 = -0x80;
      }
      else if (0x7f < iVar7) {
        iVar7 = 0x7f;
      }
      uVar3 = (uint)(char)iVar7;
      if (uVar3 == 0xffffff80) {
        uVar3 = 0x7f;
      }
      else if ((int)uVar3 < 0) {
        uVar3 = -uVar3;
      }
      if ((UPWGVG < uVar9) && (UPWGVG < uVar8)) {
        uVar4 = (uint)DUPW12VG;
      }
      else if ((UPWGTG < uVar9) && (UPWGTG < uVar8)) {
        uVar4 = (uint)DUPW12TG;
      }
      else {
        uVar4 = (uint)DUPW12;
      }
      if (uVar4 < (uVar3 & 0xff)) {
        B_glf = 1;
        if ((uVar9 < UPWG1U) && ((B_bwf & B_holp1) == 0)) {
          B_bwf = B_bwf & ~B_hopakt | (B_dupw|B_upwg1u);
          if (DAT_003fae23 == '\0') {
            B_pwgbwf = B_pwgbwf | B_upw1mn;
          }
          else {
            DAT_003fae23 = DAT_003fae23 + -1;
          }
        }
        else {
          B_bwf = B_bwf & ~(B_hopakt|B_upwg1u) | B_dupw;
          DAT_003fae23 = TUPWG1U;
        }
        if ((uVar8 < UPWG2U) && ((B_bwf & B_holp2) == 0)) {
          if (DAT_003fae24 == '\0') {
            B_pwgbwf = B_pwgbwf | (B_upwg2u|B_upw2mn);
          }
          else {
            DAT_003fae24 = DAT_003fae24 + -1;
            B_pwgbwf = B_pwgbwf | B_upwg2u;
          }
        }
        else {
          B_pwgbwf = B_pwgbwf & (B_upwg2o|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf);
          DAT_003fae24 = TUPWG2U;
        }
        if (((B_bwf & B_upwg1u) == 0) &&
           ((B_pwgbwf & B_upwg2u) ==
            ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf))) {
          B_bwf = B_bwf | B_dupw12;
          if (DAT_003fae22 == '\0') {
            B_pwgbwf = B_pwgbwf | B_upw12e;
          }
          else {
            DAT_003fae22 = DAT_003fae22 + -1;
          }
        }
        else {
          B_bwf = B_bwf & ~B_dupw12;
          DAT_003fae22 = TUPWG12;
        }
      }
      else {
        B_glf = 0;
        if (((B_bwf & B_upwg1o) == 0) &&
           ((B_pwgbwf & B_upwg2o) ==
            ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf))) {
          B_bwf = B_bwf & ~B_dupw | B_hopakt;
        }
        else {
          B_bwf = B_bwf & ~(B_dupw|B_hopakt);
        }
        B_bwf = B_bwf & ~(B_dupw12|B_upwg1u);
        B_pwgbwf = B_pwgbwf & (B_upwg2o|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf);
        DAT_003fae22 = TUPWG12;
        DAT_003fae23 = TUPWG1U;
        DAT_003fae24 = TUPWG2U;
      }
    }
    else {
      if ((((B_bwf & B_upwg1o) == 0) &&
          ((B_pwgbwf & B_upwg2o) ==
           ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf))) &&
         (B_pwgnotfr == '\0')) {
        B_bwf = B_bwf & ~B_dupw | B_hopakt;
      }
      else {
        B_bwf = B_bwf & ~(B_dupw|B_hopakt);
      }
      B_bwf = B_bwf & ~(B_dupw12|B_upwg1u);
      B_pwgbwf = B_pwgbwf & (B_upwg2o|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf);
      DAT_003fae22 = TUPWG12;
      DAT_003fae23 = TUPWG1U;
      DAT_003fae24 = TUPWG2U;
    }
  }
  if ((B_bwf & B_hopakt) == 0) {
    DAT_003fae25 = THOPP1;
  }
  else {
    if (uVar9 < UPWG1U) {
      if (DAT_003fae25 == '\0') {
        B_bwf = B_bwf | B_hop1mn;
      }
      else {
        DAT_003fae25 = DAT_003fae25 + -1;
      }
    }
    else {
      DAT_003fae25 = THOPP1;
    }
    if (((UPWGTL < uVar9) && (UPWGTL < uVar8)) && ((B_bwf & B_hop1mn) != 0)) {
      B_bwf = B_bwf | B_holp1a;
    }
  }
  if (((GGPEDnonVolbits & 1) == 0) && ((B_bwf & B_holp1a) == 0)) {
    B_bwf = B_bwf & ~B_holp1;
  }
  else {
    B_bwf = B_bwf | B_holp1;
  }
  if ((B_bwf & B_hopakt) == 0) {
    DAT_003fae26 = THOPP2;
  }
  else {
    if (uVar8 < UPWG2U) {
      if (DAT_003fae26 == '\0') {
        B_bwf = B_bwf | B_hop2mn;
      }
      else {
        DAT_003fae26 = DAT_003fae26 + -1;
      }
    }
    else {
      DAT_003fae26 = THOPP2;
    }
    if (((UPWGTL < uVar9) && (UPWGTL < uVar8)) && ((B_bwf & B_hop2mn) != 0)) {
      B_bwf = B_bwf | B_holp2a;
    }
  }
  if (((GGPEDnonVolbits & 2) == 0) && ((B_bwf & B_holp2a) == 0)) {
    B_bwf = B_bwf & ~B_holp2;
  }
  else {
    B_bwf = B_bwf | B_holp2;
  }
  EVar1 = B_pwgbwf & B_upw1mx;
  if (((_DAT_003fae38 & 1) == 0) &&
     ((B_pwgbwf & B_upw12e) !=
      ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf))) {
    if (uVar8 < uVar9) {
      EVar1 = B_pwgbwf & B_upw2mx;
    }
    if (EVar1 != ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf)) {
      _DAT_003fae38 = _DAT_003fae38 | 1;
    }
  }
  if ((((B_pwgnotum == '\0') && (B_ubpvg != '\0')) && ((_DAT_003fae38 & 1) == 0)) &&
     ((((B_pwgbwf & B_upw1mx) ==
        ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf) &&
       ((B_pwgbwf & B_upw1mn) ==
        ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf))) ||
      (((B_pwgbwf & B_upw2mx) ==
        ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf) &&
       ((B_pwgbwf & B_upw2mn) ==
        ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf))))))) {
    B_spsmin = '\0';
  }
  else {
    B_spsmin = '\x01';
  }
  if (((B_pwgbwf & B_upw1mx) ==
       ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf)) &&
     ((B_pwgbwf & B_upw1mn) ==
      ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf))) {
    B_sp2s = '\0';
    if (((B_pwgbwf & B_upw2mx) ==
         ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf)) &&
       ((B_pwgbwf & B_upw2mn) ==
        ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf))) {
      B_sp1s = '\0';
      if ((B_pwgbwf & B_upw12e) ==
          ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf)) {
        B_pwgnotfr = '\0';
      }
      else {
        B_pwgnotfr = '\x01';
      }
    }
    else {
      B_pwgnotfr = '\x01';
      if ((B_pwgbwf & B_upw12e) ==
          ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf)) {
        B_sp1s = '\x01';
      }
      else {
        B_sp1s = '\0';
      }
    }
  }
  else {
    B_pwgnotfr = '\x01';
    B_sp1s = '\0';
    if (((B_pwgbwf & B_upw2mx) ==
         ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf)) &&
       ((B_pwgbwf & B_upw2mn) ==
        ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf))) {
      if ((B_pwgbwf & B_upw12e) ==
          ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf)) {
        B_sp2s = '\x01';
      }
      else {
        B_sp2s = '\0';
      }
    }
    else {
      B_sp2s = '\0';
    }
  }
  if (((B_ubpvg == '\0') || (B_pwgnotfr != '\0')) || ((CWBWEEN & 1) == 0)) {
    B_bwf = B_bwf & ~B_bwunpl;
  }
  else {
    if ((_DAT_003fae38 & 2) == 0) {
      _DAT_003fae38 = _DAT_003fae38 & 0xfffb;
    }
    else {
      _DAT_003fae38 = _DAT_003fae38 | 4;
    }
    if ((_DAT_003fae38 & 8) == 0) {
      _DAT_003fae38 = _DAT_003fae38 & 0xffef;
    }
    else {
      _DAT_003fae38 = _DAT_003fae38 | 0x10;
    }
    _DAT_003fae30 = upwg2fil_w;
    if (uVar5 < upwg2fil_w) {
      _DAT_003fae34 = (uint)upwg2d_w << 0x10;
    }
    else {
      _DAT_003fae34 = FUN_000a7f20(_TFPWG2,uVar5,_DAT_003fae34,_DAT_003fae34 & 0xffff);
    }
    upwg2fil_w = _DAT_003fae34;
    if (UPW1LLMX < uVar9) {
      DAT_003fae28 = TUPWBWV;
      _DAT_003fae38 = _DAT_003fae38 & 0xfff7 | 2;
    }
    else {
      _DAT_003fae38 = _DAT_003fae38 & 0xfffd;
      if (DAT_003fae28 == '\0') {
        _DAT_003fae38 = _DAT_003fae38 | 8;
      }
      else {
        DAT_003fae28 = DAT_003fae28 + -1;
      }
    }
    if ((((_DAT_003fae38 & 0x10) != 0) && ((_DAT_003fae38 & 2) != 0)) && ((_DAT_003fae38 & 4) == 0))
    {
      _upw2ll_w = _DAT_003fae30;
    }
    uVar5 = (uint)_upw2ll_w + (uint)_DUPW12BE;
    if (0xffff < uVar5) {
      uVar5 = 0xffff;
    }
    if (((uint)upwg2d_w < (uVar5 & 0xffff)) && (UPW1BE < uVar9)) {
      B_bwf = B_bwf | B_bwunpl;
    }
    else {
      B_bwf = B_bwf & ~B_bwunpl;
    }
  }
  if (((B_bwf & B_bwunpl) == 0) &&
     ((B_pwgbwf & B_pwgbwf) ==
      ~(B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx|B_pwgbwf))) {
    if (uVar9 < UPW1LLMX) {
      B_bwf = B_bwf & ~B_bwf;
    }
  }
  else {
    B_bwf = B_bwf | B_bwf;
  }
  if ((B_bwf & B_bwf) == 0) {
    uVar10 = _DAT_003fae38 & 0xffdf;
    if (uVar9 < UPW1BE) {
      _DAT_003fae38 = _DAT_003fae38 & 0xff9f;
    }
    else {
      uVar2 = _DAT_003fae38 & 0x40;
      _DAT_003fae38 = uVar10;
      if (uVar2 == 0) {
        _DAT_003fae38 = uVar10 | 0x40;
        B_pwgbwf = B_pwgbwf & (B_upwg2o|B_upwg2u|B_upw12e|B_upw1mn|B_upw1mx|B_upw2mn|B_upw2mx);
        if (ctrbwf == 0) {
          ctrbwf = 0;
        }
        else {
          ctrbwf = ctrbwf - 1;
        }
      }
    }
  }
  else {
    uVar10 = _DAT_003fae38 & 0xffbf;
    if (uVar9 < UPWGUBF) {
      _DAT_003fae38 = _DAT_003fae38 & 0xff9f;
    }
    else {
      uVar2 = _DAT_003fae38 & 0x20;
      _DAT_003fae38 = uVar10;
      if (uVar2 == 0) {
        _DAT_003fae38 = uVar10 | 0x20;
        if (ctrbwf < ZBWF) {
          ctrbwf = ctrbwf + 1;
        }
        if (ctrbwf == ZBWF) {
          B_pwgbwf = B_pwgbwf | B_pwgbwf;
        }
      }
    }
  }
  if (B_spsmin == '\0') {
    if (B_sp2s == '\0') {
      if ((B_pwgnotfr == '\0') || (B_sp1s != '\0')) {
        upwg_w = upwg1_w;
      }
      else {
        upwg_w = upwg2d_w;
        if (upwg1_w < upwg2d_w) {
          upwg_w = upwg1_w;
        }
      }
    }
    else {
      upwg_w = upwg2d_w;
    }
  }
  else {
    upwg_w = (ushort)UPWGUR << 2;
  }
  iVar7 = (uint)upwg_w - (uint)upwgej_w;
  if (iVar7 < -0x8000) {
    iVar7 = -0x8000;
  }
  else if (0x7fff < iVar7) {
    iVar7 = 0x7fff;
  }
  sVar6 = (short)iVar7;
  iVar7 = (int)sVar6;
  if (iVar7 < 0) {
    iVar7 = (int)-sVar6;
  }
  if ((int)(uint)_DUPWGHY < iVar7) {
    if ((int)((uint)_DUPWGHY << 1) < iVar7) {
      upwgej_w = upwg_w;
    }
    else if (sVar6 < 1) {
      iVar7 = (uint)upwgej_w - (uint)_DUPWGHY;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      else if (0xffff < iVar7) {
        iVar7 = 0xffff;
      }
      upwgej_w = (word)iVar7;
    }
    else {
      upwgej_w = upwgej_w + _DUPWGHY;
    }
  }
  if (B_pwgnotfr == '\0') {
    if ((B_bwf & B_bwf) == 0) {
      uVar9 = (uint)UPWGUR << 2;
    }
    else {
      uVar9 = (uint)UPWGUBF << 2;
    }
  }
  else {
    uVar9 = (uint)UPWGU << 2;
  }
  uVar5 = (uint)upwgej_w;
  if ((uint)UPWGO << 2 < uVar5) {
    uVar5 = (uint)UPWGO << 2;
  }
  else if (uVar5 < uVar9) {
    uVar5 = uVar9;
  }
  uVar5 = uVar5 - uVar9;
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (0xffff < (int)uVar5) {
    uVar5 = 0xffff;
  }
  _DAT_003fae2e = wpedv_w;
  uVar9 = (uint)UPWGO - (uVar9 >> 2);
  if ((int)uVar9 < 0) {
    uVar9 = 0;
  }
  else if (0xff < (int)uVar9) {
    uVar9 = 0xff;
  }
  uVar5 = FUN_000a7b40(uVar5 & 0xffff,0,(uVar9 & 0xff) << 2);
  uVar9 = uVar5 & 0xffff;
  wpedv_w = (word)uVar5;
  uVar5 = (uint)wped_w;
  _DAT_003fae2a = wped_w;
  if ((B_pwgnotfr == '\0') && ((B_dksbeg == '\0' || ((CWBWEEN & 2) == 0)))) {
    if (B_wpmbbr == '\0') {
      _DAT_003fae38 = _DAT_003fae38 & 0xfeff;
    }
    else {
      _DAT_003fae38 = _DAT_003fae38 | 0x100;
    }
    uVar8 = (uint)wpedt_w + (uint)_DWPMXNB;
    if (0xffff < uVar8) {
      uVar8 = 0xffff;
    }
    uVar3 = uVar8 & 0xffff;
    _DAT_003fae2c = (undefined2)uVar8;
    if (B_br2k == '\0') {
      _DAT_003fae38 = _DAT_003fae38 & 0xff7f;
    }
    else if (uVar9 == 0) {
      _DAT_003fae38 = _DAT_003fae38 | 0x80;
    }
    if ((((_DAT_003fae38 & 0x80) == 0) && (B_br2k != '\0')) &&
       ((B_fabr != '\0' || ((B_bkvv == '\0' || (B_bkva == '\0')))))) {
      if (DAT_003fae29 == '\0') {
        _DAT_003fae38 = _DAT_003fae38 & 0xfdff;
      }
      else {
        DAT_003fae29 = DAT_003fae29 + -1;
        _DAT_003fae38 = _DAT_003fae38 | 0x200;
      }
    }
    else {
      _DAT_003fae38 = _DAT_003fae38 | 0x200;
      DAT_003fae29 = TWPMBBR;
    }
    if ((_DAT_003fae38 & 0x200) == 0) {
      if ((NWPMBBR <= nmot) && ((VWPMBBR <= vfzg || ((DAT_003fdfdf & 1) != 0)))) {
        B_wpmbbr = '\x01';
      }
    }
    else {
      B_wpmbbr = '\0';
    }
    uVar8 = uVar9;
    if (B_wpmbbr == '\0') {
      if (uVar3 < uVar9) {
        if (((_DAT_003fae38 & 0x100) != 0) && (_WPMXBR < _DAT_003fae2e)) {
          B_wpabnb = '\x01';
        }
      }
      else {
        B_wpabnb = '\0';
      }
      if ((B_wpabnb != '\0') && (uVar8 = uVar3, uVar9 < uVar3)) {
        uVar8 = uVar9;
      }
    }
    else {
      if (_WPMXBR <= uVar9) {
        uVar8 = (uint)_WPMXBR;
      }
      if (uVar9 <= uVar3) {
        B_wpabnb = '\0';
      }
    }
  }
  else {
    if (B_brems == '\0') {
      uVar8 = (uint)wpedt_w + (uint)_DWPMXNOT;
      if (0xffff < uVar8) {
        uVar8 = 0xffff;
      }
      if ((uint)WPMXNOT << 8 <= uVar9) {
        uVar9 = (uint)WPMXNOT << 8;
      }
      if ((uVar8 & 0xffff) < uVar9) {
        uVar9 = uVar8;
      }
    }
    else {
      uVar9 = 0;
    }
    B_wpmbbr = '\0';
    DAT_003fae29 = TWPMBBR;
    uVar8 = uVar9;
  }
  if (((((CWBWEEN & 4) == 0) || (B_nmax == '\0')) || (vfzg != 0)) || ((DAT_003fdfdf & 1) != 0)) {
    _DAT_003fae32 = 0;
  }
  else if (_DAT_003fae32 <= _TMBVH) {
    _DAT_003fae32 = _DAT_003fae32 + 1;
  }
  if ((uVar8 & 0xffff) == 0) {
    B_mbvh = '\0';
  }
  else if (_TMBVH < _DAT_003fae32) {
    B_mbvh = '\x01';
  }
  if (B_mbvh == '\0') {
    wpedt_w = (word)uVar8;
  }
  else {
    wpedt_w = 0;
  }
  wped_w = wpedt_w;
  wped = (byte)(wpedt_w >> 8);
  iVar7 = wpedt_w - uVar5;
  if (iVar7 < -0x8000) {
    iVar7 = -0x8000;
  }
  else if (0x7fff < iVar7) {
    iVar7 = 0x7fff;
  }
  dwped_w = (word)iVar7;
  dwped = (byte)((uint)iVar7 >> 8);
  return;
}

