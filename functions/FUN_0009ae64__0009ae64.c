/*
 * Program: n42.bin
 * Function: FUN_0009ae64
 * Entry: 0009ae64
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009ae64(int param_1)

{
  uint uVar1;
  int iVar2;
  uint in_MSR;
  
  iVar2 = *(int *)(param_1 * 0x10 + 0x16864);
  uVar1 = *(byte *)(param_1 * 0x10 + 0x16869) + 0xd4;
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  _DAT_003fa10c = _DAT_003fa10c + 1;
  *(ushort *)(iVar2 + 8) = *(ushort *)(iVar2 + 8) | (ushort)(1 << (uVar1 & 0x3f));
  *(ushort *)(iVar2 + 6) = *(ushort *)(iVar2 + 6) & ~(ushort)(1 << (uVar1 & 0x3f));
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return;
}

