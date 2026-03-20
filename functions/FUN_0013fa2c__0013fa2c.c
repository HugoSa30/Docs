/*
 * Program: n42.bin
 * Function: FUN_0013fa2c
 * Entry: 0013fa2c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013fa2c(void)

{
  ushort param_11;
  ushort uStack0000000c;
  ushort uStack00000010;
  undefined *puStack00000014;
  
  param_11 = _DAT_003fdf82;
  if (B_mibeg == '\0') {
    _DAT_003fb3d6 = 0;
    DAT_003fc123 = 0;
  }
  else if (_DAT_003fb3d6 < _DAT_001d230e) {
    _DAT_003fb3d6 = _DAT_003fb3d6 + 1;
    DAT_003fc123 = 0;
    param_11 = _DAT_003fdf82 & 0xf0fe;
  }
  else {
    param_11 = _DAT_003fdf82 & 0xd0fc | 0x2103;
    DAT_003fc123 = 1;
  }
  if (B_stend == '\0') {
    _DAT_003fb3d8 = 0;
  }
  else if (_DAT_003fb3d8 < _DAT_001d2310) {
    _DAT_003fb3d8 = _DAT_003fb3d8 + 1;
  }
  else {
    param_11 = param_11 & 0xdffd | 0x2002;
  }
  uStack0000000c = param_11;
  puStack00000014 = (undefined *)&stack0x0000000c;
  uStack00000010 = param_11;
  func_0xff222958(0x90,&stack0x00000010);
  return;
}

