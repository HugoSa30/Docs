/*
 * Program: n42.bin
 * Function: FUN_000dc9b0
 * Entry: 000dc9b0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dc9b0(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (mimax_w < mifa_w) {
    mifab_w = mimax_w;
  }
  else {
    mifab_w = mifa_w;
  }
  if ((uint)migs_w < (uint)DAT_005b9266) {
    DAT_005b95c6 = migs_w;
  }
  else {
    DAT_005b95c6 = DAT_005b9266;
  }
  if (nmot < NASNOT) {
    if ((uint)DAT_005b95c6 < (uint)MDIMX << 8) {
      DAT_005b95c8 = (ushort)MDIMX << 8;
    }
    else {
      DAT_005b95c8 = DAT_005b95c6;
    }
  }
  else {
    DAT_005b95c8 = DAT_005b95c6;
  }
  DAT_005b95c4 = mibgr_w;
  if (mifa_w < mibgr_w) {
    DAT_005b95c4 = mifa_w;
  }
  if (minmx_w < DAT_005b95c4) {
    DAT_005b95c4 = minmx_w;
  }
  if (DAT_005b95c8 < DAT_005b95c4) {
    DAT_005b95c4 = DAT_005b95c8;
  }
  if (((DAT_001c9945 & 1) != 0) && (mivmx_w < DAT_005b95c4)) {
    DAT_005b95c4 = mivmx_w;
  }
  misolv_w = DAT_005b95c4;
  if (DAT_005b95c4 < mimsr_w) {
    misolv_w = mimsr_w;
  }
  uVar4 = (uint)misolv_w;
  DAT_003fc124 = DAT_005b95c4 < mimsr_w;
  if ((uVar4 < mifab_w) || (DAT_003fc124)) {
    B_mdein = 1;
  }
  else {
    B_mdein = 0;
  }
  iVar3 = (uint)(miszul_w >> 1) - (uint)(mizsolv_w >> 1);
  if (iVar3 < -0x8000) {
    iVar3 = -0x8000;
  }
  else if (0x7fff < iVar3) {
    iVar3 = 0x7fff;
  }
  DAT_005b95c2 = (short)iVar3;
  if (!DAT_003fc124) {
    uVar2 = (uint)miszul_w - (uint)_DAT_001c9956;
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    else if (0xffff < (int)uVar2) {
      uVar2 = 0xffff;
    }
    if ((uVar2 & 0xffff) < uVar4) {
      if ((uint)miszul_w < (uint)mizsolv_w) {
        B_mibeg = '\x01';
      }
      goto LAB_000dcc40;
    }
  }
  B_mibeg = '\0';
LAB_000dcc40:
  if (B_mibeg == '\0') {
    _misol_w = misolv_w;
  }
  else {
    _misol_w = miszul_w;
  }
  if ((B_llrein == '\0') ||
     ((((DAT_003fc11e == '\0' && ((B_fil == '\0' || ((DAT_001c9944 & 0x20) == 0)))) &&
       ((B_dash == '\0' || ((DAT_001c9944 & 0x40) == 0)))) &&
      (((DAT_001c9944 & 0x80) == 0 || (_misol_w == mifa_w)))))) {
    B_zwvz = 0;
  }
  else {
    B_zwvz = 1;
  }
  if (((uint)miasrl_w < (uint)mifab_w) || (uVar4 == DAT_005b9266)) {
    DAT_003fc120 = 1;
  }
  else {
    DAT_003fc120 = 0;
  }
  if (((((((((B_kh == '\0') || ((DAT_003fb3d4 & 0x40) == 0)) || ((DAT_001c9944 & 1) == 0)) &&
          ((B_kw == '\0' || ((DAT_001c9944 & 2) == 0)))) &&
         (((DAT_001c9943 & 1) == 0 || (mitebg_w != milres_w)))) &&
        (((DAT_001c9942 & 1) == 0 || (rlsol_w != DAT_005b93a6)))) &&
       ((B_lsd == '\0' ||
        (((DAT_001c9944 & 4) == 0 || (((DAT_003fb3d4 & 1) != 0 && ((DAT_003fb3d4 & 2) != 0))))))))
      && ((B_kuppl == '\0' ||
          (((DAT_001c9944 & 8) == 0 || (((DAT_003fb3d4 & 4) != 0 && ((DAT_003fb3d4 & 8) != 0))))))))
     && ((B_ll == '\0' ||
         (((DAT_001c9944 & 0x10) == 0 ||
          (((DAT_003fb3d4 & 0x10) != 0 && ((DAT_003fb3d4 & 0x20) != 0)))))))) {
    DAT_003fc11f = 0;
    bVar1 = false;
  }
  else {
    DAT_003fc11f = 1;
    bVar1 = true;
  }
  if ((bVar1) || (dmrkt_w != 0)) {
    DAT_003fc11e = 1;
  }
  else {
    DAT_003fc11e = 0;
  }
  return;
}

