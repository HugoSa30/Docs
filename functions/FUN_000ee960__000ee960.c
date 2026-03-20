/*
 * Program: n42.bin
 * Function: FUN_000ee960
 * Entry: 000ee960
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ee960(void)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  short sVar5;
  uint uVar4;
  
  if ((B_cdswe & B_cdlsv) != 0) {
    bVar1 = ZDYNLSU;
    uVar2 = _KDYNLSU;
    if (B_falsu != '\0') {
      bVar1 = ZDYNFA;
      uVar2 = _KDYNFA;
    }
    DAT_005b81da = dfrzaf_w;
    DAT_005b81d8 = lamsam_w;
    if ((DAT_005b81a5 & 1) == 0) {
      DAT_005b81a5 = DAT_005b81a5 & 0xfd;
    }
    else {
      DAT_005b81a5 = DAT_005b81a5 | 2;
    }
    if ((DAT_005b81a5 & 0x80) == 0) {
      DAT_005b81a5 = DAT_005b81a5 & 0xef;
    }
    else {
      DAT_005b81a5 = DAT_005b81a5 | 0x10;
    }
    if ((short)dfrzaf_w < 1) {
      DAT_005b81a5 = DAT_005b81a5 & 0x7f;
    }
    else {
      DAT_005b81a5 = DAT_005b81a5 | 0x80;
    }
    if ((((B_dylsu & B_dylsuav) ==
          ~(B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft)) ||
        ((DAT_005b81a5 & 0x80) == 0)) || ((DAT_005b81a5 & 0x10) != 0)) {
      DAT_005b81a5 = DAT_005b81a5 & 0xfe;
    }
    else {
      DAT_005b81a5 = DAT_005b81a5 | 1;
    }
    if ((DAT_005b81a5 & 2) != 0) {
      DAT_005b81a4 = DAT_005b81a4 | 0x40;
    }
    if ((B_dylsu & B_dylsuav) ==
        ~(B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft)) {
      DAT_005b81a4 = DAT_005b81a4 & 0xbf;
      DAT_005b81a5 = DAT_005b81a5 & 0xf6;
      DAT_005b81d0 = 0xf000;
      DAT_005b81d2 = 0x1000;
      DAT_005b81d6 = 0;
    }
    else {
      if ((short)DAT_005b81d0 < (short)lamsam_w) {
        DAT_005b81d0 = lamsam_w;
      }
      if ((short)lamsam_w < (short)DAT_005b81d2) {
        DAT_005b81d2 = lamsam_w;
      }
      if ((short)DAT_005b81d6 < (short)dfrzaf_w) {
        DAT_005b81d6 = dfrzaf_w;
      }
      if (((DAT_005b81a5 & 1) == 0) || ((DAT_005b81a4 & 0x40) == 0)) {
        DAT_005b81a5 = DAT_005b81a5 & 0xf7;
      }
      else {
        DAT_005b81a5 = DAT_005b81a5 | 8;
      }
      if ((DAT_005b81a5 & 8) != 0) {
        iVar3 = (int)(short)DAT_005b81d0 - (int)(short)DAT_005b81d2;
        if (iVar3 < -0x8000) {
          iVar3 = -0x8000;
        }
        else if (0x7fff < iVar3) {
          iVar3 = 0x7fff;
        }
        DAT_005b81d4 = (short)iVar3;
        sVar5 = FUN_000b1710((int)DAT_005b81d4 << 0xe,(int)(short)DAT_005b81d6);
        if (sVar5 < 0) {
          sVar5 = 0;
        }
        else {
          sVar5 = sVar5 * 2;
        }
        uVar4 = FUN_000a7f20(uVar2,sVar5,DAT_005b81e8,_DAT_005b81e8 & 0xffff);
        DAT_005b81e8 = (undefined2)(uVar4 >> 0x10);
        _dynlsu_w = DAT_005b81e8;
        _DAT_005b81e8 = uVar4;
      }
      if ((((DAT_005b81a5 & 1) == 0) && ((DAT_005b81a5 & 2) != 0)) ||
         (((DAT_005b81a4 & 0x40) == 0 && ((DAT_005b81a5 & 1) != 0)))) {
        DAT_005b81d0 = 0xf000;
        DAT_005b81d2 = 0x1000;
        DAT_005b81d6 = 0;
      }
    }
    if ((DAT_005b81a5 & 8) != 0) {
      if (anzdyn != 0xff) {
        anzdyn = anzdyn + 1;
      }
      if (anzdyn < bVar1) {
        B_dylsu = B_dylsu & (B_drlmx|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft);
      }
      else {
        B_dylsu = B_dylsu | B_dylsu;
      }
    }
    DAT_005b8226 = lamsam2_w;
    if ((DAT_005b81aa & 0x20) == 0) {
      DAT_005b81aa = DAT_005b81aa & 0xbf;
    }
    else {
      DAT_005b81aa = DAT_005b81aa | 0x40;
    }
    if ((((B_lshkpft2 & B_dylsuav2) ==
          ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2)) ||
        ((DAT_005b81a5 & 0x80) == 0)) || ((DAT_005b81a5 & 0x10) != 0)) {
      DAT_005b81aa = DAT_005b81aa & 0xdf;
    }
    else {
      DAT_005b81aa = DAT_005b81aa | 0x20;
    }
    if ((DAT_005b81aa & 0x40) != 0) {
      DAT_005b81aa = DAT_005b81aa | 0x80;
    }
    if ((B_lshkpft2 & B_dylsuav2) ==
        ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2)) {
      DAT_005b81aa = DAT_005b81aa & 0x5f;
      DAT_005b81ab = DAT_005b81ab & 0xfe;
      DAT_005b8220 = 0xf000;
      DAT_005b8222 = 0x1000;
      DAT_005b8224 = 0;
    }
    else {
      if ((short)DAT_005b8220 < (short)lamsam2_w) {
        DAT_005b8220 = lamsam2_w;
      }
      if ((short)lamsam2_w < (short)DAT_005b8222) {
        DAT_005b8222 = lamsam2_w;
      }
      if ((short)DAT_005b8224 < (short)DAT_005b81da) {
        DAT_005b8224 = DAT_005b81da;
      }
      if (((DAT_005b81aa & 0x20) == 0) || ((DAT_005b81aa & 0x80) == 0)) {
        DAT_005b81ab = DAT_005b81ab & 0xfe;
      }
      else {
        DAT_005b81ab = DAT_005b81ab | 1;
      }
      if ((DAT_005b81ab & 1) != 0) {
        iVar3 = (int)(short)DAT_005b8220 - (int)(short)DAT_005b8222;
        if (iVar3 < -0x8000) {
          iVar3 = -0x8000;
        }
        else if (0x7fff < iVar3) {
          iVar3 = 0x7fff;
        }
        DAT_005b81d4 = (short)iVar3;
        sVar5 = FUN_000b1710((int)DAT_005b81d4 << 0xe,(int)(short)DAT_005b8224);
        if (sVar5 < 0) {
          sVar5 = 0;
        }
        else {
          sVar5 = sVar5 * 2;
        }
        uVar4 = FUN_000a7f20(uVar2,sVar5,DAT_005b8234,_DAT_005b8234 & 0xffff);
        DAT_005b8234 = (undefined2)(uVar4 >> 0x10);
        _dynlsu2_w = DAT_005b8234;
        _DAT_005b8234 = uVar4;
      }
      if ((((DAT_005b81aa & 0x80) == 0) && ((DAT_005b81aa & 0x20) != 0)) ||
         (((DAT_005b81aa & 0x20) == 0 && ((DAT_005b81aa & 0x40) != 0)))) {
        DAT_005b8220 = 0xf000;
        DAT_005b8222 = 0x1000;
        DAT_005b8224 = 0;
      }
    }
    if ((DAT_005b81ab & 1) != 0) {
      if (anzdyn2 != 0xff) {
        anzdyn2 = anzdyn2 + 1;
      }
      if (anzdyn2 < bVar1) {
        B_lshkpft2 = B_lshkpft2 &
                     (B_sigflsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|B_lshkpmr2);
      }
      else {
        B_lshkpft2 = B_lshkpft2 | B_dylsu2;
      }
    }
  }
  return;
}

