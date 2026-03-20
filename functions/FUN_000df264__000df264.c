/*
 * Program: n42.bin
 * Function: FUN_000df264
 * Entry: 000df264
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000df264(void)

{
  byte bVar1;
  bool bVar2;
  undefined2 uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  
  if (B_st == '\0') {
    if (DAT_003fb874 != '\0') {
      uVar3 = FUN_000a90c8(KLZZWMNST,&DAT_001cded9,&DAT_001cdee2,tmst);
      _DAT_003fb872 = FUN_000a7fe8(uVar3,0,_DAT_003fb872);
    }
  }
  else {
    _DAT_003fb872 = 0xffff;
  }
  DAT_003fb874 = DAT_003fb872;
  B_zwmnste = DAT_003fb872 == 0;
  zwmnms = calc_ign_angle_full_load(&KFZWMS,DAT_001c1054,esst_snm16zuub,esst_srl12zuub);
  cVar4 = calc_ign_angle_partial_load(KFZWMN,0x1cdb62,DAT_001cdb61,0x1cdb72,0x1cdb7e,nmot,rl);
  cVar5 = calc_ign_angle_partial_load(0x10,&KFZWMNT,0xc,&DAT_001cde0c,&DAT_001cde18,nmot,rl);
  iVar6 = (int)(short)(((short)cVar5 - (short)cVar4) * (ushort)dpsfak) / 0xff + (int)cVar4;
  sVar7 = (short)iVar6;
  if (sVar7 < 0x80) {
    if (sVar7 < -0x80) {
      zwmn = -0x80;
    }
    else {
      zwmn = (char)iVar6;
    }
  }
  else {
    zwmn = '\x7f';
  }
  if ((FZWKHMX == 0) || (uVar8 = ((uint)DAT_005b9111 << 8) / (uint)FZWKHMX, 0xffff < uVar8)) {
    uVar8 = 0xffff;
  }
  _DAT_003fb87e = (undefined2)uVar8;
  if (uVar8 < 0x100) {
    DAT_003fb87d = (byte)uVar8;
  }
  else {
    DAT_003fb87d = 0xff;
  }
  cVar4 = calc_ign_angle_partial_load(0xce,0x1cdc40,0xce,0x1cdc50,0x1cdc5c,nmot,rl);
  _DAT_003fb880 = (short)cVar4 * (ushort)DAT_003fb87d;
  cVar4 = FUN_000b1710((int)_DAT_003fb880,0xff);
  DAT_003fb87d = -DAT_003fb87d - 1;
  cVar5 = calc_ign_angle_partial_load(0xce,0x1cdd1e,0xce,0x1cdd2e,0x1cdd3a,nmot,rl);
  _DAT_003fb880 = (short)cVar5 * (ushort)DAT_003fb87d;
  cVar5 = FUN_000b1710((int)_DAT_003fb880,0xff);
  iVar6 = (int)cVar4 + (int)cVar5;
  if (iVar6 < -0x80) {
    iVar6 = -0x80;
  }
  else if (0x7f < iVar6) {
    iVar6 = 0x7f;
  }
  zwnst = (char)iVar6;
  if (B_zwmnste == '\0') {
    iVar6 = (int)(char)iVar6 - (int)zwmn;
    if (iVar6 < -0x80) {
      iVar6 = -0x80;
    }
    else if (0x7f < iVar6) {
      iVar6 = 0x7f;
    }
    iVar6 = (int)zwmn + (int)(char)((int)(short)(char)iVar6 * (uint)DAT_003fb874 >> 8);
    if (iVar6 < -0x80) {
      iVar6 = -0x80;
    }
    else if (0x7f < iVar6) {
      iVar6 = 0x7f;
    }
    iVar6 = (int)(char)iVar6 + (int)DAT_003fb870;
    if (iVar6 < -0x80) {
      iVar6 = -0x80;
    }
    else if (0x7f < iVar6) {
      iVar6 = 0x7f;
    }
    zwmnd = (char)iVar6;
  }
  else {
    iVar6 = (int)zwmn + (int)DAT_003fb870;
    if (iVar6 < -0x80) {
      iVar6 = -0x80;
    }
    else if (0x7f < iVar6) {
      iVar6 = 0x7f;
    }
    zwmnd = (char)iVar6;
  }
  if (B_zwms == '\0') {
    DAT_003fb87c = DAT_003fb87c & 0xfe;
  }
  else {
    DAT_003fb87c = DAT_003fb87c | 1;
  }
  bVar2 = B_zwms != '\0';
  if (((B_sa == '\0') && (zwist <= zwmnms)) && (misolv_w != migs_w)) {
    _DAT_003fb878 = 0;
    if (_DAT_003fb876 < _TVZWMSE) {
      _DAT_003fb876 = _DAT_003fb876 + 1;
    }
    else {
      B_zwms = '\x01';
    }
  }
  else {
    _DAT_003fb876 = 0;
    if (_DAT_003fb878 < _TVZWMSA) {
      _DAT_003fb878 = _DAT_003fb878 + 1;
    }
    else {
      B_zwms = '\0';
    }
  }
  if (B_zwms == '\0') {
    if (bVar2) {
      DAT_003fb87b = 0;
    }
    else {
      iVar6 = (int)(char)DAT_003fb87b + (int)(char)dzwmna;
      if (iVar6 < -0x80) {
        iVar6 = -0x80;
      }
      else if (0x7f < iVar6) {
        iVar6 = 0x7f;
      }
      DAT_003fb87b = (byte)iVar6;
      if (0x3c < DAT_003fb87b) {
        DAT_003fb87b = 0x3c;
      }
    }
    if (migs_w == _misol_w) {
      zwspae = zwmnd;
    }
    else {
      iVar6 = ((int)zwmnms - (int)zwmnd) - (int)(char)DAT_003fb87b;
      if (iVar6 < 0) {
        zwspae = zwmnd;
      }
      else {
        zwspae = (char)iVar6 + zwmnd;
      }
    }
  }
  else {
    if (bVar2) {
      iVar6 = (int)(char)DAT_003fb87a + (int)(char)dzwmna;
      if (iVar6 < -0x80) {
        iVar6 = -0x80;
      }
      else if (0x7f < iVar6) {
        iVar6 = 0x7f;
      }
      DAT_003fb87a = (byte)iVar6;
      if (0x3c < DAT_003fb87a) {
        DAT_003fb87a = 0x3c;
      }
    }
    else {
      DAT_003fb87a = 0;
    }
    if (((B_kh == '\0') && (B_kw == '\0')) && (migs_w != misolv_w)) {
      iVar6 = ((int)zwmnd - (int)zwmnms) + (int)(char)DAT_003fb87a;
      if (iVar6 < 1) {
        zwspae = (char)iVar6 + zwmnms;
      }
      else {
        zwspae = zwmnms;
      }
    }
    else {
      zwspae = zwmnd;
    }
  }
  iVar6 = (int)(char)zwopt - (int)zwspae;
  if (iVar6 < -0x80) {
    iVar6 = -0x80;
  }
  else if (0x7f < iVar6) {
    iVar6 = 0x7f;
  }
  dzwspae = (char)iVar6;
  bVar1 = DZW2DZWQ;
  if (0 < dzwspae) {
    bVar1 = (&DZW2DZWQ)[dzwspae];
  }
  uVar8 = (uint)bVar1 * (uint)dzwkoef >> 5;
  if (uVar8 < 0xc9) {
    etazwmn = -0x38 - (char)uVar8;
  }
  else {
    etazwmn = '\0';
  }
  return;
}

