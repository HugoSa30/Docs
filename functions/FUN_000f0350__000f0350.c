/*
 * Program: n42.bin
 * Function: FUN_000f0350
 * Entry: 000f0350
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000f06a8) */
/* WARNING: Removing unreachable block (ram,0x000f09d4) */
/* WARNING: Removing unreachable block (ram,0x000f08c8) */
/* WARNING: Removing unreachable block (ram,0x000f084c) */
/* WARNING: Removing unreachable block (ram,0x000f0a48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f0350(void)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  
  if ((B_fprrdy == '\0') || (B_lrnrdy != '\0')) goto LAB_000f1518;
  if ((B_dkpiu == '\0') &&
     ((((B_dknolu == '\0' && (B_fprze == '\0')) && (B_i_ska_um == '\0')) && (DAT_003fbf07 == '\0')))
     ) {
    if (DAT_001c1b60 < nmotll) {
      dveadchst = 0x18;
      goto LAB_000f059c;
    }
    if (((_DAT_001c1b72 < lrnvb_c) || (B_eepwf != '\0')) ||
       (((BGDVEintbits & 1) == 0 || (((int)(uint)BGDVEintbits >> 1 & 1U) == 0)))) {
      lrnstat = lrnstat | 0x10;
      if (UANVFZG < vfzg) {
        dveadchst = 0x19;
        B_lrnvb = '\x01';
      }
      else if (wped < DAT_001c1b61) {
        if (DAT_001c1b66 < ub) {
          if ((tmot < UAN_U_MT) || (UAN_O_MT < tmot)) {
            dveadchst = 0x1c;
            B_lrnvb = '\x01';
          }
          else if (tans < UANUATS) {
            dveadchst = 0x1e;
            B_lrnvb = '\x01';
          }
          else {
            B_lrnfg = '\x01';
          }
        }
        else {
          dveadchst = 0x1b;
          B_lrnvb = '\x01';
        }
      }
      else {
        dveadchst = 0x1a;
        B_lrnvb = '\x01';
      }
    }
    else {
      lrnvb_c = lrnvb_c + 1;
    }
  }
  else {
    dveadchst = 0x14;
LAB_000f059c:
    B_lrnvb = '\x01';
  }
  if (B_lrnvb == '\0') {
    if (B_lrnfg == '\0') {
      udkp1as_w = _udkp1asr_w;
      _udkp2as_w = _udkp2asr_w;
    }
    else if (lrnstep_c == 0) {
      B_lrnakt = 1;
      udkp1as_w = _DAT_001c1b86;
      _udkp2as_w = _DAT_001c1b9a;
      wdkada_w = 0;
      B_dkaden = 1;
      B_dlrien = 1;
      lrnstep_c = 1;
      lrnstat = lrnstat & 0xf0 | 5;
    }
    else if (lrnstep_c == 1) {
      uVar1 = (uint)udkp1as_w - (uint)_DAT_001c1b7e;
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      else if (0xffff < (int)uVar1) {
        uVar1 = 0xffff;
      }
      udkp1as_w = (word)uVar1;
      uVar8 = (uint)_udkp2as_w + (uint)_DAT_001c1b7e;
      if (0xffff < uVar8) {
        uVar8 = 0xffff;
      }
      _udkp2as_w = (ushort)uVar8;
      if (0xfff < (uVar1 & 0xffff)) {
        udkp1as_w = 0xfff;
      }
      if (0xfff < (uVar8 & 0xffff)) {
        _udkp2as_w = 0xfff;
      }
      if ((B_dlrspid == '\0') && (_DAT_001c1b7a < _dlrspid_w)) {
        if (lrntim_c == 0) {
          udkp1aalt = udkp1_w;
          udkp2aalt = udkp2_w;
          lrnstat = lrnstat & 0xf0 | 6;
        }
        if (lrntim_c < DAT_001c1b58) {
          udkp1aalt = (word)((int)((uint)udkp1aalt + (uint)udkp1_w) >> 1);
          udkp2aalt = (word)((int)((uint)udkp2aalt + (uint)udkp2_w) >> 1);
          lrntim_c = lrntim_c + 1;
        }
        else {
          lrntim_c = 0;
          udkp1as_w = udkp1aalt;
          _udkp2as_w = udkp2aalt;
          if ((udkp1aalt < _DAT_001c1b88) || (_DAT_001c1b98 < udkp2aalt)) {
            B_umae = 1;
            lrnstat = lrnstat | 0x20;
            FUN_000abec0();
          }
          else {
            lrnstep_c = 2;
          }
        }
      }
    }
    else if (lrnstep_c == 2) {
      uVar1 = (uint)udkp1as_w + (uint)_DAT_001c1ba0;
      if (0xffff < uVar1) {
        uVar1 = 0xffff;
      }
      udkp1as_w = (word)uVar1;
      uVar8 = (uint)_udkp2as_w - (uint)_DAT_001c1ba0;
      if ((int)uVar8 < 0) {
        uVar8 = 0;
      }
      else if (0xffff < (int)uVar8) {
        uVar8 = 0xffff;
      }
      _udkp2as_w = (ushort)uVar8;
      uVar6 = (uint)_DAT_001c1b86 + (uint)_DAT_001c1ba0;
      if (0xffff < uVar6) {
        uVar6 = 0xffff;
      }
      if ((uVar1 & 0xffff) <= (uVar6 & 0xffff)) {
        uVar1 = (uint)_DAT_001c1b9a - (uint)_DAT_001c1ba0;
        if ((int)uVar1 < 0) {
          uVar1 = 0;
        }
        else if (0xffff < (int)uVar1) {
          uVar1 = 0xffff;
        }
        if ((uVar1 & 0xffff) <= (uVar8 & 0xffff)) {
          udkp1aalt = udkp1_w;
          lrnstep_c = 3;
          goto LAB_000f1518;
        }
      }
      B_umae = 1;
      lrnstat = lrnstat | 0x20;
      FUN_000abec0();
    }
    else if (lrnstep_c == 3) {
      if ((B_dlrspid == '\0') && (_DAT_001c1b7c < _dlrspid_w)) {
        lrntim_c = 0;
        uVar1 = (uint)wdkada_w + (uint)_DAT_001c1b78;
        if (0xffff < uVar1) {
          uVar1 = 0xffff;
        }
        wdkada_w = (word)uVar1;
      }
      else if (lrntim_c < DAT_001c1b59) {
        lrntim_c = lrntim_c + 1;
      }
      else {
        lrntim_c = 0;
        if ((uint)udkp1aalt < (uint)udkp1_w) {
          uVar1 = (uint)udkp1as_w + (uint)_DAT_001c1b9e;
          if (0xffff < uVar1) {
            uVar1 = 0xffff;
          }
          if ((uint)udkp1_w <= (uVar1 & 0xffff)) {
            lrnstep_c = 4;
            goto LAB_000f1518;
          }
        }
        B_umae = 1;
        lrnstat = lrnstat | 0x20;
        FUN_000abec0();
      }
    }
    else if (lrnstep_c == 4) {
      iVar2 = (uint)udkp1as_w - (uint)_udkp1asr_w;
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
      else if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
      uVar1 = (uint)(short)iVar2;
      if ((int)uVar1 < 0) {
        if (uVar1 == 0xffff8000) {
          uVar1 = 0x7fff;
        }
        else {
          uVar1 = (uint)(short)-(short)iVar2;
        }
      }
      if ((((uint)_DAT_001c1b80 < (uVar1 & 0xffff)) || (B_eepwf != '\0')) ||
         (((BGDVEintbits >> 1 & 1) == 0 || (B_lrntesa != '\0')))) {
        _udkp1asr_w = udkp1as_w;
        _udkp2asr_w = _udkp2as_w;
      }
      lrnstep_c = 5;
      lrnstat = lrnstat & 0xf0 | 2;
      BGDVEintbits = BGDVEintbits | 1;
    }
    else if (lrnstep_c == 5) {
      uVar1 = (uint)udknlp1 - (uint)udkp1as_w;
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      else if (0xffff < (int)uVar1) {
        uVar1 = 0xffff;
      }
      uVar1 = (uVar1 & 0xffff) * (uint)dkpstg_w >> 0xb;
      wdknlp_w = (word)uVar1;
      uVar1 = uVar1 & 0xffff;
      if ((uVar1 < _WDKNLPMI) || (_DAT_001c1bae < uVar1)) {
        wdknlp_w = _WDKNLPMI;
        B_nlpe = 1;
        lrnstat = lrnstat | 0x20;
        B_dkaden = 0;
        wdkada_w = 0;
        B_dlrien = 0;
        B_dveada = 0;
        B_lrnrdy = '\x01';
        B_lrnakt = 0;
      }
      else {
        B_nlpnew = 0;
        iVar2 = (uint)udknlp1 - (uint)_udknlp1r;
        if (iVar2 < -0x8000) {
          iVar2 = -0x8000;
        }
        else if (0x7fff < iVar2) {
          iVar2 = 0x7fff;
        }
        uVar8 = (uint)(short)iVar2;
        if (((int)uVar8 < 0) && (uVar8 = (uint)(short)-(short)iVar2, uVar8 == 0xffff8000)) {
          uVar8 = 0x7fff;
        }
        bVar7 = (byte)(uVar1 >> 8);
        if (((((uint)_DAT_001c1b80 < (uVar8 & 0xffff)) || (B_eepwf != '\0')) ||
            ((BGDVEintbits >> 1 & 1) == 0)) || (B_lrntesa != '\0')) {
          _udknlp1r = udknlp1;
          _udknlp2r = udknlp2;
          _wdknlpr_w = wdknlp_w;
          wdknlpr = bVar7;
        }
        else {
          iVar2 = uVar1 - _wdknlpr_w;
          if (iVar2 < -0x8000) {
            iVar2 = -0x8000;
          }
          else if (0x7fff < iVar2) {
            iVar2 = 0x7fff;
          }
          uVar1 = (uint)(short)iVar2;
          if (((int)uVar1 < 0) && (uVar1 = (uint)(short)-(short)iVar2, uVar1 == 0xffff8000)) {
            uVar1 = 0x7fff;
          }
          if ((uint)_DAT_001c1bb4 < (uVar1 & 0xffff)) {
            _udknlp1r = udknlp1;
            _udknlp2r = udknlp2;
            _wdknlpr_w = wdknlp_w;
            wdknlpr = bVar7;
          }
        }
        lrnstep_c = 6;
      }
    }
    else if (lrnstep_c == 6) {
      wdkvabub = 0;
      uVar1 = (uint)udkp1sv * 0x10 - (uint)udkp1as_w;
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      else if (0xffff < (int)uVar1) {
        uVar1 = 0xffff;
      }
      uVar1 = (uVar1 & 0xffff) - (uint)_DUDKP1HY;
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      else if (0xffff < (int)uVar1) {
        uVar1 = 0xffff;
      }
      uVar1 = (uVar1 & 0xffff) * (uint)(dkpstg_w >> 0xb);
      if (0xfffe < uVar1) {
        uVar1 = 0xffff;
      }
      wdkada_w = (word)uVar1;
      udkp1sv = 0;
      lrnstep_c = 7;
      wdkvabob = wdkada_w;
    }
    else if (lrnstep_c == 7) {
      if (lrntim_c < DAT_001c1b5a) {
        lrntim_c = lrntim_c + 1;
      }
      else {
        lrntim_c = 0;
        udkp1rob = udkp1_w >> 2;
        udkp1vrob = udkp1v_w;
        lrnstep_c = 8;
      }
    }
    else if (lrnstep_c == 8) {
      wdkada_w = wdkvabub;
      lrnstep_c = 9;
    }
    else if (lrnstep_c == 9) {
      if (lrntim_c < DAT_001c1b5b) {
        lrntim_c = lrntim_c + 1;
      }
      else {
        lrntim_c = 0;
        udkp1run = udkp1_w >> 2;
        udkp1vrun = udkp1v_w;
        iVar2 = (uint)udkp1v_w - (uint)udkp1vrob;
        if (iVar2 < -0x8000) {
          iVar2 = -0x8000;
        }
        else if (0x7fff < iVar2) {
          iVar2 = 0x7fff;
        }
        iVar5 = (uint)udkp1run - (uint)udkp1rob;
        if (iVar5 < -0x8000) {
          iVar5 = -0x8000;
        }
        else if (0x7fff < iVar5) {
          iVar5 = 0x7fff;
        }
        sVar3 = (short)iVar5;
        if (sVar3 == 0) {
          sVar4 = 0x7fff;
          udkp1vv_w = 0x7fff;
        }
        else {
          sVar4 = (short)((int)((uint)udkp1rob * (int)(short)iVar2) / (int)sVar3);
          udkp1vv_w = (word)(((int)(short)iVar2 << 8) / (int)sVar3);
        }
        iVar2 = (uint)udkp1vrob - (int)sVar4;
        if (iVar2 < -0x8000) {
          iVar2 = -0x8000;
        }
        else if (0x7fff < iVar2) {
          iVar2 = 0x7fff;
        }
        udkp1vo_w = (word)iVar2;
        if (((short)udkp1vo_w < _DAT_001c1b92) || (_DAT_001c1b90 < (short)udkp1vo_w)) {
          lrnstat = lrnstat | 0x20;
          B_abgle = 1;
          udkp1sv = 0;
          B_dkaden = 0;
          wdkada_w = 0;
          B_dlrien = 0;
          B_dveada = 0;
          B_lrnrdy = '\x01';
          B_lrnakt = 0;
        }
        else {
          uVar1 = (uint)udkp1vv_w;
          if ((uVar1 < _DAT_001c1b96) || (_DAT_001c1b94 < uVar1)) {
            lrnstat = lrnstat | 0x20;
            B_abgle = 1;
            udkp1sv = 0;
            B_dkaden = 0;
            wdkada_w = 0;
            B_dlrien = 0;
            B_dveada = 0;
            B_lrnrdy = '\x01';
            B_lrnakt = 0;
          }
          else {
            if ((uVar1 == 0) || (uVar1 = _UPVGNENN / uVar1, 0xffff < uVar1)) {
              uVar1 = 0xffff;
            }
            iVar2 = uVar1 - DAT_001c1b67;
            if (iVar2 < 0) {
              iVar2 = 0;
            }
            else if (0xffff < iVar2) {
              iVar2 = 0xffff;
            }
            udkp1sv = (byte)iVar2;
            _udkp1vvr = udkp1vv_w;
            DAT_003faab8 = '\0';
            DAT_003faad0 = '\0';
            BGDVEintbits = BGDVEintbits | 2;
            lrnstep_c = 10;
            _udkp1vor = udkp1vo_w;
          }
        }
      }
    }
    else if (lrnstep_c == 10) {
      if (DAT_003faab8 == '\x02') {
        lrnstep_c = 0xb;
      }
      else if (DAT_003faab8 == -0x80) {
        B_dkaden = 0;
        wdkada_w = 0;
        B_dlrien = 0;
        B_dveada = 0;
        B_lrnrdy = '\x01';
        B_lrnakt = 0;
        goto LAB_000f1518;
      }
      if (DAT_003faab8 == '\0') {
        if (DAT_003faad0 == '\0') {
          if ((BGDVEintbits & 1) == 1) {
            DAT_003faabf = DAT_003faabf & 0xfe | 1;
          }
          else {
            DAT_003faabf = DAT_003faabf & 0xfe;
          }
          if (((int)(uint)BGDVEintbits >> 2 & 1U) == 1) {
            DAT_003faabf = DAT_003faabf & 0xfd | 2;
          }
          else {
            DAT_003faabf = DAT_003faabf & 0xfd;
          }
          if (((int)(uint)BGDVEintbits >> 1 & 1U) == 1) {
            DAT_003faabf = DAT_003faabf & 0xfb | 4;
          }
          else {
            DAT_003faabf = DAT_003faabf & 0xfb;
          }
          _DAT_003faac0 = _udknlp1r;
          _DAT_003faac2 = _udkp1asr_w;
          _DAT_003faac4 = _udkp1vor;
          _DAT_003faac6 = _udkp1vvr;
          _DAT_003faac8 = _wdknlpr_w;
          _DAT_003faaca = _udknlp2r;
          _DAT_003faacc = _udkp2asr_w;
          DAT_003faad1 = FUN_000a02d0(2,0,0,0,&UNK_003faabc,&UNK_003faab0);
          if (DAT_003faad1 == '@') {
            DAT_003faab8 = '\0';
            DAT_003faad0 = DAT_003faad0 + '\x01';
          }
        }
        else if (DAT_003faad0 == '\x01') {
          DAT_003faad1 = FUN_000a02d0(2,0,0,0,&UNK_003faabc,&UNK_003faab0);
          if (DAT_003faad1 == '@') {
            DAT_003faab8 = '\0';
            DAT_003faad0 = DAT_003faad0 + '\x01';
          }
        }
        else if ((DAT_003faad0 == '\x02') &&
                (DAT_003faad1 = FUN_000a02d0(2,0,0,0,&UNK_003faabc,&UNK_003faab0),
                DAT_003faad1 == '@')) {
          B_dkaden = 0;
          wdkada_w = 0;
          B_dlrien = 0;
          B_dveada = 0;
          B_lrnrdy = '\x01';
          B_lrnakt = 0;
        }
      }
    }
    else if (lrnstep_c == 0xb) {
      B_dkaden = 0;
      wdkada_w = 0;
      B_dlrien = 0;
      B_dveada = 0;
      B_lrnrdy = '\x01';
      B_lrnakt = 0;
      lrnstat = lrnstat | 0x80;
    }
  }
  else {
    lrnstat = lrnstat | 0x40;
    FUN_000abec0();
  }
LAB_000f1518:
  udkp1a_w = udkp1as_w + udkpat_w;
  if (0xfff < udkp1a_w) {
    udkp1a_w = 0xfff;
  }
  udkp2a_w = _udkp2as_w - udkpat_w;
  if (0xfff < udkp2a_w) {
    udkp2a_w = 0xfff;
  }
  udkp1a = (byte)(udkp1a_w >> 4);
  udkp2a = (byte)(udkp2a_w >> 4);
  return;
}

