/*
 * Program: n42.bin
 * Function: FUN_00112bf0
 * Entry: 00112bf0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00112bf0(void)

{
  uint uVar1;
  byte bVar2;
  undefined uVar3;
  int iVar4;
  uint uVar5;
  
  if ((raster_um & 3) != 0) {
    return;
  }
  func_0xff221184(0x20);
  if (((((rl_ur != (byte)~DAT_003f9886) || (ipsn_ur != (byte)~DAT_003f986b)) ||
       (dps_ur != (byte)~DAT_003f9866)) ||
      (((evhubi_ur != (byte)~DAT_003f9868 || (evhubim_ur != (byte)~DAT_003f9867)) ||
       ((rlc_c_ur != (byte)~DAT_003f986c ||
        ((ipa_c_ur != (byte)~DAT_003f986a || (dps_c_ur != (byte)~dps_c_um)))))))) ||
     ((vvt_c_ur != (byte)~DAT_003f9887 || (rlip_c_ur != (byte)~DAT_003f9885)))) {
    ram_c_um = ram_c_um + '\x01';
    B_reaci_um = B_reaci_um | 0x40;
    DAT_003fa02e = 0x66;
  }
  if (((_rlst08_ur != ~_rlst08_um) || (_ipnst08_ur != ~_DAT_003f988c)) ||
     (_hubst08_ur != ~_DAT_003f9888)) {
    ram_c_um = ram_c_um + '\x01';
    B_reaci_um = B_reaci_um | 0x40;
    DAT_003fa02e = 0x66;
  }
  if (((DAT_003f9980 != (byte)~dpipf_ur) || (dpipf_l_ur != (byte)~DAT_003f985a)) ||
     (dpipf_p_ur != (byte)~DAT_003f985b)) {
    ram_c_um = ram_c_um + '\x01';
    B_reaci_um = B_reaci_um | 0x40;
    DAT_003fa02e = 0x66;
  }
  if (((rldpf_ur != (byte)~DAT_003f9884) || (rldpf_l_ur != (byte)~DAT_003f9879)) ||
     (rldpf_p_ur != (byte)~DAT_003f987a)) {
    ram_c_um = ram_c_um + '\x01';
    B_reaci_um = B_reaci_um | 0x40;
    DAT_003fa02e = 0x66;
  }
  if (((rldf_ur != (byte)~DAT_003f9878) || (rldf_l_ur != (byte)~DAT_003f986d)) ||
     (rldf_p_ur != (byte)~DAT_003f986e)) {
    ram_c_um = ram_c_um + '\x01';
    B_reaci_um = B_reaci_um | 0x40;
    DAT_003fa02e = 0x66;
  }
  bVar2 = 0;
  if (DAT_001ce3b5 != 0) {
    do {
      if ((&UNK_003f9978)[bVar2] != (undefined)~(&UNK_003f985c)[bVar2]) {
        ram_c_um = ram_c_um + '\x01';
        B_reaci_um = B_reaci_um | 0x40;
        DAT_003fa02e = 0x66;
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < DAT_001ce3b5);
  }
  bVar2 = 0;
  if (DAT_001ce6ab != 0) {
    do {
      if ((&UNK_003f9998)[bVar2] != (undefined)~(&UNK_003f987c)[bVar2]) {
        ram_c_um = ram_c_um + '\x01';
        B_reaci_um = B_reaci_um | 0x40;
        DAT_003fa02e = 0x66;
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < DAT_001ce6ab);
  }
  _DAT_003f98aa = 0;
  if (DAT_001ce6ac != 0) {
    do {
      if ((&UNK_003f998c)[DAT_003f98ab] != (undefined)~(&UNK_003f9870)[DAT_003f98ab]) {
        ram_c_um = ram_c_um + '\x01';
        B_reaci_um = B_reaci_um | 0x40;
        DAT_003fa02e = 0x66;
      }
      _DAT_003f98aa = _DAT_003f98aa + 1;
    } while (DAT_003f98ab < DAT_001ce6ac);
  }
  if ((B_reaci_um & 1) == 0) {
    if (DAT_003fa028 != -0x67) {
LAB_001131dc:
      ram_c_um = ram_c_um + '\x01';
      B_reaci_um = B_reaci_um | 0x40;
      DAT_003fa02e = 0x66;
    }
  }
  else if (((B_reaci_um & 1) != 1) || (DAT_003fa028 != 'f')) goto LAB_001131dc;
  _5();
  _DAT_003f98ac = _rl_w;
  _DAT_003f98ae = (ushort)rl;
  _6();
  _DAT_003f99be = _DAT_003f98ac;
  DAT_003f9886 = DAT_003f98af;
  rl_ur = ~DAT_003f98af;
  _DAT_003f98ac = _DAT_003f98ac >> 5;
  if (0xff < _DAT_003f98ac) {
    _DAT_003f98ac = 0xff;
  }
  if (DAT_003f98ad == DAT_003f98af) {
    DAT_003f986c = 0;
    rlc_c_ur = 0xff;
  }
  else if (DAT_003f986c < DAT_001ce6a8) {
    DAT_003f986c = DAT_003f986c + 1;
    rlc_c_ur = ~DAT_003f986c;
  }
  else {
    ei_rlc_um = 1;
    B_i_ska_um = 1;
    B_reaci_um = B_reaci_um | 1;
    DAT_003fa028 = 'f';
  }
  if ((B_wdk2sel == '\0') && (B_ehfs == '\0')) {
    uVar1 = FUN_00110eac(6);
    bVar2 = (byte)((uVar1 & 0x3ff) >> 2);
    if (udkp1a < bVar2) {
      DAT_003f986b = bVar2 - udkp1a;
    }
    else {
      DAT_003f986b = 0;
    }
  }
  else {
    uVar1 = FUN_00110eac(7);
    bVar2 = (byte)((uVar1 & 0x3ff) >> 2);
    if (bVar2 < udkp2a) {
      DAT_003f986b = udkp2a - bVar2;
    }
    else {
      DAT_003f986b = 0;
    }
  }
  ipsn_ur = ~DAT_003f986b;
  if ((B_wdk2sel == '\0') && (B_ehfs == '\0')) {
    if (udkp1a <= DAT_001ce3c1) {
LAB_00113484:
      DAT_003f986a = 0;
      ipa_c_ur = 0xff;
      goto LAB_0011349c;
    }
  }
  else if (DAT_001ce3c2 <= udkp2a) goto LAB_00113484;
  if (DAT_003f986a < DAT_001ce3c3) {
    DAT_003f986a = DAT_003f986a + 1;
    ipa_c_ur = ~DAT_003f986a;
  }
  else {
    ei_ipa_um = 1;
    B_i_ska_um = 1;
    B_reaci_um = B_reaci_um | 1;
    DAT_003fa028 = 'f';
  }
LAB_0011349c:
  if ((short)dps_w < 1) {
    _DAT_003f98b2 = 0;
  }
  else {
    _DAT_003f98b2 = dps_w >> 7;
    if (0xff < _DAT_003f98b2) {
      _DAT_003f98b2 = 0xff;
    }
  }
  DAT_003f9866 = DAT_003f98b3;
  dps_ur = ~DAT_003f98b3;
  _DAT_003f98b2 = DAT_005b99c6 >> 6;
  if (0xff < _DAT_003f98b2) {
    _DAT_003f98b2 = 0xff;
  }
  _DAT_003f98b4 = DAT_005b99c4 >> 6;
  if (0xff < _DAT_003f98b4) {
    _DAT_003f98b4 = 0xff;
  }
  DAT_003f9867 = DAT_003f98b3;
  DAT_003f9868 = DAT_003f98b5;
  if (_DAT_003f98b4 < _DAT_003f98b2) {
    DAT_003f9867 = DAT_003f98b5;
    DAT_003f9868 = DAT_003f98b3;
  }
  evhubi_ur = ~DAT_003f9868;
  evhubim_ur = ~DAT_003f9867;
  DAT_003f9981 = FUN_00110b9c(&DAT_001ce3d0,DAT_003f986b,nmot_um);
  _DAT_003f98ae = CONCAT11(DAT_003f98ae,DAT_003f9981);
  if (DAT_003f9981 < dpipf_ur) {
    if ((int)(uint)DAT_003f985b < (int)(DAT_001ce3b5 - 1)) {
      DAT_003f985b = DAT_003f985b + 1;
      dpipf_p_ur = ~DAT_003f985b;
    }
    else {
      DAT_003f985b = 0;
      dpipf_p_ur = 0xff;
    }
    uVar1 = (uint)DAT_003f985b;
    _DAT_003f98ac =
         (ushort)DAT_003f985a + (ushort)dpipf_ur * 0x100 +
         ((ushort)(byte)(&UNK_003f985c)[uVar1] - (ushort)dpipf_ur) * (ushort)DAT_001ce3b4;
    (&UNK_003f985c)[uVar1] = DAT_003f9981;
    (&UNK_003f9978)[uVar1] = ~DAT_003f98af;
  }
  else {
    _DAT_003f98ac = (ushort)DAT_003f9981 << 8;
    _DAT_003f98aa = 0;
    if (DAT_001ce3b5 != 0) {
      do {
        (&UNK_003f985c)[DAT_003f98ab] = DAT_003f98af;
        (&UNK_003f9978)[DAT_003f98ab] = ~DAT_003f98af;
        _DAT_003f98aa = _DAT_003f98aa + 1;
      } while (DAT_003f98ab < DAT_001ce3b5);
    }
  }
  dpipf_ur = DAT_003f98ac;
  DAT_003f985a = DAT_003f98ad;
  DAT_003f9980 = ~DAT_003f98ac;
  dpipf_l_ur = ~DAT_003f98ad;
  if (((((NMOT4_UM < nmot_um) && ((B_reaci_um & 0xf) == 0)) && (DAT_003f9867 < DPIPFIL_UM)) &&
      (((B_clddss & 1) == 0 && ((E_pddss & 1) == 0)))) && (DAT_003f98ac < DAT_003f9866)) {
    if (dps_c_um < DPIPFIL_UM) {
      dps_c_um = dps_c_um + 1;
      dps_c_ur = ~dps_c_um;
    }
    else {
      ei_dps_um = 1;
      B_i_ska_um = 1;
      B_reaci_um = B_reaci_um | 1;
      DAT_003fa028 = 'f';
    }
  }
  else {
    dps_c_um = 0;
    dps_c_ur = 0xff;
  }
  if ((NMOT4_UM < nmot_um) && ((B_reaci_um & 0xf) == 0)) {
    bVar2 = FUN_00110b9c(&KFRLDP_UM,DAT_003f986b,DAT_003f9866);
    uVar1 = (uint)nmot_um;
    _DAT_003f98cc = ((uint)bVar2 << 0x10) / (DAT_001ce6a0 * uVar1 * 2);
    if (_DAT_003f98cc < 0x100) {
      _DAT_003f98ae = _DAT_003f98ce;
    }
    else {
      _DAT_003f98ae = 0xff;
    }
    DAT_003f99a2 = DAT_003f98af;
    if (DAT_003f9884 < DAT_003f98af) {
      if ((int)(uint)DAT_003f987a < (int)(DAT_001ce6ab - 1)) {
        DAT_003f987a = DAT_003f987a + 1;
        rldpf_p_ur = ~DAT_003f987a;
      }
      else {
        DAT_003f987a = 0;
        rldpf_p_ur = 0xff;
      }
      uVar5 = (uint)DAT_003f987a;
      _DAT_003f98ac =
           (ushort)DAT_003f9879 + (ushort)DAT_003f9884 * 0x100 +
           ((ushort)(byte)(&UNK_003f987c)[uVar5] - (ushort)DAT_003f9884) * (ushort)DAT_001ce6aa;
      (&UNK_003f987c)[uVar5] = DAT_003f98af;
      (&UNK_003f9998)[uVar5] = ~DAT_003f98af;
    }
    else {
      _DAT_003f98ac = _DAT_003f98ae << 8;
      _DAT_003f98aa = 0;
      if (DAT_001ce6ab != 0) {
        do {
          (&UNK_003f987c)[DAT_003f98ab] = DAT_003f98af;
          (&UNK_003f9998)[DAT_003f98ab] = ~DAT_003f98af;
          _DAT_003f98aa = _DAT_003f98aa + 1;
        } while (DAT_003f98ab < DAT_001ce6ab);
      }
    }
    DAT_003f9884 = DAT_003f98ac;
    DAT_003f9879 = DAT_003f98ad;
    rldpf_ur = ~DAT_003f98ac;
    rldpf_l_ur = ~DAT_003f98ad;
    uVar3 = FUN_00110b9c(&DAT_001ce478,DAT_003f9868,uVar1);
    _DAT_003f98b0 = CONCAT11(DAT_003f98b0,uVar3);
    bVar2 = FUN_00110b9c(&DAT_001ce424,DAT_003f9867,nmot_um);
    _DAT_003f98b0 = CONCAT11(bVar2,DAT_003f98b1);
    iVar4 = (int)((uint)DAT_003f98b1 + (uint)bVar2) >> 1;
    DAT_003f99a6 = (undefined)iVar4;
    _DAT_003f98ae = CONCAT11(DAT_003f98ae,DAT_003f99a6);
    _DAT_003f98b2 = (short)((int)((uint)DAT_001ce6ba * iVar4) >> 6) + (ushort)DAT_001ce6b9;
    if (0xff < _DAT_003f98b2) {
      _DAT_003f98b2 = 0xff;
    }
    DAT_003f99a5 = DAT_003f98b3;
    _DAT_003f98ac =
         CONCAT11(DAT_003f98ac,(char)((int)(((uint)bVar2 * 0xff) / (uint)DAT_003f98b1 + 0xff) >> 1))
    ;
    if (0xff < _DAT_003f98ac) {
      _DAT_003f98ac = 0xff;
    }
    DAT_003f9869 = DAT_003f98ad;
    if ((((B_clddss & 1) == 0) && ((E_pddss & 1) == 0)) && (DAT_003f98b3 < DAT_003f9884)) {
      if (DAT_003f9887 < DAT_001ce6bd) {
        DAT_003f9887 = DAT_003f9887 + 1;
        vvt_c_ur = ~DAT_003f9887;
      }
      else {
        ei_vvt_um = 1;
        B_i_ska_um = 1;
        B_reaci_um = B_reaci_um | 1;
        DAT_003fa028 = 'f';
      }
    }
    else {
      DAT_003f9887 = 0;
      vvt_c_ur = 0xff;
    }
    _DAT_003f988c = FUN_00110958(&DAT_001ce3c4,DAT_003f986b);
    _ipnst08_ur = ~_DAT_003f988c;
    _DAT_003f9888 = FUN_00110958(&DAT_001ce3b8,DAT_003f9868);
    _hubst08_ur = ~_DAT_003f9888;
    if (DAT_001ce6a5 < nmot_um) {
      uVar3 = FUN_00110b18(&DAT_001ce620,DAT_001ce3b8,_DAT_003f988c,_DAT_003f9888);
      _DAT_003f98b2 = CONCAT11(DAT_003f98b2,uVar3);
      uVar3 = FUN_00110b18(&DAT_001ce660,DAT_001ce3b8,_DAT_003f988c,_DAT_003f9888);
      _DAT_003f98b2 = CONCAT11(uVar3,DAT_003f98b3);
      _DAT_003f98b4 = CONCAT11(DAT_001ce6a6,DAT_001ce6a5);
    }
    else if (DAT_001ce6a4 < nmot_um) {
      uVar3 = FUN_00110b18(&DAT_001ce5e0,DAT_001ce3b8,_DAT_003f988c,_DAT_003f9888);
      _DAT_003f98b2 = CONCAT11(DAT_003f98b2,uVar3);
      uVar3 = FUN_00110b18(&DAT_001ce620,DAT_001ce3b8,_DAT_003f988c,_DAT_003f9888);
      _DAT_003f98b2 = CONCAT11(uVar3,DAT_003f98b3);
      _DAT_003f98b4 = CONCAT11(DAT_001ce6a5,DAT_001ce6a4);
    }
    else if (DAT_001ce6a3 < nmot_um) {
      uVar3 = FUN_00110b18(&DAT_001ce5a0,DAT_001ce3b8,_DAT_003f988c,_DAT_003f9888);
      _DAT_003f98b2 = CONCAT11(DAT_003f98b2,uVar3);
      uVar3 = FUN_00110b18(&DAT_001ce5e0,DAT_001ce3b8,_DAT_003f988c,_DAT_003f9888);
      _DAT_003f98b2 = CONCAT11(uVar3,DAT_003f98b3);
      _DAT_003f98b4 = CONCAT11(DAT_001ce6a4,DAT_001ce6a3);
    }
    else if (DAT_001ce6a2 < nmot_um) {
      uVar3 = FUN_00110b18(&DAT_001ce560,DAT_001ce3b8,_DAT_003f988c,_DAT_003f9888);
      _DAT_003f98b2 = CONCAT11(DAT_003f98b2,uVar3);
      uVar3 = FUN_00110b18(&DAT_001ce5a0,DAT_001ce3b8,_DAT_003f988c,_DAT_003f9888);
      _DAT_003f98b2 = CONCAT11(uVar3,DAT_003f98b3);
      _DAT_003f98b4 = CONCAT11(DAT_001ce6a3,DAT_001ce6a2);
    }
    else {
      uVar3 = FUN_00110b18(&DAT_001ce520,DAT_001ce3b8,_DAT_003f988c,_DAT_003f9888);
      _DAT_003f98b2 = CONCAT11(DAT_003f98b2,uVar3);
      uVar3 = FUN_00110b18(&DAT_001ce560,DAT_001ce3b8,_DAT_003f988c,_DAT_003f9888);
      _DAT_003f98b2 = CONCAT11(uVar3,DAT_003f98b3);
      _DAT_003f98b4 = CONCAT11(DAT_001ce6a2,DAT_001ce6a1);
    }
    uVar1 = (uint)nmot_um;
    if (DAT_003f98b5 < uVar1) {
      if (uVar1 < DAT_003f98b4) {
        DAT_003f98b7 = (byte)((int)((uVar1 - DAT_003f98b5) * 0x80) /
                             (int)((uint)DAT_003f98b4 - (uint)DAT_003f98b5));
      }
      else {
        DAT_003f98b7 = 0x80;
      }
    }
    else {
      DAT_003f98b7 = 0;
    }
    DAT_003f9986 = DAT_003f98b7;
    uVar1 = (uint)DAT_003f98b3 * (0x80 - (uint)DAT_003f98b7);
    _DAT_003f98b8 = (short)((int)uVar1 >> 7) + (ushort)((int)uVar1 < 0 && (uVar1 & 0x7f) != 0);
    iVar4 = (int)((uint)DAT_003f98b2 * (uint)DAT_003f98b7) >> 7;
    _DAT_003f98ba = (undefined2)iVar4;
    uVar5 = (((uint)_DAT_003f98b8 + iVar4) * (uint)DAT_003f98ad) / 0xff;
    uVar1 = uVar5 & 0xffff;
    if (uVar1 < 0x100) {
      _DAT_003f98ce = (short)uVar5;
      _DAT_003f98bc = _DAT_003f98ce;
    }
    else {
      _DAT_003f98bc = 0xff;
    }
    DAT_003f99a3 = DAT_003f98bd;
    _DAT_003f98cc = uVar1;
    _DAT_003f99ba = _DAT_003f98ba;
    _DAT_003f99bc = _DAT_003f98b8;
    if (DAT_003f9878 < DAT_003f98bd) {
      if ((int)(uint)DAT_003f986e < (int)(DAT_001ce6ac - 1)) {
        DAT_003f986e = DAT_003f986e + 1;
        rldf_p_ur = ~DAT_003f986e;
      }
      else {
        DAT_003f986e = 0;
        rldf_p_ur = 0xff;
      }
      uVar1 = (uint)DAT_003f986e;
      _DAT_003f98ac =
           (ushort)DAT_003f986d + (ushort)DAT_003f9878 * 0x100 +
           ((ushort)(byte)(&UNK_003f9870)[uVar1] - (ushort)DAT_003f9878) * (ushort)DAT_001ce6a9;
      (&UNK_003f9870)[uVar1] = DAT_003f98bd;
      (&UNK_003f998c)[uVar1] = ~DAT_003f98bd;
    }
    else {
      _DAT_003f98ac = _DAT_003f98bc << 8;
      _DAT_003f98aa = 0;
      if (DAT_001ce6ac != 0) {
        do {
          (&UNK_003f9870)[DAT_003f98ab] = DAT_003f98bd;
          (&UNK_003f998c)[DAT_003f98ab] = ~DAT_003f98bd;
          _DAT_003f98aa = _DAT_003f98aa + 1;
        } while (DAT_003f98ab < DAT_001ce6ac);
      }
    }
    DAT_003f9878 = DAT_003f98ac;
    DAT_003f986d = DAT_003f98ad;
    rldf_ur = ~DAT_003f98ac;
    rldf_l_ur = ~DAT_003f98ad;
    _DAT_003f98b0 =
         (short)((int)((uint)DAT_001ce6bc * (uint)DAT_003f9886) >> 6) + (ushort)DAT_001ce6bb;
    if (0xff < _DAT_003f98b0) {
      _DAT_003f98b0 = 0xff;
    }
    DAT_003f99a7 = DAT_003f98b1;
    _DAT_003f99b8 = (_DAT_003f98b0 & 0xff) - (ushort)DAT_003f98ac;
    if (DAT_003f98b1 < DAT_003f98ac) {
      DAT_003f9854 = 1;
      if (DAT_003f9885 < DAT_001ce6ad) {
        DAT_003f9885 = DAT_003f9885 + 1;
        rlip_c_ur = ~DAT_003f9885;
      }
      else {
        ei_rlip_um = 1;
        B_i_ska_um = 1;
        B_reaci_um = B_reaci_um | 1;
        DAT_003fa028 = 'f';
      }
    }
    else {
      DAT_003f9854 = 0;
      DAT_003f9885 = 0;
      rlip_c_ur = 0xff;
    }
  }
  _rlst08_um = FUN_00110958(&DAT_001ce6b0,DAT_003f9886);
  _rlst08_ur = ~_rlst08_um;
  func_0xff2211ac(_DAT_003fa0d8);
                    /* WARNING: Read-only address (ram,0x003fde83) is written */
                    /* WARNING: Read-only address (ram,0x003fdf91) is written */
  return;
}

