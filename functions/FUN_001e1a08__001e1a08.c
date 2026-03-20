/*
 * Program: n42.bin
 * Function: FUN_001e1a08
 * Entry: 001e1a08
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e1a08(int param_1)

{
  _DAT_0030502a = _DAT_0030502a & 0xe3ff;
  if (param_1 == 0) {
    _DAT_0030500a = _DAT_0030500a & 0xfffb;
    _DAT_00305028 = _DAT_00305028 & 0xffdf;
  }
  else {
    _DAT_0030500a = _DAT_0030500a | 4;
    _DAT_00305028 = _DAT_00305028 | 0x20;
  }
  DAT_003fb837 = 0;
  _DAT_003fb838 = &DAT_003fbad6;
  _DAT_003fb83c = &DAT_003fbad6;
  return;
}

