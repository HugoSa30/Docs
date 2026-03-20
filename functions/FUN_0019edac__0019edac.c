/*
 * Program: n42.bin
 * Function: FUN_0019edac
 * Entry: 0019edac
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019edac(void)

{
  char cVar1;
  undefined uStack_18;
  byte local_17;
  
  if (B_dcdisfr != '\0') {
    if (((int)(uint)BGDVEintbits >> 3 & 1U) == 0) {
      tdknach_w = tdknach_w + 1;
      if (_DAT_001c1b74 <= tdknach_w) {
        BGDVEintbits = BGDVEintbits | 8;
      }
      goto LAB_0019ee24;
    }
  }
  tdknach_w = 0;
LAB_0019ee24:
  if (DAT_003faaac == '\0') {
    if ((BGDVEintbits & 1) == 1) {
      local_17 = local_17 & 0xfe | 1;
    }
    else {
      local_17 = local_17 & 0xfe;
    }
    if (((int)(uint)BGDVEintbits >> 2 & 1U) == 1) {
      local_17 = local_17 & 0xfd | 2;
    }
    else {
      local_17 = local_17 & 0xfd;
    }
    if (((int)(uint)BGDVEintbits >> 1 & 1U) == 1) {
      local_17 = local_17 & 0xfb | 4;
    }
    else {
      local_17 = local_17 & 0xfb;
    }
    cVar1 = func_0xff2102d0(2,2,2,0,&uStack_18,0);
    if (((((cVar1 == '\x02') && (cVar1 = func_0xff2102d0(2,4,2,0,&udknlp1r,0), cVar1 == '\x02')) &&
         (cVar1 = func_0xff2102d0(2,6,2,0,&udkp1asr_w,0), cVar1 == '\x02')) &&
        ((cVar1 = func_0xff2102d0(2,8,2,0,&udkp1vor,0), cVar1 == '\x02' &&
         (cVar1 = func_0xff2102d0(2,10,2,0,&udkp1vvr,0), cVar1 == '\x02')))) &&
       ((cVar1 = func_0xff2102d0(2,0xc,2,0,&wdknlpr_w,0), cVar1 == '\x02' &&
        ((cVar1 = func_0xff2102d0(2,0xe,2,0,&udknlp2r,0), cVar1 == '\x02' &&
         (cVar1 = func_0xff2102d0(2,0x10,2,0,&udkp2asr_w,0), cVar1 == '\x02')))))) {
      DAT_003faaac = '\x01';
    }
    else {
      DAT_003faaac = '\0';
      B_eemrdy = 0;
    }
  }
  return;
}

