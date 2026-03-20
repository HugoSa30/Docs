/*
 * Program: n42.bin
 * Function: FUN_001711d4
 * Entry: 001711d4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0017142c) */
/* WARNING: Removing unreachable block (ram,0x00171898) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001711d4(void)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short local_68;
  ushort local_64 [8];
  ushort local_54 [2];
  ushort *local_50;
  
  DAT_005bb79c = DAT_005bb79c & 0xf5;
  DAT_005bb8c8 = _DAT_003fdfc0;
  uVar2 = func_0xff2187cc(&map_TMOTELI,wtmot);
  tmotlin = (byte)uVar2;
  DAT_005b88d2 = (undefined2)((uVar2 & 0xff) << 8);
  DAT_003fc008 = 1;
  if (B_nokatfz == '\0') {
    if ((DAT_003fc00c != '\0') || (B_st != '\0')) {
      DAT_005bb79c = DAT_005bb79c | 2;
    }
    if (((DAT_005bb79c & 2) == 0) && ((DAT_005bb828 & 8) != 0)) {
      uVar2 = func_0xff2190c8(DAT_001d0b1e,&DAT_001d0b1f,&DAT_001d0b24,tmst);
      DAT_005bb8bc = (uVar2 & 0xffff) << 8;
    }
    else if ((B_sa == '\0') && ((B_stend != '\0' && (B_nmot != '\0')))) {
      DAT_003fc241 = ml;
      uVar2 = func_0xff2187cc(&DAT_001d0a3c,ml);
      if ((uVar2 & 0xff) < DAT_005bb8bc) {
        DAT_005bb8bc = DAT_005bb8bc - (uVar2 & 0xff);
      }
      else {
        DAT_005bb8bc = 0;
      }
    }
    DAT_005b88d0 = (short)(DAT_005bb8bc >> 8);
  }
  else {
    DAT_005b88d0 = 0;
  }
  if (DAT_005b88d0 == 0) {
    DAT_005bb79c = DAT_005bb79c | 1;
  }
  else {
    DAT_005bb79c = DAT_005bb79c & 0xfe;
  }
  uVar2 = func_0xff2187cc(&DAT_001d0a54,tmst);
  uVar2 = uVar2 & 0xff;
  uVar6 = (uint)tmotlin;
  if ((B_nmot == '\0') || (DAT_003fc00c != '\0')) {
LAB_001714f0:
    DAT_005bb830 = 0;
    DAT_005bb828 = DAT_005bb828 & 0xefff;
  }
  else {
    uVar5 = (uint)DAT_005b88cb + (uint)DAT_001d0a4c;
    if (0xff < uVar5) {
      uVar5 = 0xff;
    }
    if (uVar6 <= (uVar5 & 0xff)) {
      uVar5 = (uint)DAT_005b88cb - (uint)DAT_001d0a4b;
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
      else if (0xff < (int)uVar5) {
        uVar5 = 0xff;
      }
      if ((uVar5 & 0xff) <= uVar6) goto LAB_001714f0;
    }
    DAT_005bb828 = DAT_005bb828 | 0x1000;
    if (DAT_005bb830 < _DAT_001d0b0c) {
      DAT_005bb830 = DAT_005bb830 + 1;
    }
    else {
      DAT_005bb8c8 = DAT_005bb8c8 & 0xd0fc | 0x2803;
    }
  }
  if (((((DAT_005bb79c & 1) != 0) && ((DAT_005bb828 & 1) == 0)) && (DAT_003fc00c == '\0')) &&
     ((B_nmot != '\0' && (uVar6 < uVar2)))) {
    DAT_005bb828 = DAT_005bb828 | 0x2000;
  }
  if ((DAT_005bb828 & 0x2000) == 0) {
    DAT_005bb834 = 0;
  }
  else if (DAT_005bb834 < _DAT_001d0b0c) {
    DAT_005bb834 = DAT_005bb834 + 1;
  }
  else {
    DAT_005bb8c8 = DAT_005bb8c8 & 0xd0fc | 0x2403;
  }
  if (DAT_001d0a53 < uVar6) {
    DAT_005bb828 = DAT_005bb828 | 0x400;
    if (DAT_005bb82c < _DAT_001d0b0c) {
      DAT_005bb82c = DAT_005bb82c + 1;
    }
    else {
      DAT_005bb8c8 = DAT_005bb8c8 & 0xd0fc | 0x2103;
    }
  }
  else {
    DAT_005bb828 = DAT_005bb828 & 0xfbff;
    DAT_005bb82c = 0;
  }
  if (uVar6 < DAT_001d0a52) {
    DAT_005bb828 = DAT_005bb828 | 0x800;
    if (DAT_005bb832 < _DAT_001d0b0c) {
      DAT_005bb832 = DAT_005bb832 + 1;
    }
    else {
      DAT_005bb8c8 = DAT_005bb8c8 & 0xd0fc | 0x2203;
    }
  }
  else {
    DAT_005bb832 = 0;
    DAT_005bb828 = DAT_005bb828 & 0xf7ff;
  }
  if (((DAT_005bb828 & 0x400) == 0) && ((DAT_005bb828 & 0x800) == 0)) {
    DAT_003fc009 = 0;
  }
  else {
    DAT_003fc009 = 1;
  }
  if (((((DAT_005bb828 & 0x400) == 0) && (DAT_001d0a52 <= uVar6)) && ((DAT_005bb828 & 0x1000) == 0))
     && ((DAT_005bb828 & 0x2000) == 0)) {
    DAT_005bb79c = DAT_005bb79c & 0xf7;
  }
  else {
    DAT_005bb79c = DAT_005bb79c | 8;
  }
  if ((DAT_005bb79c & 8) == 0) {
    DAT_005bb8c8 = DAT_005bb8c8 & 0xffbf;
  }
  else {
    DAT_005bb8c8 = DAT_005bb8c8 & 0xffbf | 0x40;
  }
  if ((((DAT_005bb79c & 8) == 0) && ((DAT_005bb79c & 1) != 0)) && (uVar2 <= DAT_005b88cb)) {
    if (DAT_005bb82e < _DAT_001d0b0c) {
      DAT_005bb82e = DAT_005bb82e + 1;
    }
    else {
      DAT_005bb8c8 = DAT_005bb8c8 & 0xd0fc | 0x2002;
    }
  }
  else {
    DAT_005bb82e = 0;
  }
  bVar1 = (byte)DAT_005bb8c8 >> 6 & 1;
  if (bVar1 == 0) {
    DAT_005b88ca = tmotlin;
  }
  else {
    DAT_005b88ca = DAT_005b88c8;
  }
  uVar6 = (uint)DAT_005b88ca;
  if (((DAT_005bb828 & 0x100) == 0) || (DAT_001d0a5d <= uVar6)) {
LAB_001718e0:
    DAT_003fc00b = '\0';
  }
  else {
    uVar5 = uVar6 + DAT_001d0a4d;
    if (0xff < uVar5) {
      uVar5 = 0xff;
    }
    if ((((uint)tmst < (uVar5 & 0xff)) || (bVar1 != 0)) || ((DAT_005bb8c8 & 1) != 0))
    goto LAB_001718e0;
    DAT_003fc00b = '\x01';
  }
  if ((tmst < uVar6) || ((DAT_005bb828 & 0x100) == 0)) {
    DAT_003fc00c = '\0';
  }
  else if (DAT_003fc00b != '\0') {
    DAT_003fc00c = '\x01';
  }
  if ((B_st == '\0') || ((DAT_005bb828 & 4) != 0)) {
    DAT_005bb83c = func_0xff217fe8(_DAT_001d0b2c,uVar6,DAT_005bb83c);
  }
  else {
    DAT_005bb83c = (ushort)DAT_005b88ca << 8;
    tmst = DAT_005b88ca;
  }
  tmot = (byte)((ushort)DAT_005bb83c >> 8);
  if (((B_nmin != '\0') || (DAT_003fc00b != '\0')) && (tmst = tmot, DAT_003fc00b != '\0')) {
    tmst = DAT_005b88ca;
  }
  uVar6 = uVar2;
  if (uVar2 < DAT_001d0a51) {
    uVar6 = (uint)DAT_001d0a51;
  }
  DAT_005b88cc = (byte)uVar6;
  if (DAT_003fc00c == '\0') {
    if (DAT_005bb836 == 0) {
      DAT_005bb828 = DAT_005bb828 & 0xffbf;
    }
    else {
      DAT_005bb836 = DAT_005bb836 + -1;
    }
  }
  else {
    DAT_005bb828 = DAT_005bb828 | 0x40;
    DAT_005bb836 = _DAT_001d0b0a;
  }
  if (B_stend == '\0') {
    DAT_005bb828 = DAT_005bb828 & 0xfffd;
    DAT_005bb838 = _DAT_001d0b0a;
  }
  else if (DAT_005bb838 == 0) {
    DAT_005bb828 = DAT_005bb828 | 2;
  }
  else {
    DAT_005bb838 = DAT_005bb838 + -1;
  }
  if (B_sa == '\0') {
    if (((DAT_005bb828 & 0x40) == 0) && ((DAT_005bb828 & 2) != 0)) {
      if (B_etum == '\0') {
        DAT_005b88ce = tumg;
      }
      else {
        DAT_005b88ce = DAT_001d0a8a;
      }
      cVar4 = func_0xff219ee0(DAT_001d0ae0,&DAT_001d0ae2,DAT_001d0ae1,&DAT_001d0ae7,0x1d0aeb,
                              DAT_003fc241,DAT_005b88ce);
      cVar3 = func_0xff219ee0(DAT_001d0ac1,0x1d0ac3,DAT_001d0ac2,&DAT_001d0ac8,&DAT_001d0acc,
                              DAT_003fc241,DAT_005b88cb);
      iVar7 = (int)cVar3 + (int)cVar4;
      if (iVar7 < -0x80) {
        iVar7 = -0x80;
      }
      else if (0x7f < iVar7) {
        iVar7 = 0x7f;
      }
      DAT_005b88c4 = 0x80;
      DAT_005b88c7 = (char)iVar7;
    }
    else {
      DAT_005b88c7 = '\0';
    }
  }
  else {
    DAT_005b88c7 = func_0xff218eec(DAT_001d0aff,&DAT_001d0b00,0x1d0b05,DAT_005b88cb);
  }
  if (((B_st == '\0') || ((DAT_005bb828 & 4) != 0)) &&
     ((DAT_003fc00c != '\0' || ((DAT_005bb828 & 0x80) == 0)))) {
    if (B_nmot != '\0') {
      uVar6 = (uint)DAT_005b88cc * 0x400 - 0x10000;
      local_68 = (short)(DAT_005b88c7 >> 7);
      DAT_005bb8c0 = func_0xff2179ac(local_68,(short)DAT_005b88c7,(int)DAT_005bb8c0._0_2_,
                                     DAT_005bb8c0 & 0xffff);
      if ((int)DAT_005bb8c0 < -0x10000) {
        DAT_005bb8c0 = 0xffff0000;
      }
      else if ((int)uVar6 < (int)DAT_005bb8c0) {
        DAT_005bb8c0 = uVar6;
      }
      DAT_005b88cb = (char)((int)DAT_005bb8c0 >> 10) + 0x40;
      goto LAB_00171ce0;
    }
  }
  else {
    DAT_005b88cb = tmst;
    if (DAT_005b88cc < tmst) {
      DAT_005b88cb = DAT_005b88cc;
    }
    DAT_005bb8c0 = (uint)DAT_005b88cb * 0x400 - 0x10000;
LAB_00171ce0:
    if (B_nmot != '\0') {
      if (DAT_005bb83a == 0) {
        DAT_003fc007 = '\x01';
      }
      else {
        DAT_005bb83a = DAT_005bb83a + -1;
      }
      goto LAB_00171d38;
    }
  }
  DAT_005bb83a = _DAT_001d0b0e;
  DAT_003fc007 = '\0';
LAB_00171d38:
  if (((DAT_003fc007 == '\0') || ((DAT_005bb828 & 0x200) != 0)) &&
     (((DAT_005bb82a != 0 || (tabst_w == 0)) && ((B_pwml2cok == '\0' || (B_nmin == '\0')))))) {
    if (B_nmot != '\0') {
      if (uVar2 <= DAT_001d0a50) {
        uVar2 = (uint)DAT_001d0a50;
      }
      if ((DAT_005bb828 & 2) == 0) {
        DAT_005b88c6 = '\0';
      }
      else {
        cVar4 = func_0xff219ee0(DAT_001d0aa2,&DAT_001d0aa4,DAT_001d0aa3,0x1d0aa9,0x1d0aad,
                                DAT_003fc241,DAT_005b88c8);
        DAT_005b88c6 = (char)((int)((int)(short)cVar4 * (uint)DAT_005b88c4) >> 7);
      }
      uVar6 = uVar2 * 0x400 - 0x10000;
      local_68 = (short)(DAT_005b88c6 >> 7);
      _DAT_005bb8c4 =
           func_0xff2179ac(local_68,(short)DAT_005b88c6,(int)DAT_005bb8c4,_DAT_005bb8c4 & 0xffff);
      if ((int)_DAT_005bb8c4 < -0x10000) {
        _DAT_005bb8c4 = 0xffff0000;
      }
      else if ((int)uVar6 < (int)_DAT_005bb8c4) {
        _DAT_005bb8c4 = uVar6;
      }
      uVar6 = ((int)_DAT_005bb8c4 >> 10) + 0x40;
      DAT_005b88c8 = (byte)uVar6;
      DAT_003fc00a = uVar2 <= (uVar6 & 0xff);
    }
  }
  else {
    if ((DAT_003fdfb7 & 1) == 0) {
      uVar2 = (uint)tumg;
      if (uVar2 < DAT_001d0a4f) {
        uVar2 = (uint)DAT_001d0a4f;
      }
    }
    else {
      uVar2 = (uint)DAT_001d0a4e;
    }
    if (((DAT_003fdfb7 & 1) == 0) && ((DAT_003fde7d & 1) == 0)) {
      if (DAT_003fc007 == '\0') {
        uVar2 = func_0xff2189bc(FUN_001d0b10,tabst_w);
      }
      else {
        iVar7 = DAT_003fdc62 - uVar2;
        if (iVar7 < -0x8000) {
          iVar7 = -0x8000;
        }
        else if (0x7fff < iVar7) {
          iVar7 = 0x7fff;
        }
        uVar2 = func_0xff2189bc(&DAT_001d0a8c,tabst_w);
        iVar7 = (int)((int)(short)iVar7 * (uVar2 & 0xffff)) >> 0xf;
        if (iVar7 < -0x8000) {
          iVar7 = -0x8000;
        }
        else if (0x7fff < iVar7) {
          iVar7 = 0x7fff;
        }
        iVar7 = (uint)DAT_003fdc62 - (int)(short)iVar7;
        if (iVar7 < -0x8000) {
          iVar7 = -0x8000;
        }
        else if (0x7fff < iVar7) {
          iVar7 = 0x7fff;
        }
        uVar2 = (uint)(short)iVar7;
        if ((int)uVar2 < 0) {
          uVar2 = 0;
        }
        else if (0xff < (int)uVar2) {
          uVar2 = 0xff;
        }
      }
    }
    if ((uint)DAT_001d0a50 < (uVar2 & 0xff)) {
      uVar2 = (uint)DAT_001d0a50;
    }
    DAT_005b88c5 = (byte)uVar2;
    _DAT_005bb8c4 = (uVar2 & 0xff) * 0x400 - 0x10000;
    DAT_005b88c8 = DAT_005b88c5;
  }
  if ((DAT_005bb79c & 1) == 0) {
    DAT_005bb828 = DAT_005bb828 & 0xfffe;
  }
  else {
    DAT_005bb828 = DAT_005bb828 | 1;
  }
  if (B_st == '\0') {
    DAT_005bb828 = DAT_005bb828 & 0xfffb;
  }
  else {
    DAT_005bb828 = DAT_005bb828 | 4;
  }
  if ((DAT_005bb79c & 2) == 0) {
    DAT_005bb828 = DAT_005bb828 & 0xfff7;
  }
  else {
    DAT_005bb828 = DAT_005bb828 | 8;
  }
  if (DAT_003fc00c == '\0') {
    DAT_005bb828 = DAT_005bb828 & 0xff7f;
  }
  else {
    DAT_005bb828 = DAT_005bb828 | 0x80;
  }
  if (DAT_003fc007 == '\0') {
    DAT_005bb828 = DAT_005bb828 & 0xfdff;
  }
  else {
    DAT_005bb828 = DAT_005bb828 | 0x200;
  }
  DAT_005bb82a = tabst_w;
  local_64[0] = DAT_005bb8c8;
  local_50 = local_64;
  local_54[0] = DAT_005bb8c8;
  func_0xff222958(0xaf,local_54);
  return;
}

