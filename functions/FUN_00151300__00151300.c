/*
 * Program: n42.bin
 * Function: FUN_00151300
 * Entry: 00151300
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00151300(void)

{
  byte bVar1;
  ushort local_38;
  ushort local_34 [2];
  ushort local_30 [2];
  ushort *local_2c;
  
  local_38 = _B_bellr;
  if ((B_cdswe & B_cdswe) == 0) {
    DAT_003fb315 = DAT_003fb315 & 0xef;
  }
  else if ((((((B_nswo1 == '\0') && ((DAT_003fdfdf & 1) == 0)) && ((DAT_003fdfdf >> 1 & 1) != 0)) &&
            (((B_dkpu == '\0' && (B_dknolu == '\0')) &&
             (((DAT_003fdfc1 & 1) == 0 && (((DAT_003fdfb7 & 1) == 0 && ((DAT_003fdfb9 & 1) == 0)))))
             ))) && ((DAT_003fdfbb & 1) == 0)) &&
          (((((B_nldg == '\0' && (vfzg == 0)) && (TMDLLR < tmot)) &&
            ((TADLLR < tans && (FHDLLR < fho)))) &&
           ((B_ll != '\0' && ((B_st == '\0' && (B_dsls == '\0')))))))) {
    DAT_003fb315 = DAT_003fb315 & 0xef | 0x10;
  }
  else {
    DAT_003fb315 = DAT_003fb315 & 0xef;
  }
  bVar1 = DAT_003fb315 >> 4 & 1;
  if (bVar1 == 0) {
    B_lldia = '\0';
  }
  else if (((B_nmot == '\0') || (B_tehb != '\0')) || (B_dtes != '\0')) {
    B_lldia = '\0';
  }
  else {
    B_lldia = '\x01';
  }
                    /* WARNING: Read-only address (ram,0x003fdf57) is written */
  if (bVar1 == 0) {
    B_dllra = 0;
  }
  else if ((((B_lrar == '\0') && ((DAT_003fdfb9 >> 1 & 1) != 0)) && ((DAT_003fdfb9 & 1) == 0)) ||
          ((((DAT_003fdf57 >> 1 & 1) != 0 || (B_llr == '\0')) ||
           ((_TFDLLRO <= tnse_w || (tnse_w <= _TFDLLRU)))))) {
    B_dllra = 0;
  }
  else {
    B_dllra = 1;
  }
  if (B_lldia == '\0') {
    B_nollrflr = '\0';
    B_dllr = '\0';
    DAT_003fb310 = 0;
    _DAT_003fb30e = 0;
    _DAT_003fb30c = 0;
    _DAT_003fb308 = 0;
  }
  else {
    if ((((rl < RLDLLR) && ((B_silm & 1) == 0)) && (DNDLLRO < (char)dns)) && (dmllri_w == limax_w))
    {
      DAT_003fb315 = DAT_003fb315 & 0xfd | 2;
    }
    else {
      DAT_003fb315 = DAT_003fb315 & 0xfd;
    }
    if ((DAT_003fb315 >> 1 & 1) == 0) {
      _DAT_003fb308 = 0;
    }
    else if (_DAT_003fb308 < _TDLLRMN) {
      _DAT_003fb308 = _DAT_003fb308 + 1;
    }
    else {
      local_38 = _B_bellr & 0xd0fc | 0x2203;
    }
    if (((char)dns < DNDLLRU) && (dmllri_w == limin_w)) {
      if (_DAT_003fb30a < _TDLLR) {
        _DAT_003fb30a = _DAT_003fb30a + 1;
      }
      else {
        B_dllr = '\x01';
      }
    }
    else {
      _DAT_003fb30a = 0;
    }
    if (((DAT_003fb315 >> 3 & 1) == 0) && (B_sa != 0)) {
      if (DAT_003fb310 < DASA) {
        DAT_003fb310 = DAT_003fb310 + 1;
        DAT_003fb315 = DAT_003fb315 & 0xfb;
      }
      else {
        DAT_003fb315 = DAT_003fb315 & 0xfb | 4;
      }
    }
    bVar1 = (B_sa & 1) << 3;
    if ((((B_dllr == '\0') || (DNDLLRU <= (char)dns)) || (dmllri_w != limin_w)) &&
       ((DAT_003fb315 & 4) == 0)) {
      DAT_003fb315 = bVar1 | DAT_003fb315 & 0xf6;
    }
    else {
      DAT_003fb315 = bVar1 | DAT_003fb315 & 0xf6 | 1;
    }
    if ((DAT_003fb315 & 1) == 0) {
      _DAT_003fb30c = 0;
    }
    else if (_DAT_003fb30c < _TDLLRMX) {
      _DAT_003fb30c = _DAT_003fb30c + 1;
    }
    else {
      local_38 = local_38 & 0xd0fc | 0x2103;
    }
    if (((DAT_003fb315 >> 1 & 1) == 0) && ((DAT_003fb315 & 1) == 0)) {
      if (_DAT_003fb30e < _TDLLRNF) {
        _DAT_003fb30e = _DAT_003fb30e + 1;
        B_nollrflr = '\0';
      }
      else {
        B_nollrflr = '\x01';
      }
    }
    else {
      _DAT_003fb30e = 0;
      B_nollrflr = '\0';
    }
  }
  if (B_nollrflr != '\0') {
    local_38 = local_38 & 0xd0fc | 0x2002;
  }
  local_34[0] = local_38;
  local_2c = local_34;
  local_30[0] = local_38;
  func_0xff222958(0x7a,local_30);
  return;
}

