/*
 * Program: n42.bin
 * Function: FUN_0009be24
 * Entry: 0009be24
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009be24(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
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
  uVar5 = (1 << (*(byte *)(param_1 + 0x16af3) & 0x3f)) - 1;
  uVar3 = ~(uVar5 << (uVar6 & 0x3f));
  *(uint *)(&DAT_003fa444 + iVar2) =
       *(uint *)(&DAT_003fa444 + iVar2) & uVar3 | uVar5 << (uVar6 & 0x3f);
  *(uint *)(&DAT_003fa3c0 + iVar2) = *(uint *)(&DAT_003fa3c0 + iVar2) & uVar3 | 0 << (uVar6 & 0x3f);
  *(uint *)(&DAT_003fa49c + iVar2) =
       *(uint *)(&DAT_003fa49c + iVar2) & uVar3 | (param_2 & uVar5) << (uVar6 & 0x3f);
  iVar4 = (uint)bVar1 * 0x14;
  (**(code **)(iVar4 + 0x16b9c))
            (*(undefined4 *)(iVar4 + 0x16b98),
             *(uint *)(&DAT_003fa3c0 + iVar2) | *(uint *)(&DAT_003fa444 + iVar2),
             *(uint *)(&DAT_003fa444 + iVar2),*(undefined4 *)(&DAT_003fa49c + iVar2));
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return 0;
}

