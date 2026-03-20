/*
 * Program: n42.bin
 * Function: FUN_000f7530
 * Entry: 000f7530
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f7530(uint param_1,uint param_2,uint param_3)

{
  if (_DAT_003fc664 == 1) {
    _DAT_003fb8e0 = _DAT_003fc660;
    _DAT_003fb8e4 = _DAT_003fc664;
  }
  else {
    if (_DAT_003fb8e0 >> 0x18 != param_1) {
      return 0;
    }
    if ((_DAT_003fb8e0 >> 0x10 & 0xff) != param_2) {
      return 0;
    }
    if ((_DAT_003fb8e0 >> 8 & 0xff) != param_3) {
      return 0;
    }
  }
  return 1;
}

