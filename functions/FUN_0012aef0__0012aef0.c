/*
 * Program: n42.bin
 * Function: FUN_0012aef0
 * Entry: 0012aef0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012aef0(void)

{
  float fVar1;
  uint uVar2;
  
  if (B_mdstop == 0) {
    convert_f = (dword)(float)((double)CONCAT44(0x43300000,0x3c / dmdsegl_w ^ 0x80000000) -
                              (double)_DAT_0001bd1c);
    z2_f = (dword)(_DAT_0001bd20 / ((float)convert_f * (float)convert_f));
    convert1_f = (dword)((float)((double)CONCAT44(0x43300000,(uint)_DAT_001c116e) -
                                (double)_DAT_0001bd24) * _DAT_0001bd28);
    _tsmxkomp_f = _DAT_0001bd2c / ((float)convert1_f * (float)convert_f);
    convert2_f = (dword)((float)((double)CONCAT44(0x43300000,(uint)_DAT_001c116c) -
                                (double)_DAT_0001bd24) * _DAT_0001bd28);
    fVar1 = _DAT_0001bd2c / ((float)convert2_f * (float)convert_f);
    uVar2 = 0;
    _tskll_f = fVar1;
    do {
      *(float *)(&UNK_003fa720 + uVar2 * 4) = fVar1;
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 0x10);
    tskiwri = 0;
    tskiy = 5;
    tskiym1 = 4;
    tskiyp1 = 6;
    tskiyp2 = 7;
    tskiyp3 = 0;
    tskdelay = 5;
    tskinmz2 = 4;
    tskinpz2 = 0;
    tskixmz = 4;
    tsklen = 7;
    tskinm2 = 1;
    tskinm1 = 2;
    tskin = 3;
    tskinp1 = 4;
    stimiread = 0;
    stimiwri = 5;
  }
  return;
}

