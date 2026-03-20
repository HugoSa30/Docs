/*
 * Program: n42.bin
 * Function: FUN_000bbce0
 * Entry: 000bbce0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000bc4c8) */
/* WARNING: Removing unreachable block (ram,0x000bc3ac) */
/* WARNING: Removing unreachable block (ram,0x000bc28c) */
/* WARNING: Removing unreachable block (ram,0x000bc168) */
/* WARNING: Removing unreachable block (ram,0x000bc154) */
/* WARNING: Removing unreachable block (ram,0x000bc278) */
/* WARNING: Removing unreachable block (ram,0x000bc398) */
/* WARNING: Removing unreachable block (ram,0x000bc4b4) */
/* WARNING: Removing unreachable block (ram,0x000bc844) */
/* WARNING: Removing unreachable block (ram,0x000bc6e0) */
/* WARNING: Removing unreachable block (ram,0x000bc8d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bbce0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  bool bVar5;
  ushort uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  if (B_mdstop != 0) {
    return;
  }
  if (((B_fomod != '\0') || (CDFO == '\0')) || (B_fofr1 == '\0')) {
    _fse_f = _DAT_0001bdd4;
    fonstat = 2;
    return;
  }
  if ((idxfont == 1) || (idxfont == 0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  bVar1 = idxfonl != 2;
  if ((!bVar7) || (bVar1)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((idxforlt == 1) || (idxforlt == 0)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  bVar5 = idxfonl != 0;
  if ((!bVar7) || (bVar5)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((idxforlt == 3) || (idxforlt == 4)) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  if ((idxfont == 8) || (idxfont == 9)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  bVar2 = idxfonl != 3;
  if ((!bVar8) || (bVar2)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  bVar3 = idxfonl != 1;
  if ((!bVar8) || (bVar3)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if ((bVar9) && (bVar10)) {
    uVar17 = 1;
  }
  else if ((bVar7) && (bVar11)) {
    uVar17 = 2;
  }
  else if ((bVar12) && (bVar10)) {
    uVar17 = 3;
  }
  else if ((bVar8) && (bVar11)) {
    uVar17 = 4;
  }
  else if (bVar7) {
    uVar17 = 5;
  }
  else if (bVar8) {
    uVar17 = 6;
  }
  else if (bVar9) {
    uVar17 = 7;
  }
  else if (bVar12) {
    uVar17 = 8;
  }
  else if (bVar10) {
    if (bVar2) {
      if ((!bVar10) || (bVar1)) goto LAB_000bbf68;
      uVar17 = 10;
    }
    else {
      uVar17 = 9;
    }
  }
  else {
LAB_000bbf68:
    if (bVar11) {
      if (bVar3) {
        if ((!bVar11) || (bVar5)) goto LAB_000bbf98;
        uVar17 = 0xc;
      }
      else {
        uVar17 = 0xb;
      }
    }
    else {
LAB_000bbf98:
      if (bVar1) {
        if (bVar5) {
          if (bVar2) {
            if (bVar3) {
              uVar17 = 1;
            }
            else {
              uVar17 = 0x10;
            }
          }
          else {
            uVar17 = 0xf;
          }
        }
        else {
          uVar17 = 0xe;
        }
      }
      else {
        uVar17 = 0xd;
      }
    }
  }
  DAT_005b8da8 = (undefined)uVar17;
  uVar16 = (uint)idxforl;
  uVar14 = idxforl - 1;
  uVar18 = (uint)idxfon;
  uVar15 = (uint)idxfob;
  if (uVar17 < 0x11) {
                    /* WARNING: Could not emulate address calculation at 0x000bc074 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar17 * 4 + 0x2c080))();
    return;
  }
  DAT_005b8db9 = 0;
  if (uVar17 < 0x11) {
                    /* WARNING: Could not emulate address calculation at 0x000bc198 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar17 * 4 + 0x2c1a4))();
    return;
  }
  DAT_005b8db7 = 0;
  if (uVar17 < 0x11) {
                    /* WARNING: Could not emulate address calculation at 0x000bc2b8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar17 * 4 + 0x2c2c4))();
    return;
  }
  DAT_005b8dba = 0;
  if (uVar17 < 0x11) {
                    /* WARNING: Could not emulate address calculation at 0x000bc3d4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar17 * 4 + 0x2c3e0))
              (0,uVar15 - 3,uVar16 - 2,uVar18 * 3 + -1,uVar15 - 1,uVar15 + 3);
    return;
  }
  _DAT_003fa9ec = _DAT_003fd5e4;
  if (((zzyllfb != 1) && (_DAT_003fa9ec = _DAT_003fd644, zzyllfb != 2)) &&
     (_DAT_003fa9ec = _DAT_003fd6a4, zzyllfb != 3)) {
    _DAT_003fa9ec = _DAT_003fd584;
  }
  fVar4 = _DAT_003fd5e4;
  if (((zzyllfb != 1) && (fVar4 = _DAT_003fd644, zzyllfb != 2)) &&
     (fVar4 = _DAT_003fd6a4, zzyllfb != 3)) {
    fVar4 = _DAT_003fd584;
  }
  _DAT_003fa9ec = (fVar4 - _DAT_003fa9ec) * _DAT_0001bdd4 + _DAT_003fa9ec;
  _DAT_003fa9f0 = _DAT_003fd5e4;
  if (((zzyllfb != 1) && (_DAT_003fa9f0 = _DAT_003fd644, zzyllfb != 2)) &&
     (_DAT_003fa9f0 = _DAT_003fd6a4, zzyllfb != 3)) {
    _DAT_003fa9f0 = _DAT_003fd584;
  }
  fVar4 = _DAT_003fd5e4;
  if (((zzyllfb != 1) && (fVar4 = _DAT_003fd644, zzyllfb != 2)) &&
     (fVar4 = _DAT_003fd6a4, zzyllfb != 3)) {
    fVar4 = _DAT_003fd584;
  }
  _DAT_003fa9f0 = (fVar4 - _DAT_003fa9f0) * _DAT_0001bdd4 + _DAT_003fa9f0;
  if (idxfonl == 1) {
    uVar18 = uVar18 + 1;
    if (7 < uVar18) {
      uVar18 = 8;
    }
  }
  else if (idxfonl == 2) {
    uVar18 = uVar18 - 1;
    if ((short)uVar18 < 2) {
      uVar18 = 1;
    }
  }
  else if (idxfonl == 3) {
    uVar18 = uVar18 + 1;
    if (7 < uVar18) {
      uVar18 = 8;
    }
  }
  else {
    uVar18 = uVar18 - 1;
    if ((short)uVar18 < 2) {
      uVar18 = 1;
    }
  }
  if (idxfonl == 1) {
    uVar14 = (ushort)(uVar16 + 1);
    if (2 < uVar16 + 1) {
      uVar14 = 3;
    }
  }
  else if (idxfonl == 2) {
    if ((short)uVar14 < 2) {
      uVar14 = 1;
    }
  }
  else if (idxfonl == 3) {
    if ((short)uVar14 < 2) {
      uVar14 = 1;
    }
  }
  else {
    uVar14 = (ushort)(uVar16 + 1);
    if (2 < uVar16 + 1) {
      uVar14 = 3;
    }
  }
  if (((&UNK_003fdb78)[uVar18 & 0xff] == '\0') || ((&UNK_003fdb78)[idxfon] == '\0')) {
    fonstat = 2;
  }
  else {
    if ((&UNK_003fdb84)[idxfon] != '\0') {
      uVar6 = (ushort)uVar18 & 0xff;
      if ((((&UNK_003fdb48)[(int)(short)(ushort)idxforl + (short)uVar6 * 3 + -4] != '\0') &&
          ((&UNK_003fdb48)[(int)(short)(ushort)idxforl + (short)(ushort)idxfon * 3 + -4] != '\0'))
         && (((&UNK_003fdb48)[(int)(short)(uVar14 & 0xff) + (short)uVar6 * 3 + -4] != '\0' &&
             ((&UNK_003fdb48)[(int)(short)(uVar14 & 0xff) + (short)(ushort)idxfon * 3 + -4] != '\0')
             ))) {
        fonstat = 0;
        goto LAB_000bcb00;
      }
    }
    fonstat = 1;
  }
LAB_000bcb00:
  if ((cfoxx == 0xb) || (cfoxx == 0xc)) {
    DAT_005b8daa = DAT_005b8daa & 0xbf | 0x40;
    bVar7 = true;
  }
  else {
    DAT_005b8daa = DAT_005b8daa & 0xbf;
    bVar7 = false;
  }
  if ((((DAT_005b9784 != 0) && (bVar7)) && (zzyllfb == 0)) && ((B_lustop == 0 && (B_milstp == 0))))
  {
    iVar13 = DAT_005b9784 - 1;
    if (iVar13 < 0) {
      DAT_005b9784 = 0;
    }
    else {
      DAT_005b9784 = (ushort)iVar13;
    }
  }
  if ((B_mderk != 0) || (!bVar7)) {
    DAT_005b9784 = _DAT_001c1a44;
  }
  if (DAT_005b9784 == 0) {
    DAT_003faa20 = 0;
  }
  else if ((_DAT_001c1a46 <= fzabgs_w) && (B_mderk != 0)) {
    DAT_003faa20 = 1;
  }
  DAT_005b8dc0 = 0;
  DAT_005b8dbf = 0;
  DAT_005b8dbe = 0;
  DAT_005b8dbd = 0;
  DAT_005b8dbc = 0;
  DAT_005b8dbb = 0;
  DAT_005b8dba = 0;
  DAT_005b8db9 = 0;
  DAT_005b8db8 = 0;
  DAT_005b8db7 = 0;
  DAT_005b8db6 = (char)uVar14;
  DAT_005b8db2 = (char)uVar18;
  DAT_003fdb44 = DAT_003faa20;
  _fse_f = (_DAT_003fa9f0 - _DAT_003fa9ec) * _DAT_0001bdd4 + _DAT_003fa9ec;
  return;
}

