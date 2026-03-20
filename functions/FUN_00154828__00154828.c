/*
 * Program: n42.bin
 * Function: FUN_00154828
 * Entry: 00154828
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00154828(void)

{
  ushort local_20;
  ushort local_1c [2];
  ushort local_18 [2];
  ushort *local_14;
  
  local_20 = _DAT_003fde7c;
  if (((DAT_003fa5e4 >> 1 & 1) == 0) || ((DAT_003fa5e4 >> 3 & 1) == 0)) {
    _DAT_003fa5e0 = _DAT_001c0ec6;
  }
  else if (DAT_001c0ea1 < ub) {
    if (_DAT_003fa5e0 == 0) {
      _DAT_003fa5e0 = _DAT_001c0ec6;
      local_20 = _DAT_003fde7c & 0xf0fe;
      DAT_003fa5e4 = DAT_003fa5e4 & 0xf0;
    }
    else {
      _DAT_003fa5e0 = _DAT_003fa5e0 + -1;
    }
  }
  else {
    _DAT_003fa5e0 = _DAT_001c0ec6;
    DAT_003fa5e4 = DAT_003fa5e4 & 0xf5;
  }
  if (((DAT_003fa5e4 & 1) != 0) || ((DAT_003fa5e4 >> 2 & 1) != 0)) {
    local_20 = local_20 & 0xd0fc | 0x2403;
    DAT_003fa5e4 = DAT_003fa5e4 & 0xfa;
  }
  if ((DAT_003fa5e4 >> 4 & 1) != 0) {
    local_20 = local_20 & 0xdffd | 0x2002;
    DAT_003fa5e4 = DAT_003fa5e4 & 0xef;
  }
  local_1c[0] = local_20;
  local_14 = local_1c;
  local_18[0] = local_20;
  func_0xff222958(0xd,local_18);
  return;
}

