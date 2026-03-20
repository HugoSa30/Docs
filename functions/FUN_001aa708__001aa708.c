/*
 * Program: n42.bin
 * Function: FUN_001aa708
 * Entry: 001aa708
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001aa708(int param_1)

{
  uint in_MSR;
  
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  _DAT_003fa10c = _DAT_003fa10c + 1;
  (**(code **)((uint)(byte)(&DAT_00016fcc)[param_1 * 5] * 0x20 + 0x16f70))
            (*(undefined4 *)((uint)(byte)(&DAT_00016fcc)[param_1 * 5] * 0x20 + 0x16f78),
             (&DAT_00016fcd)[param_1 * 5]);
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return;
}

