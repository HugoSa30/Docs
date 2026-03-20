/*
 * Program: n42.bin
 * Function: FUN_000e0900
 * Entry: 000e0900
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000e0900(uint param_1)

{
  undefined4 uVar1;
  
  if (~_DAT_003fa684 == _DAT_003fa680) {
    if (_DAT_003fa680 == 0) {
      _DAT_003fa684 = ~param_1;
      _DAT_003fa680 = param_1;
      (&UNK_003fde63)[param_1 * 2] = (&UNK_003fde63)[param_1 * 2] & 0x7f | 0x80;
      FUN_000ad804();
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

