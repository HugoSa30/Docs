/*
 * Program: n42.bin
 * Function: FUN_000bb3fc
 * Entry: 000bb3fc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bb3fc(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  int unaff_r29;
  short sVar11;
  uint uVar10;
  uint uVar12;
  double dVar13;
  double dVar14;
  
  if (B_mdstop != 0) {
    return;
  }
  if (B_fomod != '\0') {
    return;
  }
  if (CDFO == '\0') {
    return;
  }
  if (B_fofr1 == '\0') {
    return;
  }
  if ((((B_folunw == 0) && (DAT_003fdb44 == '\0')) && (DAT_005b8c8b == '\0')) &&
     ((ffon2 & B_fondis) == 0)) {
    if ((cfoxx == 2) || (cfoxx == 0xc)) {
      sVar11 = 1;
    }
    else {
      sVar11 = 0;
    }
    unaff_r29 = (int)sVar11;
    if ((unaff_r29 == 0) && ((&UNK_003fdb78)[idxfon] == '\0')) goto LAB_000bb4e8;
    DAT_005b8daa = DAT_005b8daa & 0xfd | 2;
  }
  else {
LAB_000bb4e8:
    DAT_005b8daa = DAT_005b8daa & 0xfd;
  }
  bVar8 = DAT_005b8daa >> 1 & 1;
  if (bVar8 != 0) {
    if ((zzyllfb == 0) && (DAT_005b9786 != 0)) {
      iVar7 = (short)_DAT_003faa0c + -1;
      if (iVar7 < -0x8000) {
        iVar7 = -0x8000;
      }
      else if (0x7fff < iVar7) {
        iVar7 = 0x7fff;
      }
      _DAT_003faa0c = (ushort)iVar7;
    }
    if (bVar8 != 0) goto LAB_000bb59c;
  }
  _DAT_003faa0c = _ANWFOST;
  if (0x7fff < _ANWFOST) {
    _DAT_003faa0c = 0x7fff;
  }
LAB_000bb59c:
  uVar9 = (uint)(short)_DAT_003faa0c;
  if ((int)uVar9 < 0) {
    uVar9 = 0;
  }
  DAT_005b9786 = (short)uVar9;
  if (((uVar9 & 0xffff) == 0) && (bVar8 != 0)) {
    DAT_005b8daa = DAT_005b8daa & 0xfb | 4;
  }
  else {
    DAT_005b8daa = DAT_005b8daa & 0xfb;
  }
  if (((DAT_005b8daa >> 2 & 1) == 0) || (unaff_r29 == 0)) {
    DAT_005b8daa = DAT_005b8daa & 0xdf;
  }
  else {
    DAT_005b8daa = DAT_005b8daa & 0xdf | 0x20;
  }
  if ((DAT_005b8daa >> 2 & 1) == 0) {
    DAT_005b8daa = ((&UNK_003fdb78)[idxfon] & 1) << 3 |
                   ((&UNK_003fdb48)[idxfob] & 1) << 4 | DAT_005b8daa & 0xe7;
  }
  else {
    if (zzyllfb == 1) {
      _DAT_003faa24 = *(float *)(&UNK_003fd464 + (uint)idxfob * 4);
    }
    else if (zzyllfb == 2) {
      _DAT_003faa24 = *(float *)(&UNK_003fd4c4 + (uint)idxfob * 4);
    }
    else if (zzyllfb == 3) {
      _DAT_003faa24 = *(float *)(&UNK_003fd524 + (uint)idxfob * 4);
    }
    else {
      _DAT_003faa24 = *(float *)(&UNK_003fd404 + (uint)idxfob * 4);
    }
    fVar1 = _DAT_001c1a54;
    if ((&UNK_003fdb48)[idxfob] != '\0') {
      fVar1 = _DAT_001c1a58;
    }
    FUN_000b291c((double)_luts_f,(double)fVar1,&DAT_003faa24);
    if (zzyllfb == 1) {
      dVar13 = (double)FUN_000b2838((double)-_DAT_001c1a48,(double)_DAT_003faa24,
                                    (double)_DAT_001c1a48);
      *(float *)(&UNK_003fd464 + (uint)idxfob * 4) = (float)dVar13;
    }
    else if (zzyllfb == 2) {
      dVar13 = (double)FUN_000b2838((double)-_DAT_001c1a48,(double)_DAT_003faa24,
                                    (double)_DAT_001c1a48);
      *(float *)(&UNK_003fd4c4 + (uint)idxfob * 4) = (float)dVar13;
    }
    else if (zzyllfb == 3) {
      dVar13 = (double)FUN_000b2838((double)-_DAT_001c1a48,(double)_DAT_003faa24,
                                    (double)_DAT_001c1a48);
      *(float *)(&UNK_003fd524 + (uint)idxfob * 4) = (float)dVar13;
    }
    else {
      dVar13 = (double)FUN_000b2838((double)-_DAT_001c1a48,(double)_DAT_003faa24,
                                    (double)_DAT_001c1a48);
      *(float *)(&UNK_003fd404 + (uint)idxfob * 4) = (float)dVar13;
    }
    if (zzyllfb == 1) {
      _DAT_003faa18 = *(undefined4 *)(&UNK_003fd164 + (uint)idxfob * 4);
    }
    else if (zzyllfb == 2) {
      _DAT_003faa18 = *(undefined4 *)(&UNK_003fd1c4 + (uint)idxfob * 4);
    }
    else if (zzyllfb == 3) {
      _DAT_003faa18 = *(undefined4 *)(&UNK_003fd224 + (uint)idxfob * 4);
    }
    else {
      _DAT_003faa18 = *(undefined4 *)(&UNK_003fd104 + (uint)idxfob * 4);
    }
    dVar13 = (double)FUN_000b2838((double)-_DAT_001c1a48,(double)_DAT_003faa24,(double)_DAT_001c1a48
                                 );
    dVar14 = (double)(float)((double)_luts_f - dVar13);
    FUN_000b291c((double)(float)((double)_luts_f - dVar13),(double)_DAT_001c1a50,&DAT_003faa18);
    bVar8 = zzyllfb;
    if (zzyllfb == 1) {
      *(undefined4 *)(&UNK_003fd164 + (uint)idxfob * 4) = _DAT_003faa18;
    }
    else if (zzyllfb == 2) {
      *(undefined4 *)(&UNK_003fd1c4 + (uint)idxfob * 4) = _DAT_003faa18;
    }
    else if (zzyllfb == 3) {
      *(undefined4 *)(&UNK_003fd224 + (uint)idxfob * 4) = _DAT_003faa18;
    }
    else {
      *(undefined4 *)(&UNK_003fd104 + (uint)idxfob * 4) = _DAT_003faa18;
    }
    if (bVar8 == 1) {
      _DAT_003faa1c = *(undefined4 *)(&UNK_003fd2e4 + (uint)idxfob * 4);
    }
    else if (bVar8 == 2) {
      _DAT_003faa1c = *(undefined4 *)(&UNK_003fd344 + (uint)idxfob * 4);
    }
    else if (bVar8 == 3) {
      _DAT_003faa1c = *(undefined4 *)(&UNK_003fd3a4 + (uint)idxfob * 4);
    }
    else {
      _DAT_003faa1c = *(undefined4 *)(&UNK_003fd284 + (uint)idxfob * 4);
    }
    FUN_000b291c((double)(float)dVar14,(double)_DAT_001c1a50,&DAT_003faa1c);
    uVar9 = (uint)(char)zzyllfb;
    if (uVar9 == 1) {
      *(undefined4 *)(&UNK_003fd2e4 + (uint)idxfob * 4) = _DAT_003faa1c;
    }
    else if (uVar9 == 2) {
      *(undefined4 *)(&UNK_003fd344 + (uint)idxfob * 4) = _DAT_003faa1c;
    }
    else if (uVar9 == 3) {
      *(undefined4 *)(&UNK_003fd3a4 + (uint)idxfob * 4) = _DAT_003faa1c;
    }
    else {
      *(undefined4 *)(&UNK_003fd284 + (uint)idxfob * 4) = _DAT_003faa1c;
    }
    if ((DAT_005b8cc0 == '\0') || (DAT_003faa15 != '\0')) {
      DAT_003faa14 = false;
    }
    else {
      DAT_003faa14 = true;
    }
    DAT_003faa15 = DAT_005b8cc0;
    if ((bool)DAT_003faa14) {
      bVar8 = 0;
      uVar6 = (ushort)idxfon;
      iVar7 = (uint)idxfob * 4;
      uVar2 = *(undefined4 *)(&UNK_003fd524 + iVar7);
      uVar3 = *(undefined4 *)(&UNK_003fd4c4 + iVar7);
      uVar4 = *(undefined4 *)(&UNK_003fd464 + iVar7);
      uVar5 = *(undefined4 *)(&UNK_003fd404 + iVar7);
      do {
        iVar7 = (short)(uVar6 * 3 + (ushort)bVar8 + -3) * 4;
        *(undefined4 *)(&DAT_003fd584 + iVar7) = uVar5;
        *(undefined4 *)(&DAT_003fd5e4 + iVar7) = uVar4;
        *(undefined4 *)(&DAT_003fd644 + iVar7) = uVar3;
        *(undefined4 *)(&DAT_003fd6a4 + iVar7) = uVar2;
        bVar8 = bVar8 + 1;
      } while (bVar8 < 3);
    }
    else {
      uVar12 = (uint)idxfob;
      if ((&UNK_003fdb48)[uVar12] != '\0') {
        uVar10 = uVar9;
        if ((&UNK_003fdb60)[uVar12] == '\0') {
          uVar9 = 3;
          (&UNK_003fdb60)[uVar12] = 1;
          uVar10 = 0;
        }
        sVar11 = (short)uVar10;
        while ((uint)(int)sVar11 <= uVar9) {
          if (uVar10 == 1) {
            *(undefined4 *)(&DAT_003fd5e4 + uVar12 * 4) =
                 *(undefined4 *)(&UNK_003fd464 + uVar12 * 4);
          }
          else if (uVar10 == 2) {
            *(undefined4 *)(&DAT_003fd644 + uVar12 * 4) =
                 *(undefined4 *)(&UNK_003fd4c4 + uVar12 * 4);
          }
          else if (uVar10 == 3) {
            *(undefined4 *)(&DAT_003fd6a4 + uVar12 * 4) =
                 *(undefined4 *)(&UNK_003fd524 + uVar12 * 4);
          }
          else {
            *(undefined4 *)(&DAT_003fd584 + uVar12 * 4) =
                 *(undefined4 *)(&UNK_003fd404 + uVar12 * 4);
          }
          uVar10 = (uVar10 & 0xffff) + 1;
          sVar11 = (short)uVar10;
        }
      }
    }
  }
  return;
}

