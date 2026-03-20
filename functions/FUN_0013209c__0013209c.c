/*
 * Program: n42.bin
 * Function: FUN_0013209c
 * Entry: 0013209c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013209c(void)

{
  char cVar1;
  ushort local_30;
  ushort local_2c;
  ushort local_28 [2];
  ushort local_24 [2];
  ushort *local_20;
  ushort local_1c [2];
  ushort *local_18;
  
  B_eculock = 1;
  DAT_003fb7f8 = 7;
  EwsNvBits = EwsNvBits & 0xdc;
  B_timerr = 0;
  B_recerr = 0;
  B_ptyerr = 0;
  B_wcerr = 0;
  B_kwperr = 0;
  B_eeperr = 0;
  B_eep2err = 0;
  B_ramerr = '\0';
  B_inistw = 0;
  B_resstw = 0;
  B_read_active = 0;
  B_write_active = 0;
  rec_fctr = 0;
  pty_fctr = 0;
  wc_fctr = 0;
  _tweiter = 0x32;
  _ttimout = 1000;
  DAT_003fb7f5 = 5;
  DAT_003fb7f6 = 4;
  DAT_003fb816 = 0;
  _DAT_003fb814 = 0;
  DAT_003fb817 = 0;
  pm_fre = 0;
  pm_mod = 0;
  DAT_003fb7f0 = 0;
  pm_ta = 0;
  pm_td = 0;
  FUN_00127820();
  if (B_eepwf != '\0') {
    _twuerg = 0x46;
    EwsNvBits = EwsNvBits & 0xe3;
    DAT_003fe976 = '<';
    pm_fre = 0x72;
  }
  cVar1 = FUN_00127be8();
  if (cVar1 == '\0') {
    FUN_00127fb0();
    local_30 = _B_bkwca & 0xdffd | 0x2002;
    local_28[0] = local_30;
    local_20 = local_28;
    local_24[0] = local_30;
    func_0xff222958(0xc0,local_24);
    if ((EwsNvBits >> 3 & 1) == 0) {
      FUN_00127820();
    }
    else {
      if (B_ramerr != '\0') {
        FUN_00127820();
      }
      if (DAT_003fe976 != -0x3d) {
        EwsNvBits = EwsNvBits | 2;
      }
    }
  }
  else {
    if (cVar1 == '\x01') {
      local_2c = _Z_wfs & 0xf0fe | 0x101;
    }
    else {
      local_2c = _Z_wfs & 0xf0fe | 0x201;
    }
    local_2c = local_2c & 0xdffd | 0x2002;
    local_28[0] = local_2c;
    local_18 = local_28;
    local_1c[0] = local_2c;
    func_0xff222958(0xc1,local_1c);
  }
  AS_wp = 0;
  return;
}

