/*
 * Program: n42.bin
 * Function: FUN_001970d4
 * Entry: 001970d4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001970d4(void)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = _ps_w;
  if (DAT_001c6bb0 != '\0') {
    uVar1 = _DAT_001c6baa;
  }
  uVar3 = (uint)uVar1 * (uint)vsfpses >> 7;
  if (0xffff < uVar3) {
    uVar3 = 0xffff;
  }
  pses_w = (word)uVar3;
  dpus_w = dpsddss_w;
  sVar2 = func_0xff218abc(&FRLFSDP,(int)(short)dpsddss_w);
  iVar4 = ((uint)((sVar2 + 0x8000) * ((short)fhkrst_w + 0x8000)) >> 0xf) - 0x8000;
  if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  frlfsdp_w = (word)iVar4;
  if (B_stend != '\0') {
    krkte_w = func_0xff2189bc(&KLKRKTE,rk_w);
    frkte_w = (word)((uint)krkte_w * ((short)frlfsdp_w + 0x8000) >> 0xe);
  }
  return;
}

