/*
 * Program: n42.bin
 * Function: FUN_000a45bc
 * Entry: 000a45bc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000a45bc(int param_1)

{
  param_1 = param_1 * 8;
  if (*(char *)(param_1 + 0x173ec) == '\0') {
    _DAT_00305018 = _DAT_00305018 & 0xfe00 | (ushort)*(byte *)(param_1 + 0x173e9);
  }
  else {
    _DAT_00305018 = _DAT_00305018 & 0xff00 | (ushort)*(byte *)(param_1 + 0x173e9) | 0x100;
  }
  if (*(char *)(param_1 + 0x173ed) == '\0') {
    _DAT_00305018 = _DAT_00305018 & 0xfdff;
  }
  else {
    _DAT_00305018 = _DAT_00305018 | 0x200;
  }
  if (*(char *)(param_1 + 0x173ea) != '\0') {
    _DAT_0030501a = _DAT_0030501a & 0xff00 | (ushort)*(byte *)(param_1 + 0x173eb);
  }
  if (*(char *)(param_1 + 0x173ee) != '\0') {
    _DAT_0030501a = _DAT_0030501a & 0x80ff | (ushort)((*(byte *)(param_1 + 0x173ef) & 0x7f) << 8);
  }
  return 1;
}

