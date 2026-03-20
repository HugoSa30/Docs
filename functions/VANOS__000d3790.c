/*
 * Program: n42.bin
 * Function: VANOS
 * Entry: 000d3790
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VANOS(void)

{
  bool bVar1;
  char cVar3;
  byte bVar4;
  uint uVar2;
  ushort Asprlast_temp;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  
  rlvwrstg_w = DAT_005b990a;
  RESTNMOT_W = calc1dim(0x1ccbb2,nmot_w);
  RESTRLVW_W = calc1dim(&DAT_001ccbee,rlvwrstg_w);
  RESTNMOT16 = calc1dim(0x1ccb6e,nmot_w);
  RESTNMOT16 = calc1dim(&KFKASOPT_axis_x,nmot_w);
  RESTRLVW16 = calc1dim(&KFKASOPT_axis_y,rlvwrstg_w);
  DAT_005b8bf0 = Vse_spri;
  if ((DAT_005b8be8 == '\0') &&
     ((int)(uint)Vse_sprs < (int)((uint)_SPRZG_AN - (int)(short)(ushort)DAT_001ccb6a))) {
    if ((int)((uint)_SPRZG_AN - (int)(short)(ushort)DAT_001ccb6a) < (int)(uint)Vse_spri) {
      uVar6 = DAT_005b8bf4 + 1;
      if (0xff < uVar6) {
        uVar6 = 0xff;
      }
      DAT_005b8bf4 = (byte)uVar6;
      if (((uint)DAT_001ccb6c < (uVar6 & 0xff)) && (DAT_005b8bf5 < DAT_001ccb6b)) {
        DAT_005b8bea = '\x01';
        if (DAT_005b8bf5 + 1 < 0x100) {
          DAT_005b8bf5 = (byte)(DAT_005b8bf5 + 1);
        }
        else {
          DAT_005b8bf5 = 0xff;
        }
        DAT_005b8bf4 = 0;
      }
      DAT_005b8be8 = DAT_001ccb6b <= DAT_005b8bf5;
    }
    else {
      DAT_005b8be8 = '\x01';
    }
  }
  else {
    DAT_005b8bf4 = 0;
  }
  if (DAT_005b8bea != '\0') {
    DAT_003fb7e0 = FUN_000a87cc(&DAT_001ccb48,tmot);
    DAT_005b8bea = '\0';
  }
  if (DAT_001ccb69 < tmot) {
    DAT_005b8bec = '\0';
  }
  else if ((int)(short)(ushort)tmot <
           ((int)(short)(ushort)DAT_001ccb69 - (int)(short)(ushort)DAT_001ccb5f) + 0x40) {
    DAT_005b8bec = '\x01';
  }
  if (B_stend != '\0') {
    FUN_000b1cc0(&DAT_003fb7e0);
  }
  Vse_admn = _Vse_adp;
  if (_Vse_adp < _WNWAIMN) {
    sVar8 = _Vse_adp - _WNWAIMN;
  }
  else {
    sVar8 = 0;
  }
  DAT_005b9b92 = _DAT_001ccb5a - sVar8;
  if ((short)DAT_005b9b92 < 0) {
    DAT_005b9b92 = 0;
  }
  else if (0x708 < (short)DAT_005b9b92) {
    DAT_005b9b92 = 0x708;
  }
  DAT_005b9b8a = calc_mmXhpa(&KFDESTDLL,minhub_w,dpssol_uw);
  if (DAT_005b9b8a < -0x80) {
    DAT_005b9b8a = -0x80;
  }
  else if (0x7f < DAT_005b9b8a) {
    DAT_005b9b8a = 0x7f;
  }
  DAT_005b9b88 = calc_mmXhpa(&KFDESTD,minhub_w,dpssol_uw);
  if (DAT_005b9b88 < -0x80) {
    DAT_005b9b88 = -0x80;
  }
  else if (0x7f < DAT_005b9b88) {
    DAT_005b9b88 = 0x7f;
  }
  cVar3 = FUN_000b1ec4(&UNK_003fb7ea,B_sa,_DAT_001d3194);
  if (cVar3 == '\0') {
    bVar1 = false;
    _DAT_003fb7ec = _DAT_001d3190;
  }
  else if (_DAT_003fb7ec == 0) {
    bVar1 = false;
  }
  else {
    _DAT_003fb7ec = _DAT_003fb7ec + -1;
    bVar1 = true;
  }
  if ((B_sa == '\0') || (((!bVar1 && (S_ESPSATRU == '\0')) || ((B_vsaadp & 0x40) != 0)))) {
    DAT_005b8be5 = '\0';
  }
  else {
    DAT_005b8be5 = '\x01';
  }
  bVar4 = calc_value_from_x_y(&KFWESLL,nmot_w,rlvwrstg_w);
  sVar8 = calc_value_from_x_y(&KFKESLL,nmot_w,rlvwrstg_w);
  DAT_005b8f07 = (char)((int)(short)(sVar8 - (ushort)bVar4) * (uint)DAT_005b8f0c >> 8) + bVar4;
  DAT_005b8efc = calc_vanos_optimal(&DAT_001cbc20,_DAT_001ccbee,RESTNMOT_W,RESTRLVW_W);
  DAT_005b8efd = calc_vanos_optimal(&DAT_001cc140,_DAT_001ccbee,RESTNMOT_W,RESTRLVW_W);
  DAT_005b8f10 = calc_value_from_y(&DAT_001ccac8,tnst_w);
  Asprlast_temp =
       (ushort)DAT_005b8efc +
       (short)((uint)(((int)(short)(ushort)DAT_005b8efd - (int)(short)(ushort)DAT_005b8efc) *
                     (int)(short)(ushort)DAT_005b8f0e) >> 8);
  if ((short)Asprlast_temp < 0) {
    Asprlast_temp = 0;
  }
  else if (0xff < (short)Asprlast_temp) {
    Asprlast_temp = 0xff;
  }
  FUN_000b2550(&DAT_003fb7e2,Asprlast_temp & 0xff,DAT_005b8f10);
  Asprlast_temp = _DAT_003fb7e2 >> 8;
  uVar5 = (ushort)DAT_005b8f07 + DAT_005b9b8a;
  if ((short)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (0xff < (short)uVar5) {
    uVar5 = 0xff;
  }
  if (DAT_001ccb5d == '\0') {
    Esprlu = (byte)uVar5;
  }
  else {
    sVar8 = Asprlast_temp +
            (short)((uint)(((int)(short)(uVar5 & 0xff) - (int)(short)Asprlast_temp) *
                          (int)(short)(ushort)DAT_005b8f0f) >> 8);
    if (sVar8 < 0) {
      sVar8 = 0;
    }
    else if (0xff < sVar8) {
      sVar8 = 0xff;
    }
    Esprlu = (byte)sVar8;
  }
  if (DAT_001ccb5d == '\0') {
    uVar5 = calc_vanos_optimal(&DAT_001cb900,_DAT_001ccbee,RESTNMOT_W,RESTRLVW_W);
    sVar8 = Asprlast_temp +
            (short)((uint)(((int)(short)(uVar5 & 0xff) - (int)(short)Asprlast_temp) *
                          (int)(short)(ushort)DAT_005b8f0f) >> 8);
    if (sVar8 < 0) {
      sVar8 = 0;
    }
    else if (0xff < sVar8) {
      sVar8 = 0xff;
    }
    Esprl = (byte)sVar8;
  }
  else {
    Esprl = calc_vanos_optimal(&DAT_001cb900,_DAT_001ccbee,RESTNMOT_W,RESTRLVW_W);
  }
  esw = calc_vanos_optimal(&KFWESOPU,_KFKASOPT_axis_y,RESTNMOT16,RESTRLVW16);
  esk = calc_vanos_optimal(&KFKESOPU,_KFKASOPT_axis_y,RESTNMOT16,RESTRLVW16);
  Asprlast_temp =
       (ushort)esw +
       (short)((uint)(((int)(short)(ushort)esk - (int)(short)(ushort)esw) *
                     (int)(short)(ushort)DAT_005b8f0d) >> 8);
  if ((short)Asprlast_temp < 0) {
    Asprlast_temp = 0;
  }
  else if (0xff < (short)Asprlast_temp) {
    Asprlast_temp = 0xff;
  }
  sVar8 = (Asprlast_temp & 0xff) + DAT_005b9b88;
  if (sVar8 < 0) {
    sVar8 = 0;
  }
  else if (0xff < sVar8) {
    sVar8 = 0xff;
  }
  DAT_005b8f03 = (byte)sVar8;
  DAT_005b8bee = Vsa_spri;
  if ((DAT_005b8be7 == '\0') &&
     ((int)(uint)DAT_005b8bc8 < (int)((uint)_DAT_001cb722 - (int)(short)(ushort)DAT_001ccb6a))) {
    if ((int)((uint)_DAT_001cb722 - (int)(short)(ushort)DAT_001ccb6a) < (int)(uint)Vsa_spri) {
      uVar6 = DAT_005b8bf2 + 1;
      if (0xff < uVar6) {
        uVar6 = 0xff;
      }
      DAT_005b8bf2 = (byte)uVar6;
      if (((uint)DAT_001ccb6c < (uVar6 & 0xff)) && (DAT_005b8bf3 < DAT_001ccb6b)) {
        DAT_005b8be9 = '\x01';
        if (DAT_005b8bf3 + 1 < 0x100) {
          DAT_005b8bf3 = (byte)(DAT_005b8bf3 + 1);
        }
        else {
          DAT_005b8bf3 = 0xff;
        }
        DAT_005b8bf2 = 0;
      }
      DAT_005b8be7 = DAT_001ccb6b <= DAT_005b8bf3;
    }
    else {
      DAT_005b8be7 = '\x01';
    }
  }
  else {
    DAT_005b8bf2 = 0;
  }
  if (DAT_005b8be9 != '\0') {
    DAT_003fb7e1 = FUN_000a87cc(&DAT_001ccb3c,tmot);
    DAT_005b8be9 = '\0';
  }
  if (B_stend != '\0') {
    FUN_000b1cc0(&DAT_003fb7e1);
  }
  Estw = calc_vanos_optimal(&KFWESOPT,_KFKASOPT_axis_y,RESTNMOT16,RESTRLVW16);
  Estk = calc_vanos_optimal(&KFKESOPT,_KFKASOPT_axis_y,RESTNMOT16,RESTRLVW16);
  Asprlast_temp =
       (ushort)Estw +
       (short)((uint)(((int)(short)(ushort)Estk - (int)(short)(ushort)Estw) *
                     (int)(short)(ushort)DAT_005b8f0b) >> 8);
  if ((short)Asprlast_temp < 0) {
    Asprlast_temp = 0;
  }
  else if (0xff < (short)Asprlast_temp) {
    Asprlast_temp = 0xff;
  }
  DAT_005b8f02 = (undefined)Asprlast_temp;
  bVar4 = esw;
  if (B_ll != '\0') {
    bVar4 = DAT_005b8f07;
  }
  Vse_sprn = (ushort)bVar4 << 3;
  if (B_vl == 0) {
    if (B_ll == '\0') {
      uVar6 = (uint)DAT_005b8f03 +
              (((int)(short)(Asprlast_temp & 0xff) - (int)(short)(ushort)DAT_005b8f03) *
              (int)(short)(ushort)dpsfak) / 0xff;
    }
    else {
      uVar6 = (uint)Esprlu +
              (((int)(short)(ushort)Esprl - (int)(short)(ushort)Esprlu) * (int)(short)(ushort)dpsfak
              ) / 0xff;
      if (DAT_005b8be5 != '\0') {
        sVar8 = FUN_000a92a8(_ESPSAN,&DAT_001ccab4,&ESPSAN_start,nmot_w);
        uVar6 = (int)sVar8 + (int)(short)uVar6;
        if ((int)uVar6 < -0x8000) {
          uVar6 = 0xffff8000;
        }
        else if (0x7fff < (int)uVar6) {
          uVar6 = 0x7fff;
        }
      }
    }
  }
  else {
    uVar6 = calc_value_from_x_y(&KFWESVL,nmot_w,wkrm);
    Asprlast_temp = calc_value_from_x_y(&KFWESVLT,nmot_w,wkrm);
    uVar2 = calc_value_from_x_y(&KFKESVL,nmot_w,wkrm);
    iVar7 = ((int)(((uVar2 & 0xffff) - (int)(short)(uVar6 & 0xff)) *
                  (int)(short)(ushort)DAT_005b8f0b) >> 8) + (uVar6 & 0xff);
    uVar6 = calc_value_from_x_y(&KFKESVLT,nmot_w,wkrm);
    uVar6 = (((((int)(((uVar6 & 0xffff) - (int)(short)(Asprlast_temp & 0xff)) *
                     (int)(short)(ushort)DAT_005b8f0b) >> 8) + (int)(short)(Asprlast_temp & 0xff)) -
             (int)(short)iVar7) * (int)(short)(ushort)dpsfak) / 0xff + iVar7;
  }
  if ((short)uVar6 < 0) {
    uVar6 = 0;
  }
  else if (0xff < (short)uVar6) {
    uVar6 = 0xff;
  }
  if (((int)(short)(ushort)wkrm < (int)(short)(ushort)WKRMGLUE - (int)(short)(ushort)DWKRMGLUE) ||
     ((uint)((int)(short)(ushort)NMOTGLUE + (int)(short)(ushort)DNMOTGLUE) <
      (uint)(int)(short)(ushort)nmot)) {
    B_glue = '\0';
  }
  else if (((WKRMGLUE < wkrm) && (nmot < NMOTGLUE)) || (B_glue != '\0')) {
    B_glue = '\x01';
    uVar6 = calc_value_from_x_y(&KFESPGLUE,nmot_w,_rl_w);
  }
  FUN_000b2550(&DAT_003fb7e4,uVar6 & 0xff,PT1SPR);
  if ((((B_kl15 == 0) || (B_stend == '\0')) || (DAT_005b8bec != '\0')) || (DAT_003fb7e0 != '\0')) {
    B_nvnsad = 1;
  }
  else {
    B_nvnsad = 0;
  }
  B_wnwmnbe = Vse_admn < _WNWAIMN;
  if (((B_kl15 == 0) || (B_stend == '\0')) || ((DAT_005b8bec != '\0' || (DAT_003fb7e0 != '\0')))) {
    sVar8 = 900;
  }
  else {
    if (MDAPPES == '\0') {
      if (E_vvt_vse == '\0') {
        uVar6 = (uint)(_DAT_003fb7e4 >> 8);
      }
      else {
        uVar6 = (uint)ESPRNOTL;
      }
    }
    else {
      uVar6 = (uint)_OFESPRAP;
    }
    sVar8 = (short)(uVar6 << 2);
  }
  uVar6 = (uint)(short)(sVar8 * 2);
  if (((B_btsta == '\0') || (B_gd != '\0')) || (Asprlast_temp = DAT_005b96a4, B_ll == '\0')) {
    Asprlast_temp = 0x80;
  }
  if ((int)uVar6 < (int)(uint)DAT_005b9b92) {
    uVar6 = (uint)DAT_005b9b92;
  }
  sVar8 = (short)((int)uVar6 >> 3) + (Asprlast_temp & 0xff) + -0x80;
  if (sVar8 < 0) {
    sVar8 = 0;
  }
  else if (0xff < sVar8) {
    sVar8 = 0xff;
  }
  Espr = (byte)sVar8;
  if (TMASPR < tmot) {
    DAT_005b8bed = '\0';
  }
  else if ((int)(short)(ushort)tmot <
           ((int)(short)(ushort)TMASPR - (int)(short)(ushort)DAT_001ccb5f) + 0x40) {
    DAT_005b8bed = '\x01';
  }
  dastdll = calc_mmXhpa(&KFDASTDLL,minhub_w,dpssol_uw);
  if (dastdll < -0x80) {
    dastdll = -0x80;
  }
  else if (0x7f < dastdll) {
    dastdll = 0x7f;
  }
  dastd = calc_mmXhpa(&KFDASTD,minhub_w,dpssol_uw);
  if (dastd < -0x80) {
    dastd = -0x80;
  }
  else if (0x7f < dastd) {
    dastd = 0x7f;
  }
  cVar3 = FUN_000b1ec4(&UNK_003fb7e6,B_sa,_TVASPSA);
  if (cVar3 == '\0') {
    bVar1 = false;
    _DAT_003fb7e8 = _DAT_001d3190;
  }
  else if (_DAT_003fb7e8 == 0) {
    bVar1 = false;
  }
  else {
    _DAT_003fb7e8 = _DAT_003fb7e8 + -1;
    bVar1 = true;
  }
  if ((B_sa == '\0') || (((!bVar1 && (S_ASPSATRU == '\0')) || ((DAT_003fde2c & 0x40) != 0)))) {
    B_aspan = '\0';
  }
  else {
    B_aspan = '\x01';
  }
  bVar4 = calc_value_from_x_y(&KFWASLL,nmot_w,rlvwrstg_w);
  sVar8 = calc_value_from_x_y(&KFKASLL,nmot_w,rlvwrstg_w);
  DAT_005b8efb = (char)((int)(short)(sVar8 - (ushort)bVar4) * (uint)DAT_005b8f09 >> 8) + bVar4;
  Allk = calc_vanos_optimal(&KFKALLW,_DAT_001ccbee,RESTNMOT_W,RESTRLVW_W);
  Allw = calc_vanos_optimal(&KFWALLW,_DAT_001ccbee,RESTNMOT_W,RESTRLVW_W);
  Asprlast_temp =
       (ushort)Allk +
       (short)((uint)(((int)(short)(ushort)Allw - (int)(short)(ushort)Allk) *
                     (int)(short)(ushort)DAT_005b8f0e) >> 8);
  if ((short)Asprlast_temp < 0) {
    Asprlast_temp = 0;
  }
  else if (0xff < (short)Asprlast_temp) {
    Asprlast_temp = 0xff;
  }
  FUN_000b2550(&DAT_003fb7de,Asprlast_temp & 0xff,DAT_005b8f10);
  Asprlast_temp = _DAT_003fb7de >> 8;
  uVar5 = (ushort)DAT_005b8efb + dastdll;
  if ((short)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (0xff < (short)uVar5) {
    uVar5 = 0xff;
  }
  if (DAT_001ccb5d == '\0') {
    Asprlu = (byte)uVar5;
  }
  else {
    sVar8 = Asprlast_temp +
            (short)((uint)(((int)(short)(uVar5 & 0xff) - (int)(short)Asprlast_temp) *
                          (int)(short)(ushort)DAT_005b8f0f) >> 8);
    if (sVar8 < 0) {
      sVar8 = 0;
    }
    else if (0xff < sVar8) {
      sVar8 = 0xff;
    }
    Asprlu = (byte)sVar8;
  }
  if (DAT_001ccb5d == '\0') {
    uVar5 = calc_vanos_optimal(&KFALLW,_DAT_001ccbee,RESTNMOT_W,RESTRLVW_W);
    sVar8 = Asprlast_temp +
            (short)((uint)(((int)(short)(uVar5 & 0xff) - (int)(short)Asprlast_temp) *
                          (int)(short)(ushort)DAT_005b8f0f) >> 8);
    if (sVar8 < 0) {
      sVar8 = 0;
    }
    else if (0xff < sVar8) {
      sVar8 = 0xff;
    }
    Asprl = (byte)sVar8;
  }
  else {
    Asprl = calc_vanos_optimal(&KFALLW,_DAT_001ccbee,RESTNMOT_W,RESTRLVW_W);
  }
  Asw = calc_vanos_optimal(&KFWASOPU,_KFKASOPT_axis_y,RESTNMOT16,RESTRLVW16);
  Ask = calc_vanos_optimal(&KFKASOPU,_KFKASOPT_axis_y,RESTNMOT16,RESTRLVW16);
  Asprlast_temp =
       (ushort)Asw +
       (short)((uint)(((int)(short)(ushort)Ask - (int)(short)(ushort)Asw) *
                     (int)(short)(ushort)Fasw_aus) >> 8);
  if ((short)Asprlast_temp < 0) {
    Asprlast_temp = 0;
  }
  else if (0xff < (short)Asprlast_temp) {
    Asprlast_temp = 0xff;
  }
  sVar8 = (Asprlast_temp & 0xff) + dastd;
  if (sVar8 < 0) {
    sVar8 = 0;
  }
  else if (0xff < sVar8) {
    sVar8 = 0xff;
  }
  DAT_005b8ef7 = (byte)sVar8;
  Astw = calc_vanos_optimal(&KFWASOPT,_KFKASOPT_axis_y,RESTNMOT16,RESTRLVW16);
  Astk = calc_vanos_optimal(&KFKASOPT,_KFKASOPT_axis_y,RESTNMOT16,RESTRLVW16);
  Asprlast_temp =
       (ushort)Astw +
       (short)((uint)(((int)(short)(ushort)Astk - (int)(short)(ushort)Astw) *
                     (int)(short)(ushort)Fastw_aus) >> 8);
  if ((short)Asprlast_temp < 0) {
    Asprlast_temp = 0;
  }
  else if (0xff < (short)Asprlast_temp) {
    Asprlast_temp = 0xff;
  }
  Asprlast = (undefined)Asprlast_temp;
  if (B_vl == 0) {
    if (B_ll == '\0') {
      uVar6 = (uint)DAT_005b8ef7 +
              (((int)(short)(Asprlast_temp & 0xff) - (int)(short)(ushort)DAT_005b8ef7) *
              (int)(short)(ushort)dpsfak) / 0xff;
    }
    else {
      uVar6 = (uint)Asprlu +
              (((int)(short)(ushort)Asprl - (int)(short)(ushort)Asprlu) * (int)(short)(ushort)dpsfak
              ) / 0xff;
      if (B_aspan != '\0') {
        sVar8 = FUN_000a92a8(_ASPSAN,&ASPSAN_axis_x,&ASPSAN_start,nmot_w);
        uVar6 = (int)sVar8 + (int)(short)uVar6;
        if ((int)uVar6 < -0x8000) {
          uVar6 = 0xffff8000;
        }
        else if (0x7fff < (int)uVar6) {
          uVar6 = 0x7fff;
        }
      }
    }
  }
  else {
    uVar6 = calc_value_from_x_y(&KFWASVL,nmot_w,wkrm);
    Asprlast_temp = calc_value_from_x_y(&KFWASVLT,nmot_w,wkrm);
    uVar2 = calc_value_from_x_y(&KFKASVL,nmot_w,wkrm);
    iVar7 = ((int)(((uVar2 & 0xffff) - (int)(short)(uVar6 & 0xff)) * (int)(short)(ushort)Fastw_aus)
            >> 8) + (uVar6 & 0xff);
    uVar6 = calc_value_from_x_y(&KFKASVLT,nmot_w,wkrm);
    uVar6 = (((((int)(((uVar6 & 0xffff) - (int)(short)(Asprlast_temp & 0xff)) *
                     (int)(short)(ushort)Fastw_aus) >> 8) + (int)(short)(Asprlast_temp & 0xff)) -
             (int)(short)iVar7) * (int)(short)(ushort)dpsfak) / 0xff + iVar7;
  }
  if ((short)uVar6 < 0) {
    uVar6 = 0;
  }
  else if (0xff < (short)uVar6) {
    uVar6 = 0xff;
  }
  if (B_glue != '\0') {
    uVar6 = calc_value_from_x_y(&KFASPGLUE,nmot_w,_rl_w);
  }
  FUN_000b2550(&DAT_003fb7dc,uVar6 & 0xff,PT1SPR);
  if (((B_kl15 == 0) || (B_stend == '\0')) || ((DAT_005b8bed != '\0' || (DAT_003fb7e1 != '\0')))) {
    B_nvnsad = 1;
  }
  else {
    B_nvnsad = 0;
  }
  if (((B_kl15 == 0) || (B_stend == '\0')) || ((DAT_005b8bed != '\0' || (DAT_003fb7e1 != '\0')))) {
    sVar8 = 900;
  }
  else {
    if (MDAPPAS == '\0') {
      if (E_vvt_vsa == '\0') {
        uVar6 = (uint)(_DAT_003fb7dc >> 8);
      }
      else {
        uVar6 = (uint)ASPRNOTL;
      }
    }
    else {
      uVar6 = (uint)_OFASPRAP;
    }
    sVar8 = (short)(uVar6 << 2);
  }
  if (((B_btvsa == '\0') || (B_gd != '\0')) || (Asprlast_temp = Vsa_btsoll, B_ll == '\0')) {
    Asprlast_temp = 0x80;
  }
  sVar8 = (sVar8 >> 2) + (Asprlast_temp & 0xff) + -0x80;
  if (sVar8 < 0) {
    sVar8 = 0;
  }
  else if (0xff < sVar8) {
    sVar8 = 0xff;
  }
  Aspr = (byte)sVar8;
  return;
}

