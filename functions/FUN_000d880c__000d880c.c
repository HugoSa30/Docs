/*
 * Program: n42.bin
 * Function: FUN_000d880c
 * Entry: 000d880c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d880c(void)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  
  bVar6 = B_usbeh2;
  bVar3 = B_usbeh;
  bVar1 = _DAT_003fb024 != 0;
  if (bVar1) {
    _DAT_003fb024 = _DAT_003fb024 + -1;
  }
  else {
    _DAT_003fb024 = _TRIIMPH;
  }
  B_riimph = !bVar1;
  if (B_lsh == '\0') {
    ushk = 0x26;
    ushk_w = 0xcc;
    B_priph = 0;
    B_shuerf = 0;
  }
  else {
    if ((B_ttbmhh == '\0') && (CWGGLSH == '\0')) {
      _DAT_003fb022 = _THSRIH;
      DAT_003fb019 = DAT_003fb019 & 0xfe;
    }
    else if (_DAT_003fb022 == 0) {
      DAT_003fb019 = DAT_003fb019 | 1;
    }
    else {
      _DAT_003fb022 = _DAT_003fb022 + -1;
    }
    uVar8 = (uint)ushkr_w;
    _DAT_003fb026 = ushkr_w;
    ushkr_w = uushk_w + 0xcd;
    uVar4 = (uint)ushkr_w;
    iVar9 = uVar4 - uVar8;
    if (iVar9 < -0x8000) {
      iVar9 = -0x8000;
    }
    else if (0x7fff < iVar9) {
      iVar9 = 0x7fff;
    }
    sVar7 = (short)iVar9;
    if (sVar7 < 0) {
      if (sVar7 == -0x8000) {
        sVar7 = 0x7fff;
      }
      else {
        sVar7 = -sVar7;
      }
    }
    if (((DAT_003fb019 & 1) == 0) ||
       (((uVar4 <= _USRIOH && ((uVar4 < _USRIMINH || (_USRIUH < uVar4)))) || (_DUSRIH <= sVar7)))) {
      B_riibh = '\0';
    }
    else {
      B_riibh = '\x01';
    }
    if ((DAT_003fb01d >> 2 & 1) == 0) {
      if (B_riimph) {
        B_riakh = '\x01';
      }
    }
    else {
      B_riakh = '\0';
    }
    bVar2 = (byte)((DAT_003fb01d >> 1 & 1) << 2);
    if (((B_svuerf == '\0') && (B_svuerf2 == '\0')) && (B_shuerf2 == 0)) {
      if ((B_riibh == '\0') || (B_riakh == '\0')) {
        DAT_003fb01d = bVar2 | DAT_003fb01d & 0xf9;
      }
      else {
        DAT_003fb01d = bVar2 | DAT_003fb01d & 0xf9 | 2;
      }
    }
    else {
      DAT_003fb01d = bVar2 | DAT_003fb01d & 0xf9;
    }
    bVar2 = (byte)((DAT_003fb01d >> 3 & 1) << 4);
    bVar5 = B_ripuh & 1;
    if (((DAT_003fb01d & 2) == 0) || ((DAT_003fb01d & 4) != 0)) {
      B_ripuh = 0;
    }
    else {
      B_ripuh = 1;
      B_shuerf = 1;
    }
    DAT_003fb01d = B_usbeh << 7 | bVar5 << 3 | bVar2 | DAT_003fb01d & 0x67;
    if (((bVar5 == 0) || (bVar2 != 0)) || (DAT_003fb020 != '\0')) {
      if ((DAT_003fb020 != '\0') && (DAT_003fb020 = DAT_003fb020 + -1, DAT_003fb020 == '\0')) {
        B_usbeh = 0;
      }
    }
    else {
      DAT_003fb020 = TUSBELH;
      B_usbeh = 1;
    }
    _DAT_003fb028 = ushk_w;
    if (B_usbeh == 0) {
      uVar4 = (uint)ushkr_w;
      if ((bVar3 & 1) == 0) {
        B_risph = '\0';
      }
      else {
        iVar9 = uVar4 - ushk_w;
        if (iVar9 < -0x8000) {
          iVar9 = -0x8000;
        }
        else if (0x7fff < iVar9) {
          iVar9 = 0x7fff;
        }
        sVar7 = (short)iVar9;
        if (sVar7 < 0) {
          if (sVar7 == -0x8000) {
            sVar7 = 0x7fff;
          }
          else {
            sVar7 = -sVar7;
          }
        }
        if (_DUSSPH < sVar7) {
          B_risph = '\x01';
        }
      }
      ushk_w = ushkr_w;
      if (uVar4 < 0x1b5) {
        if (uVar4 < 0xa4) {
          ushk = 0;
        }
        else {
          ushk = (byte)((int)(uVar4 * 0xf + -0x99c) >> 4);
        }
      }
      else {
        ushk = 0xff;
      }
    }
    bVar3 = B_shuerf & 1;
    if ((bVar3 == 0) && ((DAT_003fb01c & 8) != 0)) {
      B_rimh = '\x01';
    }
    else {
      B_rimh = '\0';
    }
    if ((B_rireh == '\0') && (B_risph == '\0')) {
      if (B_rimh != '\0') {
        B_ribeh = 1;
      }
    }
    else {
      B_ribeh = 0;
      B_rireh = '\0';
    }
    if ((B_ribeh != 0) && ((DAT_003fb01c >> 5 & 1) == 0)) {
      ushob_w = _uushob_w + 0xcd;
      ushmb_w = _uushmb_w + 0xcd;
    }
    DAT_003fb01c = (B_ribeh & 1) << 5 | bVar3 << 3 | bVar3 << 4 | DAT_003fb01c & 199;
    B_priph = B_ripuh;
  }
  if (B_lsh2 == '\0') {
    ushk2 = 0x26;
    ushk2_w = 0xcc;
    B_priph2 = 0;
    B_shuerf2 = 0;
  }
  else {
    if ((B_ttbmhh2 == '\0') && (CWGGLSH == '\0')) {
      _DAT_003fb03e = _THSRIH;
      DAT_003fb034 = DAT_003fb034 & 0xfe;
    }
    else if (_DAT_003fb03e == 0) {
      DAT_003fb034 = DAT_003fb034 | 1;
    }
    else {
      _DAT_003fb03e = _DAT_003fb03e + -1;
    }
    uVar8 = (uint)ushkr2_w;
    _DAT_003fb040 = ushkr2_w;
    ushkr2_w = uushk2_w + 0xcd;
    uVar4 = (uint)ushkr2_w;
    iVar9 = uVar4 - uVar8;
    if (iVar9 < -0x8000) {
      iVar9 = -0x8000;
    }
    else if (0x7fff < iVar9) {
      iVar9 = 0x7fff;
    }
    sVar7 = (short)iVar9;
    if (sVar7 < 0) {
      if (sVar7 == -0x8000) {
        sVar7 = 0x7fff;
      }
      else {
        sVar7 = -sVar7;
      }
    }
    if ((((DAT_003fb034 & 1) == 0) ||
        ((uVar4 <= _USRIOH && ((uVar4 < _USRIMINH || (_USRIUH < uVar4)))))) || (_DUSRIH <= sVar7)) {
      B_riibh2 = '\0';
    }
    else {
      B_riibh2 = '\x01';
    }
    if ((DAT_003fb039 >> 2 & 1) == 0) {
      if (B_riimph) {
        B_riakh2 = '\x01';
      }
    }
    else {
      B_riakh2 = '\0';
    }
    bVar3 = (byte)((DAT_003fb039 >> 1 & 1) << 2);
    if (((B_svuerf == '\0') && (B_svuerf2 == '\0')) && (B_shuerf == 0)) {
      if ((B_riibh2 == '\0') || (B_riakh2 == '\0')) {
        DAT_003fb039 = bVar3 | DAT_003fb039 & 0xf9;
      }
      else {
        DAT_003fb039 = bVar3 | DAT_003fb039 & 0xf9 | 2;
      }
    }
    else {
      DAT_003fb039 = bVar3 | DAT_003fb039 & 0xf9;
    }
    bVar3 = (byte)((DAT_003fb039 >> 3 & 1) << 4);
    bVar2 = B_ripuh2 & 1;
    if (((DAT_003fb039 & 2) == 0) || ((DAT_003fb039 & 4) != 0)) {
      B_ripuh2 = 0;
    }
    else {
      B_ripuh2 = 1;
      B_shuerf2 = 1;
    }
    DAT_003fb039 = B_usbeh2 << 7 | bVar2 << 3 | bVar3 | DAT_003fb039 & 0x67;
    if (((bVar2 == 0) || (bVar3 != 0)) || (DAT_003fb03c != '\0')) {
      if ((DAT_003fb03c != '\0') && (DAT_003fb03c = DAT_003fb03c + -1, DAT_003fb03c == '\0')) {
        B_usbeh2 = 0;
      }
    }
    else {
      DAT_003fb03c = TUSBELH;
      B_usbeh2 = 1;
    }
    _DAT_003fb042 = ushk2_w;
    if (B_usbeh2 == 0) {
      uVar4 = (uint)ushkr2_w;
      if ((bVar6 & 1) == 0) {
        B_risph2 = '\0';
      }
      else {
        iVar9 = uVar4 - ushk2_w;
        if (iVar9 < -0x8000) {
          iVar9 = -0x8000;
        }
        else if (0x7fff < iVar9) {
          iVar9 = 0x7fff;
        }
        sVar7 = (short)iVar9;
        if (sVar7 < 0) {
          if (sVar7 == -0x8000) {
            sVar7 = 0x7fff;
          }
          else {
            sVar7 = -sVar7;
          }
        }
        if (_DUSSPH < sVar7) {
          B_risph2 = '\x01';
        }
      }
      ushk2_w = ushkr2_w;
      if (uVar4 < 0x1b5) {
        if (uVar4 < 0xa4) {
          ushk2 = 0;
        }
        else {
          ushk2 = (byte)((int)(uVar4 * 0xf + -0x99c) >> 4);
        }
      }
      else {
        ushk2 = 0xff;
      }
    }
    bVar3 = B_shuerf2 & 1;
    if ((bVar3 == 0) && ((DAT_003fb038 & 8) != 0)) {
      B_rimh2 = '\x01';
    }
    else {
      B_rimh2 = '\0';
    }
    if ((B_rireh2 == '\0') && (B_risph2 == '\0')) {
      if (B_rimh2 != '\0') {
        B_ribeh2 = 1;
      }
    }
    else {
      B_ribeh2 = 0;
      B_rireh2 = '\0';
    }
    if ((B_ribeh2 != 0) && ((DAT_003fb038 >> 5 & 1) == 0)) {
      ushob2_w = _uushob2_w + 0xcd;
      ushmb2_w = _uushmb2_w + 0xcd;
    }
    DAT_003fb038 = (B_ribeh2 & 1) << 5 | bVar3 << 3 | bVar3 << 4 | DAT_003fb038 & 199;
    B_priph2 = B_ripuh2;
  }
  if ((((B_ripuv == '\0') && (B_ripuv2 == '\0')) && (B_ripuh == 0)) && (B_ripuh2 == 0)) {
    B_pump = 0;
  }
  else {
    B_pump = 1;
  }
  if (((B_svuerf == '\0') && (B_svuerf2 == '\0')) && ((B_shuerf == 0 && (B_shuerf2 == 0)))) {
    DAT_003fb018 = 0;
  }
  else {
    DAT_003fb018 = 1;
  }
  return;
}

