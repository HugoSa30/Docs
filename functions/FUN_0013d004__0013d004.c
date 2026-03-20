/*
 * Program: n42.bin
 * Function: FUN_0013d004
 * Entry: 0013d004
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013d004(void)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  byte bVar9;
  uint uVar8;
  
  cVar4 = B_autget;
  if ((B_mdstop == 0) && (B_fomod == '\0')) {
    bVar7 = 1;
    do {
      bVar5 = 0;
      _DAT_003fa9fc = _DAT_0001bdd4;
      do {
        _DAT_003faa00 = -_DAT_001c1a48;
        bVar9 = 0;
        _DAT_003faa04 = _DAT_001c1a48;
        do {
          if (bVar5 == 1) {
            fVar1 = *(float *)(&UNK_003fd5d8 +
                              ((short)(ushort)bVar7 * 3 + (int)(short)(ushort)bVar9) * 4);
          }
          else if (bVar5 == 2) {
            fVar1 = *(float *)(&UNK_003fd638 +
                              ((short)(ushort)bVar7 * 3 + (int)(short)(ushort)bVar9) * 4);
          }
          else if (bVar5 == 3) {
            fVar1 = *(float *)(&UNK_003fd698 +
                              ((short)(ushort)bVar7 * 3 + (int)(short)(ushort)bVar9) * 4);
          }
          else {
            fVar1 = *(float *)(&UNK_003fd578 +
                              ((short)(ushort)bVar7 * 3 + (int)(short)(ushort)bVar9) * 4);
          }
          if (_DAT_003faa00 < fVar1) {
            _DAT_003faa00 = fVar1;
          }
          if (fVar1 < _DAT_003faa04) {
            _DAT_003faa04 = fVar1;
          }
          bVar9 = bVar9 + 1;
        } while (bVar9 < 3);
        if (_DAT_003fa9fc < _DAT_003faa00 - _DAT_003faa04) {
          _DAT_003fa9fc = _DAT_003faa00 - _DAT_003faa04;
        }
        bVar5 = bVar5 + 1;
      } while (bVar5 < 4);
      iVar6 = (uint)bVar7 * 4;
      *(float *)(&UNK_003fa9c0 + iVar6) = _DAT_003fa9fc;
      if (cVar4 == '\0') {
        fVar1 = *(float *)(iVar6 + 0x1c19a8);
      }
      else {
        fVar1 = *(float *)(iVar6 + 0x1c19c8);
      }
      (&UNK_003fdb84)[bVar7] = (char)(((uint)(byte)((_DAT_003fa9fc < fVar1) << 3) << 8) >> 0xb);
      fVar1 = _DAT_0001bdd4;
      bVar7 = bVar7 + 1;
    } while (bVar7 < 9);
    if ((((DAT_003fdb85 == '\0') || (DAT_003fdb86 == '\0')) || (DAT_003fdb87 == '\0')) ||
       (((DAT_003fdb88 == '\0' || (DAT_003fdb89 == '\0')) ||
        ((DAT_003fdb8a == '\0' || ((DAT_003fdb8b == '\0' || (DAT_003fdb8c == '\0')))))))) {
      ffon2 = ffon2 & ~B_plok;
    }
    else {
      ffon2 = ffon2 & ~B_plok | B_plok;
    }
    if ((((_DAT_001c1a4c < _DAT_003fa9c4) || (_DAT_001c1a4c < _DAT_003fa9c8)) ||
        (_DAT_001c1a4c < _DAT_003fa9cc)) ||
       (((_DAT_001c1a4c < _DAT_003fa9d0 || (_DAT_001c1a4c < _DAT_003fa9d4)) ||
        ((_DAT_001c1a4c < _DAT_003fa9d8 ||
         ((_DAT_001c1a4c < _DAT_003fa9dc || (_DAT_001c1a4c < _DAT_003fa9e0)))))))) {
      DAT_005b8628 = true;
    }
    else {
      DAT_005b8628 = false;
    }
    if ((bool)DAT_005b8628) {
      uVar8 = _DAT_003fdb46 + 1;
      if (0xffff < uVar8) {
        uVar8 = 0xffff;
      }
      _DAT_003fdb46 = (ushort)uVar8;
      if (65000 < (uVar8 & 0xffff)) {
        _DAT_003fdb46 = 0;
      }
    }
    if (((CDFO == '\0') || (B_fofr1 == '\0')) && (DAT_003faa22 == '\0')) {
      DAT_003faa21 = true;
    }
    else {
      DAT_003faa21 = false;
    }
    if ((CDFO == '\0') || (B_fofr1 == '\0')) {
      DAT_003faa22 = '\x01';
    }
    else {
      DAT_003faa22 = '\0';
    }
    if ((bool)DAT_003faa21) {
      _DAT_003fdb46 = 0;
    }
    if (((bool)DAT_005b8628) ||
       ((((DAT_005b8cd0 != '\0' || (DAT_005b857d != '\0')) && (DAT_005b8cc1 == '\0')) ||
        ((bool)DAT_003faa21)))) {
      ffon2 = ffon2 & ~B_fonrset;
      uVar8 = 0;
      do {
        uVar2 = uVar8 & 0xff;
        iVar6 = uVar2 * 4;
        *(float *)(&UNK_003fd404 + iVar6) = fVar1;
        *(float *)(&UNK_003fd464 + iVar6) = fVar1;
        *(float *)(&UNK_003fd4c4 + iVar6) = fVar1;
        *(float *)(&UNK_003fd524 + iVar6) = fVar1;
        *(float *)(&DAT_003fd584 + iVar6) = fVar1;
        *(float *)(&DAT_003fd5e4 + iVar6) = fVar1;
        *(float *)(&DAT_003fd644 + iVar6) = fVar1;
        *(float *)(&DAT_003fd6a4 + iVar6) = fVar1;
        *(float *)(&UNK_003fd104 + iVar6) = -_DAT_001c1a48;
        *(float *)(&UNK_003fd164 + iVar6) = -_DAT_001c1a48;
        *(float *)(&UNK_003fd1c4 + iVar6) = -_DAT_001c1a48;
        *(float *)(&UNK_003fd224 + iVar6) = -_DAT_001c1a48;
        *(float *)(&UNK_003fd284 + iVar6) = _DAT_001c1a48;
        *(float *)(&UNK_003fd2e4 + iVar6) = _DAT_001c1a48;
        *(float *)(&UNK_003fd344 + iVar6) = _DAT_001c1a48;
        *(float *)(&UNK_003fd3a4 + iVar6) = _DAT_001c1a48;
        (&UNK_003fdb48)[uVar2] = 0;
        (&UNK_003fdb60)[uVar2] = 0;
        fVar3 = _DAT_0001bdd4;
        uVar8 = (uVar8 & 0xff) + 1;
        if (0xff < uVar8) {
          uVar8 = 0xff;
        }
      } while ((uVar8 & 0xff) < 0x18);
      uVar8 = 0;
      do {
        uVar2 = uVar8 & 0xff;
        (&UNK_003fdb78)[uVar2] = 0;
        *(float *)(&UNK_003fa9c0 + uVar2 * 4) = fVar3;
        (&UNK_003fdb84)[uVar2] = 0;
        uVar8 = (uVar8 & 0xff) + 1;
        if (0xff < uVar8) {
          uVar8 = 0xff;
        }
      } while ((uVar8 & 0xff) < 9);
      DAT_005b8629 = (undefined)uVar8;
      _DAT_003faa0c = _ANWFOST;
      if (0x7fff < _ANWFOST) {
        _DAT_003faa0c = 0x7fff;
      }
      DAT_005b8daa = DAT_005b8daa & 0x81;
      ffon2 = ffon2 & ~(B_fondis|B_plok|B_fonrset) | B_fondis;
      DAT_005b9786 = _ANWFOST;
      DAT_005b9784 = _DAT_001c1a44;
      fonstat = 2;
      DAT_003fdb44 = 0;
      DAT_003faa2d = 0;
      DAT_003faa2c = 0;
      DAT_003faa2b = 0;
      DAT_003faa2a = 0;
      DAT_003faa29 = 0;
      DAT_003faa28 = 0;
      DAT_003faa20 = 0;
      DAT_003faa15 = 0;
      DAT_003faa14 = 0;
      DAT_003faa13 = 0;
      DAT_003faa12 = 0;
      DAT_003faa11 = 0;
      DAT_003faa10 = 0;
      DAT_003faa0f = 0;
      DAT_003faa0e = 0;
      DAT_003faa0b = 0;
      DAT_003faa0a = 0;
      DAT_003faa09 = 0;
                    /* WARNING: Read-only address (ram,0x003fa9c8) is written */
                    /* WARNING: Read-only address (ram,0x003fa9cc) is written */
                    /* WARNING: Read-only address (ram,0x003fa9d0) is written */
                    /* WARNING: Read-only address (ram,0x003fa9d4) is written */
                    /* WARNING: Read-only address (ram,0x003fa9d8) is written */
                    /* WARNING: Read-only address (ram,0x003fa9dc) is written */
                    /* WARNING: Read-only address (ram,0x003fa9e0) is written */
                    /* WARNING: Read-only address (ram,0x003fdb86) is written */
                    /* WARNING: Read-only address (ram,0x003fdb87) is written */
                    /* WARNING: Read-only address (ram,0x003fdb88) is written */
                    /* WARNING: Read-only address (ram,0x003fdb89) is written */
                    /* WARNING: Read-only address (ram,0x003fdb8a) is written */
                    /* WARNING: Read-only address (ram,0x003fdb8b) is written */
                    /* WARNING: Read-only address (ram,0x003fdb8c) is written */
      DAT_003faa08 = 0;
      DAT_005b8cc1 = '\x01';
    }
    if (((DAT_005b8cc1 != '\0') && (DAT_005b857d == '\0')) && (DAT_005b8cd0 == '\0')) {
      DAT_005b8cc1 = '\0';
    }
  }
  return;
}

