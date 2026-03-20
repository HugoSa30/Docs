/*
 * Program: n42.bin
 * Function: FUN_000ddda8
 * Entry: 000ddda8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000ddda8(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  word wVar4;
  undefined2 local_20;
  
  if ((((DAT_003fc11f == '\0') && (B_dash == '\0')) && (B_fil == '\0')) && (dmrkt_w == 0)) {
    DAT_003fc12f = '\0';
  }
  else {
    DAT_003fc12f = '\x01';
  }
  uVar1 = (uint)mibas_w;
  if (DAT_003fc12f == '\0') {
    uVar3 = (uint)mibgr_w;
    if (uVar1 < uVar3) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = (uint)mibgr_w;
    if (mifa_w < uVar3) {
      uVar3 = (uint)mifa_w;
    }
  }
  if (minmx_w < uVar3) {
    uVar3 = (uint)minmx_w;
  }
  if (DAT_005b968a < uVar3) {
    uVar3 = (uint)DAT_005b968a;
  }
  if (((DAT_001c9945 & 1) != 0) && (mivmx_w < uVar3)) {
    uVar3 = (uint)mivmx_w;
  }
  DAT_005b960a = (ushort)uVar3;
  iVar2 = (int)(short)dmar_w + (int)(short)dmllr_w;
  if (iVar2 < -0x8000) {
    iVar2 = -0x8000;
  }
  else if (0x7fff < iVar2) {
    iVar2 = 0x7fff;
  }
  uVar3 = (uVar3 >> 1) + (int)(short)iVar2;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0xffff < (int)uVar3) {
    uVar3 = 0xffff;
  }
  if ((uVar3 & 0xffff) < 0x8000) {
    DAT_005b9602 = (short)uVar3 * 2;
  }
  else {
    DAT_005b9602 = 0xffff;
  }
  uVar3 = (uint)mizwmn_w;
  if (uVar3 < DAT_005b9602) {
    uVar3 = (uint)DAT_005b9602;
  }
  DAT_005b9604 = (undefined2)uVar3;
  if (uVar3 < uVar1) {
    uVar1 = uVar3;
  }
  if (miszul_w < uVar1) {
    uVar1 = (uint)miszul_w;
  }
  DAT_005b9606 = (undefined2)uVar1;
  uVar3 = (uint)redbas * 200 >> 2;
  if (0xffff < uVar3) {
    uVar3 = 0xffff;
  }
  uVar3 = 200 - (uVar3 & 0xff);
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0xff < (int)uVar3) {
    uVar3 = 0xff;
  }
  DAT_005b91b5 = (undefined)uVar3;
  uVar1 = uVar1 * (uVar3 & 0xff);
  local_20 = (undefined2)(uVar1 >> 0x10);
  DAT_005b9600 = FUN_000a7b40(local_20,uVar1 & 0xffff,200);
  DAT_005b960c = DAT_005b9600;
  wVar4 = mizwmn_w;
  if (mizwmn_w < DAT_005b9266) {
    wVar4 = DAT_005b9266;
  }
  DAT_005b9608 = DAT_005b9600;
  if (wVar4 <= DAT_005b9600) {
    DAT_005b9608 = wVar4;
  }
  DAT_005b95fe = mizsol_w;
  if (DAT_005b960a < DAT_005b95c8) {
    DAT_003fc130 = 0;
    if (DAT_003fb3e1 == '\0') {
      DAT_003fb3e1 = '\0';
      DAT_005b9600 = miist_w;
      DAT_005b95fe = miist_w;
    }
    else if (DAT_003fb3e0 == '\0') {
      DAT_003fb3e2 = 1;
      if (DAT_003fc124 == '\0') {
        DAT_005b95fe = DAT_005b9608;
      }
      else {
        DAT_005b9600 = mizsol_w;
        if (mibas_w < mizsol_w) {
          DAT_005b95fe = mibas_w;
          DAT_005b9600 = mibas_w;
        }
      }
    }
    else {
      DAT_003fb3e2 = 0;
      DAT_003fb3e1 = '\0';
      DAT_005b9600 = miist_w;
      DAT_005b95fe = miist_w;
    }
  }
  else {
    DAT_003fc130 = 1;
    DAT_003fb3e1 = '\x01';
    if (DAT_003fc124 == '\0') {
      DAT_005b95fe = DAT_005b9608;
    }
    else {
      DAT_005b9600 = mizsol_w;
      if (mibas_w < mizsol_w) {
        DAT_005b95fe = mibas_w;
        DAT_005b9600 = mibas_w;
      }
    }
  }
  return;
}

