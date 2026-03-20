/*
 * Program: n42.bin
 * Function: FUN_0019e4ec
 * Entry: 0019e4ec
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019e4ec(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  word wVar4;
  ushort uVar5;
  int iVar6;
  word wVar7;
  
  if (B_strtswof != 0) {
    uVar2 = func_0xff2187cc(&DAT_001c1b20,tmot);
    temp_klt_l = (uVar2 & 0xff) * 10000;
  }
  if (((DAT_001cb33d & 1) == 0) || (B_nldg != '\0')) {
    DAT_003faa69 = 0;
  }
  else if ((((B_tprel & B_bm) != 0) && (B_nmot != '\0')) && (B_stend != '\0')) {
    DAT_003faa69 = 1;
  }
  B_enabale = DAT_003faa69;
  if ((B_enabint != 0) && (tooth10ms = tooth10ms + 1, 0x7f < tooth10ms)) {
    tooth10ms = 0x7f;
  }
  if ((DAT_003faa69 == 0) || (DAT_003faa59 != '\0')) {
    DAT_003faa58 = false;
  }
  else {
    DAT_003faa58 = true;
  }
  DAT_003faa59 = DAT_003faa69;
  if ((bool)DAT_003faa58) {
    DAT_003faa68 = '\0';
  }
  else if (10 < tooth10ms) {
    DAT_003faa68 = '\x01';
  }
  if ((DAT_003faa69 == 0) || (DAT_003faa68 == '\0')) {
    B_engstop = B_engstop & 0xfb;
  }
  else {
    B_engstop = B_engstop & 0xfb | 4;
  }
  bVar1 = B_engstop >> 2 & 1;
  if ((bVar1 == 0) || (DAT_003faa5d != '\0')) {
    DAT_003faa5c = '\0';
  }
  else {
    DAT_003faa5c = '\x01';
  }
  uVar5 = (ushort)CO_WNBM;
  wVar7 = wkwrale_w + uVar5 * -2;
  wVar4 = CO_WAS;
  if (-1 < (int)(short)wkwale_w - (int)(short)wVar7) {
    wVar4 = 0;
  }
  uVar2 = (uint)(short)((wkwale_w - wVar7) + wVar4);
  if ((int)(uint)_RALEMAX <= (int)uVar2) {
    uVar2 = (uint)_RALEMAX;
  }
  if ((int)((int)(short)wVar7 - uVar2) < 0) {
    uVar3 = (uint)CO_WAS;
  }
  else {
    uVar3 = 0;
  }
  iVar6 = ((int)(short)wVar7 - uVar2) + uVar3;
  if (0x7fff < iVar6) {
    iVar6 = 0x7fff;
  }
  wkwalerr_w = (word)iVar6;
  if (DAT_003faa5c != '\0') {
    if ((B_undef == 0) && (wVar7 = wkwale_w, (ALEBits_tooth_int >> 2 & 1) != 0)) {
      wVar7 = wkwalerr_w;
    }
    if ((int)(uint)CO_GAP < (int)(short)wVar7) {
      uVar2 = (uint)(ushort)(uVar5 * 2);
    }
    else {
      uVar2 = 0;
    }
    iVar6 = (int)(short)wVar7 + uVar2;
    if ((int)((uint)_W360_ALE_IMPL + (uint)CO_GAP) < iVar6) {
      uVar2 = (uint)(ushort)(uVar5 * 2);
    }
    else {
      uVar2 = 0;
    }
    iVar6 = iVar6 + uVar2;
    if (B_phsnlinv != '\0') {
      if ((int)(iVar6 + (uint)_W360_ALE_IMPL) < (int)(uint)_W720_ALE_IMPL) {
        iVar6 = iVar6 + (uint)_W360_ALE_IMPL;
      }
      else {
        iVar6 = (iVar6 + (uint)_W360_ALE_IMPL) - (uint)_W720_ALE_IMPL;
      }
    }
    if (iVar6 < -0x8000) {
      iVar6 = -0x8000;
    }
    else if (0x7fff < iVar6) {
      iVar6 = 0x7fff;
    }
    wkwaskor_w = (word)iVar6;
    if ((short)wkwaskor_w < 0) {
      _wkwstop_w = 0;
    }
    else {
      _wkwstop_w = wkwaskor_w;
      if (10000 < (short)wkwaskor_w) {
        _wkwstop_w = 10000;
      }
    }
    if ((B_undef == 0) && (DAT_003faa5c != '\0')) {
      DAT_003faa6f = 1;
    }
    B_ale = B_ale & 0xfe;
    B_aleundef = B_undef;
  }
  if ((DAT_003faa68 == '\0') && (DAT_003faa69 != 0)) {
    DAT_003fddc1 = DAT_003fddc1 & 0xfe | 1;
  }
  else {
    DAT_003fddc1 = DAT_003fddc1 & 0xfe;
  }
  iVar6 = (int)(short)wkwale_w - (int)(short)wkwalold_w;
  if (iVar6 < 0) {
    uVar2 = (uint)CO_WAS;
  }
  else {
    uVar2 = 0;
  }
  if ((int)(uint)_DAT_001c1b28 <= (int)(iVar6 + uVar2)) {
    DAT_003faa6f = 0;
  }
  B_ale = DAT_003faa6f & 1 | B_ale & 0xfe;
  if ((DAT_003faa69 == 0) && (DAT_003faa5f != '\0')) {
    DAT_003faa5e = '\x01';
  }
  else {
    DAT_003faa5e = '\0';
  }
  DAT_003faa5f = DAT_003faa69;
  DAT_003faa5d = bVar1;
  if ((B_strtswof != 0) || (DAT_003faa5e != '\0')) {
    FUN_001ad9ec(500);
  }
  if (DAT_003faa6f == 0) {
    wkwalold_w = wkwale_w;
  }
  if (B_strtswof == 1) {
    B_strtswof = 0;
  }
  return;
}

