/*
 * Program: n42.bin
 * Function: calc_various_status
 * Entry: 0016a538
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void calc_various_status(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined2 local_d8;
  undefined2 local_d4;
  undefined2 local_d0;
  undefined2 local_cc;
  undefined2 local_c8;
  undefined2 local_c4;
  undefined2 local_c0;
  undefined2 local_bc;
  undefined2 local_b8;
  undefined2 local_b4;
  ushort local_b0;
  ushort local_ac;
  ushort local_a8;
  ushort local_a4 [2];
  ushort local_a0 [2];
  ushort *local_9c;
  ushort local_98 [2];
  ushort *local_94;
  ushort local_90 [2];
  ushort *local_8c;
  ushort local_88 [2];
  ushort *local_84;
  ushort local_80 [2];
  ushort *local_7c;
  ushort local_78 [2];
  ushort *local_74;
  ushort local_70 [2];
  ushort *local_6c;
  ushort local_68 [2];
  ushort *local_64;
  ushort local_60 [2];
  ushort *local_5c;
  ushort local_58 [2];
  ushort *local_54;
  ushort local_50 [2];
  ushort *local_4c;
  ushort local_48 [2];
  ushort *local_44;
  ushort local_40 [2];
  ushort *local_3c;
  
  DAT_005b87d8 = DAT_003fdf95 & 1;
  DAT_005b87d9 = 0;
  DAT_005b87da = 0;
  if (((DAT_003fdf93 & 1) == 0) && ((DAT_003fdf95 & 1) == 0)) {
    B_dvvteph = false;
  }
  else {
    B_dvvteph = true;
  }
  if ((B_silm & 1) == 0) {
    uVar6 = dvvterrq & 0xfffd;
  }
  else {
    uVar6 = dvvterrq | 2;
  }
  if ((B_clddss & 1) == 0) {
    uVar6 = uVar6 & 0xfffb;
  }
  else {
    uVar6 = uVar6 | 4;
  }
  if ((E_pddss & 1) == 0) {
    uVar6 = uVar6 & 0xfff7;
  }
  else {
    uVar6 = uVar6 | 8;
  }
  if (B_enws == 0) {
    uVar6 = uVar6 & 0xffef;
  }
  else {
    uVar6 = uVar6 | 0x10;
  }
  if ((bool)B_dvvteph) {
    uVar6 = uVar6 | 0x80;
  }
  else {
    uVar6 = uVar6 & 0xff7f;
  }
  if ((TYP_cvvt & 1) == 0) {
    uVar6 = uVar6 & 0xfffe;
  }
  else {
    uVar6 = uVar6 | 1;
  }
  if ((B_dkpu == '\0') || (B_ubdve == '\0')) {
    dvvterrq = uVar6 & 0xffbf;
  }
  else {
    dvvterrq = uVar6 | 0x40;
  }
  local_d8 = _B_cldvffs;
  if (vvt_ffs < 0xb) {
    if (vvt_ffs == 10) {
      local_d8 = _B_cldvffs & 0xd0fc | 0x2103;
    }
    else if (vvt_ffs == 8) {
      local_d8 = _B_cldvffs & 0xf0fe;
LAB_0016a7f8:
      local_d8 = local_d8 & 0xdffd | 0x2002;
    }
    else if (vvt_ffs == 9) {
      local_d8 = _B_cldvffs & 0xd0fc | 0x2203;
    }
  }
  else if (vvt_ffs == 0xb) {
    local_d8 = _B_cldvffs & 0xd0fc | 0x2403;
  }
  else if (vvt_ffs == 0xc) {
    local_d8 = _B_cldvffs & 0xf0fe | 0x801;
    goto LAB_0016a7f8;
  }
  DAT_005b87e2 = 0;
  if (((local_d8 & 1) != 0) && (((byte)local_d8 >> 1 & 1) != 0)) {
    DAT_005b87e2 = 1;
  }
  local_a4[0] = local_d8;
  local_9c = local_a4;
  local_a0[0] = local_d8;
  func_0xff222958(0x2a,local_a0);
  local_d4 = _B_cldvfrs;
  if (vvt_frs < 0xb) {
    if (vvt_frs == 10) {
      local_d4 = _B_cldvfrs & 0xd0fc | 0x2103;
    }
    else if (vvt_frs == 8) {
      local_d4 = _B_cldvfrs & 0xf0fe;
LAB_0016a9a4:
      local_d4 = local_d4 & 0xdffd | 0x2002;
    }
    else if (vvt_frs == 9) {
      local_d4 = _B_cldvfrs & 0xd0fc | 0x2203;
    }
  }
  else if (vvt_frs == 0xb) {
    local_d4 = _B_cldvfrs & 0xd0fc | 0x2403;
  }
  else if (vvt_frs == 0xc) {
    local_d4 = _B_cldvfrs & 0xf0fe | 0x801;
    goto LAB_0016a9a4;
  }
  if (((local_d4 & 1) != 0) && (((byte)local_d4 >> 1 & 1) != 0)) {
    DAT_005b87e2 = DAT_005b87e2 | 2;
  }
  local_a4[0] = local_d4;
  local_94 = local_a4;
  local_98[0] = local_d4;
  func_0xff222958(0x2c,local_98);
  local_d0 = _B_sidvpla;
  if (vvt_plsen < 0xb) {
    if (vvt_plsen == 10) {
      local_d0 = _B_sidvpla & 0xd0fc | 0x2103;
    }
    else if (vvt_plsen == 8) {
      local_d0 = _B_sidvpla & 0xf0fe;
LAB_0016ab44:
      local_d0 = local_d0 & 0xdffd | 0x2002;
    }
    else if (vvt_plsen == 9) {
      local_d0 = _B_sidvpla & 0xd0fc | 0x2203;
    }
  }
  else if (vvt_plsen == 0xb) {
    local_d0 = _B_sidvpla & 0xd0fc | 0x2403;
  }
  else if (vvt_plsen == 0xc) {
    local_d0 = _B_sidvpla & 0xf0fe | 0x801;
    goto LAB_0016ab44;
  }
  if (((local_d0 & 1) != 0) && (((byte)local_d0 >> 1 & 1) != 0)) {
    DAT_005b87e2 = DAT_005b87e2 | 4;
  }
  local_a4[0] = local_d0;
  local_8c = local_a4;
  local_90[0] = local_d0;
  func_0xff222958(0x34,local_90);
  local_cc = _B_ftdvuse;
  if (vvt_usen < 0xb) {
    if (vvt_usen == 10) {
      local_cc = _B_ftdvuse & 0xd0fc | 0x2103;
    }
    else if (vvt_usen == 8) {
      local_cc = _B_ftdvuse & 0xf0fe;
LAB_0016ace4:
      local_cc = local_cc & 0xdffd | 0x2002;
    }
    else if (vvt_usen == 9) {
      local_cc = _B_ftdvuse & 0xd0fc | 0x2203;
    }
  }
  else if (vvt_usen == 0xb) {
    local_cc = _B_ftdvuse & 0xd0fc | 0x2403;
  }
  else if (vvt_usen == 0xc) {
    local_cc = _B_ftdvuse & 0xf0fe | 0x801;
    goto LAB_0016ace4;
  }
  if (((local_cc & 1) != 0) && (((byte)local_cc >> 1 & 1) != 0)) {
    DAT_005b87e2 = DAT_005b87e2 | 8;
  }
  local_a4[0] = local_cc;
  local_84 = local_a4;
  local_88[0] = local_cc;
  func_0xff222958(0x3b,local_88);
  local_c8 = _B_mndvlrn;
  if (vvt_alern < 0xb) {
    if (vvt_alern == 10) {
      local_c8 = _B_mndvlrn & 0xd0fc | 0x2103;
    }
    else if (vvt_alern == 8) {
      local_c8 = _B_mndvlrn & 0xf0fe;
LAB_0016ae84:
      local_c8 = local_c8 & 0xdffd | 0x2002;
    }
    else if (vvt_alern == 9) {
      local_c8 = _B_mndvlrn & 0xd0fc | 0x2203;
    }
  }
  else if (vvt_alern == 0xb) {
    local_c8 = _B_mndvlrn & 0xd0fc | 0x2403;
  }
  else if (vvt_alern == 0xc) {
    local_c8 = _B_mndvlrn & 0xf0fe | 0x801;
    goto LAB_0016ae84;
  }
  if (((local_c8 & 1) != 0) && (((byte)local_c8 >> 1 & 1) != 0)) {
    DAT_005b87e2 = DAT_005b87e2 | 0x10;
  }
  local_a4[0] = local_c8;
  local_7c = local_a4;
  local_80[0] = local_c8;
  func_0xff222958(0x30,local_80);
  local_c4 = _E_dvste;
  if (vvt_stell < 0xb) {
    if (vvt_stell == 10) {
      local_c4 = _E_dvste & 0xd0fc | 0x2103;
    }
    else if (vvt_stell == 8) {
      local_c4 = _E_dvste & 0xf0fe;
LAB_0016b024:
      local_c4 = local_c4 & 0xdffd | 0x2002;
    }
    else if (vvt_stell == 9) {
      local_c4 = _E_dvste & 0xd0fc | 0x2203;
    }
  }
  else if (vvt_stell == 0xb) {
    local_c4 = _E_dvste & 0xd0fc | 0x2403;
  }
  else if (vvt_stell == 0xc) {
    local_c4 = _E_dvste & 0xf0fe | 0x801;
    goto LAB_0016b024;
  }
  if (((local_c4 & 1) != 0) && (((byte)local_c4 >> 1 & 1) != 0)) {
    DAT_005b87e2 = DAT_005b87e2 | 0x20;
  }
  local_a4[0] = local_c4;
  local_74 = local_a4;
  local_78[0] = local_c4;
  func_0xff222958(0x37,local_78);
  local_c0 = _B_bedvcan;
  if (vvt_can < 0xb) {
    if (vvt_can == 10) {
      local_c0 = _B_bedvcan & 0xd0fc | 0x2103;
    }
    else if (vvt_can == 8) {
      local_c0 = _B_bedvcan & 0xf0fe;
LAB_0016b1c4:
      local_c0 = local_c0 & 0xdffd | 0x2002;
    }
    else if (vvt_can == 9) {
      local_c0 = _B_bedvcan & 0xd0fc | 0x2203;
    }
  }
  else if (vvt_can == 0xb) {
    local_c0 = _B_bedvcan & 0xd0fc | 0x2403;
  }
  else if (vvt_can == 0xc) {
    local_c0 = _B_bedvcan & 0xf0fe | 0x801;
    goto LAB_0016b1c4;
  }
  if (((local_c0 & 1) != 0) && (((byte)local_c0 >> 1 & 1) != 0)) {
    DAT_005b87e2 = DAT_005b87e2 | 0x40;
  }
  local_a4[0] = local_c0;
  local_6c = local_a4;
  local_70[0] = local_c0;
  func_0xff222958(0x1b,local_70);
  local_bc = _B_cldvfsg;
  if (vvt_sg < 0xb) {
    if (vvt_sg == 10) {
      local_bc = _B_cldvfsg & 0xd0fc | 0x2103;
    }
    else if (vvt_sg == 8) {
      local_bc = _B_cldvfsg & 0xf0fe;
LAB_0016b364:
      local_bc = local_bc & 0xdffd | 0x2002;
    }
    else if (vvt_sg == 9) {
      local_bc = _B_cldvfsg & 0xd0fc | 0x2203;
    }
  }
  else if (vvt_sg == 0xb) {
    local_bc = _B_cldvfsg & 0xd0fc | 0x2403;
  }
  else if (vvt_sg == 0xc) {
    local_bc = _B_cldvfsg & 0xf0fe | 0x801;
    goto LAB_0016b364;
  }
  if (((local_bc & 1) != 0) && (((byte)local_bc >> 1 & 1) != 0)) {
    DAT_005b87e2 = DAT_005b87e2 | 0x100;
  }
  local_a4[0] = local_bc;
  local_64 = local_a4;
  local_68[0] = local_bc;
  func_0xff222958(0x2e,local_68);
  local_b8 = _B_cldvest;
  if (vvt_endst < 0xb) {
    if (vvt_endst == 10) {
      local_b8 = _B_cldvest & 0xd0fc | 0x2103;
    }
    else if (vvt_endst == 8) {
      local_b8 = _B_cldvest & 0xf0fe;
LAB_0016b504:
      local_b8 = local_b8 & 0xdffd | 0x2002;
    }
    else if (vvt_endst == 9) {
      local_b8 = _B_cldvest & 0xd0fc | 0x2203;
    }
  }
  else if (vvt_endst == 0xb) {
    local_b8 = _B_cldvest & 0xd0fc | 0x2403;
  }
  else if (vvt_endst == 0xc) {
    local_b8 = _B_cldvest & 0xf0fe | 0x801;
    goto LAB_0016b504;
  }
  if (((local_b8 & 1) != 0) && (((byte)local_b8 >> 1 & 1) != 0)) {
    DAT_005b87e2 = DAT_005b87e2 | 0x200;
  }
  local_a4[0] = local_b8;
  local_5c = local_a4;
  local_60[0] = local_b8;
  func_0xff222958(0x23,local_60);
  local_b4 = _Z_dvulv;
  if (vvt_uleis < 0xb) {
    if (vvt_uleis == 10) {
      local_b4 = _Z_dvulv & 0xd0fc | 0x2103;
    }
    else if (vvt_uleis == 8) {
      local_b4 = _Z_dvulv & 0xf0fe;
LAB_0016b6a4:
      local_b4 = local_b4 & 0xdffd | 0x2002;
    }
    else if (vvt_uleis == 9) {
      local_b4 = _Z_dvulv & 0xd0fc | 0x2203;
    }
  }
  else if (vvt_uleis == 0xb) {
    local_b4 = _Z_dvulv & 0xd0fc | 0x2403;
  }
  else if (vvt_uleis == 0xc) {
    local_b4 = _Z_dvulv & 0xf0fe | 0x801;
    goto LAB_0016b6a4;
  }
  if (((local_b4 & 1) != 0) && (((byte)local_b4 >> 1 & 1) != 0)) {
    DAT_005b87e2 = DAT_005b87e2 | 0x400;
  }
  local_a4[0] = local_b4;
  local_54 = local_a4;
  local_58[0] = local_b4;
  func_0xff222958(0x39,local_58);
  if ((vvt_ovrld - 9 < 6) && (B_stend != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    if (B_vvtovlc == '\0') {
      if ((uint)_vvtovlcou + (uint)_VVTOVLCAD < 0x10000) {
        _vvtovlcou = (ushort)((uint)_vvtovlcou + (uint)_VVTOVLCAD);
      }
      else {
        _vvtovlcou = 0xffff;
      }
      B_vvtovlc = '\x01';
      _DAT_003fac2a = 0;
    }
    if (bVar1) {
      DAT_005b87e2 = DAT_005b87e2 | 0x800;
      func_0xff221d28(&DAT_003fac2a);
    }
  }
  if (((_TVVTOVRL < _DAT_003fac2a) || (_VVTOVLCMX <= _vvtovlcou)) ||
     (((bbwuc & 1) != 0 && (B_vvtovlc == '\0')))) {
    local_b0 = _sfpdvovl;
    if (vvt_ovrld < 0xb) {
      if (vvt_ovrld == 10) {
        local_b0 = _sfpdvovl & 0xd0fc | 0x2103;
      }
      else if (vvt_ovrld == 8) {
        local_b0 = _sfpdvovl & 0xf0fe;
LAB_0016b944:
        local_b0 = local_b0 & 0xdffd | 0x2002;
      }
      else if (vvt_ovrld == 9) {
        local_b0 = _sfpdvovl & 0xd0fc | 0x2203;
      }
    }
    else if (vvt_ovrld == 0xb) {
      local_b0 = _sfpdvovl & 0xd0fc | 0x2403;
    }
    else if (vvt_ovrld == 0xc) {
      local_b0 = _sfpdvovl & 0xf0fe | 0x801;
      goto LAB_0016b944;
    }
    local_a4[0] = local_b0;
    local_4c = local_a4;
    local_50[0] = local_b0;
    func_0xff222958(0x32,local_50);
  }
  if ((B_kl15 == 0) && (DAT_003fac35 != '\0')) {
    DAT_003fac34 = true;
  }
  else {
    DAT_003fac34 = false;
  }
  DAT_003fac35 = B_kl15;
  if (((((bool)DAT_003fac34) && (B_stend != '\0')) && (B_vvtovlc == '\0')) && (_vvtovlcou != 0)) {
    iVar4 = _vvtovlcou - 1;
    if (iVar4 < 0) {
      _vvtovlcou = 0;
    }
    else {
      _vvtovlcou = (ushort)iVar4;
    }
  }
  dme_errfb = vvtstatus != 0;
  vvtstatus = DAT_005b87e2;
  if (DAT_005b87e2 == 0) {
    uVar5 = dvvterrq & 0xfffffeff;
  }
  else {
    uVar5 = dvvterrq | 0x100;
  }
  if (vvt_errst == '\0') {
    uVar5 = uVar5 & 0xfffffdff;
  }
  else {
    uVar5 = uVar5 | 0x200;
  }
  if (vvt_ready == '\0') {
    uVar5 = uVar5 | 0x400;
  }
  else {
    uVar5 = uVar5 & 0xfffffbff;
  }
  if ((B_vvtno_an == '\0') || (B_nmot == '\0')) {
    uVar5 = uVar5 & 0xffffffdf;
  }
  else {
    uVar5 = uVar5 | 0x20;
  }
  dvvterrq = (ushort)uVar5;
  uVar5 = uVar5 & (_DVVTEENA | 0x1b01);
  DAT_003fac2c = func_0xff221e78(&UNK_003fac2d,
                                 (-(_DVVTEEDEL & uVar5) & ~(_DVVTEEDEL & uVar5)) >> 0x1f,TDVERR);
  if (B_vvtnotl == 0) {
    dvvterrq1 = (undefined2)uVar5;
  }
  if (((DAT_003fac2c != '\0') || ((uVar5 & ~(uint)_DVVTEEDEL) != 0)) && ((uVar5 & 0x7ff) != 0)) {
    B_vvtnotl1 = '\x01';
  }
  if ((B_vvtnotl1 == '\0') && (B_vvtnotl2 == '\0')) {
    B_vvtnotl = false;
  }
  else {
    B_vvtnotl = true;
  }
  if (((bool)B_vvtnotl) && (B_nmot != '\0')) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  DAT_003fac1e = func_0xff221e78(&UNK_003fac1f,uVar7,TVVTTVON);
  if (DAT_003fac1e == 0) {
    swvvtnot = 0;
  }
  else {
    swvvtnot = 2;
  }
  B_vvttvnot = DAT_003fac1e;
  if ((B_vvtno_an != '\0') && (B_nmot != '\0')) {
    local_ac = _B_ftdvan & 0xd0fc | 0x2103;
    local_a4[0] = local_ac;
    local_44 = local_a4;
    local_48[0] = local_ac;
    func_0xff222958(0x1a,local_48);
  }
  uVar6 = _Z_dvpmn;
  if ((_CWERRVVT & 1) != 0) {
    E_vvt_hub = B_vvtnotl;
  }
  if ((B_vvtnotl == 0) || (B_vvtnlio != '\0')) {
    B_vvtnlf = 0;
  }
  else {
    B_vvtnlf = 1;
  }
  if ((_CWERRVVT >> 1 & 1) != 0) {
    E_vvt_vse = B_vvtnlf;
  }
  if ((_CWERRVVT >> 2 & 1) != 0) {
    E_vvt_vsa = B_vvtnlf;
  }
  if ((_CWERRVVT >> 3 & 1) != 0) {
    E_vvt_zw = B_vvtnlf;
  }
  local_a8 = _Z_dvpmn;
  if (((B_kl15 == 0) || (B_vvtnotl == 0)) || (B_nmot == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  DAT_003fac2e = func_0xff221e78(&UNK_003fac2f,uVar7,DAT_001c3b4e);
  if (DAT_003fac2e == '\0') {
LAB_0016be9c:
    if ((_DVVTSWITCH >> 4 & 1) == 0) goto LAB_0016c128;
  }
  else {
    if (exwnki_w <= _DAT_001c3b26) {
      local_a8 = uVar6 & 0xd0fc | 0x2203;
    }
    if (DAT_005b87cc != '\0') {
      local_a8 = local_a8 & 0xd0fc | 0x2103;
    }
    if (DAT_005b87cf != '\0') {
      local_a8 = local_a8 & 0xd0fc | 0x2403;
    }
    if (DAT_003fac2e == '\0') goto LAB_0016be9c;
  }
  if ((((_DVVTSWITCH >> 4 & 1) != 0) || (B_iwfalse != 0)) || (B_iwfalse2 != 0)) {
    uVar5 = (uint)mlhfmf_w;
    if (uVar5 < mlhfmm_w) {
      uVar5 = (uint)mlhfmm_w;
    }
    iVar4 = (uint)msdk_w - (uVar5 - _MLOFS);
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    uVar5 = (uint)pu_w;
    if (uVar5 == 0) {
      iVar3 = (short)dps_w * -0x4000;
    }
    else {
      iVar3 = (int)((uVar5 - (int)(short)dps_w) * 0x4000) / (int)uVar5;
    }
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    DAT_005b98c2 = (short)iVar3 * 2;
    DAT_005b98be = (short)iVar4;
    sVar2 = func_0xff2192a8(_DAT_001c3a94,&DAT_001c3a96,&DAT_001c3aa6,nmot_w);
    DAT_005b87d0 = sVar2 <= (short)iVar4;
    if ((((B_clddss & 1) == 0) && ((E_pddss & 1) == 0)) &&
       ((_DAT_001c3b2e < DAT_005b98c2 &&
        (sVar2 = func_0xff2192a8(_DAT_001c3ac8,&DAT_001c3aca,&DAT_001c3ada,nmot_w),
        (int)_wdkba_w + (int)sVar2 < (int)(((uint)wdkugd_w * 0x600) / 0x5fff))))) {
      DAT_005b87d1 = true;
    }
    else {
      DAT_005b87d1 = false;
    }
    if ((B_vl == 0) || ((int)((uint)rlugd_w - (uint)_DAT_001c3b30) <= (int)(uint)_rl_w)) {
      DAT_005b87d2 = false;
    }
    else {
      DAT_005b87d2 = true;
    }
    if (((DAT_005b87d0 != '\0') || ((bool)DAT_005b87d1)) || ((bool)DAT_005b87d2)) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    DAT_003fac26 = func_0xff221e78(&UNK_003fac27,uVar7,DAT_001c3b4d);
    DAT_005b87cf = DAT_003fac26;
  }
LAB_0016c128:
  local_a4[0] = local_a8;
  local_3c = local_a4;
  local_40[0] = local_a8;
  func_0xff222958(0x36,local_40);
  if ((((B_vvtnotl == 0) || (B_kl15 == 0)) ||
      ((B_nmot == '\0' || ((B_enws != 0 || (B_dvvteph != '\0')))))) ||
     (((_DVVTSWITCH >> 3 & 1) == 0 && ((B_silm & 1) != 0)))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  DAT_003fac1c = func_0xff221e78(&UNK_003fac1d,uVar7,DAT_001c3b4c);
  DAT_005b98ca = exwnki_w;
  if ((_DVVTSWITCH >> 6 & 1) == 0) {
    if ((DAT_003fac1c == '\0') ||
       ((((B_iwfalse != 0 || (B_iwfalse2 != 0)) && ((_DVVTSWITCH >> 5 & 1) == 0)) ||
        (exwnki_w <= _DAT_001c3b26)))) {
      B_vvtnlio = false;
    }
    else {
      B_vvtnlio = true;
    }
  }
  else {
    B_vvtnlio = false;
  }
  DAT_003fac20 = B_vvtnlrem != DAT_003fac21;
  DAT_003fac21 = B_vvtnlrem;
  DAT_003fac36 = B_vvtiorem != DAT_003fac37;
  DAT_003fac37 = B_vvtiorem;
  if (((bool)DAT_003fac20) || ((bool)DAT_003fac36)) {
    DAT_005b8cd0 = '\x01';
  }
  if ((DAT_005b8cd0 != '\0') && (DAT_005b8cc1 != '\0')) {
    DAT_005b8cd0 = '\0';
  }
  if ((_DVVTSWITCH >> 6 & 1) == 0) {
    if (B_vvtnotl == 0) {
      DAT_005b8e08 = 0;
    }
    else if ((_Z_dvpmn & 1) == 0) {
      if ((bool)B_vvtnlio) {
        DAT_005b8e08 = 0;
      }
      else {
        DAT_005b8e08 = 2;
      }
    }
    else {
      DAT_005b8e08 = DAT_001c3b49;
    }
  }
  else if (B_vvtnotl == 0) {
    DAT_005b8e08 = 0;
  }
  else {
    DAT_005b8e08 = 2;
  }
  if ((_DVVTSWITCH >> 7 & 1) == 0) {
    if (((_Z_dvpmn & 1) == 0) && ((TYP_cvvt & 1) == 0)) {
      B_dvvtobd = 0;
    }
    else {
      B_dvvtobd = 1;
    }
  }
  else {
    B_dvvtobd = 0;
  }
  if ((B_nmot == '\0') || (B_kl15 == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  DAT_003fac28 = func_0xff221e78(&UNK_003fac29,uVar7,DAT_001c3b4b);
  if (DAT_003fac28 != '\0') {
    B_vvtiorem = B_vvtnlio;
    B_vvtnlrem = B_vvtnotl;
  }
  return;
}

