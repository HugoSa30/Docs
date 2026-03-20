/*
 * Program: n42.bin
 * Function: FUN_0009af20
 * Entry: 0009af20
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009af20(int param_1)

{
  int iVar1;
  uint in_MSR;
  
  iVar1 = *(int *)(param_1 * 0x10 + 0x16864);
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  _DAT_003fa10c = _DAT_003fa10c + 1;
  *(ushort *)(iVar1 + 8) =
       *(ushort *)(iVar1 + 8) & ~(ushort)(1 << (*(byte *)(param_1 * 0x10 + 0x16869) + 0xd4 & 0x3f));
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return;
}

