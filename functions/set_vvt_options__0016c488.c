/*
 * Program: n42.bin
 * Function: set_vvt_options
 * Entry: 0016c488
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_vvt_options(void)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  
  _kmstandold = kmstand;
  if (B_gd == '\0') {
    iVar6 = (int)_DAT_001c42b4;
    if (DAT_005b87fd != '\0') {
      DAT_005b87fd = '\0';
      if (DAT_005b98e2 < 0x8001) {
        uVar7 = (uint)DAT_005b98d2 + (uint)(ushort)(0x8000 - DAT_005b98e2);
        if (0x8000 < uVar7) {
          uVar7 = 0x8000;
        }
        dpsuddr_w = (word)uVar7;
      }
      else {
        dpsuddr_w = DAT_005b98d2 - (DAT_005b98e2 + 0x8000);
      }
    }
  }
  else {
    sVar1 = _DAT_001c42b0;
    if (B_gdst != 0) {
      sVar1 = _DAT_001c42ae;
    }
    iVar6 = (int)sVar1;
    if (DAT_005b87fd == '\0') {
      DAT_005b87fd = '\x01';
    }
  }
  uVar7 = iVar6 + (short)dpsuddr_w;
  if ((int)(uint)_DAT_001c42b8 < (int)uVar7) {
    uVar7 = (uint)_DAT_001c42b8;
LAB_0016c5b4:
    dpsuddr_w = (word)uVar7;
  }
  else {
    if (-1 < (int)uVar7) goto LAB_0016c5b4;
    dpsuddr_w = 0;
  }
  DAT_005b87fe = imlatm_w < imlvhb_w;
  if (((B_stend == '\0') && (_DAT_001c42d0 < wped_w)) && (t_wped != 0)) {
    t_wped = t_wped - 1;
  }
  if (((_DAT_001c42c6 < _rl_w) && (B_llrein != '\0')) && (t_rl != 0)) {
    t_rl = t_rl - 1;
  }
  if ((_DAT_001c42c4 < nmot_w) && (t_nmot != 0)) {
    t_nmot = t_nmot - 1;
  }
  cVar8 = B_stend;
  if (DAT_001c42dc != '\0') {
    cVar8 = B_nmot;
  }
  if (cVar8 != '\0') {
    if (DAT_005b8e0d == '\0') {
      if (t_hubon != 0) {
        t_hubon = t_hubon - 1;
      }
    }
    else {
      DAT_005b8e0d = DAT_005b8e0d + -1;
    }
  }
  if ((((t_wped == 0) || (t_rl == 0)) || (t_nmot == 0)) ||
     ((tabst_w < _DAT_001c42ca || (fho < DAT_001c42d6)))) {
    B_gdon = 0;
    bVar5 = false;
  }
  else if (((t_hubon == 0) || (cVar8 == '\0')) || ((DAT_005b8e0d != '\0' || (imlatm_w >= imlvhb_w)))
          ) {
    B_gdon = 0;
    bVar5 = false;
  }
  else {
    B_gdon = 1;
    bVar5 = true;
  }
  if ((cVar8 == '\0') || (B_vvtnotl == 0)) {
    B_gdst = B_gdon;
    bVar4 = bVar5;
    if (TMABMIN != '\0') {
      B_gdst = 0;
      bVar4 = false;
    }
  }
  else {
    B_gdst = 1;
    bVar4 = true;
  }
  if ((B_stend != '\0') && (t_stend != 0)) {
    t_stend = t_stend - 1;
  }
  if ((((DAT_005b89ed & 1) != 0) && (DAT_003fac4b == '\0')) ||
     ((DAT_001c42ec != '\0' && (DAT_003fac4d == '\0')))) {
    DAT_003fac4a = DAT_001c42e9;
  }
  if ((((DAT_005b89ed & 1) == 0) && (DAT_003fac4b != '\0')) ||
     ((DAT_001c42ec == '\0' && (DAT_003fac4d != '\0')))) {
    DAT_003fac4c = DAT_001c42e8;
  }
  else {
    if (((DAT_005b89ed & 1) != 0) || (DAT_001c42ec != '\0')) {
      if (DAT_003fac4a != '\0') {
        DAT_003fac4a = DAT_003fac4a + -1;
      }
      if (((DAT_005b89ed & 1) != 0) && (DAT_001c42ec != '\0')) goto LAB_0016c90c;
    }
    if (DAT_003fac4c != '\0') {
      DAT_003fac4c = DAT_003fac4c + -1;
    }
  }
LAB_0016c90c:
  if ((((DAT_005b89ed & 1) == 0) && (DAT_001c42ec == '\0')) || (DAT_003fac4a != '\0')) {
    DAT_005b8cd5 = 0;
    bVar3 = false;
  }
  else {
    DAT_005b8cd5 = 1;
    bVar3 = true;
  }
  if ((((DAT_005b89ed & 1) == 0) && (DAT_001c42ec == '\0')) && (DAT_003fac4c == '\0')) {
    DAT_005b8cd4 = 1;
    bVar2 = true;
  }
  else {
    DAT_005b8cd4 = 0;
    bVar2 = false;
  }
  DAT_003fac4b = DAT_005b89ed & 1;
  DAT_003fac4d = DAT_001c42ec;
  if ((bVar2) || (t_stend != 0)) {
    B_gdhz = 0;
  }
  else if (((((_DAT_001c42c2 < nmot_w) && (_DAT_001c42c8 < _rl_w)) && (DAT_001c42e6 < tmot)) &&
           (((DAT_005b89e8 & 2) != 0 || (DAT_001c42ec != '\0')))) && (bVar3)) {
    B_gdhz = 1;
  }
  if ((B_gdhz == 0) && (S_VSGDVHUB == 0)) {
    if (TMABMIN == '\0') {
      B_gdon = 0;
      bVar5 = false;
    }
  }
  else {
    B_gdon = 1;
    bVar5 = true;
  }
  if (((((S_LLGD != '\0') && (B_ll != '\0')) || (S_GD != '\0')) || ((bVar4 || (dhubra_w != 0)))) ||
     ((S_GDVHUB != '\0' || (bVar5)))) {
    B_gd = 1;
  }
  else {
    B_gd = 0;
  }
  if ((((S_GDVHUB == '\0') && (!bVar4)) && (!bVar5)) || (dpsfak < DPSFGDVH)) {
    B_gdvhub = 0;
  }
  else {
    B_gdvhub = 1;
  }
  if (((dhubra_w == 0) || (_DHUBMX <= dhubra_w)) && ((dpsfak == 0 || (dpsfak == 0xff)))) {
    B_gdvvtueb = 0;
  }
  else {
    B_gdvvtueb = 1;
  }
  return;
}

