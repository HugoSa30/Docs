/*
 * Program: n42.bin
 * Function: FUN_0012b95c
 * Entry: 0012b95c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012b95c(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  
  uVar3 = _DAT_0001bdd4;
  DAT_005b8cc2 = B_fomod;
  bVar7 = DAT_001c18a9 != '\0';
  if ((B_pwf == '\0') && (bVar7 == (bool)B_fomod)) {
    DAT_005b9786 = _ANWFOST;
    if (0x7fff < _ANWFOST) {
      _ANWFOST = 0x7fff;
    }
    DAT_003faa20 = DAT_003fdb44 != '\0';
    bVar5 = 0;
    do {
      if ((DAT_003fdb79 == '\0') || (DAT_003faa11 != '\0')) {
        DAT_003faa10 = 0;
      }
      else {
        DAT_003faa10 = 1;
      }
      if ((DAT_003fdb7a == '\0') || (DAT_003faa0b != '\0')) {
        DAT_003faa0a = 0;
      }
      else {
        DAT_003faa0a = 1;
      }
      if ((DAT_003fdb7b == '\0') || (DAT_003faa29 != '\0')) {
        DAT_003faa28 = 0;
      }
      else {
        DAT_003faa28 = 1;
      }
      if ((DAT_003fdb7c == '\0') || (DAT_003faa13 != '\0')) {
        DAT_003faa12 = 0;
      }
      else {
        DAT_003faa12 = 1;
      }
      if ((DAT_003fdb7d == '\0') || (DAT_003faa2d != '\0')) {
        DAT_003faa2c = 0;
      }
      else {
        DAT_003faa2c = 1;
      }
      if ((DAT_003fdb7e == '\0') || (DAT_003faa09 != '\0')) {
        DAT_003faa08 = 0;
      }
      else {
        DAT_003faa08 = 1;
      }
      if ((DAT_003fdb7f == '\0') || (DAT_003faa2b != '\0')) {
        DAT_003faa2a = 0;
      }
      else {
        DAT_003faa2a = 1;
      }
      if ((DAT_003fdb80 == '\0') || (DAT_003faa0f != '\0')) {
        DAT_003faa0e = 0;
      }
      else {
        DAT_003faa0e = 1;
      }
      if ((B_fofr1 == '\0') && (DAT_003faa22 == '\0')) {
        DAT_003faa21 = 1;
      }
      else {
        DAT_003faa21 = 0;
      }
      bVar5 = bVar5 + 1;
      DAT_003faa11 = DAT_003fdb79;
      DAT_003faa22 = B_fofr1 == '\0';
      DAT_003faa0f = DAT_003fdb80;
      DAT_003faa2b = DAT_003fdb7f;
      DAT_003faa09 = DAT_003fdb7e;
      DAT_003faa2d = DAT_003fdb7d;
      DAT_003faa13 = DAT_003fdb7c;
      DAT_003faa29 = DAT_003fdb7b;
      DAT_003faa0b = DAT_003fdb7a;
    } while (bVar5 < 2);
    _DAT_003faa0c = _ANWFOST;
    B_fomod = bVar7;
  }
  else {
    ffon2 = ffon2 & ~B_fonrset;
    uVar6 = 0;
    B_fomod = bVar7;
    do {
      uVar1 = uVar6 & 0xff;
      iVar2 = uVar1 * 4;
      *(undefined4 *)(&UNK_003fd404 + iVar2) = uVar3;
      *(undefined4 *)(&UNK_003fd464 + iVar2) = uVar3;
      *(undefined4 *)(&UNK_003fd4c4 + iVar2) = uVar3;
      *(undefined4 *)(&UNK_003fd524 + iVar2) = uVar3;
      *(undefined4 *)(&DAT_003fd584 + iVar2) = uVar3;
      *(undefined4 *)(&DAT_003fd5e4 + iVar2) = uVar3;
      *(undefined4 *)(&DAT_003fd644 + iVar2) = uVar3;
      *(undefined4 *)(&DAT_003fd6a4 + iVar2) = uVar3;
      *(float *)(&UNK_003fd104 + iVar2) = -_DAT_001c1a48;
      *(float *)(&UNK_003fd164 + iVar2) = -_DAT_001c1a48;
      *(float *)(&UNK_003fd1c4 + iVar2) = -_DAT_001c1a48;
      *(float *)(&UNK_003fd224 + iVar2) = -_DAT_001c1a48;
      *(float *)(&UNK_003fd284 + iVar2) = _DAT_001c1a48;
      *(float *)(&UNK_003fd2e4 + iVar2) = _DAT_001c1a48;
      *(float *)(&UNK_003fd344 + iVar2) = _DAT_001c1a48;
      *(float *)(&UNK_003fd3a4 + iVar2) = _DAT_001c1a48;
      (&UNK_003fdb48)[uVar1] = 0;
      (&UNK_003fdb60)[uVar1] = 0;
      uVar4 = _DAT_0001bdd4;
      uVar6 = (uVar6 & 0xff) + 1;
      if (0xff < uVar6) {
        uVar6 = 0xff;
      }
    } while ((uVar6 & 0xff) < 0x18);
    uVar6 = 0;
    do {
      uVar1 = uVar6 & 0xff;
      (&UNK_003fdb78)[uVar1] = 0;
      *(undefined4 *)(&UNK_003fa9c0 + uVar1 * 4) = uVar4;
      (&UNK_003fdb84)[uVar1] = 0;
      uVar6 = (uVar6 & 0xff) + 1;
      if (0xff < uVar6) {
        uVar6 = 0xff;
      }
    } while ((uVar6 & 0xff) < 9);
    DAT_005b8629 = (undefined)uVar6;
    fonstat = 2;
    DAT_005b9784 = _DAT_001c1a44;
    DAT_005b9786 = _ANWFOST;
    if (0x7fff < _ANWFOST) {
      _ANWFOST = 0x7fff;
    }
    DAT_003fdb44 = '\0';
    DAT_005b8daa = DAT_005b8daa & 0x81;
    DAT_003faa20 = false;
    DAT_003faa10 = 0;
    DAT_003faa11 = '\0';
    DAT_003faa0a = 0;
    DAT_003faa0b = '\0';
    DAT_003faa28 = 0;
    DAT_003faa29 = '\0';
    DAT_003faa12 = 0;
    DAT_003faa13 = '\0';
    DAT_003faa2c = 0;
    DAT_003faa2d = '\0';
    DAT_003faa08 = 0;
    DAT_003faa09 = '\0';
    DAT_003faa2a = 0;
    DAT_003faa2b = '\0';
    DAT_003faa0e = 0;
    DAT_003faa0f = '\0';
    DAT_003faa14 = 0;
    DAT_003faa15 = 0;
    _DAT_003fdb46 = 0;
    ffon2 = ffon2 & ~(B_fondis|B_plok|B_fonrset) | B_fondis;
    _DAT_003faa0c = _ANWFOST;
    DAT_005b8cc1 = DAT_003fdb44;
  }
  _ANWFOST = DAT_005b9786;
  return;
}

