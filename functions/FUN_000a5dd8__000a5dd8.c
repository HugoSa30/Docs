/*
 * Program: n42.bin
 * Function: FUN_000a5dd8
 * Entry: 000a5dd8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a5dd8(uint param_1,int param_2)

{
  if ((param_1 & 0xff) < 0x10) {
    _DAT_00306c04 = _DAT_00306c04 & ~(ushort)(1 << (param_1 & 0x3f));
    if (param_2 != 0) {
      _DAT_00306c04 = _DAT_00306c04 | (ushort)(1 << (param_1 & 0x3f));
    }
  }
  else {
    _DAT_00306c44 = _DAT_00306c44 & ~(ushort)(1 << ((param_1 & 0xff) + 0xfff0 & 0x3f));
    if (param_2 != 0) {
      _DAT_00306c44 = _DAT_00306c44 | (ushort)(1 << ((param_1 & 0xff) + 0xfff0 & 0x3f));
    }
  }
  return;
}

