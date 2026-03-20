/*
 * Program: n42.bin
 * Function: FUN_0014e83c
 * Entry: 0014e83c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014e83c(void)

{
  undefined2 uVar1;
  uint unaff_r18;
  uint unaff_r19;
  uint uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if ((B_fa == '\0') || (B_fakvs == '\0')) {
    if (DAT_003fc19f == '\0') {
      if (B_koe == '\0') {
        if (((((_ml_w < _DAT_001d098a) || (_MLO2 < _ml_w)) || (rl < DAT_001d0969)) ||
            ((DAT_001d0966 < rl || (nmot < DAT_001d0964)))) || (DAT_001d0962 < nmot)) {
          B_frau = '\0';
        }
        else {
          B_frau = '\x01';
        }
      }
      else if (((_ml_w < _DAT_001d098c) || (_MLO2 < _ml_w)) ||
              ((rl < DAT_001d096a ||
               (((DAT_001d0966 < rl || (nmot < DAT_001d0964)) || (DAT_001d0962 < nmot)))))) {
        B_frau = '\0';
      }
      else {
        B_frau = '\x01';
      }
    }
    else if (B_koe == '\0') {
      if (((_ml_w < _DAT_001d098e) || (_MLO2 < _ml_w)) ||
         (((rl < DAT_001d0969 || ((DAT_001d0966 < rl || (nmot < DAT_001d0964)))) ||
          (DAT_001d0962 < nmot)))) {
        B_frau = '\0';
      }
      else {
        B_frau = '\x01';
      }
    }
    else if ((((_ml_w < _DAT_001d098e) || (_MLO2 < _ml_w)) || (rl < DAT_001d096a)) ||
            (((DAT_001d0966 < rl || (nmot < DAT_001d0964)) || (DAT_001d0962 < nmot)))) {
      B_frau = '\0';
    }
    else {
      B_frau = '\x01';
    }
    if (B_koe == '\0') {
      if (((rl < DAT_001d096b) || (DAT_001d0967 < rl)) ||
         ((_DAT_001d0986 < _ml_w || (nmot < DAT_001d0965)))) {
        B_rkaz = '\0';
      }
      else {
        B_rkaz = '\x01';
      }
      if ((DAT_001d0961 < nmot) || (_DAT_001d0982 < _ml_w)) {
        B_rkat = '\0';
      }
      else {
        B_rkat = '\x01';
      }
      if ((_ml_w < _MLU4) || (rl < DAT_001d096c)) {
        B_frao = '\0';
      }
      else {
        B_frao = '\x01';
      }
    }
    else {
      if ((((rl < DAT_001d096b) || (DAT_001d0968 < rl)) || (_DAT_001d0988 < _ml_w)) ||
         (nmot < DAT_001d0965)) {
        B_rkaz = '\0';
      }
      else {
        B_rkaz = '\x01';
      }
      if ((DAT_001d0961 < nmot) || (_DAT_001d0984 < _ml_w)) {
        B_rkat = '\0';
      }
      else {
        B_rkat = '\x01';
      }
      if ((_ml_w < _DAT_001c6a1a) || (rl < DAT_001d096d)) {
        B_frao = '\0';
      }
      else {
        B_frao = '\x01';
      }
    }
    if ((DAT_003fbff3 == '\0') || (tmot <= DAT_001d096e)) {
      DAT_003fbfde = '\0';
    }
    else {
      DAT_003fbfde = '\x01';
    }
    if (DAT_003fc1b3 == '\0') {
      B_norkat = DAT_001d0963 & 1;
      B_nofra = DAT_001d0963 >> 1 & 1;
      B_norkaz = DAT_001d0963 >> 2 & 1;
      DAT_003fbfe6 = DAT_001d0963 >> 5 & 1;
    }
    else {
      B_norkat = 1;
      B_nofra = 1;
      B_norkaz = 1;
      DAT_003fbfe6 = 1;
    }
    if (((DAT_001d0963 >> 3 & 1) == 0) ||
       (((B_edkvs != '\0' || (B_edkvs2 != '\0')) && ((DAT_001d0963 >> 4 & 1) == 0)))) {
      DAT_003fbfe4 = 1;
    }
    else {
      DAT_003fbfe4 = 0;
    }
    if (B_lra == '\0') {
      DAT_005b8882 = 0;
      if (DAT_003fbff3 == '\0') {
        DAT_005b8880 = 0;
      }
      else {
        iVar6 = frm_w - 0x8000;
        if (iVar6 < -0x8000) {
          iVar6 = -0x8000;
        }
        else if (0x7fff < iVar6) {
          iVar6 = 0x7fff;
        }
        DAT_005b8880 = (short)iVar6;
      }
    }
    else {
      iVar6 = frm_w - 0x8000;
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      DAT_005b8882 = (short)iVar6;
      DAT_005b8880 = DAT_005b8882;
      if (DAT_003fbff3 == '\0') {
        DAT_005b8880 = 0;
      }
    }
    if (DAT_003fbff4 == '\0') {
      uVar2 = (uint)DAT_001d095d << 8;
      uVar7 = (uint)DAT_001d095e << 8;
    }
    else {
      uVar7 = (uint)frau_w;
      uVar2 = uVar7;
      if (uVar7 < (uint)DAT_001d095d << 8) {
        uVar2 = (uint)DAT_001d095d << 8;
      }
      if (uVar2 < (uint)DAT_001d095f << 8) {
        uVar2 = uVar7;
        if (uVar7 < (uint)DAT_001d095d << 8) {
          uVar2 = (uint)DAT_001d095d << 8;
        }
      }
      else {
        uVar2 = (uint)DAT_001d095f << 8;
      }
      uVar3 = uVar7;
      if ((uint)DAT_001d095e << 8 < uVar7) {
        uVar3 = (uint)DAT_001d095e << 8;
      }
      if ((uint)DAT_001d0960 << 8 < uVar3) {
        if ((uint)DAT_001d095e << 8 < uVar7) {
          uVar7 = (uint)DAT_001d095e << 8;
        }
      }
      else {
        uVar7 = (uint)DAT_001d0960 << 8;
      }
    }
    if (B_nofra == 0) {
      if ((B_frau != '\0') || ((DAT_003fdf5f & 1) != 0)) {
        if ((DAT_003fdf5f & 1) == 0) {
          uVar1 = func_0xff2189bc(&DAT_001d09b0,DAT_003fdc59);
          _DAT_005bb9cc =
               func_0xff217dc8(uVar1,(int)DAT_005b8882,DAT_005bb9cc,_DAT_005bb9cc & 0xffff,uVar2,
                               uVar7);
        }
        else if ((DAT_001d0948 & 1) != 0) {
          if ((DAT_001d0948 >> 1 & 1) == 0) {
            iVar6 = 0x8000 - (uint)frau_w;
            if (iVar6 < -0x8000) {
              iVar6 = -0x8000;
            }
            else if (0x7fff < iVar6) {
              iVar6 = 0x7fff;
            }
            _DAT_005bb9cc =
                 func_0xff217dc8(_DAT_001d09a0,(int)(short)iVar6,DAT_005bb9cc,_DAT_005bb9cc & 0xffff
                                 ,uVar2,uVar7);
          }
          else {
            iVar6 = (uint)DAT_005b8898 - (uint)frau_w;
            if (iVar6 < -0x8000) {
              iVar6 = -0x8000;
            }
            else if (0x7fff < iVar6) {
              iVar6 = 0x7fff;
            }
            _DAT_005bb9cc =
                 func_0xff217dc8(_DAT_001d09a0,(int)(short)iVar6,DAT_005bb9cc,_DAT_005bb9cc & 0xffff
                                 ,uVar2,uVar7);
          }
        }
        frau_w = DAT_005bb9cc;
      }
    }
    else {
      _DAT_005bb9cc = 0x80000000;
      frau_w = 0x8000;
    }
    if ((frau_w < uVar7) && (uVar2 < frau_w)) {
      B_fraur = 0;
    }
    else {
      B_fraur = 1;
    }
    if (DAT_003fbff4 == '\0') {
      uVar2 = (uint)DAT_001d0957 << 8;
      uVar7 = (uint)DAT_001d0958 << 8;
    }
    else {
      uVar7 = (uint)frao_w;
      uVar2 = uVar7;
      if (uVar7 < (uint)DAT_001d0957 << 8) {
        uVar2 = (uint)DAT_001d0957 << 8;
      }
      if (uVar2 < (uint)DAT_001d0959 << 8) {
        uVar2 = uVar7;
        if (uVar7 < (uint)DAT_001d0957 << 8) {
          uVar2 = (uint)DAT_001d0957 << 8;
        }
      }
      else {
        uVar2 = (uint)DAT_001d0959 << 8;
      }
      uVar3 = uVar7;
      if ((uint)DAT_001d0958 << 8 < uVar7) {
        uVar3 = (uint)DAT_001d0958 << 8;
      }
      if ((uint)DAT_001d095a << 8 < uVar3) {
        if ((uint)DAT_001d0958 << 8 < uVar7) {
          uVar7 = (uint)DAT_001d0958 << 8;
        }
      }
      else {
        uVar7 = (uint)DAT_001d095a << 8;
      }
    }
    if (B_nofra == 0) {
      if ((B_frao != '\0') || ((DAT_003fdf5f & 1) != 0)) {
        if ((DAT_003fdf5f & 1) == 0) {
          uVar1 = func_0xff2189bc(&DAT_001d09a2,DAT_003fdc59);
          _DAT_005bb9d0 =
               func_0xff217dc8(uVar1,(int)DAT_005b8882,DAT_005bb9d0,_DAT_005bb9d0 & 0xffff,uVar2,
                               uVar7);
        }
        else if ((DAT_001d0948 & 1) != 0) {
          if ((DAT_001d0948 >> 1 & 1) == 0) {
            iVar6 = 0x8000 - (uint)frao_w;
            if (iVar6 < -0x8000) {
              iVar6 = -0x8000;
            }
            else if (0x7fff < iVar6) {
              iVar6 = 0x7fff;
            }
            _DAT_005bb9d0 =
                 func_0xff217dc8(_DAT_001d09a0,(int)(short)iVar6,DAT_005bb9d0,_DAT_005bb9d0 & 0xffff
                                 ,uVar2,uVar7);
          }
          else {
            iVar6 = (uint)DAT_005b888a - (uint)frao_w;
            if (iVar6 < -0x8000) {
              iVar6 = -0x8000;
            }
            else if (0x7fff < iVar6) {
              iVar6 = 0x7fff;
            }
            _DAT_005bb9d0 =
                 func_0xff217dc8(_DAT_001d09a0,(int)(short)iVar6,DAT_005bb9d0,_DAT_005bb9d0 & 0xffff
                                 ,uVar2,uVar7);
          }
        }
        frao_w = DAT_005bb9d0;
      }
    }
    else {
      _DAT_005bb9d0 = 0x80000000;
      frao_w = 0x8000;
    }
    if ((frao_w < uVar7) && (uVar2 < frao_w)) {
      DAT_003fbfdc = 0;
    }
    else {
      DAT_003fbfdc = 1;
    }
    if ((B_stend != '\0') && (DAT_003fbfe6 == 0)) {
      uVar7 = (uint)tmot;
      if (uVar7 < DAT_001d096f) {
        uVar7 = (uint)DAT_001d096f;
      }
      if (DAT_001d09dd <= uVar7) {
        uVar7 = (uint)DAT_001d09dd;
      }
      uVar7 = uVar7 - DAT_001d09dd;
      sVar4 = (ushort)DAT_001d096e - (ushort)DAT_001d09dd;
      if (((short)uVar7 < 1) || (sVar4 < 1)) {
        if (((short)uVar7 < 0) && (sVar4 < 0)) {
          DAT_005b889c = func_0xff217b40((-uVar7 & 0xffff) >> 1,uVar7 * -0x8000 & 0x8000,-sVar4);
        }
        else {
          DAT_005b889c = 0;
        }
      }
      else {
        DAT_005b889c = func_0xff217b40((uVar7 & 0xffff) >> 1,uVar7 * 0x8000 & 0x8000,sVar4);
      }
    }
    DAT_005bb824 = func_0xff217fe8(DAT_001d0970,rl,DAT_005bb824);
    if ((rl == 0) || (uVar7 = (uint)DAT_005bb824 / (uint)rl, 0xffff < uVar7)) {
      uVar7 = 0xffff;
    }
    if (uVar7 >> 4 < 0xff) {
      DAT_005b8884 = (ushort)(uVar7 >> 4) & 0xff;
    }
    else {
      DAT_005b8884 = 0xff;
    }
    uVar1 = func_0xff2190c8(DAT_001d0972,0x1d0973,&DAT_001d0978,DAT_005b8884);
    uVar7 = func_0xff2187cc(&DAT_001d094c,DAT_003fdc59);
    DAT_005b88ae = func_0xff2217f4((uVar7 & 0xff) << 8,uVar1);
    if (((DAT_003fbfe6 == 0) && (B_edkvs == '\0')) && ((DAT_003fdf5f & 1) == 0)) {
      if (B_stend == '\0') {
        frat_w = 0x8000;
      }
      else {
        if (((DAT_003fbff4 == '\0') && (B_lr != '\0')) && (DAT_003fbfde != '\0')) {
          iVar6 = (int)((int)DAT_005b8880 * (uint)DAT_005b889c) >> 0xf;
          if (iVar6 < -0x8000) {
            iVar6 = -0x8000;
          }
          else if (0x7fff < iVar6) {
            iVar6 = 0x7fff;
          }
          uVar7 = func_0xff217dc8(DAT_005b88ae,(int)(short)iVar6,DAT_005bb9d4,_DAT_005bb9d4 & 0xffff
                                  ,DAT_001d095b,(uint)DAT_001d095c << 8);
          DAT_005bb9d4 = (ushort)(uVar7 >> 0x10);
          DAT_005b8890 = DAT_005bb9d4;
          _DAT_005bb9d4 = uVar7;
        }
        iVar6 = DAT_005b8890 - 0x8000;
        if (iVar6 < -0x8000) {
          iVar6 = -0x8000;
        }
        else if (0x7fff < iVar6) {
          iVar6 = 0x7fff;
        }
        iVar6 = (int)((int)(short)iVar6 * (uint)DAT_005b889c) >> 0xf;
        if (iVar6 < -0x8000) {
          iVar6 = -0x8000;
        }
        else if (0x7fff < iVar6) {
          iVar6 = 0x7fff;
        }
        iVar6 = (short)iVar6 + 0x8000;
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        else if (0xffff < iVar6) {
          iVar6 = 0xffff;
        }
        frat_w = (word)iVar6;
      }
    }
    else {
      frat_w = 0x8000;
      DAT_005b8890 = 0x8000;
      _DAT_005bb9d4 = 0x80000000;
    }
    if (DAT_003fbff4 == '\0') {
      iVar6 = (int)_DAT_001d0990;
      iVar5 = (int)_DAT_001d0992;
    }
    else {
      iVar5 = (int)DAT_005bb9d8;
      iVar6 = iVar5;
      if (iVar5 < _DAT_001d0990) {
        iVar6 = (int)_DAT_001d0990;
      }
      if (iVar6 < _DAT_001d0994) {
        iVar6 = iVar5;
        if (iVar5 < _DAT_001d0990) {
          iVar6 = (int)_DAT_001d0990;
        }
      }
      else {
        iVar6 = (int)_DAT_001d0994;
      }
      iVar8 = iVar5;
      if (_DAT_001d0992 < iVar5) {
        iVar8 = (int)_DAT_001d0992;
      }
      if (_DAT_001d0996 < iVar8) {
        if (_DAT_001d0992 < iVar5) {
          iVar5 = (int)_DAT_001d0992;
        }
      }
      else {
        iVar5 = (int)_DAT_001d0996;
      }
    }
    if (B_norkat == 0) {
      if ((B_rkat != '\0') || ((DAT_003fdf5f & 1) != 0)) {
        if ((DAT_003fdf5f & 1) == 0) {
          uVar7 = func_0xff2189bc(&DAT_001d09be,DAT_003fdc59);
          unaff_r19 = uVar7 & 0xffff;
          _DAT_005bb9d8 =
               func_0xff217c80(unaff_r19,(int)DAT_005b8882,(int)DAT_005bb9d8,_DAT_005bb9d8 & 0xffff,
                               iVar6,0,iVar5,0);
          rkat_w = (word)((int)_DAT_005bb9d8 >> 0x13);
        }
        else if ((DAT_001d0948 & 1) != 0) {
          if ((DAT_001d0948 >> 1 & 1) == 0) {
            if (-(int)(short)rkat_w < 0x1000) {
              if (-(int)(short)rkat_w < -0x1000) {
                sVar4 = -0x8000;
              }
              else {
                sVar4 = rkat_w * -8;
              }
            }
            else {
              sVar4 = 0x7fff;
            }
            _DAT_005bb9d8 =
                 func_0xff217c80(_DAT_001d09a0,(int)sVar4,(int)DAT_005bb9d8,_DAT_005bb9d8 & 0xffff,
                                 iVar6,0,iVar5,0);
            rkat_w = (word)((int)_DAT_005bb9d8 >> 0x13);
          }
          else {
            iVar8 = (int)DAT_005b88a2 - (int)(short)rkat_w;
            if (iVar8 < 0x1000) {
              if (iVar8 < -0x1000) {
                sVar4 = -0x8000;
              }
              else {
                sVar4 = (short)iVar8 * 8;
              }
            }
            else {
              sVar4 = 0x7fff;
            }
            _DAT_005bb9d8 =
                 func_0xff217c80(_DAT_001d09a0,(int)sVar4,(int)DAT_005bb9d8,_DAT_005bb9d8 & 0xffff,
                                 iVar6,0,iVar5,0);
            rkat_w = (word)((int)_DAT_005bb9d8 >> 0x13);
          }
        }
      }
    }
    else {
      rkat_w = 0;
      _DAT_005bb9d8 = 0;
    }
    if ((DAT_005bb9d8 < iVar5) && (iVar6 < DAT_005bb9d8)) {
      B_rkatr = 0;
    }
    else {
      B_rkatr = 1;
    }
    if (DAT_003fbff4 == '\0') {
      iVar6 = (int)_DAT_001d0998;
      iVar5 = (int)_DAT_001d099a;
    }
    else {
      iVar5 = (int)DAT_005bb9dc;
      iVar6 = iVar5;
      if (iVar5 < _DAT_001d0998) {
        iVar6 = (int)_DAT_001d0998;
      }
      if (iVar6 < _DAT_001d099c) {
        iVar6 = iVar5;
        if (iVar5 < _DAT_001d0998) {
          iVar6 = (int)_DAT_001d0998;
        }
      }
      else {
        iVar6 = (int)_DAT_001d099c;
      }
      iVar8 = iVar5;
      if (_DAT_001d0992 < iVar5) {
        iVar8 = (int)_DAT_001d0992;
      }
      if (_DAT_001d099e < iVar8) {
        if (_DAT_001d0992 < iVar5) {
          iVar5 = (int)_DAT_001d0992;
        }
      }
      else {
        iVar5 = (int)_DAT_001d099e;
      }
    }
    if (B_norkaz == 0) {
      if ((B_rkaz != '\0') || ((DAT_003fdf5f & 1) != 0)) {
        if ((DAT_003fdf5f & 1) == 0) {
          uVar7 = func_0xff2189bc(&DAT_001d09cc,DAT_003fdc59);
          unaff_r18 = uVar7 & 0xffff;
          _DAT_005bb9dc =
               func_0xff217c80(unaff_r18,(int)DAT_005b8882,(int)DAT_005bb9dc,_DAT_005bb9dc & 0xffff,
                               iVar6,0,iVar5,0);
          rkaz_w = (word)((int)_DAT_005bb9dc >> 0x13);
        }
        else if ((DAT_001d0948 & 1) != 0) {
          if ((DAT_001d0948 >> 1 & 1) == 0) {
            if (-(int)(short)rkaz_w < 0x1000) {
              if (-(int)(short)rkaz_w < -0x1000) {
                sVar4 = -0x8000;
              }
              else {
                sVar4 = rkaz_w * -8;
              }
            }
            else {
              sVar4 = 0x7fff;
            }
            _DAT_005bb9dc =
                 func_0xff217c80(_DAT_001d09a0,(int)sVar4,(int)DAT_005bb9dc,_DAT_005bb9dc & 0xffff,
                                 iVar6,0,iVar5,0);
            rkaz_w = (word)((int)_DAT_005bb9dc >> 0x13);
          }
          else {
            iVar8 = (int)DAT_005b88aa - (int)(short)rkaz_w;
            if (iVar8 < 0x1000) {
              if (iVar8 < -0x1000) {
                sVar4 = -0x8000;
              }
              else {
                sVar4 = (short)iVar8 * 8;
              }
            }
            else {
              sVar4 = 0x7fff;
            }
            _DAT_005bb9dc =
                 func_0xff217c80(_DAT_001d09a0,(int)sVar4,(int)DAT_005bb9dc,_DAT_005bb9dc & 0xffff,
                                 iVar6,0,iVar5,0);
            rkaz_w = (word)((int)_DAT_005bb9dc >> 0x13);
          }
        }
      }
    }
    else {
      rkaz_w = 0;
      _DAT_005bb9dc = 0;
    }
    if ((DAT_005bb9dc < iVar5) && (iVar6 < DAT_005bb9dc)) {
      B_rkazr = 0;
    }
    else {
      B_rkazr = 1;
    }
    if (B_lra2 == '\0') {
      DAT_005b887c = 0;
      if (DAT_003fbff3 == '\0') {
        DAT_005b887e = 0;
      }
      else {
        iVar6 = frm2_w - 0x8000;
        if (iVar6 < -0x8000) {
          iVar6 = -0x8000;
        }
        else if (0x7fff < iVar6) {
          iVar6 = 0x7fff;
        }
        DAT_005b887e = (short)iVar6;
      }
    }
    else {
      iVar6 = frm2_w - 0x8000;
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      DAT_005b887c = (short)iVar6;
      DAT_005b887e = DAT_005b887c;
      if (DAT_003fbff3 == '\0') {
        DAT_005b887e = 0;
      }
    }
    if (DAT_003fbff4 == '\0') {
      uVar2 = (uint)DAT_001d095d << 8;
      uVar7 = (uint)DAT_001d095e << 8;
    }
    else {
      uVar7 = (uint)frau2_w;
      uVar2 = uVar7;
      if (uVar7 < (uint)DAT_001d095d << 8) {
        uVar2 = (uint)DAT_001d095d << 8;
      }
      if (uVar2 < (uint)DAT_001d095f << 8) {
        uVar2 = uVar7;
        if (uVar7 < (uint)DAT_001d095d << 8) {
          uVar2 = (uint)DAT_001d095d << 8;
        }
      }
      else {
        uVar2 = (uint)DAT_001d095f << 8;
      }
      uVar3 = uVar7;
      if ((uint)DAT_001d095e << 8 < uVar7) {
        uVar3 = (uint)DAT_001d095e << 8;
      }
      if ((uint)DAT_001d0960 << 8 < uVar3) {
        if ((uint)DAT_001d095e << 8 < uVar7) {
          uVar7 = (uint)DAT_001d095e << 8;
        }
      }
      else {
        uVar7 = (uint)DAT_001d0960 << 8;
      }
    }
    if (B_nofra == 0) {
      if ((B_frau != '\0') || ((DAT_003fdf61 & 1) != 0)) {
        if ((DAT_003fdf61 & 1) == 0) {
          uVar1 = func_0xff2189bc(&DAT_001d09b0,DAT_003fdc59);
          _DAT_005bb9e0 =
               func_0xff217dc8(uVar1,(int)DAT_005b887c,DAT_005bb9e0,_DAT_005bb9e0 & 0xffff,uVar2,
                               uVar7);
        }
        else if ((DAT_001d0948 & 1) != 0) {
          if ((DAT_001d0948 >> 1 & 1) == 0) {
            iVar6 = 0x8000 - (uint)frau2_w;
            if (iVar6 < -0x8000) {
              iVar6 = -0x8000;
            }
            else if (0x7fff < iVar6) {
              iVar6 = 0x7fff;
            }
            _DAT_005bb9e0 =
                 func_0xff217dc8(_DAT_001d09a0,(int)(short)iVar6,DAT_005bb9e0,_DAT_005bb9e0 & 0xffff
                                 ,uVar2,uVar7);
          }
          else {
            iVar6 = (uint)DAT_005b8896 - (uint)frau2_w;
            if (iVar6 < -0x8000) {
              iVar6 = -0x8000;
            }
            else if (0x7fff < iVar6) {
              iVar6 = 0x7fff;
            }
            _DAT_005bb9e0 =
                 func_0xff217dc8(_DAT_001d09a0,(int)(short)iVar6,DAT_005bb9e0,_DAT_005bb9e0 & 0xffff
                                 ,uVar2,uVar7);
          }
        }
        frau2_w = DAT_005bb9e0;
      }
    }
    else {
      _DAT_005bb9e0 = 0x80000000;
      frau2_w = 0x8000;
    }
    if ((frau2_w < uVar7) && (uVar2 < frau2_w)) {
      B_fraur2 = 0;
    }
    else {
      B_fraur2 = 1;
    }
    if (DAT_003fbff4 == '\0') {
      uVar2 = (uint)DAT_001d0957 << 8;
      uVar7 = (uint)DAT_001d0958 << 8;
    }
    else {
      uVar7 = (uint)frao2_w;
      uVar2 = uVar7;
      if (uVar7 < (uint)DAT_001d0957 << 8) {
        uVar2 = (uint)DAT_001d0957 << 8;
      }
      if (uVar2 < (uint)DAT_001d0959 << 8) {
        uVar2 = uVar7;
        if (uVar7 < (uint)DAT_001d0957 << 8) {
          uVar2 = (uint)DAT_001d0957 << 8;
        }
      }
      else {
        uVar2 = (uint)DAT_001d0959 << 8;
      }
      uVar3 = uVar7;
      if ((uint)DAT_001d0958 << 8 < uVar7) {
        uVar3 = (uint)DAT_001d0958 << 8;
      }
      if ((uint)DAT_001d095a << 8 < uVar3) {
        if ((uint)DAT_001d0958 << 8 < uVar7) {
          uVar7 = (uint)DAT_001d0958 << 8;
        }
      }
      else {
        uVar7 = (uint)DAT_001d095a << 8;
      }
    }
    if (B_nofra == 0) {
      if ((B_frao != '\0') || ((DAT_003fdf61 & 1) != 0)) {
        if ((DAT_003fdf61 & 1) == 0) {
          uVar1 = func_0xff2189bc(&DAT_001d09a2,DAT_003fdc59);
          _DAT_005bb9e4 =
               func_0xff217dc8(uVar1,(int)DAT_005b887c,DAT_005bb9e4,_DAT_005bb9e4 & 0xffff,uVar2,
                               uVar7);
        }
        else if ((DAT_001d0948 & 1) != 0) {
          if ((DAT_001d0948 >> 1 & 1) == 0) {
            iVar6 = 0x8000 - (uint)frao2_w;
            if (iVar6 < -0x8000) {
              iVar6 = -0x8000;
            }
            else if (0x7fff < iVar6) {
              iVar6 = 0x7fff;
            }
            _DAT_005bb9e4 =
                 func_0xff217dc8(_DAT_001d09a0,(int)(short)iVar6,DAT_005bb9e4,_DAT_005bb9e4 & 0xffff
                                 ,uVar2,uVar7);
          }
          else {
            iVar6 = (uint)DAT_005b8888 - (uint)frao2_w;
            if (iVar6 < -0x8000) {
              iVar6 = -0x8000;
            }
            else if (0x7fff < iVar6) {
              iVar6 = 0x7fff;
            }
            _DAT_005bb9e4 =
                 func_0xff217dc8(_DAT_001d09a0,(int)(short)iVar6,DAT_005bb9e4,_DAT_005bb9e4 & 0xffff
                                 ,uVar2,uVar7);
          }
        }
        frao2_w = DAT_005bb9e4;
      }
    }
    else {
      _DAT_005bb9e4 = 0x80000000;
      frao2_w = 0x8000;
    }
    if ((frao2_w < uVar7) && (uVar2 < frao2_w)) {
      DAT_003fbfdd = 0;
    }
    else {
      DAT_003fbfdd = 1;
    }
    if (((DAT_003fbfe6 == 0) && (B_edkvs2 == '\0')) && ((DAT_003fdf61 & 1) == 0)) {
      if (B_stend == '\0') {
        frat2_w = 0x8000;
      }
      else {
        if (((DAT_003fbff4 == '\0') && (B_lr2 != '\0')) && (DAT_003fbfde != '\0')) {
          iVar6 = (int)((int)DAT_005b887e * (uint)DAT_005b889c) >> 0xf;
          if (iVar6 < -0x8000) {
            iVar6 = -0x8000;
          }
          else if (0x7fff < iVar6) {
            iVar6 = 0x7fff;
          }
          uVar7 = func_0xff217dc8(DAT_005b88ae,(int)(short)iVar6,DAT_005bb9e8,_DAT_005bb9e8 & 0xffff
                                  ,DAT_001d095b,(uint)DAT_001d095c << 8);
          DAT_005bb9e8 = (ushort)(uVar7 >> 0x10);
          DAT_005b9440 = DAT_005bb9e8;
          _DAT_005bb9e8 = uVar7;
        }
        iVar6 = DAT_005b9440 - 0x8000;
        if (iVar6 < -0x8000) {
          iVar6 = -0x8000;
        }
        else if (0x7fff < iVar6) {
          iVar6 = 0x7fff;
        }
        iVar6 = (int)((int)(short)iVar6 * (uint)DAT_005b889c) >> 0xf;
        if (iVar6 < -0x8000) {
          iVar6 = -0x8000;
        }
        else if (0x7fff < iVar6) {
          iVar6 = 0x7fff;
        }
        iVar6 = (short)iVar6 + 0x8000;
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        else if (0xffff < iVar6) {
          iVar6 = 0xffff;
        }
        frat2_w = (word)iVar6;
      }
    }
    else {
      frat2_w = 0x8000;
      DAT_005b9440 = 0x8000;
      _DAT_005bb9e8 = 0x80000000;
    }
    if (DAT_003fbff4 == '\0') {
      iVar6 = (int)_DAT_001d0990;
      iVar5 = (int)_DAT_001d0992;
    }
    else {
      iVar5 = (int)DAT_005bb9ec;
      iVar6 = iVar5;
      if (iVar5 < _DAT_001d0990) {
        iVar6 = (int)_DAT_001d0990;
      }
      if (iVar6 < _DAT_001d0994) {
        iVar6 = iVar5;
        if (iVar5 < _DAT_001d0990) {
          iVar6 = (int)_DAT_001d0990;
        }
      }
      else {
        iVar6 = (int)_DAT_001d0994;
      }
      iVar8 = iVar5;
      if (_DAT_001d0992 < iVar5) {
        iVar8 = (int)_DAT_001d0992;
      }
      if (_DAT_001d0996 < iVar8) {
        if (_DAT_001d0992 < iVar5) {
          iVar5 = (int)_DAT_001d0992;
        }
      }
      else {
        iVar5 = (int)_DAT_001d0996;
      }
    }
    if (B_norkat == 0) {
      if ((B_rkat != '\0') || ((DAT_003fdf61 & 1) != 0)) {
        if ((DAT_003fdf61 & 1) == 0) {
          _DAT_005bb9ec =
               func_0xff217c80(unaff_r19,(int)DAT_005b887c,(int)DAT_005bb9ec,_DAT_005bb9ec & 0xffff,
                               iVar6,0,iVar5,0);
          rkat2_w = (word)((int)_DAT_005bb9ec >> 0x13);
        }
        else if ((DAT_001d0948 & 1) != 0) {
          if ((DAT_001d0948 >> 1 & 1) == 0) {
            if (-(int)(short)rkat2_w < 0x1000) {
              if (-(int)(short)rkat2_w < -0x1000) {
                sVar4 = -0x8000;
              }
              else {
                sVar4 = rkat2_w * -8;
              }
            }
            else {
              sVar4 = 0x7fff;
            }
            _DAT_005bb9ec =
                 func_0xff217c80(_DAT_001d09a0,(int)sVar4,(int)DAT_005bb9ec,_DAT_005bb9ec & 0xffff,
                                 iVar6,0,iVar5,0);
            rkat2_w = (word)((int)_DAT_005bb9ec >> 0x13);
          }
          else {
            iVar8 = (int)DAT_005b88a0 - (int)(short)rkat2_w;
            if (iVar8 < 0x1000) {
              if (iVar8 < -0x1000) {
                sVar4 = -0x8000;
              }
              else {
                sVar4 = (short)iVar8 * 8;
              }
            }
            else {
              sVar4 = 0x7fff;
            }
            _DAT_005bb9ec =
                 func_0xff217c80(_DAT_001d09a0,(int)sVar4,(int)DAT_005bb9ec,_DAT_005bb9ec & 0xffff,
                                 iVar6,0,iVar5,0);
            rkat2_w = (word)((int)_DAT_005bb9ec >> 0x13);
          }
        }
      }
    }
    else {
      rkat2_w = 0;
      _DAT_005bb9ec = 0;
    }
    if ((DAT_005bb9ec < iVar5) && (iVar6 < DAT_005bb9ec)) {
      B_rkatr2 = 0;
    }
    else {
      B_rkatr2 = 1;
    }
    if (DAT_003fbff4 == '\0') {
      iVar6 = (int)_DAT_001d0998;
      iVar5 = (int)_DAT_001d099a;
    }
    else {
      iVar5 = (int)DAT_005bb9f0;
      iVar6 = iVar5;
      if (iVar5 < _DAT_001d0998) {
        iVar6 = (int)_DAT_001d0998;
      }
      if (iVar6 < _DAT_001d099c) {
        iVar6 = iVar5;
        if (iVar5 < _DAT_001d0998) {
          iVar6 = (int)_DAT_001d0998;
        }
      }
      else {
        iVar6 = (int)_DAT_001d099c;
      }
      iVar8 = iVar5;
      if (_DAT_001d0992 < iVar5) {
        iVar8 = (int)_DAT_001d0992;
      }
      if (_DAT_001d099e < iVar8) {
        if (_DAT_001d0992 < iVar5) {
          iVar5 = (int)_DAT_001d0992;
        }
      }
      else {
        iVar5 = (int)_DAT_001d099e;
      }
    }
    if (B_norkaz == 0) {
      if ((B_rkaz != '\0') || ((DAT_003fdf61 & 1) != 0)) {
        if ((DAT_003fdf61 & 1) == 0) {
          _DAT_005bb9f0 =
               func_0xff217c80(unaff_r18,(int)DAT_005b887c,(int)DAT_005bb9f0,_DAT_005bb9f0 & 0xffff,
                               iVar6,0,iVar5,0);
          rkaz2_w = (word)((int)_DAT_005bb9f0 >> 0x13);
        }
        else if ((DAT_001d0948 & 1) != 0) {
          if ((DAT_001d0948 >> 1 & 1) == 0) {
            if (-(int)(short)rkaz2_w < 0x1000) {
              if (-(int)(short)rkaz2_w < -0x1000) {
                sVar4 = -0x8000;
              }
              else {
                sVar4 = rkaz2_w * -8;
              }
            }
            else {
              sVar4 = 0x7fff;
            }
            _DAT_005bb9f0 =
                 func_0xff217c80(_DAT_001d09a0,(int)sVar4,(int)DAT_005bb9f0,_DAT_005bb9f0 & 0xffff,
                                 iVar6,0,iVar5,0);
            rkaz2_w = (word)((int)_DAT_005bb9f0 >> 0x13);
          }
          else {
            iVar8 = (int)DAT_005b88a8 - (int)(short)rkaz2_w;
            if (iVar8 < 0x1000) {
              if (iVar8 < -0x1000) {
                sVar4 = -0x8000;
              }
              else {
                sVar4 = (short)iVar8 * 8;
              }
            }
            else {
              sVar4 = 0x7fff;
            }
            _DAT_005bb9f0 =
                 func_0xff217c80(_DAT_001d09a0,(int)sVar4,(int)DAT_005bb9f0,_DAT_005bb9f0 & 0xffff,
                                 iVar6,0,iVar5,0);
            rkaz2_w = (word)((int)_DAT_005bb9f0 >> 0x13);
          }
        }
      }
    }
    else {
      rkaz2_w = 0;
      _DAT_005bb9f0 = 0;
    }
    if ((DAT_005bb9f0 < iVar5) && (iVar6 < DAT_005bb9f0)) {
      B_rkazr2 = 0;
    }
    else {
      B_rkazr2 = 1;
    }
  }
  else {
    rkat_w = 0;
    rkaz_w = 0;
    frau_w = 0x8000;
    frao_w = 0x8000;
    frat_w = 0x8000;
    rkat2_w = 0;
    rkaz2_w = 0;
    frau2_w = 0x8000;
    frao2_w = 0x8000;
    frat2_w = 0x8000;
  }
  if (DAT_003fbfda != '\0') {
    _DAT_005bb9cc = 0x80000000;
    frau_w = 0x8000;
    DAT_005b8898 = 0x8000;
    _DAT_005bb9d0 = 0x80000000;
    frao_w = 0x8000;
    DAT_005b888a = 0x8000;
    _DAT_005bb9d4 = 0x80000000;
    DAT_005b8890 = 0x8000;
    _DAT_005bb9d8 = 0;
    rkat_w = 0;
    DAT_005b88a2 = 0;
    _DAT_005bb9dc = 0;
    rkaz_w = 0;
    DAT_005b88aa = 0;
    _DAT_005bb9e0 = 0x80000000;
    frau2_w = 0x8000;
    DAT_005b8896 = 0x8000;
    _DAT_005bb9e4 = 0x80000000;
    frao2_w = 0x8000;
    DAT_005b8888 = 0x8000;
    _DAT_005bb9e8 = 0x80000000;
    DAT_005b9440 = 0x8000;
    _DAT_005bb9ec = 0;
    rkat2_w = 0;
    DAT_005b88a0 = 0;
    _DAT_005bb9f0 = 0;
    rkaz2_w = 0;
    DAT_005b88a8 = 0;
    DAT_003fbfda = '\0';
  }
  return;
}

