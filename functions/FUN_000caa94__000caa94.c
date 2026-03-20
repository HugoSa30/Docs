/*
 * Program: n42.bin
 * Function: FUN_000caa94
 * Entry: 000caa94
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000caa94(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  bVar6 = zzylkr;
  cVar5 = B_krndy;
  cVar4 = B_krldy;
  iVar12 = 0;
  B_kl = '\0';
  uVar11 = (uint)zzylkr;
  bVar1 = (&UNK_003fc244)[uVar11];
  bVar2 = (&DAT_005b9160)[uVar11];
  uVar9 = (uint)bVar2;
  ikrn_w = (ushort)bVar1 << (6 - uVar9 & 0x3f);
  if (tpnt_aktiv != 0) {
    B_kl = 0;
    return;
  }
  if (B_krndy == '\0') {
    uVar7 = 0x40;
  }
  else {
    uVar7 = (uint)FKENDY;
  }
  DAT_003fb19b = (undefined)uVar7;
  if (B_krldy == '\0') {
    uVar10 = 0x40;
  }
  else {
    uVar10 = (uint)FKELDY;
  }
  DAT_003fb19c = (undefined)uVar10;
  bVar3 = (&DAT_005b9154)[uVar11];
  uVar8 = (uint)fketm;
  DAT_003fb19a = bVar1;
  if (B_kr == '\0') goto LAB_000caf10;
  if (((uint)ZYRKR & 1 << (uVar11 & 0x3f)) == 0) {
    _DAT_003fb1a2 = (ushort)rkrmx1w << (uVar9 & 0x3f);
    _DAT_003fb1a4 = (ushort)rkrem1w;
  }
  else {
    _DAT_003fb1a2 = (ushort)rkrmx2w << (uVar9 & 0x3f);
    _DAT_003fb1a4 = (ushort)rkrem2w;
  }
  if (0xff < _DAT_003fb1a2) {
    _DAT_003fb1a2 = 0xff;
  }
  if ((uint)_DAT_003fb1a2 < (uint)bVar3) {
    (&DAT_005b8eb0)[uVar11] =
         (char)(((uint)bVar3 - (uint)_DAT_003fb1a2) * (uint)_DAT_003fb1a4 >> 8) +
         (char)_DAT_003fb1a2;
  }
  else {
    (&DAT_005b8eb0)[uVar11] = bVar3;
  }
  if (((&DAT_005b8eb0)[uVar11] == 0) ||
     (uVar9 = ((uint)bVar1 << 6) / (uint)(byte)(&DAT_005b8eb0)[uVar11], 0xffff < uVar9)) {
    uVar9 = 0xffff;
  }
  if (uVar9 < 0x100) {
    virkr = (byte)uVar9;
  }
  else {
    virkr = 0xff;
  }
  if ((KSZA == '\x01') && ((B_nopg >> 1 & 1) == 0)) {
    DAT_003fb19d = KRKFKS;
  }
  else {
    DAT_003fb19d = bVar6;
  }
  uVar9 = (uint)(byte)(&DAT_005b9140)[DAT_003fb19d] + (int)(short)(char)vske;
  if ((int)uVar9 < 0) {
    uVar9 = 0;
  }
  else if (0xffff < (int)uVar9) {
    uVar9 = 0xffff;
  }
  _DAT_003fb19e = (ushort)uVar9;
  if ((uVar9 & 0xffff) < 0x40) {
    _DAT_003fb19e = 0x40;
  }
  else if (0xff < (uVar9 & 0xffff)) {
    _DAT_003fb19e = 0xff;
  }
  uVar9 = uVar7;
  if (uVar7 < uVar10) {
    uVar9 = uVar10;
  }
  uVar13 = uVar8;
  if ((uVar8 <= uVar9) && (uVar13 = uVar7, uVar7 < uVar10)) {
    uVar13 = uVar10;
  }
  uVar9 = (int)(_DAT_003fb19e * uVar13) >> 6;
  if ((uVar9 & 0xffff) < 0x100) {
    (&DAT_005b9148)[uVar11] = (char)uVar9;
  }
  else {
    (&DAT_005b9148)[uVar11] = 0xff;
  }
  kek_tst = (&DAT_005b9148)[uVar11];
  if ((uint)virkr < (uint)kek_tst) {
    uVar9 = (uint)(byte)(&UNK_003fc24c)[uVar11] - (uint)ikrma;
    if ((int)uVar9 < 0) {
      uVar9 = 0;
    }
    else if (0xff < (int)uVar9) {
      uVar9 = 0xff;
    }
    if (0xbd < (uVar9 & 0xff)) goto LAB_000cae28;
    if (((0x9f < virkr) && (cVar4 == '\0')) && (cVar5 == '\0')) {
      DAT_003fb19a = bVar1 >> 1;
    }
  }
  else {
LAB_000cae28:
    B_kl = '\x01';
    DAT_003fb19a = (byte)(((uint)bVar1 << 6) / (uint)kek_tst);
  }
  if (B_kl == '\0') {
    if (*(short *)(&DAT_005b9ae0 + uVar11 * 2) != -1) {
      *(short *)(&DAT_005b9ae0 + uVar11 * 2) = *(short *)(&DAT_005b9ae0 + uVar11 * 2) + 1;
    }
  }
  else {
    (&DAT_005b9ae8)[uVar11] = *(undefined2 *)(&DAT_005b9ae0 + uVar11 * 2);
    *(undefined2 *)(&DAT_005b9ae0 + uVar11 * 2) = 0;
    uVar9 = 0;
    do {
      iVar12 = iVar12 + (uint)(ushort)(&DAT_005b9ae8)[uVar9];
      uVar9 = uVar9 + 1 & 0xff;
    } while (uVar9 < 4);
    kezmxmit = (word)((uint)(iVar12 * 0x1000) >> 0xe);
  }
LAB_000caf10:
  uVar9 = uVar10;
  if (uVar10 < uVar7) {
    uVar9 = uVar7;
  }
  if (uVar8 < uVar9) {
    DAT_003fb19d = kerefndyw;
    if (uVar7 < uVar10) {
      DAT_003fb19d = kerefldyw;
    }
  }
  else {
    DAT_003fb19d = kereffw;
  }
  iVar12 = (uint)DAT_003fb19a - (uint)bVar3;
  if (iVar12 < -0x8000) {
    iVar12 = -0x8000;
  }
  else if (0x7fff < iVar12) {
    iVar12 = 0x7fff;
  }
  iVar12 = (int)(short)iVar12 * (uint)DAT_003fb19d;
  _DAT_003fb1a0 = (short)((uint)iVar12 >> 8);
  if (((iVar12 >> 8 & 0xffffU) == 0) && (DAT_003fb19a != bVar3)) {
    if (bVar3 < DAT_003fb19a) {
      _DAT_003fb1a0 = 1;
    }
    else {
      _DAT_003fb1a0 = -1;
    }
  }
  DAT_003fb198 = (byte)((ushort)bVar3 + _DAT_003fb1a0);
  if ((bVar2 == 6) && (((ushort)bVar3 + _DAT_003fb1a0 & 0xff) < 0xe)) {
    DAT_003fb198 = 0xd;
  }
  uVar9 = (uint)DAT_003fb198;
  if ((uVar9 < 0x33) || (bVar2 == 0)) {
    DAT_003fb199 = bVar2;
    if ((uVar9 < 0x11) && (bVar2 != 6)) {
      DAT_003fb199 = bVar2 + 1;
      DAT_003fb198 = DAT_003fb198 * '\x02';
    }
  }
  else {
    DAT_003fb198 = (byte)((int)uVar9 >> 1);
    DAT_003fb199 = bVar2 - 1;
  }
  if (B_st != '\0') {
    DAT_003fb199 = KRVST;
    DAT_003fb198 = REFINI;
  }
  vkr_tst = DAT_003fb199;
  uVar9 = (uint)DAT_003fb199;
  (&DAT_005b9160)[uVar11] = DAT_003fb199;
  rkr_tst = DAT_003fb198;
  (&DAT_005b9154)[uVar11] = DAT_003fb198;
  (&UNK_003fb190)[uVar11] = *(undefined *)(uVar9 + 0x1cb88);
  return;
}

