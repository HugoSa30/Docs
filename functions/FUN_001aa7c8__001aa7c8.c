/*
 * Program: n42.bin
 * Function: FUN_001aa7c8
 * Entry: 001aa7c8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001aa7c8(void)

{
  uint uVar1;
  uint in_MSR;
  
  uVar1 = 0;
  if (DAT_00016fc8 != 0) {
    do {
      if (_DAT_003fa10c == 0) {
        _DAT_003fa110 = in_MSR >> 0xf & 1;
      }
      _DAT_003fa10c = _DAT_003fa10c + 1;
      (**(code **)(uVar1 * 0x20 + 0x16f74))(*(undefined4 *)(uVar1 * 0x20 + 0x16f78));
      _DAT_003fa10c = _DAT_003fa10c + -1;
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < DAT_00016fc8);
  }
  return;
}

