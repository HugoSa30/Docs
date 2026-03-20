/*
 * Program: n42.bin
 * Function: FUN_00168df4
 * Entry: 00168df4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00168df4(void)

{
  ushort local_30;
  ushort local_2c [2];
  ushort local_28 [2];
  ushort *local_24;
  ushort local_20 [2];
  ushort *local_1c;
  
  local_30 = _sfpsue;
  if (DAT_001c1d90 == '\0') {
    local_30 = _sfpsue & 0xd0fc | 0x2002;
    local_2c[0] = local_30;
    local_24 = local_2c;
    local_28[0] = local_30;
    func_0xff222958(0xa8,local_28);
  }
  else {
    B_disaok = ES_sfdisa == '\0' | B_disaok & 0xfc;
    if (DI_SCHALT == '\0') {
      if ((short)Disaaus_w < _TVRDISAMN) {
        tdsuemnctr = 0;
      }
      else if (tdsuemnctr < DAT_001c1d93) {
        tdsuemnctr = tdsuemnctr + 1;
      }
      if (_TVRDISAMX < (short)Disaaus_w) {
        tdsuemxctr = 0;
      }
      else if (tdsuemxctr < DAT_001c1d94) {
        tdsuemxctr = tdsuemxctr + 1;
      }
    }
    else {
      if (Ditv_aus < _DAT_001c1d8e) {
        tdsuemnctr = 0;
      }
      else if (tdsuemnctr < DAT_001c1d93) {
        tdsuemnctr = tdsuemnctr + 1;
      }
      if (_TVSDISAMX < Ditv_aus) {
        tdsuemxctr = 0;
      }
      else if (tdsuemxctr < DAT_001c1d94) {
        tdsuemxctr = tdsuemxctr + 1;
      }
    }
    if ((DAT_001c1d93 <= tdsuemnctr) && (DAT_001c1d94 <= tdsuemxctr)) {
      B_disaok = B_disaok | 2;
    }
    if (DAT_001c1d91 <= tdsuectr) {
      local_30 = _sfpsue & 0xd0fc | 0x2803;
    }
    if (DAT_001c1d92 <= tdsuehctr) {
      local_30 = local_30 & 0xd0fc | 0x2002;
    }
    if ((B_disaok & 1) == 0) {
      tdsuectr = 0;
    }
    else if (tdsuectr < DAT_001c1d91) {
      tdsuectr = tdsuectr + 1;
    }
    if (((B_disaok & 1) == 0) && ((B_disaok & 2) != 0)) {
      if (tdsuehctr < DAT_001c1d92) {
        tdsuehctr = tdsuehctr + 1;
      }
    }
    else {
      tdsuehctr = 0;
    }
    local_2c[0] = local_30;
    local_1c = local_2c;
    local_20[0] = local_30;
    func_0xff222958(0xa8,local_20);
  }
  return;
}

