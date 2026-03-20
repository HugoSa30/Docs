/*
 * Program: n42.bin
 * Function: FUN_0009a180
 * Entry: 0009a180
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009a180(int param_1,int param_2)

{
  uint in_MSR;
  
  if (param_2 == 1) {
    if ((*(ushort *)(param_1 + 0x10) & 0x800) == 0) {
      return 0;
    }
    if (_DAT_003fa10c == 0) {
      _DAT_003fa110 = in_MSR >> 0xf & 1;
    }
    _DAT_003fa10c = _DAT_003fa10c + 1;
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xf7ff;
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    if ((*(ushort *)(param_1 + 0x10) & 0x400) == 0) {
      return 0;
    }
    if (_DAT_003fa10c == 0) {
      _DAT_003fa110 = in_MSR >> 0xf & 1;
    }
    _DAT_003fa10c = _DAT_003fa10c + 1;
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xfbff;
  }
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return 1;
}

