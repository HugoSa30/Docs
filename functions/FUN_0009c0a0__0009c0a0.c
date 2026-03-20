/*
 * Program: n42.bin
 * Function: FUN_0009c0a0
 * Entry: 0009c0a0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009c0a0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint in_MSR;
  
  param_1 = param_1 * 4;
  bVar1 = *(byte *)(param_1 + 0x16af1);
  uVar6 = (uint)*(byte *)(param_1 + 0x16af2);
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  _DAT_003fa10c = _DAT_003fa10c + 1;
  iVar2 = (uint)bVar1 * 4;
  iVar3 = (1 << (*(byte *)(param_1 + 0x16af3) & 0x3f)) + -1;
  uVar4 = ~(iVar3 << (uVar6 & 0x3f));
  uVar5 = 0 << (uVar6 & 0x3f);
  *(uint *)(&DAT_003fa444 + iVar2) = *(uint *)(&DAT_003fa444 + iVar2) & uVar4 | uVar5;
  *(uint *)(&DAT_003fa3c0 + iVar2) =
       *(uint *)(&DAT_003fa3c0 + iVar2) & uVar4 | iVar3 << (uVar6 & 0x3f);
  *(uint *)(&DAT_003fa49c + iVar2) = *(uint *)(&DAT_003fa49c + iVar2) & uVar4 | uVar5;
  iVar3 = (uint)bVar1 * 0x14;
  (**(code **)(iVar3 + 0x16b9c))
            (*(undefined4 *)(iVar3 + 0x16b98),
             *(uint *)(&DAT_003fa3c0 + iVar2) | *(uint *)(&DAT_003fa444 + iVar2),
             *(uint *)(&DAT_003fa444 + iVar2),*(undefined4 *)(&DAT_003fa49c + iVar2));
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return 0;
}

