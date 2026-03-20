/*
 * Program: n42.bin
 * Function: FUN_000cf2f0
 * Entry: 000cf2f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000cfa4c) */
/* WARNING: Removing unreachable block (ram,0x000cf6b8) */
/* WARNING: Removing unreachable block (ram,0x000cf9d0) */
/* WARNING: Removing unreachable block (ram,0x000cfad4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cf2f0(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined uStack_20;
  char local_1f;
  
  if (B_stend != '\0') {
    B_dvetv = '\x01';
  }
  if (((((B_dvete != '\0') && (B_dvetv == '\0')) && (B_wdk2sel == '\0')) &&
      ((UAN_U_MT <= tmot && (tmot <= UAN_O_MT)))) && (UANUATS <= tans)) {
    uVar2 = (uint)_UDKP1AURI - (uint)udkp1as_w;
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    else if (0xffff < (int)uVar2) {
      uVar2 = 0xffff;
    }
    if ((uint)wdks_w < (uVar2 & 0xffff) * (uint)dkpstg_w >> 0xb) {
      B_dvetv = '\x01';
      B_fprordy = '\0';
      B_fprrdy = '\0';
      B_fprovb = '\0';
      B_fprzvb = '\0';
      B_fprook = 0;
      B_fprzok = 0;
      fprstep_c = 0;
      fprtim_c = 0;
      B_lrnfg = 0;
      B_lrnvb = 0;
      B_lrnrdy = '\0';
      BGDVEintbits = BGDVEintbits & 0xfd;
      B_nlpnew = 1;
      lrnstep_c = 0;
      lrntim_c = 0;
      dveadchst = 0;
      lrnstat = 0x10;
      B_dveada = 1;
    }
  }
  FUN_0009b900(9,1,&uStack_20);
  B_ESrdy = local_1f;
  bVar1 = lrnstat;
  if ((B_fprrdy == '\0') && (local_1f != '\0')) {
    if ((B_dkpiu == '\0') && ((B_dknolu == '\0' && (B_i_ska_um == '\0')))) {
      if (UANVFZG < vfzg) {
        dveadchst = 5;
        goto LAB_000cf604;
      }
      if (FPRNMAX < nmotll) {
        dveadchst = 6;
        B_fprzvb = '\x01';
      }
      else if (B_wdk2sel == '\0') {
        if (B_ubdve == '\0') {
          dveadchst = 9;
          B_fprzvb = '\x01';
        }
        else if (tmot < FPRMT) {
          dveadchst = 7;
          B_fprzvb = '\x01';
        }
        else if (tans < FPRAT) {
          dveadchst = 8;
          B_fprzvb = '\x01';
        }
      }
      else {
        dveadchst = 4;
        B_fprzvb = '\x01';
      }
    }
    else {
      dveadchst = 1;
LAB_000cf604:
      B_fprzvb = '\x01';
    }
    if (B_fprzvb == '\0') {
      if (fprstep_c == 0) {
        B_fprakt = 1;
        uVar2 = (uint)wdknlp_w + (uint)_WDKSFPR;
        if (0xffff < uVar2) {
          uVar2 = 0xffff;
        }
        wdkada_w = (word)uVar2;
        B_dkaden = 1;
        fprstep_c = 1;
        fprtim_c = fprtim_c + 1;
        bVar1 = lrnstat & 0xf0 | 1;
      }
      else if (fprstep_c == 1) {
        if (fprtim_c < FPRTIM1_T) {
          fprtim_c = fprtim_c + 1;
          bVar1 = lrnstat & 0xf0 | 3;
          if ((short)((wdknlp_w >> 4) + (_WDKFPRZ1 >> 4)) <= _wdkba_w) {
            B_dcdisr = 1;
            fprstep_c = 2;
            bVar1 = lrnstat & 0xf0 | 4;
          }
        }
        else {
          B_fprze = 1;
          B_dcdisr = 0;
          B_nlpreq = '\0';
          wdknlp_w = _wdknlpr_w;
          B_fprrdy = '\x01';
          B_fprakt = 0;
          B_dveada = 0;
          B_dkaden = 0;
          wdkada_w = 0;
          bVar1 = lrnstat | 0x20;
        }
      }
      else if (fprstep_c == 2) {
        if (fprtim_c < FPRTIM2_T) {
          if (_wdkba_w < (short)((wdknlp_w >> 4) + (_WDKFPRZ2 >> 4))) {
            B_fprzok = 1;
            B_fprakt = 0;
            if (((B_eepwf == '\0') && (B_nlpreq == '\0')) && ((BGDVEintbits >> 1 & 1) != 0)) {
              fprstep_c = 4;
            }
            else {
              fprstep_c = 3;
              bVar1 = lrnstat & 0xf0 | 2;
            }
          }
          else {
            fprtim_c = fprtim_c + 1;
          }
        }
        else {
          B_fprze = 1;
          B_fprzab = 1;
          B_dcdisr = 0;
          B_nlpreq = '\0';
          wdknlp_w = _wdknlpr_w;
          B_fprrdy = '\x01';
          B_fprakt = 0;
          B_dveada = 0;
          B_dkaden = 0;
          wdkada_w = 0;
          bVar1 = lrnstat | 0x20;
        }
      }
      else if (fprstep_c == 3) {
        uVar2 = (uint)nlp1tim;
        if (uVar2 < NLPST1T) {
          nlp1tim = nlp1tim + 1;
        }
        else {
          if (NLPST1T == uVar2) {
            udknlp1 = udkp1_w;
            udknlp2 = udkp2_w;
          }
          uVar3 = (uint)NLPST1T + (uint)NLPST2T;
          if (0xff < uVar3) {
            uVar3 = 0xff;
          }
          if (uVar2 < (uVar3 & 0xff)) {
            udknlp1 = (word)((int)((uint)udknlp1 + (uint)udkp1_w) >> 1);
            udknlp2 = (word)((int)((uint)udknlp2 + (uint)udkp2_w) >> 1);
            nlp1tim = nlp1tim + 1;
          }
          else {
            uVar2 = (uint)_udknlp1r - (uint)_DUDKNLPU;
            if ((int)uVar2 < 0) {
              uVar2 = 0;
            }
            else if (0xffff < (int)uVar2) {
              uVar2 = 0xffff;
            }
            if ((uint)udknlp1 < (uVar2 & 0xffff)) {
LAB_000cfb00:
              B_nlpnew = 1;
              BGDVEintbits = BGDVEintbits & 0xfd;
              wdknlp_w = _WDKNLPMI;
              lrnstat = lrnstat | 0x10;
            }
            else {
              uVar2 = (uint)_udknlp1r + (uint)_DUDKNLPO;
              if (0xffff < uVar2) {
                uVar2 = 0xffff;
              }
              if ((uVar2 & 0xffff) < (uint)udknlp1) goto LAB_000cfb00;
              uVar2 = (uint)_udknlp2r - (uint)_DUDKNLPO;
              if ((int)uVar2 < 0) {
                uVar2 = 0;
              }
              else if (0xffff < (int)uVar2) {
                uVar2 = 0xffff;
              }
              if ((uint)udknlp2 < (uVar2 & 0xffff)) goto LAB_000cfb00;
              uVar2 = (uint)_udknlp2r + (uint)_DUDKNLPU;
              if (0xffff < uVar2) {
                uVar2 = 0xffff;
              }
              if ((uVar2 & 0xffff) < (uint)udknlp2) goto LAB_000cfb00;
              wdknlp_w = _wdknlpr_w;
              B_dveada = 0;
            }
            nlp1tim = 0;
            B_nlpreq = '\0';
            fprstep_c = 4;
            bVar1 = lrnstat;
          }
        }
      }
      else if (fprstep_c == 4) {
        B_dcdisr = 0;
        B_nlpreq = '\0';
        B_fprrdy = '\x01';
        B_dkaden = 0;
        wdkada_w = 0;
      }
    }
    else {
      B_dcdisr = 0;
      B_nlpreq = '\0';
      wdknlp_w = _wdknlpr_w;
      B_fprrdy = '\x01';
      B_fprakt = 0;
      B_dveada = 0;
      B_dkaden = 0;
      wdkada_w = 0;
      bVar1 = lrnstat | 0x40;
    }
  }
  lrnstat = bVar1;
  if (CWDVEFO == '\0') {
    if (B_lrnrdy == '\0') {
      return;
    }
    if (lrnstep_c < 10) {
      return;
    }
    B_fprordy = 1;
    lrnstat = lrnstat & 0xf0 | 8;
    return;
  }
  if (B_lrnrdy == '\0') {
    return;
  }
  if (lrnstep_c < 10) {
    return;
  }
  if (B_fprordy != '\0') {
    return;
  }
  if (((B_dkpiu == '\0') && (B_dknolu == '\0')) && ((B_i_ska_um == '\0' && (B_wdk2sel == '\0')))) {
    if (vfzg <= UANVFZG) {
      if (FPRNMAX < nmotll) {
        dveadchst = 0x2d;
        B_fprovb = '\x01';
      }
      else if (tmot < FPRMT) {
        dveadchst = 0x2e;
        B_fprovb = '\x01';
      }
      else if (tans < FPRAT) {
        dveadchst = 0x2f;
        B_fprovb = '\x01';
      }
      goto LAB_000cfd54;
    }
    dveadchst = 0x2c;
  }
  else {
    dveadchst = 0x28;
  }
  B_fprovb = '\x01';
LAB_000cfd54:
  if (B_fprovb == '\0') {
    if (fprstep_c == 4) {
      B_fprakt = 1;
      wdkada_w = _WDKSFPRO;
      B_dkaden = 1;
      fprstep_c = 5;
      fprtim_c = 1;
      lrnstat = lrnstat & 0xf0 | 7;
    }
    else if (fprstep_c == 5) {
      if (fprtim_c < FPRTIM3_T) {
        fprtim_c = fprtim_c + 1;
        if ((_WDKFPROU <= _wdkba_w) && (_wdkba_w <= _WDKFPROO)) {
          B_dcdisr = 1;
          fprstep_c = 6;
        }
      }
      else {
        B_fproe = 1;
        lrnstat = lrnstat | 0x20;
        B_dcdisr = 0;
        B_fprordy = '\x01';
        B_fprakt = 0;
        B_dkaden = 0;
        wdkada_w = 0;
      }
    }
    else if (fprstep_c == 6) {
      if (fprtim_c < FPRTIM4_T) {
        iVar4 = (uint)(wdknlp_w >> 4) - (int)_WDKFPRO2;
        if (iVar4 < -0x8000) {
          iVar4 = -0x8000;
        }
        else if (0x7fff < iVar4) {
          iVar4 = 0x7fff;
        }
        if ((short)iVar4 < _wdkba_w) {
          B_fprook = 1;
          B_fprakt = 0;
          B_dcdisr = 0;
          B_fprordy = '\x01';
          B_dkaden = 0;
          wdkada_w = 0;
          lrnstat = lrnstat & 0xf0 | 8;
        }
        else {
          fprtim_c = fprtim_c + 1;
        }
      }
      else {
        B_fproe = 1;
        B_fproab = 1;
        lrnstat = lrnstat | 0x20;
        B_dcdisr = 0;
        B_fprordy = '\x01';
        B_fprakt = 0;
        B_dkaden = 0;
        wdkada_w = 0;
      }
    }
  }
  else {
    lrnstat = lrnstat | 0x40;
    B_dcdisr = 0;
    B_fprordy = '\x01';
    B_fprakt = 0;
    B_dkaden = 0;
    wdkada_w = 0;
  }
  return;
}

