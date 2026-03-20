/*
 * Program: n42.bin
 * Function: FUN_000a3858
 * Entry: 000a3858
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_000a3858(undefined2 param_1,undefined *param_2)

{
  bool bVar1;
  uint in_MSR;
  
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  _DAT_003fa10c = _DAT_003fa10c + 1;
  bVar1 = DAT_003fa259 < 0x20;
  if (bVar1) {
    *(undefined2 *)(&UNK_003fa218 + (uint)DAT_003fa25a * 2) = param_1;
    DAT_003fa25a = DAT_003fa25a + 1 & 0x1f;
    DAT_003fa259 = DAT_003fa259 + 1;
  }
  else {
    *param_2 = 3;
  }
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return bVar1;
}

