/*
 * Program: n42.bin
 * Function: FUN_001aa8e4
 * Entry: 001aa8e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001aa8e4(uint *param_1)

{
  uint in_MSR;
  
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  _DAT_003fa10c = _DAT_003fa10c + 1;
  if (*(byte *)((int)param_1 + 0x22) != 1) {
    param_1[1] = param_1[4] & ~*param_1 | param_1[1] & *param_1;
    *param_1 = param_1[3];
    *(byte *)((int)param_1 + 0x22) = *(byte *)((int)param_1 + 0x22) | 1;
  }
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return;
}

