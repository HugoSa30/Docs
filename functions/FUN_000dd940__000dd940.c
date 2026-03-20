/*
 * Program: n42.bin
 * Function: FUN_000dd940
 * Entry: 000dd940
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000dda4c) */
/* WARNING: Removing unreachable block (ram,0x000ddb08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dd940(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  short local_18;
  
  if (B_nmaxd == '\0') {
    _DAT_003f9c04 = uzkw_w;
  }
  anzkwu_w = uzkw_w - _DAT_003f9c04;
  if (B_dkpu == '\0') {
    if (B_dknolu == '\0') {
      if (B_lowra == '\0') {
        uVar2 = (uint)_DAT_003f9c06;
      }
      else {
        uVar2 = (uint)_rpm_limiter3;
      }
    }
    else {
      uVar2 = FUN_000a87cc(&NMXDAEF,wped);
      uVar2 = (uVar2 & 0xff) * 0xa0;
    }
  }
  else {
    uVar2 = (uint)_NMAXLR;
  }
  if (dvvtnmx < uVar2) {
    uVar2 = (uint)dvvtnmx;
  }
  if (_DAT_003f9c02 < anzkwu_w) {
    B_nmaxd = '\0';
  }
  else {
    uVar1 = _DAT_003f9c00 + uVar2;
    if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
    if ((uVar1 & 0xffff) < (uint)nmot_w) {
      B_nmaxd = '\x01';
    }
  }
  if (B_nmaxd != '\0') {
    B_nmax = 1;
    minmx_w = 0;
    return;
  }
  if ((short)ngfil_w < 1) {
    nmotpr_w = nmot_w;
  }
  else {
    uVar1 = FUN_000b181c((uint)DAT_003f9bdb << 8,ngfil_w);
    uVar1 = (uint)nmot_w + (uVar1 & 0xffff);
    if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
    nmotpr_w = (word)uVar1;
  }
  iVar3 = uVar2 - nmotpr_w;
  if (iVar3 < -0x8000) {
    iVar3 = -0x8000;
  }
  else if (0x7fff < iVar3) {
    iVar3 = 0x7fff;
  }
  dnsi_w = (word)iVar3;
  if ((uint)minmx_w < (uint)mifab_w) {
    if (0 < (short)dnsi_w) goto LAB_000ddbbc;
  }
  else if (0 < (short)dnsi_w) {
    B_nmax = '\0';
    goto LAB_000ddbbc;
  }
  B_nmax = '\x01';
LAB_000ddbbc:
  if (B_nmax == '\0') {
    iVar3 = (uint)(miist_w >> 9) - (uint)(mired1 >> 1);
    if (iVar3 < -0x80) {
      iVar3 = -0x80;
    }
    else if (0x7f < iVar3) {
      iVar3 = 0x7f;
    }
    minmxs = (byte)iVar3;
    iVar3 = (int)(char)minmxs - ((int)(uint)mifab_w >> 9);
    if (iVar3 < -0x80) {
      iVar3 = -0x80;
    }
    else if (0x7f < iVar3) {
      iVar3 = 0x7f;
    }
    inmax = (byte)iVar3;
    dmnmxi_w = (word)((int)(char)inmax << 8);
    minmx_w = (ushort)MDIMX << 8;
  }
  else {
    uVar2 = (int)(short)dnsi_w * (uint)DAT_003f9bd9 * 0x100;
    local_18 = (short)(uVar2 >> 0x10);
    dmnmxp_w = FUN_000a7b80((int)local_18,uVar2 & 0xffff,800);
    if (minmx_w != 0) {
      dmnmxi_w = FUN_000a7c48((uint)DAT_003f9bda << 8,(int)(short)dmnmxp_w,(int)(short)dmnmxi_w);
    }
    iVar3 = (int)(short)dmnmxp_w + (int)(short)dmnmxi_w;
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    iVar3 = (int)(short)iVar3 + (uint)(mifab_w >> 1);
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    minmxb_w = (word)iVar3;
    if ((short)minmxb_w < 0) {
      minmx_w = 0;
    }
    else if ((int)((uint)MDIMX << 7) < (int)(short)minmxb_w) {
      minmx_w = (ushort)MDIMX << 8;
    }
    else {
      minmx_w = minmxb_w * 2;
    }
  }
  return;
}

