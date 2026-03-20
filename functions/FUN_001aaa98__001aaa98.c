/*
 * Program: n42.bin
 * Function: FUN_001aaa98
 * Entry: 001aaa98
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001aaa98(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint in_MSR;
  
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  _DAT_003fa10c = _DAT_003fa10c + 1;
  uVar2 = *(uint *)(*param_1 + 0x1c);
  bVar1 = (uVar2 & 1 << (param_2 - (uint)*(byte *)(param_1 + 8) & 0x3f)) == 0;
  if (bVar1) {
    *(uint *)(*param_1 + 0x1c) = uVar2 | 1 << (param_2 - (uint)*(byte *)(param_1 + 8) & 0x3f);
  }
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return !bVar1;
}

