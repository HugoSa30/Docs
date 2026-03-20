/*
 * Program: n42.bin
 * Function: FUN_00160b00
 * Entry: 00160b00
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00160e24) */
/* WARNING: Removing unreachable block (ram,0x001614d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00160b00(void)

{
  uint uVar1;
  int iVar2;
  ushort local_40;
  ushort local_3c;
  ushort local_38 [2];
  ushort local_34 [2];
  ushort *local_30;
  ushort local_2c [2];
  ushort *local_28;
  
  local_40 = _B_belsh;
  local_3c = _sfplsh2;
  if (B_falsh == '\0') {
    lamelsh_w = 0x1000;
  }
  else {
    iVar2 = 0x1000 - (uint)_DLAMELSH;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0xffff < iVar2) {
      iVar2 = 0xffff;
    }
    lamelsh_w = (word)iVar2;
  }
  if (B_falsh2 == '\0') {
    lamelsh2_w = 0x1000;
  }
  else {
    iVar2 = 0x1000 - (uint)_DLAMELSH;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0xffff < iVar2) {
      iVar2 = 0xffff;
    }
    lamelsh2_w = (word)iVar2;
  }
  if ((B_falsh == '\0') && (B_falsh2 == '\0')) {
    dmrlsh_w = 0;
  }
  else {
    dmrlsh_w = _DMRLSH;
  }
  if ((B_cdswe & B_cdtankl) == 0) {
    local_40 = _B_belsh & 0xd0fc | 0x2002;
    local_3c = _sfplsh2 & 0xd0fc | 0x2002;
    goto LAB_001619f8;
  }
  if (B_lsh == '\0') {
    local_40 = _B_belsh & 0xf0fe;
LAB_0016132c:
    local_40 = local_40 & 0xdffd | 0x2002;
  }
  else {
    if ((B_hsha == '\0') || (tahsom_w < _TAMDUGH)) {
      B_ttbmhh = 0;
      DAT_005bb976 = _TTBMH;
    }
    else if (DAT_005bb976 == 0) {
      B_ttbmhh = 1;
    }
    else {
      DAT_005bb976 = DAT_005bb976 + -1;
    }
    if ((B_zlshv & B_noadsh) ==
        ~(B_noadsh|B_uhsig|B_zlshv|B_elshv|B_noadsh2|B_uhsig2|B_zlshv2|B_elshv2)) {
      if ((DAT_003f9cd0 & 2) != 0) {
        B_adsh = B_adsh | 4;
      }
    }
    else {
      B_adsh = B_adsh & 0xfb;
    }
    if ((B_adsh & 4) != 0) {
      B_adsh = B_adsh | 0x10;
    }
    if ((B_adsh & 0x10) == 0) {
      DAT_003f9cd1 = DAT_003f9cd1 & 0xfb;
      DAT_005bb97a = _TUSTAL;
    }
    else if (DAT_005bb97a == 0) {
      DAT_003f9cd1 = DAT_003f9cd1 | 4;
    }
    else {
      DAT_005bb97a = DAT_005bb97a + -1;
    }
    if ((B_zlshv & B_uhsig) ==
        ~(B_noadsh|B_uhsig|B_zlshv|B_elshv|B_noadsh2|B_uhsig2|B_zlshv2|B_elshv2)) {
      B_adsh = B_adsh & 0xfe;
      DAT_005bb974 = 0;
    }
    else {
      uVar1 = DAT_005bb974 + 1;
      if (0xffff < uVar1) {
        uVar1 = 0xffff;
      }
      DAT_005bb974 = (ushort)uVar1;
      if (B_falsh == '\0') {
        if ((uint)_TRSAH <= (uVar1 & 0xffff)) {
          B_adsh = B_adsh | 1;
        }
      }
      else if ((uint)_TRSAFA <= (uVar1 & 0xffff)) {
        B_adsh = B_adsh | 1;
      }
    }
    if ((B_hsha == '\0') ||
       ((_DAT_001c1c0a < ushk_w && ((ushk_w < _DAT_001c1c08 || (_DAT_001c1c04 < ushk_w)))))) {
      DAT_003f9cd1 = DAT_003f9cd1 & 0xfd;
      DAT_005bb916 = TRSE;
    }
    else if (DAT_005bb916 == '\0') {
      DAT_003f9cd1 = DAT_003f9cd1 | 2;
    }
    else {
      DAT_005bb916 = DAT_005bb916 + -1;
    }
    if (rinh_w < _RISIGRESH) {
      B_risigh = '\0';
    }
    else if ((_DRISIGH < rinh_w) && (_TAMSIGH < tahsom_w)) {
      B_risigh = '\x01';
    }
    if (B_atmtpk == '\0') {
      DAT_003f9cd1 = DAT_003f9cd1 & 0xf7;
      DAT_005bb978 = _TUSEHKH;
    }
    else if (DAT_005bb978 == 0) {
      DAT_003f9cd1 = DAT_003f9cd1 | 8;
    }
    else {
      DAT_005bb978 = DAT_005bb978 + -1;
    }
    if ((DAT_003f9cd0 & 1) == 0) {
      B_adsh = B_adsh & 0xbf;
      DAT_005bb917 = TUSMAX;
    }
    else if (DAT_005bb917 == '\0') {
      B_adsh = B_adsh | 0x40;
    }
    else {
      DAT_005bb917 = DAT_005bb917 + -1;
    }
    if (B_dshen == '\0') {
      B_maxflsh2 = B_maxflsh2 & (B_maxflsh2|B_minflsh2|B_sigflsh2|B_nplflsh2);
    }
    else {
      if ((B_adsh & 0x40) == 0) {
        B_maxflsh2 = B_maxflsh2 &
                     (B_maxflsh2|B_minflsh|B_minflsh2|B_sigflsh|B_sigflsh2|B_nplflsh|B_nplflsh2);
      }
      else {
        B_maxflsh2 = B_maxflsh2 | B_maxflsh;
      }
      if (((B_adsh & 4) == 0) ||
         (((DAT_003f9cd1 & 4) == 0 && ((DAT_003fc1c7 != '\0' || (DAT_003fc1c8 == '\0')))))) {
        B_maxflsh2 = B_maxflsh2 &
                     (B_maxflsh|B_maxflsh2|B_minflsh2|B_sigflsh|B_sigflsh2|B_nplflsh|B_nplflsh2);
      }
      else {
        B_maxflsh2 = B_maxflsh2 | B_minflsh;
      }
      if (B_hzkfh == '\0') {
        B_maxflsh2 = B_maxflsh2 &
                     (B_maxflsh|B_maxflsh2|B_minflsh|B_minflsh2|B_sigflsh|B_sigflsh2|B_nplflsh2);
      }
      else {
        B_maxflsh2 = B_maxflsh2 | B_nplflsh;
      }
      if ((B_risigh == '\0') && ((B_adsh & 1) == 0)) {
        B_maxflsh2 = B_maxflsh2 &
                     (B_maxflsh|B_maxflsh2|B_minflsh|B_minflsh2|B_sigflsh2|B_nplflsh|B_nplflsh2);
      }
      else {
        B_maxflsh2 = B_maxflsh2 | B_sigflsh;
      }
    }
    if (B_nolsh == '\0') {
      if ((B_maxflsh2 & B_maxflsh) !=
          ~(B_maxflsh|B_maxflsh2|B_minflsh|B_minflsh2|B_sigflsh|B_sigflsh2|B_nplflsh|B_nplflsh2)) {
        local_40 = _B_belsh & 0xf0fe | 0x101;
        goto LAB_0016132c;
      }
      if ((B_maxflsh2 & B_minflsh) ==
          ~(B_maxflsh|B_maxflsh2|B_minflsh|B_minflsh2|B_sigflsh|B_sigflsh2|B_nplflsh|B_nplflsh2)) {
        if ((B_maxflsh2 & B_sigflsh) ==
            ~(B_maxflsh|B_maxflsh2|B_minflsh|B_minflsh2|B_sigflsh|B_sigflsh2|B_nplflsh|B_nplflsh2))
        {
          if ((B_maxflsh2 & B_nplflsh) !=
              ~(B_maxflsh|B_maxflsh2|B_minflsh|B_minflsh2|B_sigflsh|B_sigflsh2|B_nplflsh|B_nplflsh2)
             ) {
            local_40 = _B_belsh & 0xd0fc | 0x2803;
          }
        }
        else {
          local_40 = _B_belsh & 0xd0fc | 0x2403;
        }
      }
      else {
        local_40 = _B_belsh & 0xd0fc | 0x2203;
      }
    }
    else {
      local_40 = _B_belsh & 0xd0fc | 0x2002;
    }
  }
  if (B_lsh2 == '\0') {
    local_3c = _sfplsh2 & 0xf0fe;
  }
  else {
    if ((B_hsha2 == '\0') || (tahsom2_w < _TAMDUGH)) {
      B_ttbmhh2 = 0;
      DAT_005bb97e = _TTBMH;
    }
    else if (DAT_005bb97e == 0) {
      B_ttbmhh2 = 1;
    }
    else {
      DAT_005bb97e = DAT_005bb97e + -1;
    }
    if ((B_zlshv & B_noadsh2) ==
        ~(B_noadsh|B_uhsig|B_zlshv|B_elshv|B_noadsh2|B_uhsig2|B_zlshv2|B_elshv2)) {
      if ((DAT_003f9cd0 & 0x10) != 0) {
        B_adsh = B_adsh | 8;
      }
    }
    else {
      B_adsh = B_adsh & 0xf7;
    }
    if ((B_adsh & 8) != 0) {
      B_adsh = B_adsh | 0x20;
    }
    if ((B_adsh & 0x20) == 0) {
      DAT_003f9cd1 = DAT_003f9cd1 & 0xbf;
      DAT_005bb982 = _TUSTAL;
    }
    else if (DAT_005bb982 == 0) {
      DAT_003f9cd1 = DAT_003f9cd1 | 0x40;
    }
    else {
      DAT_005bb982 = DAT_005bb982 + -1;
    }
    if ((B_zlshv & B_uhsig2) ==
        ~(B_noadsh|B_uhsig|B_zlshv|B_elshv|B_noadsh2|B_uhsig2|B_zlshv2|B_elshv2)) {
      B_adsh = B_adsh & 0xfd;
      DAT_005bb97c = 0;
    }
    else {
      uVar1 = DAT_005bb97c + 1;
      if (0xffff < uVar1) {
        uVar1 = 0xffff;
      }
      DAT_005bb97c = (ushort)uVar1;
      if (B_falsh2 == '\0') {
        if ((uint)_TRSAH <= (uVar1 & 0xffff)) {
          B_adsh = B_adsh | 2;
        }
      }
      else if ((uint)_TRSAFA <= (uVar1 & 0xffff)) {
        B_adsh = B_adsh | 2;
      }
    }
    if ((B_hsha2 == '\0') ||
       ((_DAT_001c1c0a < ushk2_w && ((ushk2_w < _DAT_001c1c08 || (_DAT_001c1c04 < ushk2_w)))))) {
      DAT_003f9cd1 = DAT_003f9cd1 & 0xdf;
      DAT_005bb918 = TRSE;
    }
    else if (DAT_005bb918 == '\0') {
      DAT_003f9cd1 = DAT_003f9cd1 | 0x20;
    }
    else {
      DAT_005bb918 = DAT_005bb918 + -1;
    }
    if (rinh2_w < _RISIGRESH) {
      B_risigh2 = '\0';
    }
    else if ((_DRISIGH < rinh2_w) && (_TAMSIGH < tahsom2_w)) {
      B_risigh2 = '\x01';
    }
    if (B_atmtpk2 == '\0') {
      DAT_003f9cd1 = DAT_003f9cd1 & 0x7f;
      DAT_005bb980 = _TUSEHKH;
    }
    else if (DAT_005bb980 == 0) {
      DAT_003f9cd1 = DAT_003f9cd1 | 0x80;
    }
    else {
      DAT_005bb980 = DAT_005bb980 + -1;
    }
    if ((DAT_003f9cd0 & 8) == 0) {
      B_adsh = B_adsh & 0x7f;
      DAT_005bb919 = TUSMAX;
    }
    else if (DAT_005bb919 == '\0') {
      B_adsh = B_adsh | 0x80;
    }
    else {
      DAT_005bb919 = DAT_005bb919 + -1;
    }
    if (B_dshen2 == '\0') {
      B_maxflsh2 = B_maxflsh2 & (B_maxflsh|B_minflsh|B_sigflsh|B_nplflsh);
    }
    else {
      if ((B_adsh & 0x80) == 0) {
        B_maxflsh2 = B_maxflsh2 &
                     (B_maxflsh|B_minflsh|B_minflsh2|B_sigflsh|B_sigflsh2|B_nplflsh|B_nplflsh2);
      }
      else {
        B_maxflsh2 = B_maxflsh2 | B_maxflsh2;
      }
      if (((B_adsh & 8) == 0) ||
         (((DAT_003f9cd1 & 0x40) == 0 && ((DAT_003fc1c7 != '\0' || (DAT_003fc1c8 == '\0')))))) {
        B_maxflsh2 = B_maxflsh2 &
                     (B_maxflsh|B_maxflsh2|B_minflsh|B_sigflsh|B_sigflsh2|B_nplflsh|B_nplflsh2);
      }
      else {
        B_maxflsh2 = B_maxflsh2 | B_minflsh2;
      }
      if ((B_risigh2 == '\0') && ((B_adsh & 2) == 0)) {
        B_maxflsh2 = B_maxflsh2 &
                     (B_maxflsh|B_maxflsh2|B_minflsh|B_minflsh2|B_sigflsh|B_nplflsh|B_nplflsh2);
      }
      else {
        B_maxflsh2 = B_maxflsh2 | B_sigflsh2;
      }
      if (B_hzkfh2 == '\0') {
        B_maxflsh2 = B_maxflsh2 &
                     (B_maxflsh|B_maxflsh2|B_minflsh|B_minflsh2|B_sigflsh|B_sigflsh2|B_nplflsh);
      }
      else {
        B_maxflsh2 = B_maxflsh2 | B_nplflsh2;
      }
    }
    if (B_nolsh2 != '\0') {
      local_3c = _sfplsh2 & 0xd0fc | 0x2002;
      goto LAB_001619f8;
    }
    if ((B_maxflsh2 & B_maxflsh2) ==
        ~(B_maxflsh|B_maxflsh2|B_minflsh|B_minflsh2|B_sigflsh|B_sigflsh2|B_nplflsh|B_nplflsh2)) {
      if ((B_maxflsh2 & B_minflsh2) ==
          ~(B_maxflsh|B_maxflsh2|B_minflsh|B_minflsh2|B_sigflsh|B_sigflsh2|B_nplflsh|B_nplflsh2)) {
        if ((B_maxflsh2 & B_sigflsh2) ==
            ~(B_maxflsh|B_maxflsh2|B_minflsh|B_minflsh2|B_sigflsh|B_sigflsh2|B_nplflsh|B_nplflsh2))
        {
          if ((B_maxflsh2 & B_nplflsh2) !=
              ~(B_maxflsh|B_maxflsh2|B_minflsh|B_minflsh2|B_sigflsh|B_sigflsh2|B_nplflsh|B_nplflsh2)
             ) {
            local_3c = _sfplsh2 & 0xd0fc | 0x2803;
          }
        }
        else {
          local_3c = _sfplsh2 & 0xd0fc | 0x2403;
        }
      }
      else {
        local_3c = _sfplsh2 & 0xd0fc | 0x2203;
      }
      goto LAB_001619f8;
    }
    local_3c = _sfplsh2 & 0xf0fe | 0x101;
  }
  local_3c = local_3c & 0xdffd | 0x2002;
LAB_001619f8:
  local_38[0] = local_40;
  local_34[0] = local_40;
  local_30 = local_38;
  func_0xff222958(0x7c,local_34);
  local_38[0] = local_3c;
  local_2c[0] = local_3c;
  local_28 = local_38;
  func_0xff222958(0x7d,local_2c);
  return;
}

