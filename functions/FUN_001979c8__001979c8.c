/*
 * Program: n42.bin
 * Function: FUN_001979c8
 * Entry: 001979c8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00197ad8) */
/* WARNING: Removing unreachable block (ram,0x00197bb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001979c8(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (B_ubdve == '\0') {
    if (0x56 < ub) {
      B_ubdve = '\x01';
      B_ubpvg = 1;
      B_ub_ok = 1;
    }
  }
  else if (ub < 0x4a) {
    B_ubdve = '\0';
    B_ubpvg = 0;
    B_ub_ok = 0;
  }
  if (((B_dkpiu == '\0') && (B_i_ska_um == '\0')) && (B_ubdve != '\0')) {
    if ((B_dknolu == '\0') || (B_appnolu != '\0')) {
      if ((B_dkaden == '\0') && (B_pwrsv == '\0')) {
        if ((short)_gwdkdlr_w < 0) {
          if (_gwdkdlr_w == 0x8000) {
            gwdk_kge = 0x7fff;
          }
          else {
            gwdk_kge = -_gwdkdlr_w;
          }
        }
        else {
          gwdk_kge = _gwdkdlr_w;
        }
        uVar4 = func_0xff218c78(&DAT_001c7bde,gwdk_kge);
        DAT_003fb09a = (undefined)(uVar4 >> 8);
        iVar1 = (int)_wdkba_w;
        iVar2 = (int)(short)wdksfi_w;
        if (iVar1 < iVar2) {
          uVar3 = iVar2 - iVar1;
        }
        else {
          uVar3 = iVar1 - iVar2;
        }
        if ((uVar4 >> 8 & 0xff) < (uVar3 >> 4 & 0xfff)) {
          if (DAT_001c7b0d < dklagerc) {
            B_wdksive = 1;
          }
          else {
            dklagerc = dklagerc + 1;
          }
        }
        else if (DAT_001c7bba < dklagerc) {
          dklagerc = dklagerc - DAT_001c7bba;
        }
        else {
          dklagerc = 0;
        }
        uVar4 = func_0xff217f84((uint)DAT_001c7bbc * 0xb3,(int)_wdkdlr_w,(int)(short)_DAT_003fb0a0,
                                _DAT_003fb0a0 & 0xffff);
        _DAT_003fb0a0 = (word)(uVar4 >> 0x10);
        wdksfi_w = _DAT_003fb0a0;
        _DAT_003fb0a0 = uVar4;
      }
      B_nlpne = 0;
    }
    else if ((DAT_003fdead & 1) == 0) {
      uVar4 = (uint)wdknlp_w + (uint)_DAT_001c7bfe;
      if (0xffff < uVar4) {
        uVar4 = 0xffff;
      }
      if ((int)((uVar4 & 0xffff) >> 4) < (int)_wdkba_w) {
        B_nlpne = 1;
      }
      else {
        B_nlpne = 0;
      }
    }
    else if (B_wdk2sel == '\0') {
      uVar4 = (uint)udknlp1 + (uint)_DAT_001c7bfa;
      if (0xffff < uVar4) {
        uVar4 = 0xffff;
      }
      if ((uVar4 & 0xffff) < (uint)udkp1_w) {
        B_nlpne = 1;
      }
      else {
        B_nlpne = 0;
      }
    }
    else {
      uVar4 = (uint)udknlp2 - (uint)_DAT_001c7bfa;
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xffff < (int)uVar4) {
        uVar4 = 0xffff;
      }
      if ((uint)udkp2_w < (uVar4 & 0xffff)) {
        B_nlpne = 1;
      }
      else {
        B_nlpne = 0;
      }
    }
  }
  return;
}

