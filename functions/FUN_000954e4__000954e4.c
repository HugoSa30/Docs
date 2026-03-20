/*
 * Program: n42.bin
 * Function: FUN_000954e4
 * Entry: 000954e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000954e4(void)

{
  ushort uVar1;
  
  if ((_DAT_003fa1a4 == 3) || (_DAT_003fa1a4 == 4)) {
    _DAT_003fa1a4 = 4;
    uVar1 = (**(code **)(&DAT_001c02c8 + (uint)(byte)(&UNK_003fa240)[DAT_003fa1ab] * 0x1c))();
    _DAT_003fa1ac = uVar1 | _DAT_003fa1ac;
    DAT_003fa1ab = DAT_003fa1ab + 1;
    if (DAT_003fa1ab == DAT_003fa1aa) {
      if ((_DAT_003fa1ac >> 8 & 1) == 0) {
        _DAT_003fa1a4 = 0;
        _DAT_003fa1a8 = _DAT_003fa1ac;
      }
      else {
        _DAT_003fa1ac = 0;
        DAT_003fa1ab = 0;
      }
    }
  }
  return;
}

