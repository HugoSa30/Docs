/*
 * Program: n42.bin
 * Function: FUN_000eca18
 * Entry: 000eca18
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eca18(void)

{
  bool bVar1;
  
  if ((B_slspaus == '\0') && (B_falr == '\0')) {
    B_pspaus = false;
  }
  else {
    B_pspaus = true;
  }
  if ((((B_eev == '\0') && (B_mdkat == 0)) && (B_esls == '\0')) &&
     (((CLRS & 0x80) == 0 || (B_mdarv == 0)))) {
    B_eobdlr = 0;
    bVar1 = false;
  }
  else {
    B_eobdlr = 1;
    bVar1 = true;
  }
  B_eobdlr2 = B_eobdlr;
  if (B_sa == '\0') {
    _DAT_003f9d24 = _DAT_003f9d24 + _ml_w;
    if (0xffffff < _DAT_003f9d24) {
      _DAT_003f9d24 = 0xffffff;
    }
    imlrsa_w = (word)(_DAT_003f9d24 >> 8);
  }
  else {
    imlrsa_w = 0;
    _DAT_003f9d24 = 0;
  }
  B_mlrsa = imlrsa_w < _IMLSALR;
  if (B_bevab == '\0') {
    _DAT_003f9d1c = _DAT_003f9d1c + _ml_w;
    if (0xffffff < _DAT_003f9d1c) {
      _DAT_003f9d1c = 0xffffff;
    }
    imlevab_w = (word)(_DAT_003f9d1c >> 8);
  }
  else {
    imlevab_w = 0;
    _DAT_003f9d1c = 0;
  }
  B_mlevab = imlevab_w < _IMLEVABS;
  if (B_bevab2 == '\0') {
    _DAT_003f9d20 = _DAT_003f9d20 + _ml_w;
    if (0xffffff < _DAT_003f9d20) {
      _DAT_003f9d20 = 0xffffff;
    }
    imlevab2_w = (word)(_DAT_003f9d20 >> 8);
  }
  else {
    imlevab2_w = 0;
    _DAT_003f9d20 = 0;
  }
  B_mlevab2 = imlevab2_w < _IMLEVABS2;
  if (B_vag == '\0') {
    if (_DAT_003f9cfa == 0) {
      DAT_003f9cdc = DAT_003f9cdc & 0xfe;
    }
    else {
      _DAT_003f9cfa = _DAT_003f9cfa - 1;
    }
  }
  else {
    DAT_003f9cdc = DAT_003f9cdc | 1;
    _DAT_003f9cfa = tlrvamo_w;
  }
  if (B_bag == '\0') {
    if (_DAT_003f9cf8 == 0) {
      DAT_003f9cdc = DAT_003f9cdc & 0xfd;
    }
    else {
      _DAT_003f9cf8 = _DAT_003f9cf8 - 1;
    }
  }
  else {
    DAT_003f9cdc = DAT_003f9cdc | 2;
    _DAT_003f9cf8 = tlrbamo_w;
  }
  if ((((DAT_003f9cdc & 1) == 0) && ((DAT_003f9cdc & 2) == 0)) &&
     (((B_vlsuftb2 & 1) == 0 || (0xfff < lamsons_w)))) {
    B_lrmsbs = false;
  }
  else {
    B_lrmsbs = true;
  }
  if ((((DAT_003f9cdc & 1) == 0) && ((DAT_003f9cdc & 2) == 0)) &&
     (((B_vlsuftb2 & 2) == 0 || (0xfff < lamsons2_w)))) {
    B_lrmsbs2 = false;
  }
  else {
    B_lrmsbs2 = true;
  }
  if (((((((B_lrrl == '\0') || (B_tmlr == '\0')) || (B_pspwl == '\0')) ||
        ((B_stend == '\0' || (B_mlrsa)))) || ((B_craus != '\0' || ((B_pspaus || (bVar1)))))) ||
      (B_lrssa == '\0')) ||
     ((((imlevab_w < _IMLEVABS || (B_sbblsu == '\0')) || (B_temin != 0)) || ((CLRS & 1) == 0)))) {
    B_lrs = false;
  }
  else {
    B_lrs = true;
  }
  B_lrnda = B_lrs;
  if (((((((B_lrrl == '\0') || (B_tmlr == '\0')) ||
         ((B_pspwl == '\0' || ((B_stend == '\0' || ((CLRS & 2) == 0)))))) || (B_mlrsa)) ||
       (((B_craus != '\0' || (B_pspaus)) || (bVar1)))) ||
      ((B_lrssa2 == '\0' || (imlevab2_w < _IMLEVABS2)))) || ((B_sbblsu2 == '\0' || (B_temin2 != 0)))
     ) {
    B_lrs2 = false;
  }
  else {
    B_lrs2 = true;
  }
  B_lrnda2 = B_lrs2;
  if (((!B_lrs) || (B_lrmsbs)) || ((B_dslsk != '\0' || (lamsons_w < _LALIUSMN)))) {
    B_lr = 0;
  }
  else {
    B_lr = 1;
  }
  if (((CLRS & 0x10) == 0) || (!B_lrmsbs)) {
    B_lrsrems = 0;
  }
  else {
    B_lrsrems = 1;
  }
  if (((CLRS & 8) == 0) || ((_LALIUSMN <= lamsons_w && (_LALIUSMN <= lamsons2_w)))) {
    B_lrsresf = 0;
  }
  else {
    B_lrsresf = 1;
  }
  if ((((!B_lrs2) || (B_lrmsbs2)) || (B_dslsk != '\0')) || (lamsons2_w < _LALIUSMN)) {
    B_lr2 = 0;
  }
  else {
    B_lr2 = 1;
  }
  if (((CLRS & 0x10) == 0) || (!B_lrmsbs2)) {
    B_lrsrems2 = 0;
  }
  else {
    B_lrsrems2 = 1;
  }
  return;
}

