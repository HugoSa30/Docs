/*
 * Program: n42.bin
 * Function: FUN_00128610
 * Entry: 00128610
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00128610(void)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  uint in_MSR;
  ushort local_20;
  ushort local_1c [2];
  ushort local_18 [2];
  ushort *local_14;
  
  if (_DAT_003fe968 == 0) {
    if ((DAT_00ffe1c8 == 'r') && (DAT_00ffe1c9 == -0x55)) {
      iVar3 = 0x80;
    }
    else if ((DAT_00ffe188 == 'r') && (DAT_00ffe189 == -0x55)) {
      iVar3 = 0x40;
    }
    else {
      iVar3 = 0;
    }
    if (_DAT_003fa10c == 0) {
      _DAT_003fa110 = in_MSR >> 0xf & 1;
    }
    _DAT_003fa10c = _DAT_003fa10c + 1;
    _DAT_003fb808 = _DAT_003fe96a;
    _DAT_003fb80a = _DAT_003fe96a;
    _DAT_003fb80c = _DAT_003fe96a;
    _DAT_003fb80e = 0;
    func_0xff20ba70(0x14,0,1);
    sVar1 = func_0xff21189c(&DAT_003fb808,iVar3 + 0xffe140,8);
    func_0xff20ba70(0x14,0,0);
    _DAT_003fa10c = _DAT_003fa10c + -1;
    if (sVar1 == 0) {
      FUN_001285b0();
      B_write_active = 1;
      DAT_003fb824 = 0;
      bVar2 = func_0xff2102d0(7,2,6,0,&DAT_003fb818,&DAT_005bb700);
      if (0x3f < bVar2) {
        DAT_005bb708 = 0x80;
      }
      DAT_003fb825 = 0;
      bVar2 = func_0xff2102d0(8,2,6,0,&DAT_003fb818,&DAT_005bb70c);
      if (0x3f < bVar2) {
        DAT_005bb714 = 0x80;
      }
    }
    else {
      local_20 = _Z_wfs & 0xf0fe | 0x101;
      local_1c[0] = local_20;
      local_14 = local_1c;
      local_18[0] = local_20;
      func_0xff222958(0xc1,local_18);
      B_inistw = 0;
    }
  }
  else {
    B_kwperr = 1;
    B_inistw = 0;
    EwsNvBits = EwsNvBits & 0xf3;
  }
  return;
}

