/*
 * Program: n42.bin
 * Function: FUN_0018e970
 * Entry: 0018e970
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018e970(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (_dynlsu_w < 0x4fb0) {
    dynlsusa = (byte)(_dynlsu_w / 0x50);
  }
  else {
    dynlsusa = 0xff;
  }
  iVar3 = (int)(short)dlahi_w;
  if (iVar3 < -0x666) {
    dlahisa = 0;
  }
  else if (iVar3 < 0x65a) {
    dlahisa = (char)(iVar3 * 5 >> 6) + 0x80;
  }
  else {
    dlahisa = 0xff;
  }
  if (lamsons_w < 0x1fe0) {
    lamsosa = (byte)((int)(uint)lamsons_w >> 5);
  }
  else {
    lamsosa = 0xff;
  }
  if (lamsoni_w < 0x1fe0) {
    lamsisa = (byte)((int)(uint)lamsoni_w >> 5);
  }
  else {
    lamsisa = 0xff;
  }
  uVar4 = ushk - 0x26;
  if ((int)uVar4 < 0) {
    uVar4 = 0;
  }
  else if (0xff < (int)uVar4) {
    uVar4 = 0xff;
  }
  ushkj = (byte)uVar4;
  uVar4 = func_0xff217fe8(_SAFK1,uVar4 & 0xff,ushkjf_w);
  ushkjf_w = (word)uVar4;
  uVar2 = uVar4 >> 8 & 0xff;
  if ((DAT_003fdf5b >> 1 & 1) != 0) {
    bVar1 = (byte)(uVar4 >> 8);
    if (USRJ + 2 < uVar2) {
      if (usmxsha < uVar2) {
        usmxsha = bVar1;
      }
    }
    else if (((int)uVar2 < (int)(USRJ - 2)) && (uVar2 < usmnsha)) {
      usmnsha = bVar1;
    }
    if ((lrshkebAusBits & B_lrhk) == 0) {
      twdlssh_w = 0;
    }
    else if (twdlssh_w < _TWDLSSA) {
      twdlssh_w = twdlssh_w + 1;
    }
    else {
      usmnshn = usmnsha;
      usmxshn = usmxsha;
    }
  }
  if (_dynlsu2_w < 0x4fb0) {
    dynlsusa2 = (byte)(_dynlsu2_w / 0x50);
  }
  else {
    dynlsusa2 = 0xff;
  }
  iVar3 = (int)(short)dlahi2_w;
  if (iVar3 < -0x666) {
    dlahisa2 = 0;
  }
  else if (iVar3 < 0x65b) {
    dlahisa2 = (char)(iVar3 * 5 >> 6) + 0x80;
  }
  else {
    dlahisa2 = 0xff;
  }
  if (lamsons2_w < 0x1fe0) {
    lamsosa2 = (byte)((int)(uint)lamsons2_w >> 5);
  }
  else {
    lamsosa2 = 0xff;
  }
  if (lamsoni2_w < 0x1fe0) {
    lamsisa2 = (byte)((int)(uint)lamsoni2_w >> 5);
  }
  else {
    lamsisa2 = 0xff;
  }
  uVar4 = ushk2 - 0x26;
  if ((int)uVar4 < 0) {
    uVar4 = 0;
  }
  else if (0xff < (int)uVar4) {
    uVar4 = 0xff;
  }
  ushkj2 = (byte)uVar4;
  uVar4 = func_0xff217fe8(_SAFK1,uVar4 & 0xff,ushkjf2_w);
  ushkjf2_w = (word)uVar4;
  uVar2 = uVar4 >> 8 & 0xff;
  if ((DAT_003fdf5d >> 1 & 1) != 0) {
    bVar1 = (byte)(uVar4 >> 8);
    if (USRJ + 2 < uVar2) {
      if (usmxsha2 < uVar2) {
        usmxsha2 = bVar1;
      }
    }
    else if (((int)uVar2 < (int)(USRJ - 2)) && (uVar2 < usmnsha2)) {
      usmnsha2 = bVar1;
    }
    if ((B_lrhkzp2 & B_lrhk2) == 0) {
      twdlssh2_w = 0;
    }
    else if (twdlssh2_w < _TWDLSSA) {
      twdlssh2_w = twdlssh2_w + 1;
    }
    else {
      usmnshn2 = usmnsha2;
      usmxshn2 = usmxsha2;
    }
  }
  return;
}

