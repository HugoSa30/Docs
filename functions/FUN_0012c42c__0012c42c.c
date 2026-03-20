/*
 * Program: n42.bin
 * Function: FUN_0012c42c
 * Entry: 0012c42c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012c42c(void)

{
  uint uVar1;
  uint uVar2;
  
  if (B_eepwf != '\0') {
    uVar2 = func_0xff210928(2,0,0);
    uVar1 = uVar2 & 0xff;
    if ((((((int)uVar1 >> 5 & 1U) == 0) || ((uVar2 & 3) != 3)) && (((int)uVar1 >> 6 & 1U) == 0)) &&
       (((int)uVar1 >> 3 & 1U) != 0)) {
      _udknlp1r = _DAT_003fe75b;
      _udknlp2r = _DAT_003fe765;
      _udkp1asr_w = _DAT_003fe75d;
      _udkp1vor = _DAT_003fe75f;
      _udkp1vvr = _DAT_003fe761;
      _udkp2asr_w = _DAT_003fe767;
      _wdknlpr_w = _DAT_003fe763;
      if ((DAT_003fe75a & 1) == 0) {
        BGDVEintbits = BGDVEintbits & 0xfe;
      }
      else {
        BGDVEintbits = BGDVEintbits | 1;
      }
      if ((DAT_003fe75a >> 2 & 1) == 0) {
        BGDVEintbits = BGDVEintbits & 0xfd;
      }
      else {
        BGDVEintbits = BGDVEintbits | 2;
      }
      lrnstat = 0x10;
    }
    else {
      func_0xff21be50();
    }
  }
  DAT_003faaac = 0;
  udkp1as_w = _udkp1asr_w;
  udkp1a = (byte)((int)(uint)_udkp1asr_w >> 4);
  _udkp2as_w = _udkp2asr_w;
  udkp2a = (byte)((int)(uint)_udkp2asr_w >> 4);
  udkp1vo_w = _udkp1vor;
  udkp1vv_w = _udkp1vvr;
  wdknlp_w = _wdknlpr_w;
  udknlp1 = _udknlp1r;
  BGDVEintbits = BGDVEintbits | 4;
  return;
}

