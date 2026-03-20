/*
 * Program: n42.bin
 * Function: FUN_000c6904
 * Entry: 000c6904
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c6904(void)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  
  bVar4 = zwbasar;
  cVar3 = DAT_005b9169;
  bVar2 = zzylzue;
  uVar5 = (uint)zzylzue;
  uVar7 = (uint)zzylzue;
  if (B_sa != '\0') {
    B_zwspae = '\x01';
  }
  if (((((B_ll == '\0') || (DAT_003fc11f == '\0')) || (B_llrein == '\0')) ||
      ((tpnt_aktiv != 0 || (B_krdws != '\0')))) || (B_kr == '\0')) {
    DAT_003fc205 = '\0';
  }
  else {
    DAT_003fc205 = '\x01';
  }
  if ((DAT_003fc205 == '\0') || (DAT_001ccdea == '\0')) {
    DAT_003fc204 = '\0';
  }
  else {
    DAT_003fc204 = '\x01';
  }
  cVar1 = DAT_003fc204;
  if (B_zwspae == '\0') {
    if ((B_zwappl == '\0') && (B_nozwe == '\0')) {
      iVar9 = (int)(char)zwsol;
      if (iVar9 < (char)zwspae) {
        iVar9 = (int)(char)zwspae;
      }
      cVar8 = (char)iVar9;
      if (DAT_003fc204 != '\0') {
        iVar9 = (int)(short)((short)cVar8 + (short)(char)(&DAT_005b9124)[uVar7]);
        if (iVar9 < -0x80) {
          iVar9 = -0x80;
        }
        else if (0x7f < iVar9) {
          iVar9 = 0x7f;
        }
      }
      sVar6 = (short)(char)zwbasar + (short)DAT_005b9169;
      if (sVar6 < -0x80) {
        DAT_005b9210 = 0x80;
      }
      else if (sVar6 < 0x80) {
        DAT_005b9210 = (byte)sVar6;
      }
      else {
        DAT_005b9210 = 0x7f;
      }
      zwist = (byte)iVar9;
      if ((int)(char)DAT_005b9210 < (int)(char)zwist) {
        zwist = DAT_005b9210;
        iVar10 = (int)(char)DAT_005b9210 + (int)DAT_005b9208;
        if (iVar10 < -0x80) {
          iVar10 = -0x80;
        }
        else if (0x7f < iVar10) {
          iVar10 = 0x7f;
        }
        zwoutar = (byte)iVar10;
      }
      else {
        iVar10 = (int)(char)zwist + (int)DAT_005b9208;
        if (iVar10 < -0x80) {
          iVar10 = -0x80;
        }
        else if (0x7f < iVar10) {
          iVar10 = 0x7f;
        }
        zwoutar = (byte)iVar10;
      }
      if ((char)zwoutar < 'I') {
        if ((char)zwoutar < -0x1e) {
          zwoutar = 0xe2;
        }
      }
      else {
        zwoutar = 0x48;
      }
      zwout = zwoutar;
      (&zwoutzyl)[zzylzue] = zwoutar;
      if (uVar7 < 3) {
        uVar7 = uVar7 + 1;
      }
      else {
        uVar7 = 0;
      }
      if (cVar1 != '\0') {
        iVar9 = (int)(short)((short)cVar8 + (short)(char)(&DAT_005b9124)[uVar7]);
        if (iVar9 < -0x80) {
          iVar9 = -0x80;
        }
        else if (0x7f < iVar9) {
          iVar9 = 0x7f;
        }
      }
      sVar6 = (short)DAT_005b920d + (short)cVar3;
      if (sVar6 < -0x80) {
        DAT_005b9211 = 0x80;
      }
      else if (sVar6 < 0x80) {
        DAT_005b9211 = (byte)sVar6;
      }
      else {
        DAT_005b9211 = 0x7f;
      }
      if ((int)(char)DAT_005b9211 < (int)(char)iVar9) {
        zwist = DAT_005b9211;
        iVar10 = (int)(char)DAT_005b9211 + (int)DAT_005b9208;
        if (iVar10 < -0x80) {
          iVar10 = -0x80;
        }
        else if (0x7f < iVar10) {
          iVar10 = 0x7f;
        }
        DAT_005b9215 = (byte)iVar10;
      }
      else {
        iVar10 = (int)(char)iVar9 + (int)DAT_005b9208;
        if (iVar10 < -0x80) {
          iVar10 = -0x80;
        }
        else if (0x7f < iVar10) {
          iVar10 = 0x7f;
        }
        DAT_005b9215 = (byte)iVar10;
      }
      if ((char)DAT_005b9215 < 'I') {
        if ((char)DAT_005b9215 < -0x1e) {
          DAT_005b9215 = 0xe2;
        }
      }
      else {
        DAT_005b9215 = 0x48;
      }
      if (uVar7 < 3) {
        uVar7 = uVar7 + 1;
      }
      else {
        uVar7 = 0;
      }
      if (cVar1 != '\0') {
        iVar9 = (int)(short)((short)cVar8 + (short)(char)(&DAT_005b9124)[uVar7]);
        if (iVar9 < -0x80) {
          iVar9 = -0x80;
        }
        else if (0x7f < iVar9) {
          iVar9 = 0x7f;
        }
      }
      sVar6 = (short)DAT_005b920e + (short)cVar3;
      if (sVar6 < -0x80) {
        DAT_005b9212 = 0x80;
      }
      else if (sVar6 < 0x80) {
        DAT_005b9212 = (byte)sVar6;
      }
      else {
        DAT_005b9212 = 0x7f;
      }
      if ((int)(char)DAT_005b9212 < (int)(char)iVar9) {
        zwist = DAT_005b9212;
        iVar10 = (int)(char)DAT_005b9212 + (int)DAT_005b9208;
        if (iVar10 < -0x80) {
          iVar10 = -0x80;
        }
        else if (0x7f < iVar10) {
          iVar10 = 0x7f;
        }
        DAT_005b9216 = (byte)iVar10;
      }
      else {
        iVar10 = (int)(char)iVar9 + (int)DAT_005b9208;
        if (iVar10 < -0x80) {
          iVar10 = -0x80;
        }
        else if (0x7f < iVar10) {
          iVar10 = 0x7f;
        }
        DAT_005b9216 = (byte)iVar10;
      }
      if ((char)DAT_005b9216 < 'I') {
        if ((char)DAT_005b9216 < -0x1e) {
          DAT_005b9216 = 0xe2;
        }
      }
      else {
        DAT_005b9216 = 0x48;
      }
      if (uVar7 < 3) {
        iVar10 = uVar7 + 1;
      }
      else {
        iVar10 = 0;
      }
      if (cVar1 != '\0') {
        iVar9 = (int)(short)((short)cVar8 + (short)(char)(&DAT_005b9124)[iVar10]);
        if (iVar9 < -0x80) {
          iVar9 = -0x80;
        }
        else if (0x7f < iVar9) {
          iVar9 = 0x7f;
        }
      }
      sVar6 = (short)DAT_005b920f + (short)cVar3;
      if (sVar6 < -0x80) {
        DAT_005b9213 = 0x80;
      }
      else if (sVar6 < 0x80) {
        DAT_005b9213 = (byte)sVar6;
      }
      else {
        DAT_005b9213 = 0x7f;
      }
      if ((int)(char)DAT_005b9213 < (int)(char)iVar9) {
        zwist = DAT_005b9213;
        iVar9 = (int)(char)DAT_005b9213 + (int)DAT_005b9208;
        if (iVar9 < -0x80) {
          iVar9 = -0x80;
        }
        else if (0x7f < iVar9) {
          iVar9 = 0x7f;
        }
        DAT_005b9217 = (byte)iVar9;
      }
      else {
        iVar9 = (int)(char)iVar9 + (int)DAT_005b9208;
        if (iVar9 < -0x80) {
          iVar9 = -0x80;
        }
        else if (0x7f < iVar9) {
          iVar9 = 0x7f;
        }
        DAT_005b9217 = (byte)iVar9;
      }
      if ((char)DAT_005b9217 < 'I') {
        if ((char)DAT_005b9217 < -0x1e) {
          DAT_005b9217 = 0xe2;
        }
      }
      else {
        DAT_005b9217 = 0x48;
      }
    }
    else {
      zwist = zwbasar;
      iVar10 = (int)DAT_005b9208;
      iVar9 = (char)zwbasar + iVar10;
      if (iVar9 < -0x80) {
        iVar9 = -0x80;
      }
      else if (0x7f < iVar9) {
        iVar9 = 0x7f;
      }
      zwoutar = (byte)iVar9;
      if ((char)zwoutar < 'I') {
        if ((char)zwoutar < -0x1e) {
          zwoutar = 0xe2;
        }
      }
      else {
        zwoutar = 0x48;
      }
      zwout = zwoutar;
      (&zwoutzyl)[zzylzue] = zwoutar;
      iVar9 = DAT_005b920d + iVar10;
      if (iVar9 < -0x80) {
        iVar9 = -0x80;
      }
      else if (0x7f < iVar9) {
        iVar9 = 0x7f;
      }
      DAT_005b9215 = (byte)iVar9;
      if ((char)DAT_005b9215 < 'I') {
        if ((char)DAT_005b9215 < -0x1e) {
          DAT_005b9215 = 0xe2;
        }
      }
      else {
        DAT_005b9215 = 0x48;
      }
      iVar9 = DAT_005b920e + iVar10;
      if (iVar9 < -0x80) {
        iVar9 = -0x80;
      }
      else if (0x7f < iVar9) {
        iVar9 = 0x7f;
      }
      DAT_005b9216 = (byte)iVar9;
      if ((char)DAT_005b9216 < 'I') {
        if ((char)DAT_005b9216 < -0x1e) {
          DAT_005b9216 = 0xe2;
        }
      }
      else {
        DAT_005b9216 = 0x48;
      }
      iVar10 = DAT_005b920f + iVar10;
      if (iVar10 < -0x80) {
        iVar10 = -0x80;
      }
      else if (0x7f < iVar10) {
        iVar10 = 0x7f;
      }
      DAT_005b9217 = (byte)iVar10;
      if ((char)DAT_005b9217 < 'I') {
        if ((char)DAT_005b9217 < -0x1e) {
          DAT_005b9217 = 0xe2;
        }
      }
      else {
        DAT_005b9217 = 0x48;
      }
    }
  }
  else {
    zwist = zwspae;
    iVar9 = (int)(char)zwspae + (int)DAT_005b9208;
    if (iVar9 < -0x80) {
      iVar9 = -0x80;
    }
    else if (0x7f < iVar9) {
      iVar9 = 0x7f;
    }
    zwoutar = (byte)iVar9;
    if ((char)zwoutar < 'I') {
      if ((char)zwoutar < -0x1e) {
        zwoutar = 0xe2;
      }
    }
    else {
      zwoutar = 0x48;
    }
    DAT_005b9215 = zwoutar;
    zwout = zwoutar;
    (&zwoutzyl)[zzylzue] = zwoutar;
    DAT_005b9216 = DAT_005b9215;
    DAT_005b9217 = DAT_005b9215;
  }
  if (zwist != bVar4) {
    DAT_003fc278 = DAT_003fc278 & ~(byte)(1 << (uVar5 & 0x3f));
  }
  else {
    DAT_003fc278 = DAT_003fc278 | (byte)(1 << (uVar5 & 0x3f));
  }
  DAT_003fc206 = zwist == bVar4;
  if (bVar2 == 0) {
    DAT_005b9224 = zwoutar;
  }
  DAT_005b9218 = ~zwoutar;
  return;
}

