/*
 * Program: n42.bin
 * Function: FUN_000b2adc
 * Entry: 000b2adc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b2adc(void)

{
  bool bVar1;
  dword dVar2;
  word wVar3;
  dword dVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  uint uVar10;
  
  if (B_strtint != 0) {
    temp_tn_l = 0;
    temp_tn1_l = 0;
    toothtim_l = 0;
    B_strtint = 0;
    DAT_003faa64 = FUN_000f4700(&DAT_003faa60);
    ttstamp_l = _DAT_003faa60;
    wkwalkor_w = FUN_000f4b20();
    iVar7 = (0x3c - (short)(ushort)GAP_TOOTH) * (int)(short)(ushort)CO_WNBM;
    sVar6 = (ushort)CO_WNBM * 2;
    sVar9 = sVar6;
    if ((int)(uint)wkwalkor_w <= iVar7) {
      sVar9 = 0;
    }
    if ((int)(short)(wkwalkor_w - sVar9) <= (int)(iVar7 + (uint)_W360_ALE_IMPL)) {
      sVar6 = 0;
    }
    wkwale_w = (wkwalkor_w - sVar9) - sVar6;
    if (-0x1c21 < (short)wkwale_w) {
      return;
    }
    wkwale_w = 0xe3e0;
    return;
  }
  wVar3 = CO_WAS;
  if ((int)(short)(wkwale_w + CO_WNBM) < (int)(uint)CO_WAS) {
    wVar3 = 0;
  }
  wkwale_w = (wkwale_w + CO_WNBM) - wVar3;
  if ((short)wkwale_w < -0x1c20) {
    wkwale_w = 0xe3e0;
  }
  else if (0x3840 < (short)wkwale_w) {
    wkwale_w = 0x3840;
  }
  ottstamp_l = ttstamp_l;
  DAT_003faa64 = FUN_000f4700(&DAT_003faa60);
  dVar2 = temp_tn1_l;
  uVar10 = ttstmpmx_l;
  if (-1 < (int)(_DAT_003faa60 - ottstamp_l)) {
    uVar10 = 0;
  }
  iVar7 = ((int)(_DAT_003faa60 - ottstamp_l) >> 1) + (uVar10 >> 1);
  if (0x3fffffff < iVar7) {
    iVar7 = 0x3fffffff;
  }
  toothtim_l = iVar7 * 2;
  if (DAT_003faa6a == 0) {
    temp_tn2_l = temp_tn1_l;
    temp_tn1_l = temp_tn_l;
    if (((int)(short)wkwale_w == (uint)CO_GAP + (uint)CO_WNBM) ||
       (dVar4 = toothtim_l,
       (int)(short)wkwale_w << 0x11 ==
       ((uint)CO_GAP + (uint)CO_WNBM) * 0x20000 + (((uint)CO_WAS << 0x12) >> 2))) {
      dVar4 = (((int)toothtim_l >> 1) / 3) * 2;
    }
    if (((((int)temp_tn_l < (int)dVar2) || ((int)temp_tn_l <= (int)dVar4)) ||
        ((int)temp_tn_l <= (int)temp_klt_l)) || (B_enabale == 0)) {
      B_ralectr = 0;
      temp_tn_l = dVar4;
    }
    else {
      B_ralectr = 1;
      temp_tn_l = dVar4;
    }
  }
  if ((B_ralectr == 0) || (DAT_003faa6e != '\0')) {
    DAT_003faa6d = false;
  }
  else {
    DAT_003faa6d = true;
  }
  if ((bool)DAT_003faa6d) {
    wVar3 = wkwrale_w + (ushort)CO_WNBM * -2;
    if ((B_undef == 0) && (wVar3 = wkwale_w, (ALEBits_tooth_int >> 2 & 1) != 0)) {
      wVar3 = wkwalerr_w;
    }
    if ((int)(uint)CO_GAP < (int)(short)wVar3) {
      iVar7 = (uint)CO_WNBM * 2;
    }
    else {
      iVar7 = 0;
    }
    iVar7 = (short)wVar3 + iVar7;
    if ((int)((uint)_W360_ALE_IMPL + (uint)CO_GAP) < iVar7) {
      iVar5 = (uint)CO_WNBM * 2;
    }
    else {
      iVar5 = 0;
    }
    iVar7 = iVar7 + iVar5;
    if (B_phsnlinv != '\0') {
      if ((int)(iVar7 + (uint)_W360_ALE_IMPL) < (int)(uint)_W720_ALE_IMPL) {
        iVar7 = iVar7 + (uint)_W360_ALE_IMPL;
      }
      else {
        iVar7 = (iVar7 + (uint)_W360_ALE_IMPL) - (uint)_W720_ALE_IMPL;
      }
    }
    if (iVar7 < -0x8000) {
      iVar7 = -0x8000;
    }
    else if (0x7fff < iVar7) {
      iVar7 = 0x7fff;
    }
    wkwaskor_w = (word)iVar7;
    sVar6 = wkwaskor_w -
            (short)((uint)(int)(short)wkwaskor_w / (((uint)_W720_ALE_IMPL << 0x12) >> 0x14)) *
            (ushort)(((uint)_W720_ALE_IMPL << 0x12) >> 0x14);
    if ((short)temp_w2 < 0) {
      if ((sVar6 < (short)temp_w3) || ((short)temp_w4 < sVar6)) {
        B_raleok = 1;
      }
      else {
        B_raleok = 0;
      }
    }
    else if (((short)temp_w2 < sVar6) && (sVar6 < (short)temp_w3)) {
      B_raleok = 1;
    }
    else {
      B_raleok = 0;
    }
    if ((sVar6 < (short)temp_w3) || ((short)temp_w1 < sVar6)) {
      B_undef = 0;
    }
    else {
      B_undef = 1;
    }
  }
  if ((((B_undef == 0) && (B_raleok == 0)) || (B_ralectr == 0)) || (DAT_003faa6a != 0)) {
    ALEBits_tooth_int = ALEBits_tooth_int & ~B_rrdet;
    bVar1 = false;
  }
  else {
    ALEBits_tooth_int = ALEBits_tooth_int & ~B_rrdet | B_rrdet;
    bVar1 = true;
  }
  if (B_enabale != 0) {
    if (!bVar1) goto LAB_000b3098;
    wkwrale_w = wkwale_w;
  }
  if (bVar1) {
    DAT_003faa6a = 1;
  }
LAB_000b3098:
  sVar6 = wkwrale_w + (ushort)CO_WNBM * -2;
  wVar3 = CO_WAS;
  if (-1 < (int)(short)wkwale_w - (int)sVar6) {
    wVar3 = 0;
  }
  uVar10 = (uint)(short)((wkwale_w - sVar6) + wVar3);
  if ((int)(uint)_RALEMAX <= (int)uVar10) {
    uVar10 = (uint)_RALEMAX;
  }
  if ((int)((int)sVar6 - uVar10) < 0) {
    uVar8 = (uint)CO_WAS;
  }
  else {
    uVar8 = 0;
  }
  iVar7 = ((int)sVar6 - uVar10) + uVar8;
  if (0x7fff < iVar7) {
    iVar7 = 0x7fff;
  }
  ttstamp_l = _DAT_003faa60;
  wkwalerr_w = (word)iVar7;
  tooth10ms = 0;
  ALEBits_tooth_int = (DAT_003faa6a & 1) << 2 | ALEBits_tooth_int & ~B_alechk;
  DAT_003faa6e = B_ralectr;
                    /* WARNING: Read-only address (ram,0x003faa60) is written */
  return;
}

