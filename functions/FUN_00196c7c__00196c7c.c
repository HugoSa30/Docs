/*
 * Program: n42.bin
 * Function: FUN_00196c7c
 * Entry: 00196c7c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00196c7c(void)

{
  short sVar1;
  uint uVar2;
  short sVar4;
  int iVar3;
  
  if (B_nokatfz == '\0') {
    B_cotrim = 0;
    rkaco_w = 0;
  }
  else {
    co_pot_w = (word)(char)co_pot;
    if (((B_ll == '\0') || (tmot < DAT_001c5cd4)) || ((DAT_003fdfc1 & 1) != 0)) {
      B_cotrim = 0;
    }
    else {
      B_cotrim = 1;
    }
    sVar1 = func_0xff218abc(&DAT_001c5cda,(int)(short)co_pot_w);
    sVar4 = _DAT_001c5cd8;
    if ((sVar1 <= _DAT_001c5cd8) && (sVar4 = sVar1, sVar1 < _DAT_001c5cd6)) {
      sVar4 = _DAT_001c5cd6;
    }
    if (nmot < NRKAB) {
      if ((NRKAB == 0) || (uVar2 = ((uint)N0 << 8) / (uint)NRKAB, 0xffff < uVar2)) {
        uVar2 = 0xffff;
      }
    }
    else if ((nmot == 0) || (uVar2 = ((uint)N0 << 8) / (uint)nmot, 0xffff < uVar2)) {
      uVar2 = 0xffff;
    }
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    iVar3 = (int)((int)sVar4 * (uVar2 & 0xff) * 0x100) >> 0x10;
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    rkaco_w = (word)iVar3;
  }
  return;
}

