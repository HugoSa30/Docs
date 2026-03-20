/*
 * Program: n42.bin
 * Function: FUN_000a367c
 * Entry: 000a367c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000a367c(int param_1,int param_2,undefined2 *param_3)

{
  uint in_MSR;
  
  if (param_1 == 0) {
    if (_DAT_003fa10c == 0) {
      _DAT_003fa110 = in_MSR >> 0xf & 1;
    }
    DAT_003fa25a = 0;
    DAT_003fa258 = 0;
    DAT_003fa259 = 0;
    DAT_003fa260 = 0;
    DAT_003fa2e2 = 0;
    FUN_000a46a8();
  }
  else if (param_1 != 1) {
    *param_3 = 1;
  }
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  if (param_2 == 0) {
    DAT_003fa25e = 1;
  }
  else if (param_2 == 1) {
    DAT_003fa25e = 0;
  }
  else if (param_2 == 2) {
    DAT_003fa25b = 1;
  }
  else if (param_2 == 3) {
    DAT_003fa25b = 0;
  }
  else {
    DAT_003fa25e = 0;
    DAT_003fa25b = 0;
  }
  return 1;
}

