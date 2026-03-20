/*
 * Program: n42.bin
 * Function: FUN_000a3938
 * Entry: 000a3938
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000a3938(int param_1,undefined *param_2,undefined *param_3)

{
  undefined4 uVar1;
  uint in_MSR;
  
  uVar1 = 1;
  if (param_1 < 0x80) {
    if (_DAT_003fa10c == 0) {
      _DAT_003fa110 = in_MSR >> 0xf & 1;
    }
    _DAT_003fa10c = _DAT_003fa10c + 1;
    (&UNK_003fa5b1)[param_1 * 2] = *param_2;
    (&UNK_003fa5b2)[param_1 * 2] = (&UNK_003fa5b2)[param_1 * 2] & 0xdb | 2;
    _DAT_003fa10c = _DAT_003fa10c + -1;
  }
  else {
    uVar1 = 0;
    *param_3 = 5;
  }
  return uVar1;
}

