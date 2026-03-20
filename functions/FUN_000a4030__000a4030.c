/*
 * Program: n42.bin
 * Function: FUN_000a4030
 * Entry: 000a4030
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000a4030(undefined2 param_1,undefined *param_2)

{
  undefined4 uVar1;
  uint in_MSR;
  
  if (DAT_003fa2e6 == '\x01') {
    *param_2 = 0x10;
    uVar1 = 0;
  }
  else {
    if (_DAT_003fa10c == 0) {
      _DAT_003fa110 = in_MSR >> 0xf & 1;
    }
    DAT_003fa2e6 = '\x01';
    _DAT_003fa2e4 = param_1;
    *param_2 = 0;
    uVar1 = 1;
  }
  return uVar1;
}

