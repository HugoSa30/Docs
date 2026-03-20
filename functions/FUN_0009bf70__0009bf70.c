/*
 * Program: n42.bin
 * Function: FUN_0009bf70
 * Entry: 0009bf70
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009bf70(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint in_MSR;
  
  bVar1 = (&DAT_00016acd)[param_1 * 3];
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  _DAT_003fa10c = _DAT_003fa10c + 1;
  iVar2 = (uint)bVar1 * 4;
  uVar3 = 1 << ((byte)(&DAT_00016ace)[param_1 * 3] & 0x3f);
  uVar5 = ~uVar3;
  *(uint *)(&DAT_003fa444 + iVar2) = *(uint *)(&DAT_003fa444 + iVar2) & uVar5;
  *(uint *)(&DAT_003fa3c0 + iVar2) = *(uint *)(&DAT_003fa3c0 + iVar2) | uVar3;
  *(uint *)(&DAT_003fa49c + iVar2) = *(uint *)(&DAT_003fa49c + iVar2) & uVar5;
  iVar4 = (uint)bVar1 * 0x14;
  (**(code **)(iVar4 + 0x16b9c))
            (*(undefined4 *)(iVar4 + 0x16b98),
             *(uint *)(&DAT_003fa3c0 + iVar2) | *(uint *)(&DAT_003fa444 + iVar2),
             *(uint *)(&DAT_003fa444 + iVar2),*(undefined4 *)(&DAT_003fa49c + iVar2));
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return 0;
}

