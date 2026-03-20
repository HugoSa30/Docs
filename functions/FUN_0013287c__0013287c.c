/*
 * Program: n42.bin
 * Function: FUN_0013287c
 * Entry: 0013287c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00132bb4) */
/* WARNING: Removing unreachable block (ram,0x00132c38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013287c(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (((((uint)_udkp1asr_w < (uint)_DAT_001c1b88) ||
       ((uint)_DAT_001c1b86 + (uint)_DAT_001c1ba0 < (uint)_udkp1asr_w)) ||
      ((int)(uint)_udkp2asr_w < (int)((uint)_DAT_001c1b9a - (uint)_DAT_001c1ba0))) ||
     ((uint)_DAT_001c1b98 < (uint)_udkp2asr_w)) {
    BGDVEintbits = BGDVEintbits & 0xfc;
    _udkp1asr_w = _UDKP1AURI;
    _udkp2asr_w = _UDKP2AURI;
    udkp1as_w = _UDKP1AURI;
    udkp1a = (byte)((int)(uint)_UDKP1AURI >> 4);
    _udkp2as_w = _UDKP2AURI;
    udkp2a = (byte)((int)(uint)_UDKP2AURI >> 4);
    lrnstat = 0x10;
  }
  if ((((short)udkp1vo_w < _DAT_001c1b92) || (_DAT_001c1b90 < (short)udkp1vo_w)) ||
     ((udkp1vv_w < _DAT_001c1b96 || (_DAT_001c1b94 < udkp1vv_w)))) {
    BGDVEintbits = BGDVEintbits & 0xfd;
    udkp1vo_w = 0;
    udkp1vv_w = _DAT_001c1b8e;
  }
  dkpstg_w = func_0xff217b40(0x800,0,_DAT_001c1b8c);
  uVar3 = (uint)udknlp1 - (uint)udkp1as_w;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0xffff < (int)uVar3) {
    uVar3 = 0xffff;
  }
  uVar3 = (uVar3 & 0xffff) * (uint)dkpstg_w >> 0xb;
  uVar1 = (uint)wdknlp_w;
  if (uVar1 < (uVar3 & 0xffff)) {
    uVar3 = uVar3 - uVar1;
  }
  else {
    uVar3 = uVar1 - uVar3;
  }
  if (((uVar1 < _WDKNLPMI) || (_DAT_001c1bae < uVar1)) || ((uint)_DAT_001c1bb2 < (uVar3 & 0xffff)))
  {
    BGDVEintbits = BGDVEintbits & 0xfd;
  }
  if (((int)(uint)BGDVEintbits >> 1 & 1U) == 0) {
    lrnstat = 0x10;
    wdknlp_w = _DAT_001c1bae;
    B_dveada = 1;
  }
  if ((udkp1vv_w == 0) || (uVar3 = (uint)_UPVGNENN / (uint)udkp1vv_w, 0xffff < uVar3)) {
    uVar3 = 0xffff;
  }
  iVar2 = uVar3 - DAT_001c1b67;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xffff < iVar2) {
    iVar2 = 0xffff;
  }
  udkp1sv = (byte)iVar2;
  udknlp1 = udkp1_w;
  udknlp2 = udkp2_w;
  if (((int)(uint)BGDVEintbits >> 3 & 1U) == 0) {
    udknlp1 = _udknlp1r;
    udknlp2 = _udknlp2r;
  }
  else {
    uVar3 = (uint)_udknlp1r - (uint)_DUDKNLPU;
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    else if (0xffff < (int)uVar3) {
      uVar3 = 0xffff;
    }
    if ((uVar3 & 0xffff) <= (uint)udkp1_w) {
      uVar3 = (uint)_udknlp1r + (uint)_DUDKNLPO;
      if (0xffff < uVar3) {
        uVar3 = 0xffff;
      }
      if ((uint)udkp1_w <= (uVar3 & 0xffff)) {
        uVar3 = (uint)_udknlp2r - (uint)_DUDKNLPO;
        if ((int)uVar3 < 0) {
          uVar3 = 0;
        }
        else if (0xffff < (int)uVar3) {
          uVar3 = 0xffff;
        }
        if ((uVar3 & 0xffff) <= (uint)udkp2_w) {
          uVar3 = (uint)_udknlp2r + (uint)_DUDKNLPU;
          if (0xffff < uVar3) {
            uVar3 = 0xffff;
          }
          if ((uint)udkp2_w <= (uVar3 & 0xffff)) goto LAB_00132c9c;
        }
      }
    }
    B_nlpreq = 1;
    wdknlp_w = _DAT_001c1bae;
    B_dveada = 1;
  }
LAB_00132c9c:
  BGDVEintbits = BGDVEintbits & 0xf7;
  return;
}

