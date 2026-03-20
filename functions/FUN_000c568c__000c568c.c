/*
 * Program: n42.bin
 * Function: FUN_000c568c
 * Entry: 000c568c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c568c(void)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ENUM_005b8d1b EVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  
  EVar8 = B_dzrts;
  B_dzack = 0;
  if (((((B_ff == '\0') && (B_stend != '\0')) && (nmot_w <= _NZDIAGH)) &&
      ((_NZDIAGL <= nmot_w && (ub <= UBDZMX)))) && (UBDZMN <= ub)) {
    B_dzenable = true;
  }
  else {
    B_dzenable = false;
  }
  if (((bool)B_dzenable) && (B_dzrts != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    B_dzack = B_dzack;
    dzkanal = 0;
    iVar9 = (int)(short)((ushort)ub - (ushort)dzkub);
    if (iVar9 < 1) {
      iVar9 = -iVar9;
    }
    B_dzkub = iVar9 <= (short)(ushort)DZKDUB;
    dzkub = ub;
  }
  else if (B_dzrts == 0) {
    B_dzack = 0;
  }
  B_dzdmden = 0;
  if ((dzkanal < 4) && (bVar5)) {
    uVar11 = (uint)tamx;
    do {
      uVar10 = (uint)dzkanal;
      uVar14 = (uint)dzkanal;
      bVar1 = (&DAT_005b8e5c)[uVar14];
      if ((bVar1 >> (DZOTPERR_DZKU_IMPL & 0x3f) & 1) == 0) {
        (&DAT_005b8f94)[uVar14] = 0;
      }
      else {
        if ((byte)(&DAT_005b8f94)[uVar14] < DZPOTP) {
          uVar13 = (byte)(&DAT_005b8f94)[uVar14] + 1;
        }
        else {
          uVar13 = (uint)DZPOTP;
        }
        if (uVar13 < 0x100) {
          uVar12 = (undefined)uVar13;
        }
        else {
          uVar12 = 0xff;
        }
        (&DAT_005b8f94)[uVar14] = uVar12;
      }
      (&DAT_005b8f48)[uVar14] = DZPOTP <= (byte)(&DAT_005b8f94)[uVar14];
      uVar2 = (&DAT_005b9a62)[uVar14];
      uVar13 = (uint)uVar2;
      if (((bVar1 >> (DZKSUB_DZKU_IMPL & 0x3f) & 1) == 0) && (_TAINI == uVar13)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      (&DAT_005b8f50)[uVar14] = bVar4;
      if ((bVar1 >> (NOTAERR_DZKU_IMPL & 0x3f) & 1) == 0) {
        (&DAT_005b8f9c)[uVar14] = 0;
      }
      else {
        if ((byte)(&DAT_005b8f9c)[uVar14] < DZPTIM) {
          uVar15 = (byte)(&DAT_005b8f9c)[uVar14] + 1;
        }
        else {
          uVar15 = (uint)DZPTIM;
        }
        if (uVar15 < 0x100) {
          uVar12 = (undefined)uVar15;
        }
        else {
          uVar12 = 0xff;
        }
        (&DAT_005b8f9c)[uVar14] = uVar12;
      }
      bVar16 = (byte)(&DAT_005b8f9c)[uVar14] < DZPTIM;
      if ((bVar16) || (bVar4)) {
        uVar12 = 0;
      }
      else {
        uVar12 = 1;
      }
      (&DAT_005b8f18)[uVar14] = uVar12;
      if ((bVar16) || (!bVar4)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      (&DAT_005b8f38)[uVar14] = bVar3;
      if (((((bVar1 >> (NOTAERR_DZKU_IMPL & 0x3f) & 1) != 0) && (bVar4)) || (tamn <= uVar13)) ||
         (uVar13 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (((uVar11 < uVar13) && ((bVar1 >> (DZKSUB_DZKU_IMPL & 0x3f) & 1) == 0)) ||
         ((((bVar1 >> (DZKSUB_DZKU_IMPL & 0x3f) & 1) == 0 && (uVar13 == 0)) &&
          (((bVar1 >> (NOTAERR_DZKU_IMPL & 0x3f) & 1) == 0 || (!bVar4)))))) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if ((((!bVar16) && (bVar4)) || (bVar6)) ||
         ((((bVar1 >> (DZKSUB_DZKU_IMPL & 0x3f) & 1) != 0 || (bVar7)) || (uVar13 == 0)))) {
        B_dzmnrel = 0;
        B_dzmxrel = 0;
        B_dzmnen = 0;
        B_dzmxen = 0;
      }
      else {
        uVar15 = ((uint)taold_w << 0x10) / uVar13;
        bVar16 = uVar15 < (uint)tarlmn << 0xd;
        if ((bVar16) && (B_dzmnen != 0)) {
          B_dzmnrel = B_dzmnrel;
        }
        else {
          B_dzmnrel = 0;
        }
        if (uVar13 == 0) {
          uVar15 = (uint)taold_w << 0x10;
        }
        B_dzmnen = (uint)tarlmx << 0xd < uVar15;
        taold_w = uVar2;
        if (((bool)B_dzmnen) && (B_dzmxen != 0)) {
          B_dzmxrel = B_dzmxrel;
          B_dzmxen = bVar16;
        }
        else {
          B_dzmxrel = 0;
          B_dzmxen = bVar16;
        }
      }
      uVar13 = uVar10;
      if (dzkanal == 0) {
        uVar13 = 4;
      }
      uVar13 = uVar13 - 1;
      if ((short)uVar13 < 0) {
        uVar13 = 0;
      }
      uVar13 = uVar13 & 0xff;
      if (((bVar3) || (B_dzkub == 0)) || (B_dzmnrel == 0)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      if ((CW_DZKU >> 1 & 1) != 0) {
        if ((bVar16) && ((&DAT_005b8f20)[uVar13] != '\0')) {
          bVar16 = true;
        }
        else {
          bVar16 = false;
        }
      }
      if (bVar16) {
        if ((byte)(&DAT_005b8f88)[uVar13] < DZPKSUBR) {
          uVar15 = (byte)(&DAT_005b8f88)[uVar13] + 1;
        }
        else {
          uVar15 = (uint)DZPKSUBR;
        }
        if (uVar15 < 0x100) {
          uVar12 = (undefined)uVar15;
        }
        else {
          uVar12 = 0xff;
        }
        (&DAT_005b8f88)[uVar13] = uVar12;
      }
      else {
        (&DAT_005b8f88)[uVar13] = 0;
      }
      (&DAT_005b8f68)[uVar13] = DZPKSUBR <= (byte)(&DAT_005b8f88)[uVar13];
      if ((bVar3) || (!bVar7)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      if ((CW_DZKU >> 1 & 1) != 0) {
        if ((bVar16) && ((&DAT_005b8f20)[uVar14] != '\0')) {
          bVar16 = true;
        }
        else {
          bVar16 = false;
        }
      }
      if (bVar16) {
        if ((byte)(&DAT_005b8f80)[uVar14] < DZPKSUB) {
          uVar13 = (byte)(&DAT_005b8f80)[uVar14] + 1;
        }
        else {
          uVar13 = (uint)DZPKSUB;
        }
        if (uVar13 < 0x100) {
          uVar12 = (undefined)uVar13;
        }
        else {
          uVar12 = 0xff;
        }
        (&DAT_005b8f80)[uVar14] = uVar12;
      }
      else {
        (&DAT_005b8f80)[uVar14] = 0;
      }
      if (((byte)(&DAT_005b8f80)[uVar14] < DZPKSUB) && ((&DAT_005b8f68)[uVar14] == '\0')) {
        uVar12 = 0;
      }
      else {
        uVar12 = 1;
      }
      (&DAT_005b8f40)[uVar14] = uVar12;
      if (dzkanal == 0) {
        uVar10 = 4;
      }
      uVar10 = uVar10 - 1;
      if ((short)uVar10 < 0) {
        uVar10 = 0;
      }
      uVar13 = uVar10 & 0xff;
      dzadrbuf0 = (byte)uVar10;
      if (((bVar3) || (B_dzkub == 0)) || (B_dzmxrel == 0)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      if (bVar16) {
        if ((byte)(&DAT_005b8fb0)[uVar13] < DZPKSMSR) {
          uVar10 = (byte)(&DAT_005b8fb0)[uVar13] + 1;
        }
        else {
          uVar10 = (uint)DZPKSMSR;
        }
        if (uVar10 < 0x100) {
          uVar12 = (undefined)uVar10;
        }
        else {
          uVar12 = 0xff;
        }
        (&DAT_005b8fb0)[uVar13] = uVar12;
      }
      else {
        (&DAT_005b8fb0)[uVar13] = 0;
      }
      (&DAT_005b8f60)[uVar13] = DZPKSMSR <= (byte)(&DAT_005b8fb0)[uVar13];
      if ((!bVar6) || (bVar3)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      if (bVar16) {
        if ((byte)(&DAT_005b8fa8)[uVar14] < DZPKSMS) {
          uVar10 = (byte)(&DAT_005b8fa8)[uVar14] + 1;
        }
        else {
          uVar10 = (uint)DZPKSMS;
        }
        if (uVar10 < 0x100) {
          uVar12 = (undefined)uVar10;
        }
        else {
          uVar12 = 0xff;
        }
        (&DAT_005b8fa8)[uVar14] = uVar12;
      }
      else {
        (&DAT_005b8fa8)[uVar14] = 0;
      }
      if (((byte)(&DAT_005b8fa8)[uVar14] < DZPKSMS) && ((&DAT_005b8f60)[uVar14] == '\0')) {
        uVar12 = 0;
      }
      else {
        uVar12 = 1;
      }
      (&DAT_005b8f58)[uVar14] = uVar12;
      if ((((bVar1 >> (DZOTPERR_DZKU_IMPL & 0x3f) & 1) != 0) ||
          (((((bVar1 >> (NOTAERR_DZKU_IMPL & 0x3f) & 1) != 0 && (bVar4)) || (bVar7)) ||
           ((B_dzkub != 0 && (B_dzmnrel != 0)))))) ||
         ((bVar6 || (((B_dzkub != 0 && (B_dzmxrel != 0)) ||
                     (((bVar1 >> (DZKSUB_DZKU_IMPL & 0x3f) & 1) != 0 || (B_dzdmden != 0)))))))) {
        B_dzdmden = B_dzdmden;
      }
      else {
        B_dzdmden = 0;
      }
      if ((bVar1 >> (DZKSUB_DZKU_IMPL & 0x3f) & 1) == 0) {
        (&DAT_005b8f74)[uVar14] = 0;
      }
      else {
        if ((byte)(&DAT_005b8f74)[uVar14] < DZPHKSUB) {
          uVar10 = (byte)(&DAT_005b8f74)[uVar14] + 1;
        }
        else {
          uVar10 = (uint)DZPHKSUB;
        }
        if (uVar10 < 0x100) {
          uVar12 = (undefined)uVar10;
        }
        else {
          uVar12 = 0xff;
        }
        (&DAT_005b8f74)[uVar14] = uVar12;
      }
      (&DAT_005b8f28)[uVar14] = DZPHKSUB <= (byte)(&DAT_005b8f74)[uVar14];
      uVar14 = dzkanal + 1;
      if (0xff < uVar14) {
        uVar14 = 0xff;
      }
      dzkanal = (byte)uVar14;
    } while (((uVar14 & 0xff) < 4) && (bVar5));
  }
  if (EVar8 != 0) {
    if (cycle + 1 < 0x10000) {
      cycle = (word)(cycle + 1);
    }
    else {
      cycle = 0xffff;
    }
  }
  return;
}

