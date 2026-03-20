/*
 * Program: n42.bin
 * Function: FUN_000eeff4
 * Entry: 000eeff4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000ef2c0) */
/* WARNING: Removing unreachable block (ram,0x000ef3a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eeff4(void)

{
  ushort uVar2;
  uint uVar1;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (CWLRARL == '\0') {
    if (NRKAB < nmot) {
      if ((nmot == 0) || (uVar3 = ((uint)N0 << 7) / (uint)nmot, 0xffff < uVar3)) {
        uVar3 = 0xffff;
      }
    }
    else if ((NRKAB == 0) || (uVar3 = ((uint)N0 << 7) / (uint)NRKAB, 0xffff < uVar3)) {
      uVar3 = 0xffff;
    }
  }
  else {
    uVar3 = (uint)_rl_w;
    if (_RLLRAMN < uVar3) {
      if ((uVar3 == 0) || (uVar3 = ((uint)_RL0 << 7) / uVar3, 0xffff < uVar3)) {
        uVar3 = 0xffff;
      }
    }
    else if ((_RLLRAMN == 0) || (uVar3 = ((uint)_RL0 << 7) / (uint)_RLLRAMN, 0xffff < uVar3)) {
      uVar3 = 0xffff;
    }
  }
  if (0xff < (uVar3 & 0xffff)) {
    uVar3 = 0xff;
  }
  iVar4 = (int)((int)(short)rkat_w * (uVar3 & 0xffff)) >> 7;
  if (iVar4 < 0x8000) {
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
  }
  else {
    iVar4 = 0x7fff;
  }
  iVar4 = (int)(short)iVar4 + (int)(short)rkaz_w;
  if (iVar4 < -0x8000) {
    iVar4 = -0x8000;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  rka_w = (word)iVar4;
  uVar5 = (uint)_ml_w - (uint)_MLO2;
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (0xffff < (int)uVar5) {
    uVar5 = 0xffff;
  }
  uVar6 = (uint)_MLU4 - (uint)_MLO2;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  else if (0xffff < (int)uVar6) {
    uVar6 = 0xffff;
  }
  if ((uVar5 & 0xffff) < (uVar6 & 0xffff)) {
    uVar2 = FUN_000a7b40(uVar5 & 0xffff,0);
  }
  else {
    uVar2 = 0xffff;
  }
  uVar5 = 0xffff - uVar2;
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (0xffff < (int)uVar5) {
    uVar5 = 0xffff;
  }
  uVar6 = FUN_000b17f4(uVar2,frao_w);
  uVar1 = FUN_000b17f4(uVar5 & 0xffff,frau_w);
  uVar6 = (uVar6 & 0xffff) + (uVar1 & 0xffff);
  if (0xffff < uVar6) {
    uVar6 = 0xffff;
  }
  fra_w = FUN_000b1800(uVar6 & 0xffff,frat_w);
  iVar4 = (int)((int)(short)rkat2_w * (uVar3 & 0xffff)) >> 7;
  if (iVar4 < 0x8000) {
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
  }
  else {
    iVar4 = 0x7fff;
  }
  iVar4 = (int)(short)iVar4 + (int)(short)rkaz2_w;
  if (iVar4 < -0x8000) {
    iVar4 = -0x8000;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  rka2_w = (word)iVar4;
  uVar3 = FUN_000b17f4(uVar2,frao2_w);
  uVar5 = FUN_000b17f4(uVar5 & 0xffff,frau2_w);
  uVar3 = (uVar3 & 0xffff) + (uVar5 & 0xffff);
  if (0xffff < uVar3) {
    uVar3 = 0xffff;
  }
  fra2_w = FUN_000b1800(uVar3 & 0xffff,frat2_w);
  return;
}

