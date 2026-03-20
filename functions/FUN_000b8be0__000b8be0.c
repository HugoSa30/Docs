/*
 * Program: n42.bin
 * Function: FUN_000b8be0
 * Entry: 000b8be0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b8be0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  char cVar16;
  ENUM_005b8cbd EVar17;
  ENUM_005b8cbe EVar18;
  ENUM_005b8cb5 EVar19;
  ENUM_005b8cb5 EVar20;
  ENUM_005b8cb5 EVar21;
  ENUM_005b8cb5 EVar22;
  int iVar23;
  uint uVar24;
  byte bVar25;
  byte bVar26;
  uint uVar27;
  int iVar28;
  byte bVar30;
  int iVar29;
  uint uVar31;
  bool bVar32;
  double dVar33;
  double dVar34;
  
  if (B_mdstop != 0) {
    return;
  }
  B_mdzyl1 = zzyldmd == 0;
  if (B_autget == '\0') {
    esst_snm06dmuw1 = calc1dim(&DAT_001c18c0,nmot_w);
  }
  else {
    esst_snm06dmuw2 = calc1dim(&DAT_001c18ce,nmot_w);
  }
  EVar18 = B_mdzyl1;
  cVar16 = B_autget;
  if (B_autget == '\0') {
    bVar25 = (&DAT_001c1874)[esst_snm06dmuw1 >> 0x10];
  }
  else {
    bVar25 = (&DAT_001c187c)[esst_snm06dmuw2 >> 0x10];
  }
  bVar1 = bVar25 == 1;
  bVar2 = bVar25 == 2;
  bVar3 = bVar25 == 3;
  bVar4 = bVar25 == 4;
  bVar32 = _LURFOST <= _lunw_f;
  if ((FOFAKT == '\0') || (B_fofstp != 0)) {
    if (bVar4) {
      _DAT_003fa9a8 = _ANWFOST;
      _DAT_003fa9be = _ANWSTP;
      anwfofs = _ANWFOST;
      anwst = _ANWSTP;
      idxfofn = bVar25;
      B_fofr = B_fofr4;
      B_fofrun = 0;
      B_fofrun0 = 0;
      B_folunw = bVar32;
      B_idxfof1 = bVar1;
      B_idxfof2 = bVar2;
      B_idxfof3 = bVar3;
      B_idxfof4 = bVar4;
      return;
    }
    if (bVar3) {
      _DAT_003fa9a8 = _ANWFOST;
      _DAT_003fa9be = _ANWSTP;
      anwfofs = _ANWFOST;
      anwst = _ANWSTP;
      idxfofn = bVar25;
      B_fofr = B_fofr3;
      B_fofrun = 0;
      B_fofrun0 = 0;
      B_folunw = bVar32;
      B_idxfof1 = bVar1;
      B_idxfof2 = bVar2;
      B_idxfof3 = bVar3;
      B_idxfof4 = bVar4;
      return;
    }
    if (bVar2) {
      _DAT_003fa9a8 = _ANWFOST;
      _DAT_003fa9be = _ANWSTP;
      anwfofs = _ANWFOST;
      anwst = _ANWSTP;
      idxfofn = bVar25;
      B_fofr = B_fofr2;
      B_fofrun = 0;
      B_fofrun0 = 0;
      B_folunw = bVar32;
      B_idxfof1 = bVar1;
      B_idxfof2 = bVar2;
      B_idxfof3 = bVar3;
      B_idxfof4 = bVar4;
      return;
    }
    if (bVar1) {
      _DAT_003fa9a8 = _ANWFOST;
      _DAT_003fa9be = _ANWSTP;
      anwfofs = _ANWFOST;
      anwst = _ANWSTP;
      idxfofn = bVar25;
      B_fofr = B_fofr1;
      B_fofrun = 0;
      B_fofrun0 = 0;
      B_folunw = bVar32;
      B_idxfof1 = bVar1;
      B_idxfof2 = bVar2;
      B_idxfof3 = bVar3;
      B_idxfof4 = bVar4;
      return;
    }
    _DAT_003fa9a8 = _ANWFOST;
    _DAT_003fa9be = _ANWSTP;
    anwfofs = _ANWFOST;
    anwst = _ANWSTP;
    idxfofn = bVar25;
    B_fofr = 0;
    B_fofrun = 0;
    B_fofrun0 = 0;
    B_folunw = bVar32;
    B_idxfof1 = bVar1;
    B_idxfof2 = bVar2;
    B_idxfof3 = bVar3;
    B_idxfof4 = bVar4;
    return;
  }
  idxfofn = bVar25;
  B_folunw = bVar32;
  B_idxfof1 = bVar1;
  B_idxfof2 = bVar2;
  B_idxfof3 = bVar3;
  B_idxfof4 = bVar4;
  if (B_mdzyl1 != 0) {
    bVar30 = 0;
    do {
      (&DAT_005b85c8)[bVar30] = (&DAT_005b8598)[bVar30];
      bVar30 = bVar30 + 1;
    } while (bVar30 < 4);
  }
  bVar30 = zzyldmd;
  iVar28 = (int)(char)zzyldmd;
  iVar29 = iVar28 * 4;
  (&DAT_005b8598)[iVar28] = (float)_tsroh_f;
  if (cVar16 == '\0') {
    cfof = (&DAT_001c1864)[esst_snm06dmuw1 >> 0x10];
  }
  else {
    cfof = (&DAT_001c186c)[esst_snm06dmuw2 >> 0x10];
  }
  if ((bVar25 == 0) || (cfof == 0)) {
    B_fofdis = true;
  }
  else {
    B_fofdis = false;
  }
  if (((bVar32) || ((bool)B_fofdis)) || ((B_fofdr == '\0' && (cfof != 2)))) {
    B_fofrun0 = false;
  }
  else {
    B_fofrun0 = true;
  }
  if ((bool)B_fofrun0) {
    if ((EVar18 != 0) && (anwfofs != 0)) {
      iVar23 = (short)_DAT_003fa9a8 + -1;
      if (iVar23 < -0x8000) {
        iVar23 = -0x8000;
      }
      else if (0x7fff < iVar23) {
        iVar23 = 0x7fff;
      }
      _DAT_003fa9a8 = (word)iVar23;
    }
    if (!(bool)B_fofrun0) goto LAB_000b8f8c;
  }
  else {
LAB_000b8f8c:
    _DAT_003fa9a8 = _ANWFOST;
  }
  uVar24 = (uint)(short)_DAT_003fa9a8;
  if ((int)uVar24 < 0) {
    uVar24 = 0;
  }
  anwfofs = (word)uVar24;
  if ((bVar1) && (DAT_003fa9b9 == '\0')) {
    DAT_003fa9b8 = true;
  }
  else {
    DAT_003fa9b8 = false;
  }
  if ((bVar2) && (DAT_003fa9bd == '\0')) {
    DAT_003fa9bc = true;
  }
  else {
    DAT_003fa9bc = false;
  }
  if ((bVar3) && (DAT_003fa99d == '\0')) {
    DAT_003fa99c = true;
  }
  else {
    DAT_003fa99c = false;
  }
  if ((bVar4) && (DAT_003fa99f == '\0')) {
    DAT_003fa99e = true;
  }
  else {
    DAT_003fa99e = false;
  }
  if (bVar4) {
    uVar27 = (uint)(char)B_fofr4;
  }
  else if (bVar3) {
    uVar27 = (uint)(char)B_fofr3;
  }
  else if (bVar2) {
    uVar27 = (uint)(char)B_fofr2;
  }
  else if (bVar1) {
    uVar27 = (uint)(char)B_fofr1;
  }
  else {
    uVar27 = 0;
  }
  if ((uVar24 & 0xffff) == 0) {
    if (((uVar27 != 0) && (EVar18 != 0)) && (anwst != 0)) {
      iVar23 = (short)_DAT_003fa9be + -1;
      if (iVar23 < -0x8000) {
        iVar23 = -0x8000;
      }
      else if (0x7fff < iVar23) {
        iVar23 = 0x7fff;
      }
      _DAT_003fa9be = (word)iVar23;
    }
    if (((uVar27 == 0) || ((bool)DAT_003fa9b8)) ||
       (((bool)DAT_003fa9bc || (((bool)DAT_003fa99c || ((bool)DAT_003fa99e)))))) goto LAB_000b91c0;
  }
  else {
LAB_000b91c0:
    _DAT_003fa9be = _ANWSTP;
  }
  uVar31 = (uint)(short)_DAT_003fa9be;
  if ((int)uVar31 < 0) {
    uVar31 = 0;
  }
  anwst = (word)uVar31;
  if (((uVar24 & 0xffff) == 0) && ((uVar31 & 0xffff) != 0)) {
    B_fofrun = true;
  }
  else {
    B_fofrun = false;
  }
  if (((bool)B_fofrun) && (cfof == 2)) {
    B_fofd = B_fofd;
  }
  else {
    B_fofd = 0;
  }
  if (((bool)B_fofrun) && (bVar4)) {
    B_fof4 = B_fof4;
  }
  else {
    B_fof4 = 0;
  }
  if (((bool)B_fofrun) && (bVar3)) {
    B_fof3 = B_fof3;
  }
  else {
    B_fof3 = 0;
  }
  if (((bool)B_fofrun) && (bVar2)) {
    B_fof2 = B_fof2;
  }
  else {
    B_fof2 = 0;
  }
  if (((bool)B_fofrun) && (bVar1)) {
    B_fof1 = B_fof1;
  }
  else {
    B_fof1 = 0;
  }
  if (((bool)B_fofrun) && (EVar18 == 0)) {
    bVar32 = true;
  }
  else {
    bVar32 = false;
  }
  DAT_003fa99d = bVar3;
  DAT_003fa99f = bVar4;
  DAT_003fa9b9 = bVar1;
  DAT_003fa9bd = bVar2;
  if (bVar32) {
    *(float *)(&DAT_005b85f8 + iVar29) =
         (_zzyldmd_f * (DAT_005b8598 - DAT_005b85c8) * _DAT_0001bdc0 + DAT_005b85c8) /
         (&DAT_005b85c8)[iVar28];
  }
  if ((B_zylind == 0) && (iVar28 <= (short)(ushort)zyl2)) {
    return;
  }
  if (!bVar32) {
    return;
  }
  bVar26 = bVar30 - zyl2;
  iVar28 = (int)(char)bVar26;
  bVar25 = bVar30;
  if (B_zylind == 0) {
    fVar5 = _DAT_0001bdc4 - *(float *)(&DAT_005b85f8 + iVar29);
    if (fVar5 <= _DAT_0001bdc8) {
      fVar5 = -fVar5;
    }
    fVar6 = _DAT_0001bdc4 - *(float *)(&DAT_005b85f8 + iVar28 * 4);
    if (fVar6 <= _DAT_0001bdc8) {
      fVar6 = -fVar6;
    }
    bVar25 = bVar26;
    if (fVar5 < fVar6) {
      bVar25 = bVar30;
    }
  }
  if (B_zylind != 0) {
    bVar26 = bVar30;
  }
  iVar23 = (int)(char)bVar26;
  if (bVar4) {
    _DAT_003fa9ac = *(float *)(&UNK_003fdb14 + iVar23 * 4);
  }
  else if (bVar3) {
    _DAT_003fa9ac = *(float *)(&UNK_003fdae4 + iVar23 * 4);
  }
  else if (bVar2) {
    _DAT_003fa9ac = *(float *)(&UNK_003fdab4 + iVar23 * 4);
  }
  else {
    _DAT_003fa9ac = _DAT_0001bdc8;
    if (bVar1) {
      _DAT_003fa9ac = *(float *)(&UNK_003fda84 + iVar23 * 4);
    }
  }
  fVar5 = _FS1FOF;
  if (uVar27 != 0) {
    fVar5 = _FS2FOF;
  }
  if (((B_zylind != 0) ||
      ((_DAT_0001bdc4 < *(float *)(&DAT_005b85f8 + iVar29) &&
       (_DAT_0001bdc4 < *(float *)(&DAT_005b85f8 + iVar28 * 4))))) ||
     ((fVar6 = _DAT_0001bdc4, *(float *)(&DAT_005b85f8 + iVar28 * 4) < _DAT_0001bdc4 &&
      (*(float *)(&DAT_005b85f8 + iVar29) < _DAT_0001bdc4)))) {
    fVar6 = *(float *)(&DAT_005b85f8 + (char)bVar25 * 4);
  }
  FUN_000b291c((double)fVar6,(double)fVar5,&DAT_003fa9ac);
  if (idxfofn == 1) {
    dVar33 = (double)_DAT_0001bdc4;
    FUN_000b2838((double)(float)(dVar33 - (double)_ALFOF),(double)_DAT_003fa9ac,
                 (double)(float)((double)_ALFOF + dVar33));
    dVar33 = (double)FUN_000b2838((double)(float)(dVar33 - (double)_ALFOF),(double)_DAT_003fa9ac,
                                  (double)(float)((double)_ALFOF + dVar33));
    *(float *)(&UNK_003fda84 + iVar23 * 4) = (float)dVar33;
  }
  else if (idxfofn == 2) {
    dVar33 = (double)_DAT_0001bdc4;
    FUN_000b2838((double)(float)(dVar33 - (double)_ALFOF),(double)_DAT_003fa9ac,
                 (double)(float)((double)_ALFOF + dVar33));
    dVar33 = (double)FUN_000b2838((double)(float)(dVar33 - (double)_ALFOF),(double)_DAT_003fa9ac,
                                  (double)(float)((double)_ALFOF + dVar33));
    *(float *)(&UNK_003fdab4 + iVar23 * 4) = (float)dVar33;
  }
  else if (idxfofn == 3) {
    dVar33 = (double)_DAT_0001bdc4;
    FUN_000b2838((double)(float)(dVar33 - (double)_ALFOF),(double)_DAT_003fa9ac,
                 (double)(float)((double)_ALFOF + dVar33));
    dVar33 = (double)FUN_000b2838((double)(float)(dVar33 - (double)_ALFOF),(double)_DAT_003fa9ac,
                                  (double)(float)((double)_ALFOF + dVar33));
    *(float *)(&UNK_003fdae4 + iVar23 * 4) = (float)dVar33;
  }
  else if (idxfofn == 4) {
    dVar33 = (double)_DAT_0001bdc4;
    FUN_000b2838((double)(float)(dVar33 - (double)_ALFOF),(double)_DAT_003fa9ac,
                 (double)(float)((double)_ALFOF + dVar33));
    dVar33 = (double)FUN_000b2838((double)(float)(dVar33 - (double)_ALFOF),(double)_DAT_003fa9ac,
                                  (double)(float)((double)_ALFOF + dVar33));
    *(float *)(&UNK_003fdb14 + iVar23 * 4) = (float)dVar33;
  }
  if (B_idxfof4 == 0) {
    if (B_idxfof3 == 0) {
      if (B_idxfof2 == 0) {
        _DAT_003fa9a4 = _DAT_0001bdc8;
        if (B_idxfof1 != 0) {
          _DAT_003fa9a4 = *(float *)(&UNK_003fd844 + iVar23 * 4);
        }
      }
      else {
        _DAT_003fa9a4 = *(float *)(&UNK_003fd874 + iVar23 * 4);
      }
    }
    else {
      _DAT_003fa9a4 = *(float *)(&UNK_003fd8a4 + iVar23 * 4);
    }
  }
  else {
    _DAT_003fa9a4 = *(float *)(&UNK_003fd8d4 + iVar23 * 4);
  }
  dVar33 = (double)FUN_000b2838((double)(_DAT_0001bdc4 - _ALFOF),(double)_DAT_003fa9ac,
                                (double)(_ALFOF + _DAT_0001bdc4));
  dVar34 = (double)(float)((double)*(float *)(&DAT_005b85f8 + (char)bVar25 * 4) - dVar33);
  FUN_000b291c((double)(float)((double)*(float *)(&DAT_005b85f8 + (char)bVar25 * 4) - dVar33),
               (double)_FLFOF,&DAT_003fa9a4);
  if (idxfofn == 1) {
    *(float *)(&UNK_003fd844 + iVar23 * 4) = _DAT_003fa9a4;
  }
  else if (idxfofn == 2) {
    *(float *)(&UNK_003fd874 + iVar23 * 4) = _DAT_003fa9a4;
  }
  else if (idxfofn == 3) {
    *(float *)(&UNK_003fd8a4 + iVar23 * 4) = _DAT_003fa9a4;
  }
  else if (idxfofn == 4) {
    *(float *)(&UNK_003fd8d4 + iVar23 * 4) = _DAT_003fa9a4;
  }
  if (B_idxfof4 == 0) {
    if (B_idxfof3 == 0) {
      if (B_idxfof2 == 0) {
        _DAT_003fa9b4 = _DAT_0001bdc8;
        if (B_idxfof1 != 0) {
          _DAT_003fa9b4 = *(float *)(&UNK_003fd904 + iVar23 * 4);
        }
      }
      else {
        _DAT_003fa9b4 = *(float *)(&UNK_003fd934 + iVar23 * 4);
      }
    }
    else {
      _DAT_003fa9b4 = *(float *)(&UNK_003fd964 + iVar23 * 4);
    }
  }
  else {
    _DAT_003fa9b4 = *(float *)(&UNK_003fd994 + iVar23 * 4);
  }
  FUN_000b291c((double)(float)dVar34,(double)_FLFOF,&DAT_003fa9b4);
  bVar25 = idxfofn;
  if (idxfofn == 1) {
    *(float *)(&UNK_003fd904 + iVar23 * 4) = _DAT_003fa9b4;
  }
  else if (idxfofn == 2) {
    *(float *)(&UNK_003fd934 + iVar23 * 4) = _DAT_003fa9b4;
  }
  else if (idxfofn == 3) {
    *(float *)(&UNK_003fd964 + iVar23 * 4) = _DAT_003fa9b4;
  }
  else if (idxfofn == 4) {
    *(float *)(&UNK_003fd994 + iVar23 * 4) = _DAT_003fa9b4;
  }
  EVar17 = B_idxfof4;
  fVar5 = _DAT_003fd8d8;
  if ((((B_idxfof4 == 0) && (fVar5 = _DAT_003fd8a8, B_idxfof3 == 0)) &&
      (fVar5 = _DAT_003fd878, B_idxfof2 == 0)) && (fVar5 = _DAT_0001bdc8, B_idxfof1 != 0)) {
    fVar5 = _DAT_003fd848;
  }
  if (fVar5 <= _DAT_0001bdc8) {
    fVar5 = -fVar5;
  }
  fVar6 = _DAT_003fd8dc;
  if (((B_idxfof4 == 0) && (fVar6 = _DAT_003fd8ac, B_idxfof3 == 0)) &&
     ((fVar6 = _DAT_003fd87c, B_idxfof2 == 0 && (fVar6 = _DAT_0001bdc8, B_idxfof1 != 0)))) {
    fVar6 = _DAT_003fd84c;
  }
  if (fVar6 <= _DAT_0001bdc8) {
    fVar6 = -fVar6;
  }
  fVar8 = _DAT_003fd8e0;
  if (((B_idxfof4 == 0) && (fVar8 = _DAT_003fd8b0, B_idxfof3 == 0)) &&
     ((fVar8 = _DAT_003fd880, B_idxfof2 == 0 && (fVar8 = _DAT_0001bdc8, B_idxfof1 != 0)))) {
    fVar8 = _DAT_003fd850;
  }
  if (fVar8 <= _DAT_0001bdc8) {
    fVar8 = -fVar8;
  }
  fVar9 = _DAT_003fd8e4;
  if ((((B_idxfof4 == 0) && (fVar9 = _DAT_003fd8b4, B_idxfof3 == 0)) &&
      (fVar9 = _DAT_003fd884, B_idxfof2 == 0)) && (fVar9 = _DAT_0001bdc8, B_idxfof1 != 0)) {
    fVar9 = _DAT_003fd854;
  }
  if (fVar9 <= _DAT_0001bdc8) {
    fVar9 = -fVar9;
  }
  fVar10 = _DAT_003fd8e8;
  if (((B_idxfof4 == 0) && (fVar10 = _DAT_003fd8b8, B_idxfof3 == 0)) &&
     ((fVar10 = _DAT_003fd888, B_idxfof2 == 0 && (fVar10 = _DAT_0001bdc8, B_idxfof1 != 0)))) {
    fVar10 = _DAT_003fd858;
  }
  if (fVar10 <= _DAT_0001bdc8) {
    fVar10 = -fVar10;
  }
  fVar11 = _DAT_003fd8ec;
  if (((B_idxfof4 == 0) && (fVar11 = _DAT_003fd8bc, B_idxfof3 == 0)) &&
     ((fVar11 = _DAT_003fd88c, B_idxfof2 == 0 && (fVar11 = _DAT_0001bdc8, B_idxfof1 != 0)))) {
    fVar11 = _DAT_003fd85c;
  }
  if (fVar11 <= _DAT_0001bdc8) {
    fVar11 = -fVar11;
  }
  fVar12 = _DAT_003fd8f0;
  if ((((B_idxfof4 == 0) && (fVar12 = _DAT_003fd8c0, B_idxfof3 == 0)) &&
      (fVar12 = _DAT_003fd890, B_idxfof2 == 0)) && (fVar12 = _DAT_0001bdc8, B_idxfof1 != 0)) {
    fVar12 = _DAT_003fd860;
  }
  if (fVar12 <= _DAT_0001bdc8) {
    fVar12 = -fVar12;
  }
  fVar13 = _DAT_003fd8f4;
  if (((B_idxfof4 == 0) && (fVar13 = _DAT_003fd8c4, B_idxfof3 == 0)) &&
     ((fVar13 = _DAT_003fd894, B_idxfof2 == 0 && (fVar13 = _DAT_0001bdc8, B_idxfof1 != 0)))) {
    fVar13 = _DAT_003fd864;
  }
  if (fVar13 <= _DAT_0001bdc8) {
    fVar13 = -fVar13;
  }
  fVar14 = _DAT_003fd8f8;
  if (((B_idxfof4 == 0) && (fVar14 = _DAT_003fd8c8, B_idxfof3 == 0)) &&
     ((fVar14 = _DAT_003fd898, B_idxfof2 == 0 && (fVar14 = _DAT_0001bdc8, B_idxfof1 != 0)))) {
    fVar14 = _DAT_003fd868;
  }
  if (fVar14 <= _DAT_0001bdc8) {
    fVar14 = -fVar14;
  }
  fVar15 = _DAT_003fd8fc;
  if ((((B_idxfof4 == 0) && (fVar15 = _DAT_003fd8cc, B_idxfof3 == 0)) &&
      (fVar15 = _DAT_003fd89c, B_idxfof2 == 0)) && (fVar15 = _DAT_0001bdc8, B_idxfof1 != 0)) {
    fVar15 = _DAT_003fd86c;
  }
  if (fVar15 <= _DAT_0001bdc8) {
    fVar15 = -fVar15;
  }
  fVar7 = _DAT_003fd900;
  if (((B_idxfof4 == 0) && (fVar7 = _DAT_003fd8d0, B_idxfof3 == 0)) &&
     ((fVar7 = _DAT_003fd8a0, B_idxfof2 == 0 && (fVar7 = _DAT_0001bdc8, B_idxfof1 != 0)))) {
    fVar7 = _DAT_003fd870;
  }
  if (fVar7 <= _DAT_0001bdc8) {
    fVar7 = -fVar7;
  }
  if (fVar7 < fVar15) {
    fVar7 = fVar15;
  }
  if (fVar7 < fVar14) {
    fVar7 = fVar14;
  }
  if (fVar7 < fVar13) {
    fVar7 = fVar13;
  }
  if (fVar7 < fVar12) {
    fVar7 = fVar12;
  }
  if (fVar7 < fVar11) {
    fVar7 = fVar11;
  }
  if (fVar7 < fVar10) {
    fVar7 = fVar10;
  }
  if (fVar7 < fVar9) {
    fVar7 = fVar9;
  }
  if (fVar7 < fVar8) {
    fVar7 = fVar8;
  }
  if (fVar7 < fVar6) {
    fVar7 = fVar6;
  }
  if (fVar7 < fVar5) {
    fVar7 = fVar5;
  }
  fVar5 = _DAT_003fd998;
  if (((B_idxfof4 == 0) && (fVar5 = _DAT_003fd968, B_idxfof3 == 0)) &&
     ((fVar5 = _DAT_003fd938, B_idxfof2 == 0 && (fVar5 = _DAT_0001bdc8, B_idxfof1 != 0)))) {
    fVar5 = _DAT_003fd908;
  }
  if (fVar5 <= _DAT_0001bdc8) {
    fVar5 = -fVar5;
  }
  fVar6 = _DAT_003fd99c;
  if ((((B_idxfof4 == 0) && (fVar6 = _DAT_003fd96c, B_idxfof3 == 0)) &&
      (fVar6 = _DAT_003fd93c, B_idxfof2 == 0)) && (fVar6 = _DAT_0001bdc8, B_idxfof1 != 0)) {
    fVar6 = _DAT_003fd90c;
  }
  if (fVar6 <= _DAT_0001bdc8) {
    fVar6 = -fVar6;
  }
  fVar8 = _DAT_003fd9a0;
  if (((B_idxfof4 == 0) && (fVar8 = _DAT_003fd970, B_idxfof3 == 0)) &&
     ((fVar8 = _DAT_003fd940, B_idxfof2 == 0 && (fVar8 = _DAT_0001bdc8, B_idxfof1 != 0)))) {
    fVar8 = _DAT_003fd910;
  }
  if (fVar8 <= _DAT_0001bdc8) {
    fVar8 = -fVar8;
  }
  fVar9 = _DAT_003fd9a4;
  if (((B_idxfof4 == 0) && (fVar9 = _DAT_003fd974, B_idxfof3 == 0)) &&
     ((fVar9 = _DAT_003fd944, B_idxfof2 == 0 && (fVar9 = _DAT_0001bdc8, B_idxfof1 != 0)))) {
    fVar9 = _DAT_003fd914;
  }
  if (fVar9 <= _DAT_0001bdc8) {
    fVar9 = -fVar9;
  }
  fVar10 = _DAT_003fd9a8;
  if ((((B_idxfof4 == 0) && (fVar10 = _DAT_003fd978, B_idxfof3 == 0)) &&
      (fVar10 = _DAT_003fd948, B_idxfof2 == 0)) && (fVar10 = _DAT_0001bdc8, B_idxfof1 != 0)) {
    fVar10 = _DAT_003fd918;
  }
  if (fVar10 <= _DAT_0001bdc8) {
    fVar10 = -fVar10;
  }
  fVar11 = _DAT_003fd9ac;
  if (((B_idxfof4 == 0) && (fVar11 = _DAT_003fd97c, B_idxfof3 == 0)) &&
     ((fVar11 = _DAT_003fd94c, B_idxfof2 == 0 && (fVar11 = _DAT_0001bdc8, B_idxfof1 != 0)))) {
    fVar11 = _DAT_003fd91c;
  }
  if (fVar11 <= _DAT_0001bdc8) {
    fVar11 = -fVar11;
  }
  fVar12 = _DAT_003fd9b0;
  if (((B_idxfof4 == 0) && (fVar12 = _DAT_003fd980, B_idxfof3 == 0)) &&
     ((fVar12 = _DAT_003fd950, B_idxfof2 == 0 && (fVar12 = _DAT_0001bdc8, B_idxfof1 != 0)))) {
    fVar12 = _DAT_003fd920;
  }
  if (fVar12 <= _DAT_0001bdc8) {
    fVar12 = -fVar12;
  }
  fVar13 = _DAT_003fd9b4;
  if ((((B_idxfof4 == 0) && (fVar13 = _DAT_003fd984, B_idxfof3 == 0)) &&
      (fVar13 = _DAT_003fd954, B_idxfof2 == 0)) && (fVar13 = _DAT_0001bdc8, B_idxfof1 != 0)) {
    fVar13 = _DAT_003fd924;
  }
  if (fVar13 <= _DAT_0001bdc8) {
    fVar13 = -fVar13;
  }
  fVar14 = _DAT_003fd9b8;
  if (((B_idxfof4 == 0) && (fVar14 = _DAT_003fd988, B_idxfof3 == 0)) &&
     ((fVar14 = _DAT_003fd958, B_idxfof2 == 0 && (fVar14 = _DAT_0001bdc8, B_idxfof1 != 0)))) {
    fVar14 = _DAT_003fd928;
  }
  if (fVar14 <= _DAT_0001bdc8) {
    fVar14 = -fVar14;
  }
  fVar15 = _DAT_003fd9bc;
  if (((B_idxfof4 == 0) && (fVar15 = _DAT_003fd98c, B_idxfof3 == 0)) &&
     ((fVar15 = _DAT_003fd95c, B_idxfof2 == 0 && (fVar15 = _DAT_0001bdc8, B_idxfof1 != 0)))) {
    fVar15 = _DAT_003fd92c;
  }
  if (fVar15 <= _DAT_0001bdc8) {
    fVar15 = -fVar15;
  }
  flmxof_f = (dword)_DAT_003fd9c0;
  if ((((B_idxfof4 == 0) && (flmxof_f = (dword)_DAT_003fd990, B_idxfof3 == 0)) &&
      (flmxof_f = (dword)_DAT_003fd960, B_idxfof2 == 0)) &&
     (flmxof_f = (dword)_DAT_0001bdc8, B_idxfof1 != 0)) {
    flmxof_f = (dword)_DAT_003fd930;
  }
  if ((float)flmxof_f <= _DAT_0001bdc8) {
    flmxof_f = (dword)-(float)flmxof_f;
  }
  if ((float)flmxof_f < fVar15) {
    flmxof_f = (dword)fVar15;
  }
  if ((float)flmxof_f < fVar14) {
    flmxof_f = (dword)fVar14;
  }
  if ((float)flmxof_f < fVar13) {
    flmxof_f = (dword)fVar13;
  }
  if ((float)flmxof_f < fVar12) {
    flmxof_f = (dword)fVar12;
  }
  if ((float)flmxof_f < fVar11) {
    flmxof_f = (dword)fVar11;
  }
  if ((float)flmxof_f < fVar10) {
    flmxof_f = (dword)fVar10;
  }
  if ((float)flmxof_f < fVar9) {
    flmxof_f = (dword)fVar9;
  }
  if ((float)flmxof_f < fVar8) {
    flmxof_f = (dword)fVar8;
  }
  if ((float)flmxof_f < fVar6) {
    flmxof_f = (dword)fVar6;
  }
  if ((float)flmxof_f < fVar5) {
    flmxof_f = (dword)fVar5;
  }
  if ((float)flmxof_f < fVar7) {
    flmxof_f = (dword)fVar7;
  }
  if ((float)slfofu_f <= (float)flmxof_f) {
    uVar24 = uVar27;
    if ((float)flmxof_f > (float)slfofo_f) {
      uVar24 = 0;
    }
  }
  else {
    uVar24 = 1;
  }
  B_fofr = (ENUM_005b8cb5)uVar24;
  if (((float)flmxof_f <= (float)slfofo_f) || (uVar27 == 0)) {
    B_readap = 0;
  }
  else {
    B_readap = B_readap;
  }
  if (((uVar24 & 0xff) != 0) && (B_fofd != 0)) {
    DAT_003fa9b0 = '\x01';
  }
  B_fofdr = DAT_003fa9b0;
  EVar19 = B_fofr;
  EVar20 = B_fofr2;
  EVar21 = B_fofr3;
  EVar22 = B_fofr4;
  if ((((bVar25 != 1) && (EVar19 = B_fofr1, EVar20 = B_fofr, bVar25 != 2)) &&
      (EVar20 = B_fofr2, EVar21 = B_fofr, bVar25 != 3)) &&
     (EVar21 = B_fofr3, EVar22 = B_fofr, bVar25 != 4)) {
    EVar22 = B_fofr4;
  }
  B_fofr4 = EVar22;
  B_fofr3 = EVar21;
  B_fofr2 = EVar20;
  B_fofr1 = EVar19;
  if ((DAT_003fa9b0 == '\0') || (DAT_003fa9a1 != '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  DAT_003fa9a1 = DAT_003fa9b0;
  DAT_003fa9a0 = bVar1;
  if ((B_fofr1 != 0) && (B_fomod == '\0')) {
    uVar27 = 1;
    if (B_zylind == 0) {
      iVar29 = (int)(char)(zyl2 - 1);
      if (iVar29 < 1) goto LAB_000ba850;
    }
    else {
      iVar29 = 3;
    }
    do {
      iVar28 = (uVar27 & 0xff) * 4;
      *(undefined4 *)(&UNK_003fd9c4 + iVar28) = *(undefined4 *)(&UNK_003fda84 + iVar28);
      uVar27 = uVar27 + 1;
    } while ((short)((ushort)uVar27 & 0xff) <= iVar29);
  }
LAB_000ba850:
  if ((bVar1) && (B_fomod != '\0')) {
    bVar30 = 1;
    do {
      iVar29 = (uint)bVar30 * 4;
      if (EVar17 == 0) {
        if (B_idxfof3 == 0) {
          if (B_idxfof2 == 0) {
            fVar5 = _DAT_0001bdc4;
            if (B_idxfof1 != 0) {
              fVar5 = *(float *)(&UNK_003fda84 + iVar29);
            }
          }
          else {
            fVar5 = *(float *)(&UNK_003fdab4 + iVar29);
          }
        }
        else {
          fVar5 = *(float *)(&UNK_003fdae4 + iVar29);
        }
      }
      else {
        fVar5 = *(float *)(&UNK_003fdb14 + iVar29);
      }
      *(float *)(&UNK_003fd9c4 + iVar29) = fVar5;
      *(float *)(&UNK_003fd9f4 + iVar29) = fVar5;
      *(float *)(&UNK_003fda24 + iVar29) = fVar5;
      *(float *)(&UNK_003fda54 + iVar29) = fVar5;
      bVar30 = bVar30 + 1;
    } while (bVar30 < 4);
  }
  if ((((uVar24 & 0xff) != 0) && (B_fomod != '\0')) && (!bVar1)) {
    bVar30 = 1;
    do {
      if (bVar25 == 1) {
        if (EVar17 == 0) {
          if (B_idxfof3 == 0) {
            if (B_idxfof2 == 0) {
              fVar5 = _DAT_0001bdc4;
              if (B_idxfof1 != 0) {
                fVar5 = *(float *)(&UNK_003fda84 + (uint)bVar30 * 4);
              }
            }
            else {
              fVar5 = *(float *)(&UNK_003fdab4 + (uint)bVar30 * 4);
            }
          }
          else {
            fVar5 = *(float *)(&UNK_003fdae4 + (uint)bVar30 * 4);
          }
        }
        else {
          fVar5 = *(float *)(&UNK_003fdb14 + (uint)bVar30 * 4);
        }
        *(float *)(&UNK_003fd9c4 + (uint)bVar30 * 4) = fVar5;
      }
      else if (bVar25 == 2) {
        if (EVar17 == 0) {
          if (B_idxfof3 == 0) {
            if (B_idxfof2 == 0) {
              fVar5 = _DAT_0001bdc4;
              if (B_idxfof1 != 0) {
                fVar5 = *(float *)(&UNK_003fda84 + (uint)bVar30 * 4);
              }
            }
            else {
              fVar5 = *(float *)(&UNK_003fdab4 + (uint)bVar30 * 4);
            }
          }
          else {
            fVar5 = *(float *)(&UNK_003fdae4 + (uint)bVar30 * 4);
          }
        }
        else {
          fVar5 = *(float *)(&UNK_003fdb14 + (uint)bVar30 * 4);
        }
        *(float *)(&UNK_003fd9f4 + (uint)bVar30 * 4) = fVar5;
      }
      else if (bVar25 == 3) {
        if (EVar17 == 0) {
          if (B_idxfof3 == 0) {
            if (B_idxfof2 == 0) {
              fVar5 = _DAT_0001bdc4;
              if (B_idxfof1 != 0) {
                fVar5 = *(float *)(&UNK_003fda84 + (uint)bVar30 * 4);
              }
            }
            else {
              fVar5 = *(float *)(&UNK_003fdab4 + (uint)bVar30 * 4);
            }
          }
          else {
            fVar5 = *(float *)(&UNK_003fdae4 + (uint)bVar30 * 4);
          }
        }
        else {
          fVar5 = *(float *)(&UNK_003fdb14 + (uint)bVar30 * 4);
        }
        *(float *)(&UNK_003fda24 + (uint)bVar30 * 4) = fVar5;
      }
      else if (bVar25 == 4) {
        if (EVar17 == 0) {
          if (B_idxfof3 == 0) {
            if (B_idxfof2 == 0) {
              fVar5 = _DAT_0001bdc4;
              if (B_idxfof1 != 0) {
                fVar5 = *(float *)(&UNK_003fda84 + (uint)bVar30 * 4);
              }
            }
            else {
              fVar5 = *(float *)(&UNK_003fdab4 + (uint)bVar30 * 4);
            }
          }
          else {
            fVar5 = *(float *)(&UNK_003fdae4 + (uint)bVar30 * 4);
          }
        }
        else {
          fVar5 = *(float *)(&UNK_003fdb14 + (uint)bVar30 * 4);
        }
        *(float *)(&UNK_003fda54 + (uint)bVar30 * 4) = fVar5;
      }
      bVar30 = bVar30 + 1;
    } while (bVar30 < 4);
  }
                    /* WARNING: Read-only address (ram,0x003fd850) is written */
                    /* WARNING: Read-only address (ram,0x003fd854) is written */
                    /* WARNING: Read-only address (ram,0x003fd858) is written */
                    /* WARNING: Read-only address (ram,0x003fd85c) is written */
                    /* WARNING: Read-only address (ram,0x003fd864) is written */
                    /* WARNING: Read-only address (ram,0x003fd868) is written */
                    /* WARNING: Read-only address (ram,0x003fd86c) is written */
                    /* WARNING: Read-only address (ram,0x003fd870) is written */
                    /* WARNING: Read-only address (ram,0x003fd880) is written */
                    /* WARNING: Read-only address (ram,0x003fd884) is written */
                    /* WARNING: Read-only address (ram,0x003fd888) is written */
                    /* WARNING: Read-only address (ram,0x003fd88c) is written */
                    /* WARNING: Read-only address (ram,0x003fd890) is written */
                    /* WARNING: Read-only address (ram,0x003fd894) is written */
                    /* WARNING: Read-only address (ram,0x003fd898) is written */
                    /* WARNING: Read-only address (ram,0x003fd89c) is written */
                    /* WARNING: Read-only address (ram,0x003fd8a0) is written */
                    /* WARNING: Read-only address (ram,0x003fd8b0) is written */
                    /* WARNING: Read-only address (ram,0x003fd8b4) is written */
                    /* WARNING: Read-only address (ram,0x003fd8b8) is written */
                    /* WARNING: Read-only address (ram,0x003fd8bc) is written */
                    /* WARNING: Read-only address (ram,0x003fd8c4) is written */
                    /* WARNING: Read-only address (ram,0x003fd8c8) is written */
                    /* WARNING: Read-only address (ram,0x003fd8cc) is written */
                    /* WARNING: Read-only address (ram,0x003fd8d0) is written */
                    /* WARNING: Read-only address (ram,0x003fd8e0) is written */
                    /* WARNING: Read-only address (ram,0x003fd8e4) is written */
                    /* WARNING: Read-only address (ram,0x003fd8e8) is written */
                    /* WARNING: Read-only address (ram,0x003fd8ec) is written */
                    /* WARNING: Read-only address (ram,0x003fd8f0) is written */
                    /* WARNING: Read-only address (ram,0x003fd8f4) is written */
                    /* WARNING: Read-only address (ram,0x003fd8f8) is written */
                    /* WARNING: Read-only address (ram,0x003fd8fc) is written */
                    /* WARNING: Read-only address (ram,0x003fd900) is written */
                    /* WARNING: Read-only address (ram,0x003fd910) is written */
                    /* WARNING: Read-only address (ram,0x003fd914) is written */
                    /* WARNING: Read-only address (ram,0x003fd918) is written */
                    /* WARNING: Read-only address (ram,0x003fd91c) is written */
                    /* WARNING: Read-only address (ram,0x003fd924) is written */
                    /* WARNING: Read-only address (ram,0x003fd928) is written */
                    /* WARNING: Read-only address (ram,0x003fd92c) is written */
                    /* WARNING: Read-only address (ram,0x003fd930) is written */
                    /* WARNING: Read-only address (ram,0x003fd940) is written */
                    /* WARNING: Read-only address (ram,0x003fd944) is written */
                    /* WARNING: Read-only address (ram,0x003fd948) is written */
                    /* WARNING: Read-only address (ram,0x003fd94c) is written */
                    /* WARNING: Read-only address (ram,0x003fd950) is written */
                    /* WARNING: Read-only address (ram,0x003fd954) is written */
                    /* WARNING: Read-only address (ram,0x003fd958) is written */
                    /* WARNING: Read-only address (ram,0x003fd95c) is written */
                    /* WARNING: Read-only address (ram,0x003fd960) is written */
                    /* WARNING: Read-only address (ram,0x003fd970) is written */
                    /* WARNING: Read-only address (ram,0x003fd974) is written */
                    /* WARNING: Read-only address (ram,0x003fd978) is written */
                    /* WARNING: Read-only address (ram,0x003fd97c) is written */
                    /* WARNING: Read-only address (ram,0x003fd984) is written */
                    /* WARNING: Read-only address (ram,0x003fd988) is written */
                    /* WARNING: Read-only address (ram,0x003fd98c) is written */
                    /* WARNING: Read-only address (ram,0x003fd990) is written */
                    /* WARNING: Read-only address (ram,0x003fd9a0) is written */
                    /* WARNING: Read-only address (ram,0x003fd9a4) is written */
                    /* WARNING: Read-only address (ram,0x003fd9a8) is written */
                    /* WARNING: Read-only address (ram,0x003fd9ac) is written */
                    /* WARNING: Read-only address (ram,0x003fd9b0) is written */
                    /* WARNING: Read-only address (ram,0x003fd9b4) is written */
                    /* WARNING: Read-only address (ram,0x003fd9b8) is written */
                    /* WARNING: Read-only address (ram,0x003fd9bc) is written */
                    /* WARNING: Read-only address (ram,0x003fd9c0) is written */
                    /* WARNING: Read-only address (ram,0x005b8598) is written */
  return;
}

