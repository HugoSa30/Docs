/*
 * Program: n42.bin
 * Function: DKVS
 * Entry: 0014b2c0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void DKVS(void)

{
  word wVar1;
  word wVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ushort local_198;
  ushort local_194;
  ushort local_190;
  ushort local_18c;
  ushort local_188;
  ushort local_180;
  ushort local_17c;
  ushort local_178;
  ushort local_174;
  ushort local_170;
  ushort local_16c [6];
  uint local_160;
  uint local_15c;
  int local_158;
  uint local_14c;
  uint local_144;
  char *local_e0;
  byte *local_d8;
  ushort local_9c [2];
  ushort *local_98;
  ushort local_94 [2];
  ushort *local_90;
  ushort local_8c [2];
  ushort *local_88;
  ushort local_84 [2];
  ushort *local_80;
  ushort local_7c [2];
  ushort *local_78;
  ushort local_74 [2];
  ushort *local_70;
  ushort local_6c [2];
  ushort *local_68;
  ushort local_64 [2];
  ushort *local_60;
  ushort local_5c [2];
  ushort *local_58;
  ushort local_54 [2];
  ushort *local_50;
  
  uVar8 = _B_mxrkaz2;
  uVar7 = _B_clrkat2;
  uVar6 = _sfpfrst2;
  uVar5 = _sfpfrst;
  uVar4 = _B_ftfrau2;
  uVar3 = _B_ftfrao2;
  local_198 = _sfpfrao;
  local_194 = _sfpfrau;
  local_190 = _B_mnrkat;
  local_18c = _B_mnrkaz;
  local_188 = _sfpfrst;
  local_180 = _B_ftfrao2;
  local_17c = _B_ftfrau2;
  local_178 = _B_clrkat2;
  local_174 = _B_mxrkaz2;
  local_170 = _sfpfrst2;
  if ((DAT_005b961a & 0x1000) == 0) {
    B_gaefra = '\x01';
    B_gaeing = '\x01';
    local_190 = _B_mnrkat & 0xd0fc | 0x2002;
    local_194 = _sfpfrau & 0xd0fc | 0x2002;
    local_198 = _sfpfrao & 0xd0fc | 0x2002;
    local_18c = _B_mnrkaz & 0xd0fc | 0x2002;
    B_edkvs = 0;
    B_gae = 1;
    B_dkvsf = '\x01';
    B_gaefra2 = '\x01';
    B_gaeing2 = '\x01';
    B_edkvs2 = 0;
    local_178 = _B_clrkat2 & 0xd0fc | 0x2002;
    local_17c = _B_ftfrau2 & 0xd0fc | 0x2002;
    local_180 = _B_ftfrao2 & 0xd0fc | 0x2002;
    local_174 = _B_mxrkaz2 & 0xd0fc | 0x2002;
    goto LAB_0014dd84;
  }
  if ((((((CWDKVSS & 1) == 0) ||
        ((((B_silm & 1) == 0 && ((B_silm >> 1 & 1) != 0)) && ((CWDKVSS & 1) != 0)))) &&
       (((CWDKVSS & 2) == 0 ||
        ((((DAT_003fdfb9 & 1) == 0 && ((DAT_003fdfb9 >> 1 & 1) != 0)) && ((CWDKVSS & 2) != 0))))))
      && (((CWDKVSS & 4) == 0 ||
          ((((DAT_003fdf5f & 1) == 0 && ((DAT_003fdf5f >> 1 & 1) != 0)) && ((CWDKVSS & 4) != 0))))))
     || (((CWDKVSS & 8) != 0 && (B_falra != '\0')))) {
    B_dkvsef = '\x01';
  }
  else {
    B_dkvsef = '\0';
  }
  if ((((((CWDKVSS & 1) == 0) || ((B_silm >> 1 & 1) != 0)) &&
       (((CWDKVSS & 2) == 0 || ((DAT_003fdfb9 >> 1 & 1) != 0)))) &&
      (((CWDKVSS & 4) == 0 || ((DAT_003fdf5f >> 1 & 1) != 0)))) ||
     (((CWDKVSS & 8) != 0 && (B_falra != '\0')))) {
    B_zfrao = B_zfrao | B_dkvszf;
  }
  else {
    B_zfrao = B_zfrao & (B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2);
  }
  if ((((((CWDKVSS & 1) == 0) ||
        ((((B_silm & 1) == 0 && ((B_silm >> 1 & 1) != 0)) && ((CWDKVSS & 1) != 0)))) &&
       (((CWDKVSS & 2) == 0 ||
        ((((DAT_003fdfb9 & 1) == 0 && ((DAT_003fdfb9 >> 1 & 1) != 0)) && ((CWDKVSS & 2) != 0))))))
      && (((CWDKVSS & 4) == 0 ||
          ((((DAT_003fdf61 & 1) == 0 && ((DAT_003fdf61 >> 1 & 1) != 0)) && ((CWDKVSS & 4) != 0))))))
     || (((CWDKVSS & 8) != 0 && (B_falra != '\0')))) {
    B_dkvsef2 = '\x01';
  }
  else {
    B_dkvsef2 = '\0';
  }
  if ((((((CWDKVSS & 1) == 0) || ((B_silm >> 1 & 1) != 0)) &&
       (((CWDKVSS & 2) == 0 || ((DAT_003fdfb9 >> 1 & 1) != 0)))) &&
      (((CWDKVSS & 4) == 0 || ((DAT_003fdf61 >> 1 & 1) != 0)))) ||
     (((CWDKVSS & 8) != 0 && (B_falra != '\0')))) {
    B_zfrao = B_zfrao | B_dkvszf2;
  }
  else {
    B_zfrao = B_zfrao & (B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_zfrau2|B_zfrao2);
  }
  B_plra = CPLRA != '\0';
  local_14c = (uint)B_norkaz;
  local_15c = (uint)B_norkat;
  local_d8 = &B_norkam;
  if ((bool)B_plra) {
    B_rkamr = B_rkazr;
    B_rkam = B_rkaz;
    rkam_w = rkaz_w;
    B_norkam = B_norkaz;
    B_rkamr2 = B_rkazr2;
    rkam2_w = rkaz2_w;
  }
  else {
    B_rkamr = B_rkatr;
    B_rkam = B_rkat;
    rkam_w = rkat_w;
    B_norkam = B_norkat;
    B_rkamr2 = B_rkatr2;
    rkam2_w = rkat2_w;
  }
  wVar1 = rkat_w;
  if (CWDVVT != '\0') {
    iVar13 = (int)(short)rkat_w + (int)(short)rkat2_w;
    if (iVar13 < -0x8000) {
      iVar13 = -0x8000;
    }
    else if (0x7fff < iVar13) {
      iVar13 = 0x7fff;
    }
    rkats_w = (word)iVar13;
    wVar1 = rkats_w;
  }
  if (((short)wVar1 < _RKATDX) && (_RKATDN < (short)wVar1)) {
    B_erkat = 0;
  }
  else {
    B_erkat = 1;
  }
  uVar11 = (uint)frau_w;
  if ((uVar11 < _FRAUDX) && (_FRAUDN < uVar11)) {
    B_efrau = '\0';
  }
  else {
    B_efrau = '\x01';
  }
  if ((frao_w < _FRAODX) && (_FRAODN < frao_w)) {
    B_efrao = '\0';
  }
  else {
    B_efrao = '\x01';
  }
  if (((short)rkaz_w < _RKAZDX) && (_RKAZDN < (short)rkaz_w)) {
    B_erkaz = '\0';
  }
  else {
    B_erkaz = '\x01';
  }
  local_160 = (uint)B_erkat;
  if ((((local_160 == 0) && (B_efrau == '\0')) && (B_efrao == '\0')) && (B_erkaz == '\0')) {
    B_edkvs = false;
  }
  else {
    B_edkvs = true;
  }
  wVar2 = rkat2_w;
  if (CWDVVT != '\0') {
    wVar2 = rkats_w;
  }
  local_e0 = &B_erkat2;
  if (((short)wVar2 < _RKATDX) && (_RKATDN < (short)wVar2)) {
    B_erkat2 = '\0';
  }
  else {
    B_erkat2 = '\x01';
  }
  if ((frau2_w < _FRAUDX) && (_FRAUDN < frau2_w)) {
    B_efrau2 = '\0';
  }
  else {
    B_efrau2 = '\x01';
  }
  if ((frao2_w < _FRAODX) && (_FRAODN < frao2_w)) {
    B_efrao2 = '\0';
  }
  else {
    B_efrao2 = '\x01';
  }
  if (((short)rkaz2_w < _RKAZDX) && (_RKAZDN < (short)rkaz2_w)) {
    B_erkaz2 = '\0';
  }
  else {
    B_erkaz2 = '\x01';
  }
  if ((((B_erkat2 == '\0') && (B_efrau2 == '\0')) && (B_efrao2 == '\0')) && (B_erkaz2 == '\0')) {
    B_edkvs2 = false;
  }
  else {
    B_edkvs2 = true;
  }
  if (B_dkvstr == '\0') {
    if (((DAT_003fc1c7 != '\0') && (DAT_003fc1c8 != '\0')) && (((bool)B_edkvs || ((bool)B_edkvs2))))
    {
      DKVSbits = DKVSbits | 2;
    }
  }
  else {
    DKVSbits = DKVSbits & 0xfd;
    _DAT_003fdc50 = 0;
    imlkvs_w = 0;
  }
  if (((DKVSbits & 2) != 0) && (B_sa == '\0')) {
    _DAT_003fdc50 = _DAT_003fdc50 + ml;
    if (0xfffff < _DAT_003fdc50) {
      _DAT_003fdc50 = 0xfffff;
    }
    imlkvs_w = (word)(_DAT_003fdc50 >> 4);
    if ((uint)_IMLKVSMX < (_DAT_003fdc50 >> 4 & 0xffff)) {
      imlkvs_w = _IMLKVSMX;
    }
  }
  uVar9 = (uint)imlkvs_w;
  if ((((bool)B_edkvs) || ((bool)B_edkvs2)) || (B_dkvstr != '\0')) {
    _imlkvszs_w = imlkvs_w;
  }
  if (uVar9 < _IMLKVSMX) {
    uVar10 = uVar9 - _imlkvszs_w;
    if ((int)uVar10 < 0) {
      uVar10 = 0;
    }
    else if (0xffff < (int)uVar10) {
      uVar10 = 0xffff;
    }
    if ((uint)_MLDKVSG < (uVar10 & 0xffff)) goto LAB_0014bcdc;
    B_dkvstr = '\0';
  }
  else {
LAB_0014bcdc:
    B_dkvstr = '\x01';
  }
  B_kvsffl = _MLDKVSF < uVar9;
  if ((bool)B_kvsffl) {
LAB_0014bd5c:
    DKVSbits = DKVSbits | 1;
  }
  else if (DAT_003fc1c7 != '\0') {
    if ((DAT_003fc1c8 == '\0') || ((!(bool)B_edkvs && (!(bool)B_edkvs2)))) {
      if ((bool)B_kvsffl) goto LAB_0014bd5c;
    }
    else {
      DKVSbits = DKVSbits & 0xfe;
    }
  }
  B_dkvsf = (DKVSbits & 1) != 0;
  if (((B_lra != '\0') && (B_fraur == '\0')) && ((B_frau != '\0' && ((bool)B_dkvsf)))) {
    if (TFRA < DAT_005bb91a) {
      uVar9 = (uint)frauzs_w;
      if (uVar9 < uVar11) {
        if ((int)(uVar11 - uVar9) <= (int)(uint)_FRAE) {
          B_gaefra = '\x01';
        }
      }
      else if ((int)(uVar9 - uVar11) <= (int)(uint)_FRAE) {
        B_gaefra = '\x01';
      }
      DAT_005bb91a = 0;
      frauzs_w = frau_w;
    }
    else {
      DAT_005bb91a = DAT_005bb91a + 1;
    }
  }
  if (B_nofra != '\0') {
    B_gaefra = '\x01';
  }
  if ((((B_lra != '\0') && (B_rkamr == '\0')) && (B_rkam != '\0')) &&
     ((B_gaefra != '\0' && ((bool)B_dkvsf)))) {
    if (TRKA < DAT_005bb91b) {
      iVar13 = (int)(short)rkam_w;
      local_158 = (int)(short)rkamzs_w;
      if (local_158 < iVar13) {
        if (iVar13 - local_158 <= (int)_RKAE) {
          DAT_005bb985 = DAT_005bb985 & 0xf7 | 8;
        }
      }
      else if (local_158 - iVar13 <= (int)_RKAE) {
        DAT_005bb985 = DAT_005bb985 & 0xf7 | 8;
      }
      DAT_005bb91b = 0;
      rkamzs_w = rkam_w;
    }
    else {
      DAT_005bb91b = DAT_005bb91b + 1;
    }
  }
  if (B_norkam != 0) {
    DAT_005bb985 = DAT_005bb985 & 0xf7 | 8;
  }
  if ((B_gaefra == '\0') || ((DAT_005bb985 >> 3 & 1) == 0)) {
    B_gaeing = false;
  }
  else {
    B_gaeing = true;
  }
  if ((B_lra == '\0') || (!(bool)B_dkvsf)) {
LAB_0014c10c:
    if ((DAT_005bb985 >> 4 & 1) == 0) goto LAB_0014c11c;
LAB_0014c12c:
    B_zfrao = B_zfrao | B_zfrau;
  }
  else {
    if (B_frau != '\0') {
      if (TFRAUZ < DAT_005bb91c) {
        DAT_005bb985 = DAT_005bb985 & 0xef | 0x10;
      }
      else {
        DAT_005bb91c = DAT_005bb91c + 1;
      }
    }
    if (B_frao != '\0') {
      if (TFRAOZ < DAT_005bb91f) {
        DAT_005bb985 = DAT_005bb985 & 0x7f | 0x80;
      }
      else {
        DAT_005bb91f = DAT_005bb91f + 1;
      }
    }
    if ((B_rkaz != '\0') && ((DAT_005bb985 >> 4 & 1) != 0)) {
      if (TRKAZZ < DAT_005bb91d) {
        DAT_005bb985 = DAT_005bb985 & 0xdf | 0x20;
      }
      else {
        DAT_005bb91d = DAT_005bb91d + 1;
      }
    }
    if (B_rkat == '\0') goto LAB_0014c10c;
    if ((DAT_005bb985 >> 4 & 1) != 0) {
      if (TRKATZ < DAT_005bb91e) {
        DAT_005bb985 = DAT_005bb985 & 0xbf | 0x40;
      }
      else {
        DAT_005bb91e = DAT_005bb91e + 1;
      }
      goto LAB_0014c10c;
    }
LAB_0014c11c:
    if ((B_gaefra != '\0') || (B_nofra != '\0')) goto LAB_0014c12c;
    B_zfrao = B_zfrao & (B_dkvszf|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2);
  }
  if ((((DAT_005bb985 >> 5 & 1) != 0) || (local_14c != 0)) || (((bool)B_gaeing && ((bool)B_plra))))
  {
    B_zfrao = B_zfrao | B_zrkaz;
  }
  else {
    B_zfrao = B_zfrao & (B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_dkvszf2|B_zfrau2|B_zfrao2);
  }
  if ((((DAT_005bb985 >> 6 & 1) != 0) || (local_15c != 0)) || (((bool)B_gaeing && (!(bool)B_plra))))
  {
    B_zfrao = B_zfrao | B_zrkat;
  }
  else {
    B_zfrao = B_zfrao & (B_dkvszf|B_zfrau|B_zfrao|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2);
  }
  if (((char)DAT_005bb985 < '\0') || (B_nofra != '\0')) {
    B_zfrao = B_zfrao | B_zfrao;
  }
  else {
    B_zfrao = B_zfrao & (B_dkvszf|B_zfrau|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2);
  }
  if (CWDVVT == '\0') {
    if (B_dkvsef == '\0') {
      DAT_005bb928 = DAT_005bb928 & 0xfe;
    }
    else {
      DAT_005bb928 = DAT_005bb928 | 1;
    }
    if ((B_zfrao & B_zrkat) ==
        ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2)) {
      DAT_005bb928 = DAT_005bb928 & 0xfd;
    }
    else {
      DAT_005bb928 = DAT_005bb928 | 2;
    }
    if ((B_zfrao & B_dkvszf) ==
        ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2)) {
      DAT_005bb928 = DAT_005bb928 & 0xfb;
    }
    else {
      DAT_005bb928 = DAT_005bb928 | 4;
    }
  }
  else {
    if ((B_dkvsef == '\0') || (B_dkvsef2 == '\0')) {
      DAT_005bb928 = DAT_005bb928 & 0xfe;
    }
    else {
      DAT_005bb928 = DAT_005bb928 | 1;
    }
    if (((B_zfrao & B_zrkat) ==
         ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2)) ||
       ((B_zrkat2 & B_zrkat2) == 0)) {
      DAT_005bb928 = DAT_005bb928 & 0xfd;
    }
    else {
      DAT_005bb928 = DAT_005bb928 | 2;
    }
    if (((B_zfrao & B_dkvszf) ==
         ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2)) ||
       ((B_zfrao & B_dkvszf2) ==
        ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2))) {
      DAT_005bb928 = DAT_005bb928 & 0xfb;
    }
    else {
      DAT_005bb928 = DAT_005bb928 | 4;
    }
  }
  if (local_15c == 0) {
    if (local_160 == 0) {
      if ((((DAT_005bb928 & 2) != 0) && ((bool)B_dkvsf)) && ((DAT_005bb928 & 4) != 0)) {
        local_190 = _B_mnrkat & 0xd0fc | 0x2002;
      }
    }
    else if ((((DAT_005bb928 & 2) != 0) && ((bool)B_dkvsf)) && ((DAT_005bb928 & 1) != 0)) {
      if ((short)wVar1 < _RKATDX) {
        if ((short)wVar1 <= _RKATDN) {
          local_190 = _B_mnrkat & 0xd0fc | 0x2203;
        }
      }
      else {
        local_190 = _B_mnrkat & 0xd0fc | 0x2103;
      }
    }
  }
  else {
    local_190 = _B_mnrkat & 0xd0fc | 0x2002;
  }
  if (B_nofra == '\0') {
    if (B_efrau == '\0') {
      if ((((B_zfrao & B_zfrau) !=
            ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2)) &&
          ((bool)B_dkvsf)) &&
         ((B_zfrao & B_dkvszf) !=
          ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2))) {
        local_194 = _sfpfrau & 0xd0fc | 0x2002;
      }
    }
    else if ((((B_zfrao & B_zfrau) !=
               ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2)) &&
             ((bool)B_dkvsf)) && (B_dkvsef != '\0')) {
      if (uVar11 < _FRAUDX) {
        if (uVar11 <= _FRAUDN) {
          local_194 = _sfpfrau & 0xd0fc | 0x2203;
        }
      }
      else {
        local_194 = _sfpfrau & 0xd0fc | 0x2103;
      }
    }
  }
  else {
    local_194 = _sfpfrau & 0xd0fc | 0x2002;
  }
  if (B_nofra == '\0') {
    if (B_efrao == '\0') {
      if ((((B_zfrao & B_zfrao) !=
            ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2)) &&
          ((bool)B_dkvsf)) &&
         ((B_zfrao & B_dkvszf) !=
          ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2))) {
        local_198 = _sfpfrao & 0xd0fc | 0x2002;
      }
    }
    else if ((((B_zfrao & B_zfrao) !=
               ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2)) &&
             ((bool)B_dkvsf)) && (B_dkvsef != '\0')) {
      if (frao_w < _FRAODX) {
        if (frao_w <= _FRAODN) {
          local_198 = _sfpfrao & 0xd0fc | 0x2203;
        }
      }
      else {
        local_198 = _sfpfrao & 0xd0fc | 0x2103;
      }
    }
  }
  else {
    local_198 = _sfpfrao & 0xd0fc | 0x2002;
  }
  if (local_14c == 0) {
    if (B_erkaz == '\0') {
      if ((((B_zfrao & B_zrkaz) !=
            ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2)) &&
          ((bool)B_dkvsf)) &&
         ((B_zfrao & B_dkvszf) !=
          ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2))) {
        local_18c = _B_mnrkaz & 0xd0fc | 0x2002;
      }
    }
    else if ((((B_zfrao & B_zrkaz) !=
               ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2)) &&
             ((bool)B_dkvsf)) && (B_dkvsef != '\0')) {
      if ((short)rkaz_w < _RKAZDX) {
        if ((short)rkaz_w <= _RKAZDN) {
          local_18c = _B_mnrkaz & 0xd0fc | 0x2203;
        }
      }
      else {
        local_18c = _B_mnrkaz & 0xd0fc | 0x2103;
      }
    }
  }
  else {
    local_18c = _B_mnrkaz & 0xd0fc | 0x2002;
  }
  if (((B_te == '\0') && (B_fa != '\0')) && ((B_fakvs != '\0' && (TMFRST <= tmot)))) {
    DAT_005bb985 = DAT_005bb985 & 0xfe | 1;
  }
  else {
    DAT_005bb985 = DAT_005bb985 & 0xfe;
  }
  local_144 = local_15c;
  if (((DAT_005bb985 & 1) == 0) || (B_lr == '\0')) {
    _DAT_005bb9c4 = 0x7fff0000;
    DAT_005bb920 = 0;
    B_frste = 0;
  }
  else {
    DAT_005bb985 = (B_frste & 1) << 2 | DAT_005bb985 & 0xfb;
    if (DAT_005bb920 != 0xff) {
      DAT_005bb920 = DAT_005bb920 + 1;
    }
    _DAT_005bb9c4 = func_0xff217f20(ZFRMST,frm_w,DAT_005bb9c4,_DAT_005bb9c4 & 0xffff);
    uVar9 = (uint)frm_w;
    uVar11 = _DAT_005bb9c4 >> 0x10;
    if (uVar9 < uVar11) {
      if ((TFRMST < DAT_005bb920) && ((int)(uVar11 - uVar9) < (int)((uint)DFRMST << 8))) {
        B_frste = 1;
      }
    }
    else if ((TFRMST < DAT_005bb920) && ((int)(uVar9 - uVar11) < (int)((uint)DFRMST << 8))) {
      B_frste = 1;
    }
    if (B_frste == 0) {
      if (TFRMZST < DAT_005bb920) {
        local_188 = uVar5 & 0xd0fc | 0x2803;
      }
    }
    else {
      local_188 = uVar5 & 0xdffd | 0x2002;
      uVar9 = func_0xff2187cc(&DAT_001d0100,tans);
      if (uVar11 < (uVar9 & 0xff) << 8) {
        local_188 = CONCAT11(local_188._0_1_,(char)(uVar5 & 0xdffd)) & 0xf0fe | 0x203;
      }
      else {
        uVar11 = func_0xff2187cc(&DAT_001d010c,tans);
        if ((uVar11 & 0xff) << 8 < _DAT_005bb9c4 >> 0x10) {
          local_188 = uVar5 & 0xd0fc | 0x2103;
        }
        else if (((DAT_005bb985 >> 2 & 1) == 0) && (DAT_005bb920 <= TFRMZST)) {
          local_188 = uVar5 & 0xd0fc | 0x2002;
        }
      }
    }
  }
  if ((((B_lra2 != '\0') && (B_fraur2 == '\0')) && (B_frau != '\0')) && (B_dkvsf != '\0')) {
    if (TFRA < DAT_005bb921) {
      uVar9 = (uint)frau2_w;
      uVar11 = (uint)frauzs2_w;
      if (uVar11 < uVar9) {
        if ((int)(uVar9 - uVar11) <= (int)(uint)_FRAE) {
          B_gaefra2 = '\x01';
        }
      }
      else if ((int)(uVar11 - uVar9) <= (int)(uint)_FRAE) {
        B_gaefra2 = '\x01';
      }
      DAT_005bb921 = 0;
      frauzs2_w = frau2_w;
    }
    else {
      DAT_005bb921 = DAT_005bb921 + 1;
    }
  }
  if (B_nofra != '\0') {
    B_gaefra2 = '\x01';
  }
  if (((B_lra2 != '\0') && (B_rkamr2 == '\0')) &&
     ((B_rkam != '\0' && ((B_gaefra2 != '\0' && (B_dkvsf != '\0')))))) {
    if (TRKA < DAT_005bb922) {
      iVar13 = (int)(short)rkam2_w;
      iVar12 = (int)(short)rkamzs2_w;
      if (iVar12 < iVar13) {
        if (iVar13 - iVar12 <= (int)_RKAE) {
          DAT_005bb984 = DAT_005bb984 & 0xfe | 1;
        }
      }
      else if (iVar12 - iVar13 <= (int)_RKAE) {
        DAT_005bb984 = DAT_005bb984 & 0xfe | 1;
      }
      DAT_005bb922 = 0;
      rkamzs2_w = rkam2_w;
    }
    else {
      DAT_005bb922 = DAT_005bb922 + 1;
    }
  }
  if (*local_d8 != 0) {
    DAT_005bb984 = DAT_005bb984 & 0xfe | 1;
  }
  if ((B_gaefra2 == '\0') || ((DAT_005bb984 & 1) == 0)) {
    B_gaeing2 = '\0';
  }
  else {
    B_gaeing2 = '\x01';
  }
  if ((B_lra2 == '\0') || (B_dkvsf == '\0')) {
LAB_0014d010:
    if ((DAT_005bb984 >> 1 & 1) == 0) goto LAB_0014d020;
LAB_0014d030:
    B_zfrao = B_zfrao | B_zfrau2;
  }
  else {
    if (B_frau != '\0') {
      if (TFRAUZ < DAT_005bb923) {
        DAT_005bb984 = DAT_005bb984 & 0xfd | 2;
      }
      else {
        DAT_005bb923 = DAT_005bb923 + 1;
      }
    }
    if (B_frao != '\0') {
      if (TFRAOZ < DAT_005bb926) {
        DAT_005bb984 = DAT_005bb984 & 0xef | 0x10;
      }
      else {
        DAT_005bb926 = DAT_005bb926 + 1;
      }
    }
    if ((B_rkaz != '\0') && ((DAT_005bb984 >> 1 & 1) != 0)) {
      if (TRKAZZ < DAT_005bb924) {
        DAT_005bb984 = DAT_005bb984 & 0xfb | 4;
      }
      else {
        DAT_005bb924 = DAT_005bb924 + 1;
      }
    }
    if (B_rkat == '\0') goto LAB_0014d010;
    if ((DAT_005bb984 >> 1 & 1) != 0) {
      if (TRKATZ < DAT_005bb925) {
        DAT_005bb984 = DAT_005bb984 & 0xf7 | 8;
      }
      else {
        DAT_005bb925 = DAT_005bb925 + 1;
      }
      goto LAB_0014d010;
    }
LAB_0014d020:
    if ((B_gaefra2 != '\0') || (B_nofra != '\0')) goto LAB_0014d030;
    B_zfrao = B_zfrao & (B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrao2);
  }
  if ((((DAT_005bb984 >> 2 & 1) == 0) && (B_norkaz == 0)) &&
     ((B_gaeing2 == '\0' || (B_plra == '\0')))) {
    B_zrkat2 = B_zrkat2 & ~B_zrkaz2;
  }
  else {
    B_zrkat2 = B_zrkat2 | B_zrkaz2;
  }
  if ((((DAT_005bb984 >> 3 & 1) == 0) && (B_norkat == 0)) &&
     ((B_gaeing2 == '\0' || (B_plra != '\0')))) {
    B_zrkat2 = B_zrkat2 & ~B_zrkat2;
  }
  else {
    B_zrkat2 = B_zrkat2 | B_zrkat2;
  }
  if (((DAT_005bb984 >> 4 & 1) == 0) && (B_nofra == '\0')) {
    B_zfrao = B_zfrao & (B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2);
  }
  else {
    B_zfrao = B_zfrao | B_zfrao2;
  }
  if (CWDVVT == '\0') {
    if (B_dkvsef2 == '\0') {
      DAT_005bb928 = DAT_005bb928 & 0xf7;
    }
    else {
      DAT_005bb928 = DAT_005bb928 | 8;
    }
    if ((B_zrkat2 & B_zrkat2) == 0) {
      DAT_005bb928 = DAT_005bb928 & 0xef;
    }
    else {
      DAT_005bb928 = DAT_005bb928 | 0x10;
    }
    if ((B_zfrao & B_dkvszf2) ==
        ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2)) {
      DAT_005bb928 = DAT_005bb928 & 0xdf;
    }
    else {
      DAT_005bb928 = DAT_005bb928 | 0x20;
    }
  }
  else {
    if ((B_dkvsef == '\0') || (B_dkvsef2 == '\0')) {
      DAT_005bb928 = DAT_005bb928 & 0xf7;
    }
    else {
      DAT_005bb928 = DAT_005bb928 | 8;
    }
    if (((B_zfrao & B_zrkat) ==
         ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2)) ||
       ((B_zrkat2 & B_zrkat2) == 0)) {
      DAT_005bb928 = DAT_005bb928 & 0xef;
    }
    else {
      DAT_005bb928 = DAT_005bb928 | 0x10;
    }
    if (((B_zfrao & B_dkvszf) ==
         ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2)) ||
       ((B_zfrao & B_dkvszf2) ==
        ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2))) {
      DAT_005bb928 = DAT_005bb928 & 0xdf;
    }
    else {
      DAT_005bb928 = DAT_005bb928 | 0x20;
    }
  }
  if (B_norkat == 0) {
    if (*local_e0 == '\0') {
      if ((((DAT_005bb928 & 0x10) != 0) && (B_dkvsf != '\0')) && ((DAT_005bb928 & 0x20) != 0)) {
        local_178 = uVar7 & 0xd0fc | 0x2002;
      }
    }
    else if ((((DAT_005bb928 & 0x10) != 0) && (B_dkvsf != '\0')) && ((DAT_005bb928 & 8) != 0)) {
      if ((short)wVar2 < _RKATDX) {
        if ((short)wVar2 <= _RKATDN) {
          local_178 = uVar7 & 0xd0fc | 0x2203;
        }
      }
      else {
        local_178 = uVar7 & 0xd0fc | 0x2103;
      }
    }
  }
  else {
    local_178 = uVar7 & 0xd0fc | 0x2002;
  }
  if (B_nofra == '\0') {
    if (B_efrau2 == '\0') {
      if ((((B_zfrao & B_zfrau2) !=
            ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2)) &&
          (B_dkvsf != '\0')) &&
         ((B_zfrao & B_dkvszf2) !=
          ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2))) {
        local_17c = uVar4 & 0xd0fc | 0x2002;
      }
    }
    else if ((((B_zfrao & B_zfrau2) !=
               ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2)) &&
             (B_dkvsf != '\0')) && (B_dkvsef2 != '\0')) {
      if (frau2_w < _FRAUDX) {
        if (frau2_w <= _FRAUDN) {
          local_17c = uVar4 & 0xd0fc | 0x2203;
        }
      }
      else {
        local_17c = uVar4 & 0xd0fc | 0x2103;
      }
    }
  }
  else {
    local_17c = uVar4 & 0xd0fc | 0x2002;
  }
  if (B_nofra == '\0') {
    if (B_efrao2 == '\0') {
      if ((((B_zfrao & B_zfrao2) !=
            ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2)) &&
          (B_dkvsf != '\0')) &&
         ((B_zfrao & B_dkvszf2) !=
          ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2))) {
        local_180 = uVar3 & 0xd0fc | 0x2002;
      }
    }
    else if ((((B_zfrao & B_zfrao2) !=
               ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2)) &&
             (B_dkvsf != '\0')) && (B_dkvsef2 != '\0')) {
      if (frao2_w < _FRAODX) {
        if (frao2_w <= _FRAODN) {
          local_180 = uVar3 & 0xd0fc | 0x2203;
        }
      }
      else {
        local_180 = uVar3 & 0xd0fc | 0x2103;
      }
    }
  }
  else {
    local_180 = uVar3 & 0xd0fc | 0x2002;
  }
  if (B_norkaz == 0) {
    if (B_erkaz2 == '\0') {
      if ((((B_zrkat2 & B_zrkaz2) != 0) && (B_dkvsf != '\0')) &&
         ((B_zfrao & B_dkvszf2) !=
          ~(B_dkvszf|B_zfrau|B_zfrao|B_zrkat|B_zrkaz|B_dkvszf2|B_zfrau2|B_zfrao2))) {
        local_174 = uVar8 & 0xd0fc | 0x2002;
      }
    }
    else if ((((B_zrkat2 & B_zrkaz2) != 0) && (B_dkvsf != '\0')) && (B_dkvsef2 != '\0')) {
      if ((short)rkaz2_w < _RKAZDX) {
        if ((short)rkaz2_w <= _RKAZDN) {
          local_174 = uVar8 & 0xd0fc | 0x2203;
        }
      }
      else {
        local_174 = uVar8 & 0xd0fc | 0x2103;
      }
    }
  }
  else {
    local_174 = uVar8 & 0xd0fc | 0x2002;
  }
  if ((B_gaeing == '\0') || (B_gaeing2 == '\0')) {
    B_gae = 0;
  }
  else {
    B_gae = 1;
  }
  if (((DAT_005bb985 & 1) == 0) || (B_lr2 == '\0')) {
    _DAT_005bb9c8 = 0x7fff0000;
    DAT_005bb927 = 0;
    B_frste2 = 0;
  }
  else {
    DAT_005bb984 = (B_frste2 & 1) << 5 | DAT_005bb984 & 0xdf;
    if (DAT_005bb927 != 0xff) {
      DAT_005bb927 = DAT_005bb927 + 1;
    }
    _DAT_005bb9c8 = func_0xff217f20(ZFRMST,frm2_w,DAT_005bb9c8,_DAT_005bb9c8 & 0xffff);
    uVar9 = (uint)frm2_w;
    uVar11 = _DAT_005bb9c8 >> 0x10;
    if (uVar9 < uVar11) {
      if ((TFRMST < DAT_005bb927) && ((int)(uVar11 - uVar9) < (int)((uint)DFRMST << 8))) {
        B_frste2 = 1;
      }
    }
    else if ((TFRMST < DAT_005bb927) && ((int)(uVar9 - uVar11) < (int)((uint)DFRMST << 8))) {
      B_frste2 = 1;
    }
    if (B_frste2 == 0) {
      if (TFRMZST < DAT_005bb927) {
        local_170 = uVar6 & 0xd0fc | 0x2803;
      }
    }
    else {
      local_170 = uVar6 & 0xdffd | 0x2002;
      uVar9 = func_0xff2187cc(&DAT_001d0100,tans);
      if (uVar11 < (uVar9 & 0xff) << 8) {
        local_170 = CONCAT11(local_170._0_1_,(char)(uVar6 & 0xdffd)) & 0xf0fe | 0x203;
      }
      else {
        uVar11 = func_0xff2187cc(&DAT_001d010c,tans);
        if ((uVar11 & 0xff) << 8 < _DAT_005bb9c8 >> 0x10) {
          local_170 = uVar6 & 0xd0fc | 0x2103;
        }
        else if (((DAT_005bb984 >> 5 & 1) == 0) && (DAT_005bb927 <= TFRMZST)) {
          local_170 = uVar6 & 0xd0fc | 0x2002;
        }
      }
    }
  }
LAB_0014dd84:
  local_16c[0] = local_198;
  local_9c[0] = local_198;
  local_98 = local_16c;
  func_0xff222958(0x56,local_9c);
  local_16c[0] = local_194;
  local_94[0] = local_194;
  local_90 = local_16c;
  func_0xff222958(0x58,local_94);
  local_16c[0] = local_190;
  local_8c[0] = local_190;
  local_88 = local_16c;
  func_0xff222958(0x9d,local_8c);
  local_16c[0] = local_18c;
  local_84[0] = local_18c;
  local_80 = local_16c;
  func_0xff222958(0x9f,local_84);
  local_16c[0] = local_188;
  local_7c[0] = local_188;
  local_78 = local_16c;
  func_0xff222958(0x5a,local_7c);
  local_16c[0] = local_180;
  local_74[0] = local_180;
  local_70 = local_16c;
  func_0xff222958(0x57,local_74);
  local_16c[0] = local_17c;
  local_6c[0] = local_17c;
  local_68 = local_16c;
  func_0xff222958(0x59,local_6c);
  local_16c[0] = local_178;
  local_64[0] = local_178;
  local_60 = local_16c;
  func_0xff222958(0x9e,local_64);
  local_16c[0] = local_174;
  local_5c[0] = local_174;
  local_58 = local_16c;
  func_0xff222958(0xa0,local_5c);
  local_16c[0] = local_170;
  local_54[0] = local_170;
  local_50 = local_16c;
  func_0xff222958(0x5b,local_54);
  return;
}

