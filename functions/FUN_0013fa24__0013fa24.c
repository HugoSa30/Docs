/*
 * Program: n42.bin
 * Function: FUN_0013fa24
 * Entry: 0013fa24
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013fa24(void)

{
  ushort local_18;
  ushort local_14 [2];
  ushort local_10 [2];
  ushort *local_c;
  
  local_18 = _DAT_003fdf82;
  if (B_mibeg == '\0') {
    _DAT_003fb3d6 = 0;
    DAT_003fc123 = 0;
  }
  else if (_DAT_003fb3d6 < _DAT_001d230e) {
    _DAT_003fb3d6 = _DAT_003fb3d6 + 1;
    DAT_003fc123 = 0;
    local_18 = _DAT_003fdf82 & 0xf0fe;
  }
  else {
    local_18 = _DAT_003fdf82 & 0xd0fc | 0x2103;
    DAT_003fc123 = 1;
  }
  if (B_stend == '\0') {
    _DAT_003fb3d8 = 0;
  }
  else if (_DAT_003fb3d8 < _DAT_001d2310) {
    _DAT_003fb3d8 = _DAT_003fb3d8 + 1;
  }
  else {
    local_18 = local_18 & 0xdffd | 0x2002;
  }
  local_14[0] = local_18;
  local_c = local_14;
  local_10[0] = local_18;
  func_0xff222958(0x90,local_10);
  return;
}

