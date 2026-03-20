/*
 * Program: n42.bin
 * Function: FUN_0016e684
 * Entry: 0016e684
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016e684(void)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  
  if (B_ll == '\0') {
    DAT_005b8098 = DAT_005b8098 & 0xfe;
    DAT_005b8096 = _TTEBSTP;
  }
  else if (DAT_005b8096 == 0) {
    DAT_005b8098 = DAT_005b8098 & 0xfe | 1;
  }
  else {
    DAT_005b8096 = DAT_005b8096 + -1;
    DAT_005b8098 = DAT_005b8098 & 0xfe;
  }
  if (B_nmot == '\0') {
    DAT_005b8098 = DAT_005b8098 & 0xfb;
    DAT_005b8094 = _TTEPRIO;
  }
  else if (DAT_005b8094 == 0) {
    DAT_005b8098 = DAT_005b8098 & 0xfb | 4;
  }
  else {
    DAT_005b8098 = DAT_005b8098 & 0xfb;
    DAT_005b8094 = DAT_005b8094 + -1;
  }
  if ((DAT_005b8098 >> 2 & 1) == 1) {
    B_tehbxf = '\0';
  }
  else {
    if (((DAT_005b8099 >> 5 & 1) == 0) && (B_tehbx != 0)) {
      B_tehbxf = '\x01';
    }
    DAT_005b8099 = (B_tehbx & 1) << 5 | DAT_005b8099 & 0xdf;
  }
  if (((B_gae == '\0') && ((DAT_005b8098 >> 2 & 1) == 0)) &&
     ((B_edkvs != '\0' || ((B_edkvs2 != '\0' || (tmst <= TMSNOGA)))))) {
    B_tteae = false;
  }
  else {
    B_tteae = true;
  }
  if (((B_edkvs == '\0') && (B_edkvs2 == '\0')) && (TMSKLH < tmst)) {
    B_ttegais = true;
  }
  else {
    B_ttegais = false;
  }
  if (DAT_005b8092 == '\0') {
    if (tephc == 0) {
      DAT_005b8092 = '\x02';
      if ((bool)B_ttegais) {
        tephc = _TTEGAIH;
      }
      else {
        tephc = _TTEGAI;
      }
      B_tepi = '\0';
    }
    else if (B_nmot != '\0') {
      B_tepi = '\x01';
      tephc = tephc - 1;
    }
  }
  else if (DAT_005b8092 == '\x01') {
    if (tephc == 0) {
      tephc = _TTEGA;
      DAT_005b8092 = '\x02';
      B_tepi = '\0';
    }
    else {
      tephc = tephc - 1;
      if ((B_teabb != '\0') && (_TTEMN < tephc)) {
        tephc = _TTEMN;
      }
      B_tepi = '\x01';
    }
  }
  else if (DAT_005b8092 == '\x02') {
    if (tephc == 0) {
      DAT_005b8092 = '\x01';
      tephc = _TTE;
      if ((bool)B_tteae) {
        tephc = _TTEAE;
      }
      B_tepi = '\x01';
    }
    else {
      tephc = tephc - 1;
      B_tepi = '\0';
    }
  }
  else {
    tephc = _TTEINI;
    DAT_005b8092 = '\0';
  }
  if (((B_gae == '\0') && (B_gaefra != '\0')) && (B_gaefra2 != '\0')) {
    DAT_005b8098 = DAT_005b8098 & 0xdf | 0x20;
  }
  else {
    DAT_005b8098 = DAT_005b8098 & 0xdf;
  }
  if (((B_lr == '\0') || ((DAT_003fdf0f >> 1 & 1) != 0)) &&
     ((B_lr2 == '\0' || ((DAT_003fdf11 >> 1 & 1) != 0)))) {
    DAT_005b8098 = DAT_005b8098 & 0xbf;
  }
  else {
    DAT_005b8098 = DAT_005b8098 & 0xbf | 0x40;
  }
  if ((((B_gasp == '\0') && (B_frao != '\0')) && ((DAT_005b8098 >> 6 & 1) != 0)) &&
     ((B_tehbxf != '\0' || ((short)ftead_w <= _FTEADZU)))) {
    B_tesstp = true;
  }
  else {
    B_tesstp = false;
  }
  if ((B_ll == '\0') || (TATELL < tans)) {
    DAT_005b8098 = DAT_005b8098 & 0x7f;
  }
  else {
    DAT_005b8098 = DAT_005b8098 & 0x7f | 0x80;
  }
  if (((((bool)B_tesstp) || ((char)DAT_005b8098 < '\0')) || (B_edmtksnm != '\0')) ||
     (((B_vekatv & B_dktb) !=
       ~(B_dktb|B_dktkas|B_dktsbs|B_vekatv|B_dktsps|B_tmsdkt|B_dktbi|B_dktlbi) || (B_dmmvtp != '\0')
      ))) {
    B_fraoan = true;
  }
  else {
    B_fraoan = false;
  }
  if ((_TTEGAZO < tnse_w) || (tnse_w < _TTEGAZU)) {
    DAT_005b8099 = DAT_005b8099 & 0x7f;
  }
  else {
    DAT_005b8099 = DAT_005b8099 & 0x7f | 0x80;
  }
  if ((((bool)B_tesstp) || ((char)DAT_005b8099 < '\0')) ||
     (((DAT_005b8098 >> 5 & 1) != 0 && ((B_ll != '\0' && ((DAT_005b8098 & 1) == 0)))))) {
    DAT_005b8098 = DAT_005b8098 & 0xef | 0x10;
  }
  else {
    DAT_005b8098 = DAT_005b8098 & 0xef;
  }
  if (((DAT_005b8098 >> 4 & 1) == 0) ||
     (((B_tehbxf == '\0' && (_FTEADZU < (short)ftead_w)) || (B_gasp != '\0')))) {
    B_tezstp = false;
  }
  else {
    B_tezstp = true;
  }
  if ((((bool)B_tezstp) || (B_dldpte != '\0')) ||
     ((B_dtes != '\0' || ((B_grdst != '\0' || ((bool)B_fraoan)))))) {
    B_testop = '\x01';
  }
  else {
    B_testop = '\0';
  }
  if ((short)ftead_w < _FTEDS) {
    iVar4 = (int)_FTEDS - (int)_DFTEDS;
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    if ((short)ftead_w <= (short)iVar4) {
      DAT_005b8099 = DAT_005b8099 & 0xbf;
    }
  }
  else {
    DAT_005b8099 = DAT_005b8099 & 0xbf | 0x40;
  }
  uVar1 = func_0xff2187cc(&DAT_001d0058,nmot);
  uVar1 = (uint)mrfa_w * (uVar1 & 0xff);
  if (uVar1 < 0x1fe000) {
    mrfabn = (byte)(uVar1 >> 0xd);
  }
  else {
    mrfabn = 0xff;
  }
  dmrfabn_w = ((short)(char)(mrfabn >> 1) - (short)(char)(MRFABNTE >> 1)) * 0x100;
  uVar2 = func_0xff2191ac(_ZMRFABN,&DAT_001d0088,&DAT_001d0092,(int)(short)dmrfabn_w);
  uVar1 = func_0xff217fe8(uVar2,mrfabn,DAT_005b8090);
  DAT_005b8090 = (short)uVar1;
  uVar3 = uVar1 >> 8 & 0xff;
  mrfabnf = (byte)(uVar1 >> 8);
  if (MRFABNTE < uVar3) {
    B_tepzhl = '\x01';
  }
  else {
    uVar1 = (uint)MRFABNTE - (uint)DMRFATE;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0xff < (int)uVar1) {
      uVar1 = 0xff;
    }
    if (uVar3 < (uVar1 & 0xff)) {
      B_tepzhl = '\0';
    }
  }
  if ((B_tepzhl == '\0') &&
     (((B_tteae == '\0' || (B_tehbxf != '\0')) || ((DAT_005b8099 >> 6 & 1) == 0)))) {
    B_tepzus = false;
  }
  else {
    B_tepzus = true;
  }
  B_nftev = B_tepzus;
  if (((tnse_w < _TTEZAU) || (_TTEZAO < tnse_w)) ||
     ((B_grdst != '\0' || ((DAT_003fdfb9 >> 1 & 1) != 0)))) {
    B_tedtev = false;
  }
  else {
    B_tedtev = true;
  }
  if ((B_teza != '\0') || ((bool)B_tedtev)) {
    B_tep = true;
    B_gap = 0;
  }
  else {
    if ((((bool)B_tepzus) || (B_gasp != '\0')) || (B_tepi != '\0')) {
      DAT_005b8098 = DAT_005b8098 & 0xfd | 2;
    }
    else {
      DAT_005b8098 = DAT_005b8098 & 0xfd;
    }
    if (((DAT_005b8098 >> 1 & 1) == 0) || (B_testop != '\0')) {
      B_tep = false;
    }
    else {
      B_tep = true;
    }
    if ((B_te != '\0') || ((bool)B_tep)) {
      B_gap = 0;
    }
    else {
      B_gap = 1;
    }
  }
  return;
}

