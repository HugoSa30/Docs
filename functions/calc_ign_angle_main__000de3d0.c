/*
 * Program: n42.bin
 * Function: calc_ign_angle_main
 * Entry: 000de3d0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void calc_ign_angle_main(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char ign_angle_v1;
  char ign_angle_v2;
  ushort uVar6;
  int unaff_r19;
  int iVar7;
  int iVar8;
  short sVar9;
  short KFZWTDO_values;
  
  if (rlsol_w < 0x1fe0) {
    DAT_003fc27b = (byte)((int)(uint)rlsol_w >> 5);
  }
  else {
    DAT_003fc27b = 0xff;
  }
  if (minhub_w < 0x3e4) {
    minhub_ub = (undefined)(((uint)minhub_w << 8) / 1000);
  }
  else {
    minhub_ub = 0xff;
  }
  ign_angle_v1 = FUN_000a8eec(DAT_001cd62a,&DAT_001cd62b,0x1cd631,nmot);
  uVar2 = calc_value_from_x_y_2(&KFTRLSOLKR,minhub_ub,dpssol_ub);
  bVar1 = DAT_003fc27b;
  uVar2 = (uVar2 & 0xff) + (int)ign_angle_v1;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0xff < (int)uVar2) {
    uVar2 = 0xff;
  }
  uVar2 = uVar2 & 0xff;
  (&DAT_003fb834)[DAT_003fb844 & 0xf] = DAT_003fc27b;
  (&DAT_003fb84c)[DAT_003fb85c & 0xf] = bVar1;
  DAT_003fc280 = (&DAT_003fb84c)[(uint)DAT_003fb85c - (uint)DAT_001cd766 & 0xf];
  DAT_003fb85c = DAT_003fb85c + 1;
  uVar3 = calc_value_from_x_y(&KFZRLSOLKR,minhub_w,dpssol_uw);
  uVar4 = FUN_000a87cc(&DAT_001d31e0,nmot);
  uVar3 = (int)((uVar3 & 0xffff) * (uVar4 & 0xff)) >> 5;
  if (uVar3 < 0x10000) {
    if (uVar3 == 0) {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0xffff;
  }
  if (DAT_001cd764 == '\0') {
    DAT_003fc27c = (&DAT_003fb834)[DAT_003fb844 - uVar2 & 0xf];
    DAT_003fb844 = DAT_003fb844 + 1;
    rlsolkrvf = FUN_000b2514(&DAT_003fb848,DAT_003fc27c,uVar3 & 0xffff);
  }
  if (DAT_001cd764 == '\x01') {
    if (_DAT_003fb864 < DAT_003fc27b) {
      DAT_005b8c01 = DAT_005b8c01 & 0xfd | 2;
    }
    else {
      DAT_005b8c01 = DAT_005b8c01 & 0xfd;
    }
    if (rlsolkrvf < _DAT_003fb866) {
      DAT_005b8c01 = DAT_005b8c01 & 0xfb | 4;
    }
    else {
      DAT_005b8c01 = DAT_005b8c01 & 0xfb;
    }
    if (((DAT_005b8c01 >> 2 & 1) != 0) &&
       (DAT_005b8c01 = DAT_005b8c01 & 0xfe | 1, _DAT_003fb868 != 0)) {
      _DAT_003fb868 = _DAT_003fb868 + -1;
    }
    if ((DAT_005b8c01 >> 1 & 1) != 0) {
      DAT_005b8c01 = DAT_005b8c01 & 0xfe;
      ign_angle_v1 = FUN_000a8eec(DAT_001cd637,&DAT_001cd638,&DAT_001cd63e,nmot);
      _DAT_003fb868 = (short)ign_angle_v1;
      _DAT_003fb86c = (ushort)DAT_003fc27c;
    }
    bVar1 = DAT_003fb844;
    if (((_DAT_003fb864 < DAT_003fc27b) || (_DAT_003fb86a < DAT_003fc27c)) ||
       (_DAT_003fb866 < rlsolkrvf)) {
      _DAT_003fb866 = (ushort)rlsolkrvf;
      _DAT_003fb864 = (ushort)DAT_003fc27b;
      _DAT_003fb86a = (ushort)DAT_003fc27c;
      uVar4 = (uint)DAT_003fb844;
      uVar3 = FUN_000a87cc(&DAT_001d31c0,nmot);
      uVar3 = (int)((uint)(byte)(&DAT_003fb834)[uVar4 - uVar2 & 0xf] * (uVar3 & 0xff)) >> 5;
      if (uVar3 < 0x10000) {
        if (uVar3 == 0) {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0xffff;
      }
      DAT_003fc27c = (byte)uVar3;
    }
    else {
      _DAT_003fb866 = (ushort)rlsolkrvf;
      _DAT_003fb864 = (ushort)DAT_003fc27b;
      _DAT_003fb86a = (ushort)DAT_003fc27c;
      DAT_003fc27c = (&DAT_003fb834)[DAT_003fb844 - uVar2 & 0xf];
    }
    DAT_003fb844 = bVar1 + 1;
    if ((((DAT_005b8c01 & 1) != 0) && (_DAT_003fb868 != 0)) && ((DAT_005b8c01 >> 1 & 1) == 0)) {
      DAT_003fc27c = (byte)_DAT_003fb86c;
    }
    uVar4 = calc_value_from_x_y(&KFZRLSOLKR,minhub_w,dpssol_uw);
    uVar5 = FUN_000a87cc(&DAT_001d31d0,nmot);
    uVar4 = (int)((uVar4 & 0xffff) * (uVar5 & 0xff)) >> 5;
    if (uVar4 < 0x10000) {
      if (uVar4 == 0) {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0xffff;
    }
    if ((DAT_005b8c01 & 1) == 0) {
      rlsolkrvf = FUN_000b2514(&DAT_003fb848,DAT_003fc27c,uVar4 & 0xffff);
    }
    else {
      rlsolkrvf = FUN_000b2514(&DAT_003fb848,DAT_003fc27c,uVar3 & 0xffff);
    }
  }
  bVar1 = DAT_003fb844;
  if (DAT_001cd764 == '\x02') {
    if (((_DAT_003fb864 < DAT_003fc27b) || (_DAT_003fb86a < DAT_003fc27c)) ||
       (_DAT_003fb866 < rlsolkrvf)) {
      _DAT_003fb866 = (ushort)rlsolkrvf;
      _DAT_003fb864 = (ushort)DAT_003fc27b;
      _DAT_003fb86a = (ushort)DAT_003fc27c;
      uVar4 = (uint)DAT_003fb844;
      uVar3 = FUN_000a87cc(&DAT_001d31c0,nmot);
      uVar3 = (int)((uint)(byte)(&DAT_003fb834)[uVar4 - uVar2 & 0xf] * (uVar3 & 0xff)) >> 5;
      if (uVar3 < 0x10000) {
        if (uVar3 == 0) {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0xffff;
      }
      DAT_003fc27c = (byte)uVar3;
    }
    else {
      _DAT_003fb866 = (ushort)rlsolkrvf;
      _DAT_003fb864 = (ushort)DAT_003fc27b;
      _DAT_003fb86a = (ushort)DAT_003fc27c;
      DAT_003fc27c = (&DAT_003fb834)[DAT_003fb844 - uVar2 & 0xf];
    }
    DAT_003fb844 = bVar1 + 1;
    rlsolkrvf = FUN_000b2514(&DAT_003fb848,DAT_003fc27c,uVar3 & 0xffff);
  }
  rlsolkrvft = FUN_000b2514(&DAT_003fb860,DAT_003fc280,_ZKRLSOLKRT);
  ign_angle_v1 = calc_ign_angle_partial_load
                           (KFZW1,&KFZW1_axis_x,DAT_001cd003,&KFZW1_axis_y,&KFZW1_start,nmot,
                            rlsolkrvf);
  ::KFZWTDO_values =
       calc_ign_angle_partial_load
                 (KFZWTDO,&KFZWTDO_axis_x,DAT_001cd5d9,0x1cd5e2,0x1cd5ea,minhub_ub,dpssol_ub);
  KFZWTDO_values = (short)::KFZWTDO_values;
  if (E_vvt_zw == '\0') {
    ign_angle_v2 = calc_ign_angle_partial_load
                             (KFZW2,&KFZW2_axis_x,DAT_001cd1ad,0x1cd1c6,0x1cd1d6,nmot,rlsolkrvft);
  }
  else {
    ign_angle_v2 = calc_ign_angle_partial_load
                             (KFZWNOTL,&KFZWNOTL_axis_x,DAT_001cd42f,&KFZWNOTL_axis_y,
                              &KFZWNOTL_start,nmot,rlsolkrvft);
  }
  iVar7 = ((int)(((int)ign_angle_v2 - (int)(short)(ign_angle_v1 + KFZWTDO_values)) * (uint)dpsfak)
          >> 8) + (int)(short)(ign_angle_v1 + KFZWTDO_values);
  if (iVar7 < -0x80) {
    DAT_005b9227 = -0x80;
  }
  else if (iVar7 < 0x80) {
    DAT_005b9227 = (char)iVar7;
  }
  else {
    DAT_005b9227 = '\x7f';
  }
  if (B_vl == 0) {
    ign_angle_v1 = calc_ign_angle_partial_load
                             (KFZW1,&KFZW1_axis_x,DAT_001cd003,&KFZW1_axis_y,&KFZW1_start,nmot,rl);
    KFZWTDO_values = (short)ign_angle_v1 + (short)::KFZWTDO_values;
  }
  else {
    ign_angle_v1 = calc_ign_angle_full_load(&KFZWVL,KFZWVL_axis_y,esst_snm24zuub,esst_srl06zuub);
    KFZWTDO_values = (short)ign_angle_v1;
  }
  if (E_vvt_zw == '\0') {
    if (B_vl == 0) {
      ign_angle_v1 = calc_ign_angle_partial_load
                               (KFZW2,&KFZW2_axis_x,DAT_001cd1ad,0x1cd1c6,0x1cd1d6,nmot,rl);
      iVar7 = (int)ign_angle_v1;
    }
    else {
      ign_angle_v1 = calc_ign_angle_full_load(&KFZWVLT,KFZWVL_axis_y,esst_snm24zuub,esst_srl06zuub);
      iVar7 = (int)ign_angle_v1;
    }
  }
  else {
    ign_angle_v1 = calc_ign_angle_partial_load
                             (KFZWNOTL,&KFZWNOTL_axis_x,DAT_001cd42f,&KFZWNOTL_axis_y,
                              &KFZWNOTL_start,nmot,rl);
    iVar7 = (int)ign_angle_v1;
  }
  iVar7 = ((int)((iVar7 - KFZWTDO_values) * (uint)dpsfak) >> 8) + (int)KFZWTDO_values;
  if (iVar7 < -0x80) {
    DAT_005b9226 = -0x80;
  }
  else if (iVar7 < 0x80) {
    DAT_005b9226 = (char)iVar7;
  }
  else {
    DAT_005b9226 = '\x7f';
  }
  sVar9 = (short)DAT_005b9226;
  KFZWTDO_values = (short)DAT_005b9227;
  uVar6 = calc_value_from_x_y_2(&KFDZWTHFAK,nmot,tans);
  sVar9 = (KFZWTDO_values - sVar9) * (uVar6 & 0xff);
  KFZWTDO_values = sVar9 >> 8;
  if (KFZWTDO_values == 0) {
    DAT_005b9225 = '\0';
  }
  else if (KFZWTDO_values < -0x80) {
    DAT_005b9225 = -0x80;
  }
  else {
    DAT_005b9225 = (char)((ushort)sVar9 >> 8);
  }
  iVar7 = (int)(short)((short)DAT_005b9225 + (short)DAT_005b9227);
  if (iVar7 < 0x80) {
    if (iVar7 < -0x80) {
      iVar7 = -0x80;
    }
  }
  else {
    iVar7 = 0x7f;
  }
  iVar8 = (int)DAT_005b9226;
  if (iVar7 < iVar8) {
    iVar8 = iVar7;
  }
  KFZWTDO_values = FUN_000a92a8(_KLDRSOLKR,&KLDRSOLKR_axis_x,&KLDRSOLKR_start,nmot_w);
  DAT_005b8bfe = KFZWTDO_values <= (short)drlsol_w;
  if ((bool)DAT_005b8bfe) {
    TVDRLSOLKR_values = FUN_000a87cc(&TVDRLSOLKR,nmot);
  }
  DAT_005b8bff = TVDRLSOLKR_values != '\0';
  if ((((bool)DAT_005b8bff) && (TVDRLSOLKR_values = TVDRLSOLKR_values + -1, (CWZWDYN & 2) != 0)) &&
     (((CWZWDYN & 1) != 0 || (B_vl == 0)))) {
    B_zwdyn = 1;
  }
  else {
    B_zwdyn = 0;
  }
  if (B_zwdyn == 0) {
    DAT_005b9229 = DAT_005b9226;
  }
  else {
    DAT_005b9229 = (char)iVar8;
  }
  if ((B_kr != '\0') && (B_krdws != '\0')) {
    zwgru = DAT_005b922d;
    return;
  }
  ign_angle_v1 = calc_ign_angle_partial_load
                           (KFZWLLTDO,&DAT_001cd3de,KFZWLLTDO_axis_x,0x1cd3e6,0x1cd3ee,minhub_ub,
                            dpssol_ub);
  ign_angle_v2 = calc_ign_angle_partial_load
                           (KFZWLL,&DAT_001cd358,KFZWLL_axis_x,&KFZWLL_axis_y,0x1cd369,nmot,rl);
  KFZWTDO_values = (short)ign_angle_v2 + (short)ign_angle_v1;
  if (KFZWTDO_values < 0x7f) {
    if (-0x80 < KFZWTDO_values) {
      unaff_r19 = (int)(char)KFZWTDO_values;
      goto LAB_000def34;
    }
  }
  else if (0x7f < KFZWTDO_values) {
    unaff_r19 = 0x7f;
    goto LAB_000def34;
  }
  if (KFZWTDO_values < -0x80) {
    unaff_r19 = -0x80;
  }
LAB_000def34:
  ign_angle_v1 = calc_ign_angle_partial_load
                           (KFZWLLT,&DAT_001cd3a7,KFZWLLT_axis_x,0x1cd3af,&KFZWLLT_start,nmot,rl);
  iVar7 = ((int)((int)(short)((short)ign_angle_v1 - (short)unaff_r19) * (uint)dpsfak) >> 8) +
          unaff_r19;
  KFZWTDO_values = (short)iVar7;
  if (KFZWTDO_values < 0x80) {
    if (KFZWTDO_values < -0x80) {
      DAT_005b922a = 0x80;
    }
    else {
      DAT_005b922a = (undefined)iVar7;
    }
  }
  else {
    DAT_005b922a = 0x7f;
  }
  if ((CWZWDYN & 4) == 0) {
    iVar7 = ((int)((int)(short)(KFZWTDO_values - DAT_005b9229) * (uint)fnwlleff) >> 8) +
            (int)DAT_005b9229;
    if (iVar7 < 0x80) {
      if (iVar7 < -0x80) {
        iVar7 = -0x80;
      }
    }
    else {
      iVar7 = 0x7f;
    }
  }
  else if (B_ll == '\0') {
    iVar7 = (int)DAT_005b9229;
  }
  if (B_zwdyn == 0) {
    rlkr = rl;
  }
  else if (E_vvt_zw == '\0') {
    rlkr = rlsolkrvf;
  }
  else {
    rlkr = rlsolkrvft;
  }
  ign_angle_v1 = FUN_000a8eec(WMXTA,0x1cd77a,0x1cd77d,tans);
  uVar6 = calc_value_from_x_y_2(&KFFWMXA,nmot,rlkr);
  KFZWTDO_values =
       (short)iVar7 + (short)(char)dzwoag + (short)(char)dzwol +
       (short)((int)ign_angle_v1 * (int)(short)(uVar6 & 0xff) >> 7);
  if (KFZWTDO_values < 0x7f) {
    if (KFZWTDO_values < -0x80) {
      zwgru = 0x80;
    }
    else {
      zwgru = (byte)KFZWTDO_values;
    }
  }
  else {
    zwgru = 0x7f;
  }
                    /* WARNING: Read-only address (ram,0x005b9c90) is written */
  return;
}

