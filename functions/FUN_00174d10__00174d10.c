/*
 * Program: n42.bin
 * Function: FUN_00174d10
 * Entry: 00174d10
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00174d3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00174d10(void)

{
  uint uVar1;
  int iVar2;
  word wVar3;
  uint uVar4;
  undefined2 local_28;
  
  uVar4 = DAT_001c7aba + 1;
  if (0xff < uVar4) {
    uVar4 = 0xff;
  }
  DAT_003fb04d = (undefined)uVar4;
  if (B_lsh == '\0') {
    rinh_w = 0;
    B_rinh = 0;
  }
  else {
    usobh_w = ushob_w;
    usbeh_w = ushmb_w;
    if (B_ribeh == '\0') {
      B_erinofh = 0;
      DAT_003fb01d = DAT_003fb01d & 0xbf;
    }
    else {
      iVar2 = (uint)ushmb_w - (uint)ushob_w;
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
      else if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
      if ((short)iVar2 < 1) {
        B_erinofh = 0;
        DAT_003fb01d = DAT_003fb01d & 0xbf;
      }
      else {
        B_erinofh = 1;
        DAT_003fb01d = DAT_003fb01d & 0xbf | 0x40;
        uVar4 = 0x4cd - ushmb_w;
        if ((int)uVar4 < 0) {
          uVar4 = 0;
        }
        else if (0xffff < (int)uVar4) {
          uVar4 = 0xffff;
        }
        uVar1 = (int)(short)iVar2 << 0xc;
        local_28 = (undefined2)(uVar1 >> 0x10);
        uVar4 = func_0xff217b40(local_28,uVar1 & 0xffff,uVar4 & 0xffff);
        uVar4 = (uVar4 & 0xffff) * (uint)_DAT_001c7ac0;
        if (uVar4 < 0x10000000) {
          uVar4 = uVar4 >> 0xc;
        }
        else {
          uVar4 = 0xffff;
        }
        uVar1 = (uint)_DAT_001c7ac4 - (uVar4 & 0xffff);
        if ((int)uVar1 < 0) {
          uVar1 = 0;
        }
        else if (0xffff < (int)uVar1) {
          uVar1 = 0xffff;
        }
        uVar4 = (uint)_DAT_001c7ac4 * (uVar4 & 0xffff);
        rinofha_w = rinofh_w;
        local_28 = (undefined2)(uVar4 >> 0x10);
        rinofh_w = func_0xff217b40(local_28,uVar4 & 0xffff,uVar1 & 0xffff);
        _DAT_003fb032 = _DAT_003fb030;
        _DAT_003fb030 = rinh_w;
        if (zriberh != 0xff) {
          zriberh = zriberh + 1;
        }
      }
    }
    uVar4 = (uint)rinofha_w * (uint)DAT_001c7ab9 >> 4;
    if (uVar4 < 0x10000) {
      uVar4 = uVar4 & 0xffff;
    }
    else {
      uVar4 = 0xffff;
    }
    if (((B_ribeh == '\0') || (uVar4 <= rinofh_w)) && (rinh_w != _DAT_003fb032)) {
      B_enrinh = 0;
    }
    else {
      B_enrinh = 1;
      wVar3 = rinofh_w;
      if (_DAT_001c7ac2 < rinofh_w) {
        wVar3 = _DAT_001c7ac2;
      }
      uVar4 = func_0xff217f20(_DAT_001c7ad2,wVar3,_DAT_003fb02c,_DAT_003fb02c & 0xffff);
      _DAT_003fb02c = (word)(uVar4 >> 0x10);
      rinh_w = _DAT_003fb02c;
      _DAT_003fb02c = uVar4;
    }
    if (B_sa != '\0') {
      zriberh = 0;
    }
    if (((DAT_003fb01d >> 6 & 1) == 0) || ((DAT_003fb01c & 1) != 0)) {
      if (zrinh_w == 0) {
        DAT_003fb01d = DAT_003fb01d & 0xdf | 0x20;
      }
      else {
        zrinh_w = zrinh_w - 1;
      }
    }
    else {
      zrinh_w = _DAT_001c7ac8;
      DAT_003fb01d = DAT_003fb01d & 0xdf;
    }
    DAT_003fb01c = DAT_003fb01d >> 6 & 1 | DAT_003fb01c & 0xfe;
    if ((DAT_003fb01d >> 5 & 1) == 0) {
      if (((DAT_003fb01d >> 6 & 1) != 0) && (DAT_001c7ab8 < zriberh)) {
        B_rinh = 1;
      }
    }
    else {
      B_rinh = 0;
    }
    if (B_ribeh != '\0') {
      B_rireh = 1;
    }
  }
  if (B_lsh2 == '\0') {
    rinh2_w = 0;
    B_rinh2 = 0;
  }
  else {
    usobh2_w = ushob2_w;
    usbeh2_w = ushmb2_w;
    if (B_ribeh2 == '\0') {
      B_erinofh2 = 0;
      DAT_003fb039 = DAT_003fb039 & 0xbf;
    }
    else {
      iVar2 = (uint)ushmb2_w - (uint)ushob2_w;
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
      else if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
      if ((short)iVar2 < 1) {
        B_erinofh2 = 0;
        DAT_003fb039 = DAT_003fb039 & 0xbf;
      }
      else {
        B_erinofh2 = 1;
        DAT_003fb039 = DAT_003fb039 & 0xbf | 0x40;
        uVar4 = 0x4cd - ushmb2_w;
        if ((int)uVar4 < 0) {
          uVar4 = 0;
        }
        else if (0xffff < (int)uVar4) {
          uVar4 = 0xffff;
        }
        uVar1 = (int)(short)iVar2 << 0xc;
        local_28 = (undefined2)(uVar1 >> 0x10);
        uVar4 = func_0xff217b40(local_28,uVar1 & 0xffff,uVar4 & 0xffff);
        uVar4 = (uVar4 & 0xffff) * (uint)_DAT_001c7ac0;
        if (uVar4 < 0x10000000) {
          uVar4 = uVar4 >> 0xc;
        }
        else {
          uVar4 = 0xffff;
        }
        uVar1 = (uint)_DAT_001c7ac4 - (uVar4 & 0xffff);
        if ((int)uVar1 < 0) {
          uVar1 = 0;
        }
        else if (0xffff < (int)uVar1) {
          uVar1 = 0xffff;
        }
        uVar4 = (uint)_DAT_001c7ac4 * (uVar4 & 0xffff);
        rinofha2_w = rinofh2_w;
        local_28 = (undefined2)(uVar4 >> 0x10);
        rinofh2_w = func_0xff217b40(local_28,uVar4 & 0xffff,uVar1 & 0xffff);
        _DAT_003fb04a = _DAT_003fb048;
        _DAT_003fb048 = rinh2_w;
        if (zriberh2 != 0xff) {
          zriberh2 = zriberh2 + 1;
        }
      }
    }
    uVar4 = (uint)rinofha2_w * (uint)DAT_001c7ab9 >> 4;
    if (uVar4 < 0x10000) {
      uVar4 = uVar4 & 0xffff;
    }
    else {
      uVar4 = 0xffff;
    }
    if (((B_ribeh2 == '\0') || (uVar4 <= rinofh2_w)) && (rinh2_w != _DAT_003fb04a)) {
      B_enrinh2 = 0;
    }
    else {
      B_enrinh2 = 1;
      wVar3 = rinofh2_w;
      if (_DAT_001c7ac2 < rinofh2_w) {
        wVar3 = _DAT_001c7ac2;
      }
      uVar4 = func_0xff217f20(_DAT_001c7ad2,wVar3,_DAT_003fb044,_DAT_003fb044 & 0xffff);
      _DAT_003fb044 = (word)(uVar4 >> 0x10);
      rinh2_w = _DAT_003fb044;
      _DAT_003fb044 = uVar4;
    }
    if (B_sa != '\0') {
      zriberh2 = 0;
    }
    if (((DAT_003fb039 >> 6 & 1) == 0) || ((DAT_003fb038 & 1) != 0)) {
      if (zrinh2_w == 0) {
        DAT_003fb039 = DAT_003fb039 & 0xdf | 0x20;
      }
      else {
        zrinh2_w = zrinh2_w - 1;
      }
    }
    else {
      zrinh2_w = _DAT_001c7ac8;
      DAT_003fb039 = DAT_003fb039 & 0xdf;
    }
    DAT_003fb038 = DAT_003fb039 >> 6 & 1 | DAT_003fb038 & 0xfe;
    if ((DAT_003fb039 >> 5 & 1) == 0) {
      if (((DAT_003fb039 >> 6 & 1) != 0) && (DAT_001c7ab8 < zriberh2)) {
        B_rinh2 = 1;
      }
    }
    else {
      B_rinh2 = 0;
    }
    if (B_ribeh2 != '\0') {
      B_rireh2 = 1;
    }
  }
  return;
}

